---
name: nykra-handoff-2026-11-17
description: "Where the NYKRA reconstruction stands (updated 2026-11-19 night): milestones 3.2/3.2b/3.2c accepted, first 3.3 objects done (tree crown, background leaves, real camera); grass is next"
metadata:
  node_type: memory
  type: project
  originSessionId: fb5cef85-6903-4d12-90b2-5dbe310a03d2
  modified: 2026-11-24T09:42:47.178Z
---

**2026-11-24 end of session:**
- **Pushed:** `bb053de` (original LIGHTING plus the YYC-ported sun `parSun_Glow`/`oSun_Mal` and lamps `oLight_Glow`; the user validated both, "ficou certinho") and `caa0917` (plan revision).
- **Plan layout now:**
  - §0: state, with validated items and their commit;
  - §0.5: porting procedure, including fresh-machine setup;
  - §0.6: agent work protocol, built from the mistakes observed in the history;
  - §0.7: ordered work queue;
  - history moved to `PLAN_HISTORY_2026-11.md`;
  - per-object reports go in `PORT_LOG.md`.
- **Tools:**
  - Ghidra 12.2 via scoop (`GHIDRA_INSTALL_DIR`), with the project copy at `%TEMP%\claude-ghidra\p122`;
  - UTMT is gone from `%TEMP%` and must be re-downloaded before any sprite export.
- **Next:** queue item 1, `parGnarcier` (red fragments). Its decompiled `.c` files are already in `decompiled/rmmal1_sun_annotated`.
- **Other agents:** the user wants me to "hold their hand", meaning guide them through §0.6.

**2026-11-24 update:** work moved to branch `reconstruction-attempt-pickle`. Other agents did 22–23/11 work there: sky, wires, `oDoor_chunky`, part of oOrigin, COLLIDE notes and an invented LIGHTING. In the 24/11 review (plan §0.4, P38), LIGHTING/Draw_73 was invented by eye. The author's original is in the repo root under `LIGHTING/`, and the asm confirms it is the compiled version. The fix is a verbatim copy with absent-asset blocks commented out by a generator. Outdoor differences are probably the unported `oOrigin` Draw_0/Draw_73. Rule for agents: check the root original GML before reconstructing anything.

Older state below. Last update 2026-11-19 (night). Branch `reconstruction-attempt-1`, everything pushed. The user writes in Portuguese, so reply in Portuguese. The repo copy is `rea/NYKRA_Reconstructed/SESSION_HANDOFF.md`; the plan is `MASTER_RECONSTRUCTION_PLAN.md` (provisional register in §7).

**Done and confirmed by the user in the IDE (F5):**
- 3.2 tiles, 3.2b `map_load` with 79 objects, 3.2c sprites with restored canvases.
- First 3.3 objects reconstructed from NYKRA.exe:
  - the tree crown (`parLeaves`);
  - the three background leaf objects (`oMal_bg_leaves_*`);
  - the real camera (`oCamera` events, `set_game_screen`, config).
- Toolchain is GameMaker LTS 2026.

**Method that works (3.3):**
1. `Tools/list_object_functions.py` makes a list of an object's events.
2. `NativeAnalysis/scripts/DecompileFunctionList.java` decompiles them. It runs Ghidra headless with `-readOnly` on a COPY of `NativeAnalysis/ghidra-projects-retry` in `%TEMP%\claude-ghidra\project`.
3. `annotate_yyc_c.py`, then `lift_yyc.py` (pseudo-C to GML-like lines; helper table in `YYC_HELPERS.md`).
4. Write the GML by hand, **checking it against the raw annotated C**. The lifter once dropped the first statement of each Create, and the missing `xx` crashed the game.
5. Globals the original reads from the global scope must be `globalvar`.

**Next:** the grass (`parGrass` Create_0/Alarm_2/Draw_0 with 1,597 lines, `oGrass`, `oGrass3`). Then `oOrigin`/player, wires, doors. The user is OK with me running Ghidra and scripts, but wants to be asked before executing anything new. Provisional shortcuts are tracked in plan §7 (P1–P17).

Related: [[nykra-confirm-before-running]], [[nykra-provisional-register]]
