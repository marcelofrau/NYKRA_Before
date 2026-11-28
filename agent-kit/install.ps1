# Copies the global Claude Code and opencode files of agent-kit into the user profile.
# Existing files are kept unless -Force is given. Skills need no install: they load from .claude/skills of this repo.
param([switch]$Force)
$kit = $PSScriptRoot
$map = @(
  @{ From = "$kit\claude\*";   To = "$HOME\.claude";          Exclude = $null },
  @{ From = "$kit\opencode\*"; To = "$HOME\.config\opencode"; Exclude = $null }
)
foreach ($m in $map) {
  New-Item -ItemType Directory -Force $m.To | Out-Null
  foreach ($src in Get-ChildItem $m.From -Recurse -File) {
    $root = Split-Path $m.From
    $dst = Join-Path $m.To $src.FullName.Substring($root.Length + 1)
    if ((Test-Path $dst) -and -not $Force) { "keep  $dst"; continue }
    New-Item -ItemType Directory -Force (Split-Path $dst) | Out-Null
    Copy-Item $src.FullName $dst -Force
    "copy  $dst"
  }
}
