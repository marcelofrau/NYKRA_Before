---
name: nykra-f5-log-file
description: NYKRA F5 runs mirror every log line to f5.log in game_save_id; read it with Grep/Read instead of asking the user to paste the IDE output
metadata:
  node_type: memory
  type: reference
  originSessionId: 055903e8-8595-476b-849b-6c6ef9460b00
  modified: 2026-11-27T11:37:48.080Z
---

Since 27/11/2026 `scripts/debug_log/debug_log.gml` appends every `log_note` line (and uncaught exceptions as `EXCEPTION: ...`) to `f5.log` in `game_save_id`, confirmed on 27/11 at `C:\Users\<user>\AppData\Local\NYKRA_VerticalSlice\f5.log` (Read/Grep work on it directly). It is wiped at each game start, so it is always the last run.

**How to apply:** when the user says they ran F5, do not ask for a paste. Grep the file for what matters (`STUB|EXCEPTION|ERROR|<feature>:`), or Read the tail. Raise `global.LOG_LEVEL` to 2 only for a session that needs detail. If the file is missing, the path guess is wrong (verify with `Glob` under `%LOCALAPPDATA%` for `f5.log`) or the build predates the change.

**Why:** the user said pasting the IDE output costs too many tokens. Compile errors and Igor output are not in this file; only runtime logs and exceptions are.

Related: [[nykra-confirm-before-running]]
