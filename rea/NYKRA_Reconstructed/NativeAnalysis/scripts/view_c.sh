#!/bin/bash
# Usage: bash view_c.sh <file.c>
# Prints only the lines of a Ghidra .c that carry game logic: drops value releases (FUN_140001b50),
# release checks, type-flag stores, zero-initialised locals, bare declarations, blank lines and the
# function-name bookkeeping. Read the annotated .c (decompiled/<lote>_annotated/) through this filter.
rg -v 'FUN_140001b50|^\s*if \(\(0x46U|= 0xffffff;|^\s*(local_|in_stack)[0-9a-zA-Z_]+ = 0;$|^\s*(undefined[0-9]*|uint|char|ulonglong|longlong|double|int|float|code|byte|bool)[ \*]+[A-Za-z_0-9]+(\[[0-9]+\])?;$|^\s*$|^\s*\}$|DAT_142182d78|DAT_142182d90|0xfffffffffffffffe|local_[0-9a-f]+ = "gml_Object|^\s*local_[0-9a-f]+ = [0-9]+;$' "$1"
