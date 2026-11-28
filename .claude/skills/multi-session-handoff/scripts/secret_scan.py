"""Find (and optionally redact) secrets: tokens, keys, JWTs, passwords.

Usage:
  python -I secret_scan.py --staged            scan the lines added in `git diff --cached`
  python -I secret_scan.py <files...>          scan whole files
  python -I secret_scan.py --redact <files...> replace each hit in place with <REDACTED:kind>

Prints `file:line: kind: preview` (the value itself is masked). Exit code 1 if anything is found.
A line containing `secret-scan: ignore` is skipped (use it for documented fake examples).
"""
import pathlib
import re
import subprocess
import sys

PATTERNS = [
    ("private-key", re.compile(r"-----BEGIN [A-Z ]*PRIVATE KEY-----")),
    ("jwt", re.compile(r"\beyJ[A-Za-z0-9_-]{10,}\.eyJ[A-Za-z0-9_-]{10,}\.[A-Za-z0-9_-]{10,}")),
    ("github-token", re.compile(r"\b(?:gh[pousr]_[A-Za-z0-9]{36,}|github_pat_[A-Za-z0-9_]{40,})")),
    ("aws-access-key", re.compile(r"\b(?:AKIA|ASIA)[0-9A-Z]{16}\b")),
    ("google-api-key", re.compile(r"\bAIza[0-9A-Za-z_-]{35}\b")),
    ("slack-token", re.compile(r"\bxox[abposr]-[A-Za-z0-9-]{10,}")),
    ("azure-key", re.compile(r"(?i)\b(?:AccountKey|SharedAccessKey)=[A-Za-z0-9+/=]{20,}")),
    ("bearer", re.compile(r"(?i)\bBearer\s+([A-Za-z0-9_\-.=+/]{20,})")),
    ("url-credentials", re.compile(r"[a-z][a-z0-9+.-]*://[^\s/:@]+:([^\s/@]{6,})@")),
    # key = value with a secret-looking name and a long, mixed value
    ("assignment", re.compile(
        r"(?i)\b[\w.-]*(?:api[_-]?key|secret|token|passw(?:or)?d|pwd|client[_-]?secret|access[_-]?key)[\w.-]*"
        r"""["']?\s*[:=]\s*["']?([A-Za-z0-9_\-.+/=]{16,})""")),
]
# values that are clearly placeholders, variables or references, not secrets
PLACEHOLDER = re.compile(r"(?i)^(?:x{6,}|\*{6,}|<.*>|\$\{?\w+\}?|your[_-].*|example.*|redacted.*|changeme.*|dummy.*|test.*)$")


def is_secret(kind, m):
    value = m.group(1) if m.groups() else m.group(0)
    if PLACEHOLDER.match(value):
        return False
    if kind == "assignment":
        # needs letters and digits, and not a path / identifier like `token_refresh_interval_ms`
        return bool(re.search(r"\d", value) and re.search(r"[A-Za-z]", value)) and not re.fullmatch(r"[a-z_.-]+\d*", value)
    return True


def scan_line(line):
    if "secret-scan: ignore" in line:
        return []
    return [(kind, m) for kind, rx in PATTERNS for m in rx.finditer(line) if is_secret(kind, m)]


def mask(s):
    return s[:4] + f"...({len(s)} chars)"


def staged():
    out = subprocess.run(["git", "diff", "--cached", "-U0", "--no-color", "--diff-filter=AM"],
                         capture_output=True, text=True, encoding="utf-8", errors="replace").stdout
    path, n = None, 0
    for line in out.splitlines():
        if line.startswith("+++ "):
            path = line[6:] if line.startswith("+++ b/") else None
        elif line.startswith("@@"):
            n = int(re.search(r"\+(\d+)", line).group(1)) - 1
        elif line.startswith("+") and path:
            n += 1
            yield path, n, line[1:]


def files(paths):
    for p in paths:
        try:
            text = pathlib.Path(p).read_text(encoding="utf-8")
        except (UnicodeDecodeError, IsADirectoryError):
            continue
        for n, line in enumerate(text.splitlines(), 1):
            yield p, n, line


def redact(paths):
    total = 0
    for p in paths:
        f = pathlib.Path(p)
        try:
            text = f.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        lines = text.split("\n")
        for i, line in enumerate(lines):
            for kind, m in reversed(scan_line(line)):
                g = 1 if m.groups() else 0
                line = line[:m.start(g)] + f"<REDACTED:{kind}>" + line[m.end(g):]
                total += 1
            lines[i] = line
        f.write_text("\n".join(lines), encoding="utf-8", newline="")
    print(f"redacted {total} value(s)")


def main():
    args = sys.argv[1:]
    if not args:
        sys.exit(__doc__)
    if args[0] == "--redact":
        return redact(args[1:])
    src = staged() if args == ["--staged"] else files(args)
    hits = 0
    for path, n, line in src:
        for kind, m in scan_line(line):
            hits += 1
            print(f"{path}:{n}: {kind}: {mask(m.group(1) if m.groups() else m.group(0))}")
    if hits:
        print(f"{hits} possible secret(s). Redact them, or mark a documented fake with `secret-scan: ignore`.")
    sys.exit(1 if hits else 0)


if __name__ == "__main__":
    main()
