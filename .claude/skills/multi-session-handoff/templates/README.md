# Handoffs — how agent sessions share work in this repo

Several agent sessions can work in this repo at the same time. Each one needs to know what the others did and are doing.

| File | What it is | Who writes |
| --- | --- | --- |
| [board.md](board.md) | **Work in progress right now**: one row per active task, with the session, topic and files claimed | Every session, at start (claim) and end (release) |
| `topics/<topic-slug>.md` | **Append-only log per topic**, newest entry first: what was done, decided, learned, what is open, which files changed | Every session that touches the topic, at the end of its task |
| [_template.md](_template.md) | Template for a new topic log | – |

Topic slugs follow the doc or folder that owns the topic. One log per topic, not per session.

## Protocol

1. **Start:** `git pull --rebase`. Read the board and `topics/<slug>.md`. Don't redo what's done; pick up "Open / next".
2. **Claim:** add your row to the board (session name from `ListAgents`, topic, files, start date, goal). Commit and push it right away.
3. **Respect claims:** don't edit files claimed by another active row. Message that session (`SendMessage`) or add a line under *Requests for other sessions* in the topic log. Shared registers (open questions, contacts, glossaries) get small targeted edits only, pulled right before, committed right after.
4. **Long tasks:** add a short progress entry to the topic log at each milestone.
5. **End:** write your entry at the **top** of the topic log, remove your board row, stage **only your own files**, run a secret scan, `git pull --rebase`, push.
6. **Stale claims:** a row older than 24 h whose session no longer shows in `ListAgents` counts as released. Move it to the topic log as "abandoned claim".

Write short and factual. Link to docs instead of copying them. Record decisions with who made them, label inferences, and write down facts the user confirmed in your chat (other sessions can't see it). Never secrets or personal data.
