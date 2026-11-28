# Global instructions (converted from the Claude Code CLAUDE.md imports)

# Command output

Command output here is condensed to save tokens, keeping every signal and
dropping costly noise. Treat it as the complete result: run commands
normally, and batch related commands into one call to avoid extra turns.
Truncated results state their recovery path in their own output. Re-run a
command as `rtk bypass <cmd>` only when its result is unusable: empty when
output was clearly expected, contradicting its exit code, or garbled.

Delegation commands (they hand work to a cheaper model; the files never enter your context):
- `rtk bulk-read --question "..." <paths...>`
- `rtk code-write --spec "..." --reference <file> --target <file>`


# Windows environment (this machine)

Single source of truth for Claude Code, opencode and Copilot. Copilot CLI and VS Code get a copy, so edit this file and re-copy.

## Machine
- Windows 11 Enterprise, corporate-managed laptop. No admin by default. `gsudo` exists, but never elevate without asking.
- Home `C:\Users\<user>`. Work repos live in `D:\workspace`. `~\scripts` is a junction to `D:\scripts`, a git repo synced to a personal machine.
- Paths with spaces are common (`C:\Users\<user>\OneDrive - <company>\...`, `C:\Program Files\...`), so always quote paths.
- Filesystem is case-insensitive. Git `core.longpaths=true`.

## Shells
- Default: **PowerShell 7.6 (`pwsh`)**. Never use `powershell.exe` (5.1) unless a task needs it.
- Run `pwsh` with `-NoProfile`. The user profile adds aliases (`cat`→bat, `grep`→Select-String, `sed`→a custom function) that break Unix-style commands.
- Git Bash is available (`C:\Program Files\Git\bin\bash.exe`) for POSIX scripts. WSL `Ubuntu-24.04` also exists (`wsl -d Ubuntu-24.04 -e ...`).
- PowerShell rules: `$env:VAR` for env vars, `Remove-Item -Recurse -Force`, `New-Item -ItemType Directory -Force`, `Get-Command x` instead of `which`, and `where.exe` (bare `where` is Where-Object). `curl` is the real curl.exe.

## Encoding and locale (frequent source of bugs)
- The console code page is **IBM437**, not UTF-8. In pwsh, set `[Console]::OutputEncoding = [Text.UTF8Encoding]::new()` before reading native tool output that contains non-ASCII text.
- `PYTHONUTF8=1` is set for the user, so Python I/O is UTF-8.
- Write files as **UTF-8 without BOM** with **LF**. Git uses `autocrlf=input`, `eol=lf`. Exceptions: `.cmd`/`.bat` need CRLF. `.ps1` files with non-ASCII text that must run on Windows PowerShell 5.1 need a BOM.
- Culture is **es-ES**: decimal comma and dd/MM dates. Use `[cultureinfo]::InvariantCulture` when formatting or parsing numbers and dates in PowerShell.

## Toolchain
- Packages: **scoop** first (no admin), then winget. Don't install system-wide without asking.
- Python 3.14: use `python` or `py`. **Never `python3`**, which is the Microsoft Store stub. Use `uv` for venvs and tools, and `pipx`.
- Node: managed by **fnm** (version from `.nvmrc`, per-shell path under `fnm_multishells`, so don't hardcode node paths). `bun` and `npm` are available.
- Others: dotnet, java (Temurin 25, via scoop), go, gh, aws, kubectl, docker (scoop) and podman.
- Modern CLIs available: `rg`, `fd`, `bat`, `jq`, `yq`, `fzf`, `eza`. Prefer `rg` and `fd` over `findstr` and `dir /s`.

## Gotchas
- `EBUSY`/"file in use" errors mean a process holds the file (Windows locks open files). Find the process and stop it instead of retrying.
- Defender makes `npm install` and large file operations slow. That's expected; don't retry in a loop.
- Symlinks need Developer Mode or admin. Junctions (`New-Item -ItemType Junction`) don't.
- Tokens live in env vars (`JIRA_PERSONAL_TOKEN`, `CONFLUENCE_PERSONAL_TOKEN`, `INSTANA_API_TOKEN`, ...). Never print them.
- AI traffic goes through a corporate gateway. Don't paste secrets or personal data into prompts or files.


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
