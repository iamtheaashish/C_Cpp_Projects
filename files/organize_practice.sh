#!/usr/bin/env bash
set -euo pipefail

root="/home/aashish/Documents/C_Cpp_Projects"
dest="$root/organized"

mkdir -p "$dest"

echo "Organizing practice files into: $dest"

# Copy Playgrounds_C and Playgrounds_Cpp preserving structure
for d in Playgrounds_C Playgrounds_Cpp; do
  if [ -d "$root/$d" ]; then
    echo "Copying $d/ -> $dest/$d/"
    rsync -a --info=progress2 "$root/$d/" "$dest/$d/"
  fi
done

# Copy all C/C++ source and header files from the repo into organized/src preserving relative paths,
# excluding the already-copied Playgrounds_* folders and the new organized folder itself.
find "$root" -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.h" -o -iname "*.hpp" \) \
  -not -path "$dest/*" \
  -not -path "$root/Playgrounds_C/*" \
  -not -path "$root/Playgrounds_Cpp/*" \
  -not -path "$root/.git/*" -print0 | \
while IFS= read -r -d '' file; do
  rel="${file#$root/}"
  dir="$(dirname "$rel")"
  mkdir -p "$dest/src/$dir"
  cp -a "$file" "$dest/src/$rel"
done

# Copy top-level text files that look like practice notes into organized/docs
mkdir -p "$dest/docs"
shopt -s nullglob
for f in "$root"/*.{txt,md}; do
  [ -f "$f" ] || continue
  cp -a "$f" "$dest/docs/"
done

echo "Done. Files copied to $dest (original files unchanged)." 
