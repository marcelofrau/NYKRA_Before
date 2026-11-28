# Model routing (spend Opus on thinking, not on looking and typing)

Subagents with a fixed model (`~/.claude/agents/`): **scout** = Haiku (read-only lookups), **worker** = Sonnet (clear-spec execution), **analyst** = Opus (deep analysis, read-only). Other subagents default to Sonnet (`CLAUDE_CODE_SUBAGENT_MODEL`). Forks always run on the main model.

## When the main session runs on Opus

- **Searches and reading go to `scout`, not `Explore`.** Built-in Explore and general-purpose run on the main model, so in an Opus session they cost Opus prices. Use them only when the search itself needs judgment.
- **Execution with a clear spec goes to `worker`**: multi-file edits, doc updates, conversions, test or lint fix loops, drafting from given material. Run independent batches as parallel workers.
- **Keep for yourself:** understanding the request, decisions, design, the final review of what agents return, and the reply to the user.
- **Don't delegate** what takes a handful of tool calls, or what needs much of this conversation's context. Briefing it would cost more than doing it.

## When the main session runs on Sonnet or Haiku

- Hand problems that need deep reasoning to **`analyst`** (design trade-offs, hard root causes, risky reviews, migration plans). Don't switch the whole session to Opus.
- Delegating routine work to `worker` only pays for context isolation (big outputs stay out of the main context), not for price.

## Briefs and results

- The brief is all the agent knows. Include the goal, paths, conventions, what's ruled out, how to tell it's done, and the output format with a length cap ("≤ 15 lines, file:line refs").
- Cheaper models make confident mistakes. Spot-check key claims (open the cited `file:line`) before building on them or telling the user.
- One round trip is the goal. If an agent comes back wrong, sharpen the brief once, or do the step yourself.

## Context hygiene (the biggest cost is context size, not the model)

Every request re-reads the whole conversation. On 2026-11-20, 56% of all context tokens came from requests above 400k.

- Read big files in parts (`offset`/`limit`) or grep first. Don't read a whole file to find one section.
- Bulky remote content (Confluence pages, Jira searches, API dumps) goes to disk first, through a script or a subagent. Then read only the part you need. For Jira, ask only for the fields you need and keep `limit` small.
- Big command output: filter it (`| tail`, `rg`, `--quiet`) instead of printing everything.
- When the user switches to an unrelated task, or comes back after a long break (the cache has expired, so the whole context gets re-written), suggest `/clear` (with `/rename` first, so they can `/resume` later). Offer it; don't do it unasked.

## Session model

- Default `sonnet`. `/model opus` for design-heavy stretches. `/model opusplan` = Opus in plan mode, Sonnet for execution.
- If RTK is installed, `rtk bulk-read` / `rtk code-write` also push bulk reading and writing to a cheaper model.

# Compact instructions

When compacting, keep: the user's goal and the decisions taken (with who decided), facts the user confirmed, files created or changed (paths), commands or checks that proved something, open questions, pending asks to the user, and the next step. Drop raw tool output, file contents that can be re-read, and dead ends (one line each is enough).
