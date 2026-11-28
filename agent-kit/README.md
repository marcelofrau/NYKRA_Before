# agent-kit

Claude Code and opencode setup of the author, kept here so it can be reused on another machine.

## What is where

| Path | What | Works in |
|---|---|---|
| `.claude/skills/<name>/` (repo root) | 14 skills, real copies. Load automatically when you open this repo | Claude Code and opencode (opencode reads `.claude/skills/` as is, no conversion needed) |
| `.claude/agents/nykra-runner.md` | project subagent (Haiku) | Claude Code |
| `.opencode/agents/` | project subagents: `nykra-scout`, `nykra-checker`, `nykra-scribe`, `nykra-runner` (the last one converted from the Claude agent) | opencode |
| `agent-kit/claude/` | global Claude Code files: `agents/` (scout, worker, analyst), `CLAUDE.md`, `RTK.md`, `WINDOWS.md`, `MODEL-ROUTING.md`, `keybindings.json` | Claude Code, copy to `~/.claude/` |
| `agent-kit/opencode/` | global opencode files: `agent/` (scout, worker, analyst, runner), `plugins/` (rtk, graphify), `commands/graphify.md`, `AGENTS.md` | opencode, copy to `~/.config/opencode/` |
| `agent-kit/claude-memory/` | the Claude Code memory notes of this project (handoff, rules). Reference only | read them, or copy into `~/.claude/projects/<project-folder>/memory/` |

## Install on the other machine

```powershell
pwsh -NoProfile -File agent-kit/install.ps1          # copies; never overwrites without -Force
```

## How the conversion works

- **Skills**: same `SKILL.md` format in both tools. Nothing converted.
- **Agents**: Claude frontmatter `tools / model / effort` becomes opencode `mode: subagent / model / permission`. Read-only agents get `permission: edit: deny`. The model ids are the author's (`opencode-go/...`): change them to what you have.
- **Global `CLAUDE.md`**: opencode does not expand `@file` imports, so `opencode/AGENTS.md` has RTK, WINDOWS and MODEL-ROUTING inlined. Regenerate it if you edit those files.
- **Hooks** (Claude `settings.json`) have no direct equivalent. The opencode `plugins/` (`rtk.ts`, `graphify.js`) do the same job. `rtk.ts` does nothing if `rtk` is not on PATH.

## Left out on purpose (the repo is public)

- `settings.json`, `.credentials.json`, `opencode.jsonc`: tokens, gateway and internal URLs.
- `~/.claude/commands/` (`create-pr`, `commit`, `new-db-migration`, ...): employer-specific.
- Orca's opencode status plugin (installed by Orca itself).
- `WINDOWS.md` was redacted: company name and user name.

The third-party skills (`caveman-compress`, `find-skills`, `graphify`, `orca-*`, `orchestration`, `reverse-engineer-anything`) are copies of upstream packages, with their own licences. Reinstall from upstream if you prefer updates.
