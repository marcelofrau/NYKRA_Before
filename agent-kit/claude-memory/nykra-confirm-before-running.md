---
name: nykra-confirm-before-running
description: "NYKRA: command-line jobs (tests, generators, UTMT CLI reads, Ghidra, exe reads) are pre-approved via the nykra-runner Haiku agent; still ask before builds, the game, windows, saves, installs, git writes"
metadata:
  node_type: memory
  type: feedback
  originSessionId: fb5cef85-6903-4d12-90b2-5dbe310a03d2
  modified: 2026-11-27T11:50:22.904Z
---

Run command-line jobs through the `nykra-runner` agent (Haiku, `.claude/agents/nykra-runner.md`) without asking: unit tests, `generate_*.py` and `validate_formats.py`, UTMT CLI reads, Ghidra headless batches, `.exe` byte reads. Give it the exact command and what to report. Generators and file edits do not need the IDE closed (27/11/2026: the user reloads after saving; stop asking him to close/reopen it). Reading and editing files is always fine.

Still ask first: GameMaker/Igor builds, launching the game (the user does F5), anything that opens a window or touches saves, installs, `git commit/push`, deleting files, elevation.

**Why:** the user (27/11/2026) wants to spend their time only on F5 and IDE steps, and wants cheap models doing the command work. Earlier (18/11) they wanted to approve every execution on this corporate machine; they lifted it for the list above only.

**How to apply:** after editing GML/tests, run the test suite via the agent without asking. Spot-check what the agent reports (it is Haiku); on a failure, read the test yourself before acting. Do not ask about the IDE being closed.

Related: [[nykra-handoff-2026-11-17]]
