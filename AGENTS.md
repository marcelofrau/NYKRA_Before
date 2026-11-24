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

## Reconstruction rules (read before changing anything in `rea/`)

The step-by-step procedure for porting an object is `MASTER_RECONSTRUCTION_PLAN.md` §0.5. It covers tool setup on a new machine, Ghidra batches, annotation and lifting, and how to read the YYC. The work protocol, the report template and the work queue are in §0.6 and §0.7. Write one report per ported object in `rea/NYKRA_Reconstructed/PORT_LOG.md`. Work on the first open item of §0.7 only.

These rules exist because agents drifted before. On 22–23/11/2026 `LIGHTING/Draw_73` was rewritten "by eye" from screenshots while the author's original sat in the repo root. The `oFade_in` events were invented on the claim that they were "menu-only", although its YYC events exist. And depth `1000` was used to draw "above", which is backwards. The full review is `MASTER_RECONSTRUCTION_PLAN.md` §0.4.

**1. Use the sources in this order, and say which one you used in the file header.**

1. **The author's original GML in the repo root:** `oControl/`, `oPlayer/`, `oCamera/`, `oEo/`, `parDialogue/`, `parNote/`, `LIGHTING/`, `scripts/`.
   - Copy it verbatim through a generator, for example `Tools/generate_player_object.py` or `Tools/generate_lighting.py`.
   - Never rewrite it, "clean it up" or retune it.
   - The asm has confirmed these files match the shipped build.
2. **The YYC function of that exact event.** Find it with `gml_Object_<obj>_<Event>_<n>` in `RecoveredAssets/Metadata/yyc-function-table.json`, read it in `NativeAnalysis/decompiled/`, and translate it line by line.
   - If Ghidra times out, disassemble it with `NativeAnalysis/scripts/DisassembleRange.java`. Do not guess.
3. **Inference, only when 1 and 2 do not cover it.** Mark it in code with `// shortcut: <limit>, <when to upgrade>` and add a row to the plan's §7 register.
   - Screenshots, videos and the original build are for **checking** a port. Do not take constants or colours from them.

**2. Before porting any object `X`, run these lookups and list the results in your notes.**

- `ls <repo root>/X`.
- `rg '"gml_Object_X_' RecoveredAssets/Metadata/yyc-function-table.json`.
- The `Events` of `X` in `objects-metadata.json`.
- Never write "no original code" or "menu-only" without these three.

**3. Look ids up, don't infer them.**

- Object, sprite and sound ids are the `Index` in `objects-` / `sprites-` / `sounds-metadata.json`.
  - Example: `instance_number(0x68)` is object 104, `oLIGHTING_moonglow`. Calling it "the glow beam" was wrong.
- Runtime helpers are listed in `NativeAnalysis/YYC_HELPERS.md`.
  - Example: `FUN_14003b450` is `gml_Script_reach`, not `lerp`.
- Add every new identification to `YYC_HELPERS.md` with the evidence.

**4. GameMaker semantics that have already caused bugs:**

- **Depth:** a lower depth draws later, on top. `-1011` covers everything; `1000` is behind.
- **Blend modes:** `gpu_set_blendmode_ext(src, dest)` takes factors. Constant 3 (`bm_subtract`) used as a factor means `bm_src_colour`.
- **The three easing helpers differ:**
  - `reach(a, b, step)` moves linearly by `step`;
  - `reach_tween(a, b, d)` is `lerp(a, b, 1/d)`;
  - `lerp(a, b, t)` never reaches `b` exactly, so compare against `0.00001` like the YYC does, not `0`.
- **Number literals:** GML has no `1e-5` literal.
- **Version tags:** copy `"$GM<Type>":"vN"` tags from a file the LTS IDE saved.

**5. Verbatim copies stay verbatim.**

- If an original event must deviate (a missing system, a bug fix), keep the original text, wrap the change in a clearly commented block, and add a §7 row.
- Add a test exception that checks everything around the change is still identical. `test_phase3_player.py` does this for `oPlayer/Step_1`.

**6. Generated files: edit the generator, then ask the user to run it.**

- Project scripts and shells come from `Tools/generate_*.py`.
- Objects with their own events must be in `HAND_WRITTEN` in `generate_object_shells.py`, or the next shell run wipes them.

**7. When F5 shows a mismatch:**

- Re-read the original or the YYC block that draws or moves that thing. Do not tweak numbers until it looks right.
- After two failed repairs, stop and report the blocker with the evidence.

**8. Bookkeeping in every commit:**

- Update plan §0 with what changed and what is still untested.
- Update §7 with every shortcut.
- Write "accepted" only when the user said so for that commit. Name the commit hash the user validated, because a later retune is not validated.

**9. Never execute anything without asking the user first.** This covers builds, the game, UTMT, Ghidra, Python scripts and tests. Reading and editing files is fine.
