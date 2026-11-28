---
name: investigation
description: Run a time-boxed technical investigation (question, hypotheses with evidence for and against, verdicts, conclusion, follow-ups) or write an Architecture Decision Record. Use when the user asks to investigate, dig into, find out why/how something works, compare options, assess a design, or record a decision as an ADR.
---

# Investigation or ADR

Use the repo's templates when they exist (`investigations/_template.md`, `**/adr/0000-template.md`, or similar; check CLAUDE.md for naming). The structures below are the fallback.

## Investigation

File: `investigations/YYYY-MM-DD-<slug>.md` (or the repo's convention).

1. **Frame it before searching.** Write the question in one sentence, why it's being asked now, and a time-box. Ask the user if the question is ambiguous. A wrong question wastes the whole time-box.
2. **List hypotheses up front** (2–5), including the boring one ("it works as documented"). This stops you from only collecting evidence for the first idea.
3. **Gather evidence**, strongest first: code (`repo/path:line`), then configuration and deployed state, then specs/contracts, then design docs, then people's statements, then diagrams. Cite each piece. Docs and diagrams describe intent and go stale, so say when code and docs disagree.
4. **Fill the table:**

   | # | Hypothesis | Evidence for | Evidence against | Verdict |
   | --- | --- | --- | --- | --- |

   Verdict: *confirmed*, *refuted*, *likely*, *unclear (need X)*. "Unclear" with the exact missing piece is a valid result. Don't force a verdict.
5. **Findings:** diagrams (Mermaid, run the `mermaid-check` skill), sequence of calls, data flow, code references.
6. **Conclusion & recommendation:** the answer in 2–3 sentences, the confidence, and what would change it.
7. **Follow-ups:** ADR needed? Initiative? Ticket? Questions for people (add them to the repo's open-questions register with the owner)?

Rules: label everything not stated in a source as *(inference)*. Stop at the time-box and report what you have, with the open hypotheses. Don't keep digging silently.

## ADR

File: `<adr-folder>/NNNN-<slug>.md`, next free number.

```markdown
# NNNN. <Decision as a short imperative phrase>

- **Status:** Proposed | Accepted | Superseded by NNNN · **Date:** YYYY-MM-DD
- **Deciders:** · **Consulted:** · **Sources:**

## Context
Forces at play: requirements, constraints, what's true today (cite).

## Options
### Option A — <name>
Pros / cons / cost / risk.

## Decision
We will … because … (which forces won).

## Consequences
Good, bad, follow-up work, what to monitor, when to revisit.
```

Rules:
- At least two real options. "Do nothing" counts if it's real.
- Never mark an ADR *Accepted* yourself. Only the people listed as deciders can, so write it as *Proposed* unless the user says it was decided, and by whom.
- One decision per ADR. When a decision changes, write a new ADR that supersedes the old one. Don't rewrite the old one.
