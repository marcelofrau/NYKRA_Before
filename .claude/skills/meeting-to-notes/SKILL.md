---
name: meeting-to-notes
description: Turn a raw meeting transcript, Teams/Zoom notes or an AI meeting summary into structured notes - facts and decisions with who said them, action items with owners, answered and new open questions - and route each item to the docs it updates. Use when the user pastes or points to meeting notes, a transcript, or a KT/knowledge-transfer recording summary.
---

# Meeting → structured notes

## 1. Keep the raw input

Save what the user pasted, as-is, in the repo's raw folder (e.g. `sources/meetings/YYYY-MM-DD-<slug>.md`) with a one-line header: date, meeting name, source (Teams transcript / Copilot summary / own notes). Redact secrets (tokens, keys, passwords). Raw is never rewritten later.

AI summaries (Teams Copilot etc.) are a *second-hand* source: they misattribute speakers and invent certainty. Where the transcript and the summary disagree, trust the transcript and note the difference.

## 2. Write the notes

Use the repo's template if it has one (look for `*/_template.md` next to similar notes, e.g. KT or meeting folders). Otherwise use:

```markdown
# <Meeting> (YYYY-MM-DD)

> **Status / Sources:** notes from <raw file link>. Attendees: … Recording/slides: …

## Summary
3–5 bullets: what this meeting changed in our understanding.

## Facts and decisions
| # | Fact / decision | Said by | Confidence | Updates doc |
| --- | --- | --- | --- | --- |

## Open questions answered
## New open questions (with who to ask)
## Action items
| Action | Owner | Due |
| --- | --- | --- |
```

Rules:
- **Attribute.** "Alice said X" is a fact about the meeting. Stating "X" as true needs the speaker's authority or a second source. Keep the speaker.
- **Confidence:** *stated* (said clearly), *implied* (follows from what was said), *(inference)* (your reading). Never upgrade a hedge ("I think", "probably") to a fact.
- **Numbers, dates, names, ticket keys**: copy them exactly. If the transcript garbles one (speech-to-text), write it as heard and flag it `(?)`.
- Actions need an owner and, if one was said, a date. "We should…" without an owner goes into open questions, not actions.
- Write in the repo's language (check its CLAUDE.md), even if the meeting was in another one.
- Leave out small talk, repeats and people's personal matters.

## 3. Route each item

For every row in *Facts and decisions*, update the doc in *Updates doc* (small targeted edit, citing the notes). Strike answered questions in the repo's open-questions register and link the notes. Add the new ones there with their owner. If the repo has a status log for the topic (initiative README, handoff log), add a dated line.

## 4. Report back

Tell the user: what changed in which docs, the actions with owners, and the 1–3 things that need their attention (contradictions with earlier notes, risky decisions, missing owners).
