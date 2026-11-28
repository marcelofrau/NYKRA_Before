---
name: nykra-provisional-register
description: The NYKRA plan keeps a register of provisional shortcuts (§7) that must be removed in later phases; review it at every milestone close
metadata:
  node_type: memory
  type: feedback
  originSessionId: fb5cef85-6903-4d12-90b2-5dbe310a03d2
  modified: 2026-11-19T10:41:38.997Z
---

The user explicitly asked that deliberate shortcuts (minimal provisional `oControl`, shell objects without events, missing sprites, stubs, disabled saves, pixel interpolation off) are never forgotten. They are tracked in `rea/NYKRA_Reconstructed/MASTER_RECONSTRUCTION_PLAN.md` §7 (P1–P8), each with the milestone that removes it and an exit criterion.

**Why:** the user prefers going slowly (prove each step first, then import the original), so shortcuts are acceptable only if they are tracked.

**How to apply:** when creating a provisional thing, add a row to §7 in the same commit. When closing a milestone, re-read §7, remind the user which rows are due, and strike removed rows with the commit hash.

Related: [[nykra-handoff-2026-11-17]], [[nykra-confirm-before-running]]
