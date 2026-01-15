#!/usr/bin/env bash
set -euo pipefail

# organize_move.sh
# Backup repository, move C/C++ practice files into organized_final/, deduplicate by content,
# and replace originals with relative symlinks to the new locations.

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TS=$(date +%s)
BACKUP_DIR="$ROOT/backup_pre_move_$TS"
DEST="$ROOT/organized_final"

EXCLUDES=("$BACKUP_DIR" "$DEST" "$ROOT/organized" "$ROOT/organized_links" "$ROOT/.git")

# extensions
EXTS=(".c" ".h" ".cpp" ".hpp" ".cc" ".cxx" ".md" ".txt")

# category keywords (lowercase)
declare -A CATS
CATS[arrays]="array arrays"
CATS[pointers]="pointer pointers malloc free"
CATS[functions]="function functions with_arguments without_arguments returnvalue"
CATS[math]="prime factor fibonacci sum avg sqrt square"
CATS[strings]="string strlen reverse palindrome"
CATS[io]="printf scanf input output"
CATS[sorting]="sort bubble insertion selection merge quick"
CATS[search]="search linear binary"
CATS[games]="tic toe tictactoe tic_tac_toe"
CATS[misc]="swap malloc_program malloc"
CATS[others]=""

# utility: check path is under any exclude
is_excluded() {
  local p="$1"
  for e in "${EXCLUDES[@]}"; do
    # if e empty skip
    [ -z "$e" ] && continue
    if [[ "$p" == "$e"* ]]; then
      return 0
    fi
  done
  return 1
}

# classify file path -> category
classify() {
  local p="$1"
  local name="$(basename "$p" | tr '[:upper:]' '[:lower:]')"
  local joined="$(echo "$p" | tr '[:upper:]' '[:lower:]')"
  for cat in "${!CATS[@]}"; do
    for kw in ${CATS[$cat]}; do
      if [[ "$joined" == *"$kw"* ]] || [[ "$name" == *"$kw"* ]]; then
        echo "$cat"
        return
      fi
    done
  done
  # try content heuristics
  if command -v head >/dev/null 2>&1; then
    local preview
    preview=$(head -n 20 "$p" 2>/dev/null | tr '[:upper:]' '[:lower:]') || preview=""
    for cat in "${!CATS[@]}"; do
      for kw in ${CATS[$cat]}; do
        if [[ "$preview" == *"$kw"* ]]; then
          echo "$cat"
          return
        fi
      done
    done
  fi
  echo "others"
}

mkdir -p "$BACKUP_DIR"

# backup everything except dest and excludes to backup dir
echo "Creating backup at: $BACKUP_DIR"
rsync -a --exclude 'backup_pre_move_*' --exclude 'organized_final' --exclude 'organized' --exclude 'organized_links' --exclude '.git' "$ROOT/" "$BACKUP_DIR/"

# map checksum -> kept path
declare -A SEEN

# find files
echo "Scanning files..."
while IFS= read -r -d '' file; do
  # skip if under excludes
  if is_excluded "$file"; then
    continue
  fi
  # skip symlinks
  if [ -L "$file" ]; then
    continue
  fi
  # check extension
  ext="${file##*.}"
  ext=".$ext"
  local_match=false
  for e in "${EXTS[@]}"; do
    if [ "$e" = "$ext" ]; then
      local_match=true
      break
    fi
  done
  if [ "$local_match" != true ]; then
    continue
  fi

  # compute checksum
  if ! sha=$(sha256sum "$file" 2>/dev/null | awk '{print $1}'); then
    echo "Failed to hash $file" >&2
    continue
  fi

  if [ -n "${SEEN[$sha]:-}" ]; then
    kept="${SEEN[$sha]}"
    # replace with relative symlink to kept
    rel=$(realpath --relative-to="$(dirname "$file")" "$kept")
    rm -f "$file"
    ln -s "$rel" "$file"
    echo "Duplicate: $file -> symlink to $kept"
    continue
  fi

  # first time seen
  # determine kind
  kind="docs"
  case "$ext" in
    .c|.h) kind="C" ;;
    .cpp|.hpp|.cc|.cxx) kind="Cpp" ;;
    *) kind="docs" ;;
  esac

  cat=$(classify "$file")
  target_dir="$DEST/$kind/$cat"
  mkdir -p "$target_dir"

  base=$(basename "$file")
  target="$target_dir/$base"

  # if target exists
  if [ -e "$target" ]; then
    # if same content, link
    if [ "$(sha256sum "$target" | awk '{print $1}')" = "$sha" ]; then
      SEEN[$sha]="$target"
      rm -f "$file"
      rel=$(realpath --relative-to="$(dirname "$file")" "$target")
      ln -s "$rel" "$file"
      echo "Existing identical at target; replaced $file with symlink to $target"
      continue
    else
      # find unique name
      i=1
      base_no_ext="${base%.*}"
      extpart=".${base##*.}"
      while :; do
        cand="$target_dir/${base_no_ext}_$i$extpart"
        if [ ! -e "$cand" ]; then
          target="$cand"
          break
        fi
        i=$((i+1))
      done
    fi
  fi

  # move file to target
  mv "$file" "$target"
  SEEN[$sha]="$target"
  # create relative symlink from original path to new target
  rel=$(realpath --relative-to="$(dirname "$file")" "$target")
  ln -s "$rel" "$file"
  echo "Moved: $file -> $target (symlink placed at original)"

done < <(find "$ROOT" -type f -print0)

echo "Organization complete. Destination: $DEST"
echo "Backup kept at: $BACKUP_DIR"
