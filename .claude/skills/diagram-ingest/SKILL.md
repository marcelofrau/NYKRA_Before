---
name: diagram-ingest
description: Turn a draw.io file, a draw.io/LeanIX SVG export, or a diagram image into a curated Mermaid diagram (with a flowchart fallback for C4) that cites its source. Use when the user shares a .drawio/.svg/.png architecture diagram, a Confluence diagram attachment, or a LeanIX export and wants it documented, compared or redrawn.
---

# Ingest a diagram into Mermaid

Script: `scripts/drawio_extract.py` (stdlib, run with `python -I`).

## 1. Keep the raw file

Copy the original into the repo's raw-material folder (e.g. `sources/<origin>/`) untouched, with a note on where it came from (page id/URL, export date, who exported it). Never edit the raw file.

## 2. Extract labels and edges

| Input | How |
| --- | --- |
| `.drawio` / `.xml` (plain or compressed pages) | `python -I <skill>/scripts/drawio_extract.py <file>` |
| `.svg` exported from draw.io ("include a copy of my diagram") or **LeanIX free-draw** | same command. The draw.io XML is in the SVG's `content` attribute |
| `.png` / `.jpg` / PDF | No XML to read. Look at the image (Read tool) and transcribe it. If a sibling `.drawio` exists (same name, same page), extract that instead, and say which one you used. Mark edges you read off a picture as *(inferred from image)* |

Output: `--- VERTICES ---` (`id: [in: container] label {extra attrs}`) and `--- EDGES ---` (`source --[label]--> target`). `{factSheetType=…, factSheetId=…}` on LeanIX nodes gives you factsheet links for free. Edges whose source or target prints as `None` or an id are dangling or unlabelled in the source, so check them in the picture.

Save the extraction next to the raw material (e.g. `sources/extracted/<name>.txt`), so others can re-read it without re-running.

## 3. Draft and curate the Mermaid

`--mermaid` prints a `flowchart LR` draft per page: containers become subgraphs and there is one edge per line. It's a starting point. Then curate it:

- Keep the source's **meaning**, not its layout: same elements, same names, same edge labels. Drop decoration (logos, legends, empty boxes).
- Use readable ids (`basket`, `oms`), not `n17`.
- Pick the diagram type: **C4** (`C4Context`/`C4Container`) for system/container structure, `sequenceDiagram` for interactions, `flowchart` for landscapes and processes. Every C4 diagram needs a **flowchart fallback right below it** with the same elements, because some viewers render C4 blank.
- Never use `&` to fan out edges (`A --> B & C`). Some renderers blank the whole diagram on it.
- Colour by ownership with `classDef`, using the repo's palette if its CLAUDE.md defines one, and add a one-line *Legend:* under the diagram.
- Above the diagram, cite the source: file path in the repo + original location (page id/URL) + date. Label anything you added or guessed as *(inference)*.

## 4. Validate

Run the `mermaid-check` skill on the doc (lint + render + look at the PNG).

## 5. Compare (when asked "what changed" or "does the doc still match")

Extract both versions and diff the VERTICES/EDGES lists (sort them first). Report added, removed and renamed elements and edges, and update the curated diagram.
