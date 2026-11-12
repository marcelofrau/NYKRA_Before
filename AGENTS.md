# Agent notes

- This repository is a source excerpt of NYKRA: Before, not a complete GameMaker project: there is no root `.yyp`, and `.yy` files reference omitted resources. It cannot be built or launched as checked out.
- GML files are grouped by GameMaker object or script. Keep event sources (such as `Create_0.gml`, `Step_*.gml`, and `Draw_*.gml`) aligned with the event lists in their `.yy` metadata; preserve exact resource names and casing (`oEo` is intentional).
- `README.md` is a historical postmortem with code walkthroughs, not setup or build documentation. Preserve its historical context and comments unless the requested change calls for editing them.
- There are no repository build, test, or lint commands or CI workflows. For source changes, review the diff and event/metadata pairing; compiling requires the complete project and GameMaker.
- **Recovery & Handoff Workspace (`rea/NYKRA_Reconstructed/`):**
  - Read `rea/NYKRA_Reconstructed/RECOVERY_PLAN_AND_HANDOFF.md` and `rea/NYKRA_Reconstructed/RECOVERY_NOTES.md` first.
  - The game author authorized investigating, reconstructing, and fixing bugs from the compiled itch.io build (`NYKRA.zip`), as the original editable source was lost. This fork is licensed under **GNU GPL v3.0** (`LICENSE`).
  - All extracted assets (sprites, sounds, shaders, masks, strings, 183 `.rmlvl` levels, `DATA/` files, and complete JSON metadata for sprites, sounds, objects, rooms, and the 2,720 YYC function addresses in `NYKRA.exe`) live under `rea/NYKRA_Reconstructed/RecoveredAssets/`.
  - `rea/NYKRA.zip` (374 MB) and `RuntimeBaseline/data.win` (292 MB) are git-ignored due to GitHub's 100 MB file limit, while `RuntimeBaseline/NYKRA.exe` (35 MB) and all extracted metadata/assets are tracked in Git.
