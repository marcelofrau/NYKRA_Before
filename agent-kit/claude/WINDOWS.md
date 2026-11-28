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
