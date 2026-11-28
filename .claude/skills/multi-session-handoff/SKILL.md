---
name: multi-session-handoff
description: Start and finish a task safely when several agent sessions work in the same git repo - pull, read and claim on the handoff board, respect other sessions' claims, then write the topic log, release the claim, secret-scan the diff, stage only your own files and push. Use at the start and end of every task in a repo with a handoffs/ folder, when asked to "claim", "hand off", "wrap up", "commit and push", or to set up multi-session coordination in a new repo.
---

# Multi-session handoff

The repo's own protocol wins: read `handoffs/README.md` (or what its CLAUDE.md points to) once per session. This skill is the checklist. `scripts/secret_scan.py` is next to this file.

## Start

1. `git pull --rebase`. If it fails because of local changes that aren't yours, don't stash or reset them. Tell the user.
2. `ListAgents`: your session name is the "This session is …" line. Note which peer sessions are alive.
3. Read `handoffs/board.md` and `handoffs/topics/<slug>.md`. Is anyone on your topic or files? What's "Open / next"?
4. **Claim:** append your row (session, topic slug, files/folders you'll edit, date, one-line goal, status). Commit only the board (`handoffs: claim <slug> (<session>)`), pull, push. Do it right away, before the real work.
5. Paths in markdown cells: use forward slashes. Backslashes get eaten by shells and heredocs.

## While working

- A file claimed by another **active** row is off limits. `SendMessage` that session, or add a line under *Requests for other sessions* in the topic log.
- Shared registers (open questions, contacts, glossary, domain docs): pull, make a small targeted edit, commit straight away. Never rewrite whole sections.
- On long tasks, add a short progress entry to the topic log at each milestone, so a crash loses little.

## End

1. Write your entry at the **top** of `handoffs/topics/<slug>.md` (from `handoffs/_template.md` if new): Did · Decided / learned (who decided; **facts the user confirmed in the chat**, since other sessions can't see it) · Open / next · Files · Requests for other sessions.
2. Remove your board row.
3. **Stage only your own files**: `git add <paths>`, never `git add -A` / `git add .`. Check with `git status --short` and `git diff --cached --stat`.
4. **Secret scan:** `python -I <skill>/scripts/secret_scan.py --staged`. On a hit, redact (`--redact <file>`) or, for a documented fake example, add `secret-scan: ignore` to that line. Never commit a real token, even in a private repo.
5. Commit with a short message saying what changed and why. Group related files, and split unrelated work into separate commits.
6. `git pull --rebase`, then push. Don't force-push. On an auth failure, check the repo's CLAUDE.md for its account/credential workaround before retrying.

Uncommitted changes you didn't make: if a board row claims them, leave them alone. If nobody claims them and they look finished, commit them separately and tell the user.

## Set up in a new repo

When the user wants this in a repo without `handoffs/`: copy `templates/README.md`, `templates/board.md` and `templates/topic-template.md` (as `_template.md`) into `handoffs/`, create `handoffs/topics/`, and add a short "Multi-agent coordination" section to the repo's CLAUDE.md that points to `handoffs/README.md`. Show the user the diff before committing.

## Pre-commit hook (optional, any repo)

`scripts/secret_scan.py --staged` works as a git pre-commit hook. Call it from the repo's hook script (`.githooks/pre-commit` + `git config core.hooksPath .githooks`), so every tool and session gets the check, not just agents that remember it.
