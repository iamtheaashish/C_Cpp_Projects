This folder is created by `organize_move.py`.

Layout:

- `C/` - C source/header files grouped by category (arrays, pointers, functions, math, etc.).
- `Cpp/` - C++ source/header files grouped similarly.
- `docs/` - copied `.txt` and `.md` files.

A backup of originals is created before moving files, named `backup_pre_move_<timestamp>/`.

Duplicates are replaced with relative symlinks pointing to the kept file to avoid data duplication while preserving accessibility.
