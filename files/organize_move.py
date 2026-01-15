#!/usr/bin/env python3
"""
Backup and move C/C++ practice files into organized_final/, deduplicating by content.

Behavior:
- Creates a backup copy of the repository tree (files only) at `backup_pre_move_<timestamp>/`.
- Classifies files into categories using directory names and simple keyword heuristics.
- Moves unique files into `organized_final/C/<category>/` or `organized_final/Cpp/<category>/`.
- For duplicate files (identical content), replaces the original with a relative symlink to the kept file.

Run from repository root:
    python3 organize_move.py

Note: This will modify/move files. A full backup is made first so this operation is reversible.
"""

import hashlib
import os
import shutil
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent
BACKUP_PREFIX = ROOT / f"backup_pre_move_{int(time.time())}"
DEST = ROOT / "organized_final"
EXCLUDE_DIRS = {"organized", "organized_final", "organized_links", BACKUP_PREFIX.name, ".git"}

EXT_C = {".c", ".h"}
EXT_CPP = {".cpp", ".hpp", ".cc", ".cxx"}

KEYWORD_CATEGORIES = {
    "arrays": ["array", "arrays"],
    "pointers": ["pointer", "pointers", "malloc", "free"],
    "functions": ["function", "functions", "returnvalue", "With_Arguments", "Without_Arguments"],
    "math": ["prime", "factor", "fibonacci", "sum", "avg", "sqrt", "square"],
    "strings": ["string", "strlen", "reverse", "palindrome"],
    "io": ["printf", "scanf", "input", "output"],
    "sorting": ["sort", "bubble", "insertion", "selection", "merge", "quick"],
    "search": ["search", "linear", "binary"],
    "games": ["tic", "toe", "tictactoe", "tic_tac_toe"],
    "misc": ["swap", "malloc_program", "malloc"],
}


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(8192), b""):
            h.update(chunk)
    return h.hexdigest()


def classify(path: Path) -> str:
    # use path parts and filename and content keywords
    name = path.name.lower()
    parts = "/".join(p.lower() for p in path.parts)
    # check path keywords first
    for cat, kws in KEYWORD_CATEGORIES.items():
        for kw in kws:
            if kw in parts or kw in name:
                return cat
    # try content-based quick heuristics
    try:
        text = path.read_text(errors="ignore").lower()
    except Exception:
        return "others"
    for cat, kws in KEYWORD_CATEGORIES.items():
        for kw in kws:
            if kw in text:
                return cat
    # fallback
    return "others"


def make_backup(paths):
    print(f"Creating backup at: {BACKUP_PREFIX}")
    BACKUP_PREFIX.mkdir(parents=True, exist_ok=True)
    for p in paths:
        rel = p.relative_to(ROOT)
        dest = BACKUP_PREFIX / rel
        dest.parent.mkdir(parents=True, exist_ok=True)
        if p.is_file():
            shutil.copy2(p, dest)
    print("Backup complete.")


def gather_files():
    files = []
    for p in ROOT.rglob("*"):
        if p.is_dir():
            if any(x in p.parts for x in EXCLUDE_DIRS):
                continue
        if p.is_file():
            if p.suffix.lower() in EXT_C.union(EXT_CPP) or p.suffix.lower() in {".txt", ".md"}:
                # skip this script and existing organized dirs
                if p == Path(__file__):
                    continue
                files.append(p)
    return files


def main():
    files = gather_files()
    if not files:
        print("No files found to organize.")
        return

    # backup all candidate files first
    make_backup(files)

    seen_hash = {}
    moved_map = {}  # hash -> dest path

    for p in files:
        # skip files already under backups or dest
        if BACKUP_PREFIX in p.parents or DEST in p.parents:
            continue

        h = sha256(p)
        is_c = p.suffix.lower() in EXT_C
        is_cpp = p.suffix.lower() in EXT_CPP
        kind = "C" if is_c else ("Cpp" if is_cpp else "docs")

        cat = classify(p)
        target_dir = DEST / kind / cat / "/".join(p.parent.relative_to(ROOT).parts)
        target_dir = target_dir
        target_dir.mkdir(parents=True, exist_ok=True)

        target_path = DEST / kind / cat / p.name

        if h in seen_hash:
            kept = seen_hash[h]
            # replace original p with a relative symlink to kept
            rel = os.path.relpath(kept, start=p.parent)
            p.unlink()
            os.symlink(rel, p)
            print(f"Duplicate: {p} -> symlink to {kept}")
        else:
            # move the file to target_path
            final = target_path
            # if target exists with same content, link to it
            if final.exists():
                final_h = sha256(final)
                if final_h == h:
                    seen_hash[h] = final
                    p.unlink()
                    rel = os.path.relpath(final, start=p.parent)
                    os.symlink(rel, p)
                    print(f"Moved replaced by symlink: {p} -> {final}")
                    continue
                else:
                    # avoid overwrite: add numeric suffix
                    base = final.stem
                    ext = final.suffix
                    i = 1
                    while True:
                        cand = final.with_name(f"{base}_{i}{ext}")
                        if not cand.exists():
                            final = cand
                            break
                        i += 1

            shutil.move(str(p), str(final))
            seen_hash[h] = final
            print(f"Moved: {p} -> {final}")

    # summary
    print("Organization complete. Summary:")
    print(f"Destination: {DEST}")
    print(f"Backup kept at: {BACKUP_PREFIX}")


if __name__ == "__main__":
    main()
