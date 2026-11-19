# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

@AGENTS.md

## Two halves of the repo

- **Root (`oControl/`, `oPlayer/`, `oCamera/`, `oEo/`, `parDialogue/`, `parNote/`, `LIGHTING/`, `scripts/`)**: the original GML excerpts published by the author with `README.md`. Read-only reference unless asked. These are the only original-source GML in existence.
- **`rea/NYKRA_Reconstructed/`**: the recovery work on branch `reconstruction-attempt-1`. The shipped build is **YYC**, so GML can't be decompiled from `data.win`. Logic comes from Ghidra pseudocode of `RuntimeBaseline/NYKRA.exe`, with function addresses from `RecoveredAssets/Metadata/yyc-function-table.json`. `Actions: null` in `objects-metadata.json` means there is no recovered code, not that the event is empty.
  - `NativeAnalysis/`: Ghidra scripts and decompiled output. `ReconstructedGML/phase1_core/`: reconstructed `map_load`/`map_save`/`goto_map`/save code. These are pre-2.3 `argument`-style script bodies, so don't paste them blindly into 2.3+ scripts.
  - `GameMakerProject/NYKRA_VerticalSlice.yyp`: a partial test project with probe objects (`oLevelProbe`, `oSpriteProbe`, `oLeavesProbe`), a room `rmMAIN` and the `TILES` tileset. The probe renders `rmMal_Origin`'s six tile layers and its `aBACK` sprite from the level file. The user accepted milestone 3.2 on 2026-11-19 (`MASTER_RECONSTRUCTION_PLAN.md` §1.3c); next is 3.2b, which replaces the probe with the reconstructed `map_load`. The project is now maintained with **GameMaker LTS 2026** (IDE `2026.1.0.27`, runtime `2026.1.0.28`); the IDE re-saves `.yy` files in its own format.
  - Hand-written `.yy` files: copy every `"$GM<Type>":"vN"` version tag from a file the LTS IDE saved; a wrong tag makes the loader reject the file.
  - Tilesets need the IDE-generated `tilesets/<name>/output_tileset.png`. Without it, the tileset compiles with no texture and no error, so open and save any script-made tileset in the IDE before building.
  - `Tools/`: Python format codecs, validators and tests.

Runtime flow: `INIT` → `rmMM` → `rmMAIN`. The persistent `oControl` does nearly everything inside `rmMAIN`. It loads the 183 external `level_data/*.rmlvl` files through `map_load`. Saves and `DATA/main` use zlib buffers (`buffer_compress`) or DS/JSON serialization.

## Commands (run from repo root)

```powershell
python -B -m unittest rea.NYKRA_Reconstructed.Tools.test_save_load_compat rea.NYKRA_Reconstructed.Tools.test_save_v1_format rea.NYKRA_Reconstructed.Tools.test_phase3_level_probe rea.NYKRA_Reconstructed.Tools.test_phase3_tileset -v
python -B -m unittest rea.NYKRA_Reconstructed.Tools.test_phase3_tileset   # single module
python -B rea/NYKRA_Reconstructed/Tools/validate_formats.py               # REWRITES Tools/phase1_validation_report.json, so check git diff
```

These tests check fixtures and structure only. They don't certify GML behaviour or rendering. GameMaker LTS 2026 (`C:\Program Files\GameMaker-LTS2026`, runtime under `C:\ProgramData\GameMakerStudio2-LTS2026\Cache\runtimes\runtime-2026.1.0.28`) is the current toolchain; the older 2024.14 install is still present. Build with Windows **VM**, not YYC. The simplest runtime check is the user pressing F5 in the IDE. See `MASTER_RECONSTRUCTION_PLAN.md` §5 for the Igor command line and `PHASE3_EXECUTION_PLAN.md` §2 for licensing caveats.

On this machine, ask the user before executing anything (builds, the game, UTMT, Python scripts or tests). Reading and editing files is fine.

## Before working in `rea/`

Start with `MASTER_RECONSTRUCTION_PLAN.md`, the consolidated step-by-step plan and current blocker. Then read `RECOVERY_PLAN_AND_HANDOFF.md`, `RECOVERY_NOTES.md` and `PHASE3_EXECUTION_PLAN.md`. Most of the docs are in Portuguese. The hard rules, from `PHASE3_EXECUTION_PLAN.md` §1:

- Never modify `rea/NYKRA.zip`, `RuntimeBaseline/`, `RecoveredAssets/Included Files/` (levels, chapter templates) or `NativeAnalysis/` outputs. Copy fixtures and verify SHA-256 hashes (listed in §6).
- Reconstructed save code still writes `PROFILES/` in the old format. Don't run it, or the original binary, against real user save dirs. Keep the GameMaker sandbox on, and give test projects their own name so `%LOCALAPPDATA%\<name>` doesn't collide with the real game.
- Don't import or fallback to legacy profiles. Never guess ambiguous save values. Don't replace missing functions with silent no-ops. Don't blindly skip unknown object payload bytes.
- Add only the assets each milestone needs. Don't bulk-generate all 699 objects, 490 sprites or 708 sounds. Placeholders must be clearly marked provisional.
- Work milestone by milestone and stop for user validation between them. Don't advance to Phase 4 on your own. After two failed repair attempts, report the blocker. Use one commit per logical change.
- Sprite PNG frames often differ from their declared canvas (2,340 of 2,938). Get per-frame offsets from texture-page entries. Sort frame suffixes numerically.
