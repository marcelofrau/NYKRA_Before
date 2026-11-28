---
name: mermaid-check
description: Lint and render-check the Mermaid diagrams in Markdown docs (mermaid-cli v11 with the system Edge, no Chromium download), catch syntax that blanks diagrams in some viewers, and look at the PNGs for layout problems. Use after writing or editing Mermaid diagrams, when a diagram renders blank, or when asked to validate/check diagrams.
---

# Check Mermaid diagrams

Script: `scripts/mermaid_check.py` (next to this file). Python stdlib only. Run it with `python -I`.

## 1. Lint (fast, always)

```
python -I <skill>/scripts/mermaid_check.py <files or folders> [--exclude sources node_modules]
```

- **ERROR `&` node-list shorthand** (`A --> B & C`, `A & B --> C`). Native Mermaid reimplementations such as tinta have no `&` support, and one bare `&` blanks the **whole** diagram. Write each edge on its own line. If the edge has a label, repeat the label on each line. `&` inside labels (`["F&F"]`, `-- a & b -->`) is fine.
- **ERROR `;` in sequenceDiagram text** (`A->>B: x; y`, `Note over A: x; y`). Mermaid ends the statement at `;`. Use `,` or `#59;`.
- **ERROR empty inline edge label** (`A -. .-> B`). Write `A -.-> B`.
- **WARN C4 without fallback.** VS Code's built-in preview renders `C4Context`/`C4Container`/`C4Component` blank, so put a plain `flowchart` with the same elements right after every C4 block.
- **WARN `~~~` invisible links.** Not every renderer supports them. For a fixed layer order, make every arrow point down the layers instead.

Exit code 1 on any ERROR. Fix the errors before committing.

## 2. Render (catches real syntax errors)

```
python -I <skill>/scripts/mermaid_check.py <paths> --render
```

- It needs **mermaid-cli 11**: `npm install --prefix "$env:LOCALAPPDATA\mmdc11" @mermaid-js/mermaid-cli@11` with `$env:PUPPETEER_SKIP_DOWNLOAD='1'`. The script finds it there, or use `--mmdc` / `$MMDC`. Use v11, not v12: Mermaid 12.x (bundled in mmdc 12) ignores `rankSpacing`/`nodeSpacing`, and VS Code's preview runs Mermaid 11, so v11 shows what the user sees.
- The script points puppeteer at the system Edge, so no browser download is needed. If `node` isn't on PATH (fnm sets it per shell), it runs mmdc through `fnm exec --using default`. That works from Git Bash too.
- About 2 s per block. Run big folders in the background.
- **If every block fails with the same message, the environment is broken** (node, mmdc or the browser), not the diagrams. Fix that first.

## 3. Look at the layout (for diagrams you wrote or changed)

```
python -I <skill>/scripts/mermaid_check.py <doc.md> --png <dir> [--width 1100]
```

Open each `NNN.png` (Read tool) and check that labels are readable, nothing overlaps, nothing is missing compared to the source, and the direction makes sense. Keep `--width` around 1100, because larger images can be blocked by image readers. Exit code 0 is not enough: look at the pictures.

Layout fixes:
- Spacing: put `%%{init: {"flowchart": {"rankSpacing": 90, "nodeSpacing": 60, "padding": 20, "subGraphTitleMargin": {"top": 10, "bottom": 25}}}}%%` as the first line. Renderers that don't know it skip `%%` lines.
- Overlap can't be fixed with CSS (`classDef`/`style`), because positions are computed before styling. Change the direction (`TD` ↔ `LR`), split the diagram, or shorten the labels instead.
- Dagre ranks subgraphs by edge direction. For a fixed layer order, make every arrow point down the layers.
- Judge C4 readability on the flowchart fallback. C4's Mermaid.js layout is not what most viewers show.

## Report

List each problem as `file:line: problem → fix`. Then apply the fixes (small targeted edits) and re-run until it's clean.
