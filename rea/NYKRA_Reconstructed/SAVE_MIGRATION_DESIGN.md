# Save Migration Design — Proposal for Approval

## Goal and non-negotiable safety rules

Support original NYKRA saves without silently rewriting them, while giving future reconstructed saves an unambiguous format. The original `rea/NYKRA.zip`, extracted chapter templates, and existing profile saves remain read-only inputs. Migration writes to a separate profile root; it never converts in place or deletes the source.

Current evidence: `validate_formats.py` structurally scans 6 chapter templates and 27 room saves, and reports 51 ambiguous/unsupported values across 18 files. Missing array payloads cannot be recovered from their bytes alone. These counts do not classify a user save as intact or corrupt.

## Save classification

Use explicit states; do not infer corruption from a parse failure or from a hash mismatch alone.

| State | Evidence | Automatic action |
|---|---|---|
| `KNOWN_ORIGINAL_FIXTURE` | SHA-256 exactly matches a manifest entry for a supplied canonical chapter-template file | Read-only legacy parse; never overwrite the fixture |
| `V1_VALID` | Recognized V1 magic/version, valid file kind/length, and digest match | Load reconstructed data |
| `LEGACY_UNVERIFIED` | Unversioned file not matching a known fixture; provenance and modification history unknown | Dry-run report only; no automatic migration or write |
| `LEGACY_AMBIGUOUS` | Unversioned file has omitted/unsupported values, unknown tags, truncation, or failed structural checks | Do not activate as a migrated profile; preserve source and report exact fields/offsets |
| `INVALID_V1` | V1 marker exists but version, kind, bounds, or digest is invalid | Reject without fallback parsing or touching the source |

An old save that was loaded and re-saved by a buggy build cannot, in general, be distinguished from an intact user save using its unversioned bytes alone. A prior backup/hash or trustworthy version marker is required. Tag-6 strings can indicate a reconstructed-format candidate, but that is only a heuristic, not proof of provenance.

## Proposed V1 binary contract

Every reconstructed save file starts with a fixed header:

| Field | Encoding |
|---|---|
| Magic | 8 bytes: `NYKRASV\0` |
| Version | `u16`, little-endian; value `1` |
| File kind | `u8`: GENERAL=1, CONTROL=2, CHARACTER=3, ROOM=4 |
| Flags | `u8`, must be zero in V1 |
| Payload length | `u64`, little-endian; exact payload bytes, excluding any buffer capacity padding |
| Payload SHA-256 | 32 bytes over exactly the payload length |

The payload retains the logical records (instance header, variable names, room grid/objects, lists) but all values use length-framed tags: `tag u8 + payload_length u32 + payload`. V1 tags:

| Tag | Value | Payload |
|---|---|---|
| 1 | number | IEEE-754 `f64` |
| 2 | string | UTF-8 bytes; length is explicit, no NUL terminator |
| 3 | array | `u32` element count followed by recursively framed values |
| 4 | bool | one byte, only `0` or `1` |
| 5 | int64 | signed 64-bit two's-complement, little-endian |

Unknown tags can be skipped using their payload length and reported. Parsers enforce maximum file size, element count, and nesting depth before allocation. V1 does not reuse the ambiguous legacy array tags, and it preserves integer precision.

## Migration and rollback sequence

1. **Inventory only:** hash each candidate source file, report its path/size/classification, and run a bounded read-only legacy parse. No writes.
2. **Preview:** show recovered, missing, and ambiguous fields. Do not invent values. A field default may be applied only when its initialization is verified from the corresponding GameMaker object/script.
3. **Stage separately:** write a complete snapshot under `PROFILES_V1/HEPTAVERSE_<profile>/snapshots/<snapshot-id>/`; include a manifest with each relative path, byte length, digest, and import report. Never write into `PROFILES/` or `DATA/CHAPTER_TEMPLATES/`.
4. **Verify before activation:** reopen every staged V1 file, validate lengths/digests/schema and compare preserved values. Only after all checks pass, update a small active-snapshot pointer using a same-volume temp-and-replace operation.
5. **Rollback:** the original profile remains untouched. If any stage fails or the process is interrupted, the old active pointer remains; incomplete staging is ignored and can be retried idempotently. Keep prior snapshots until a separate cleanup action is explicitly approved.
6. **No downgrade:** V1 is not written back to legacy format; that could lose strings, nested arrays, or integer precision.

The V1 reader/writer must be implemented only after the `.yyp` exists and the GameMaker runtime path/API for checksum and atomic activation has been validated. Until then, this document is a format proposal, not an implemented migration tool.

## Regression-test matrix for implementation

1. **Canonical fixture:** chapter template hashes match the manifest; parsing is read-only and the original bytes/hash remain unchanged.
2. **Legacy ambiguity:** synthetic empty/string-first arrays, chapter-4 `asset_layer` evidence, and unknown/truncated values classify as ambiguous; no destination snapshot is activated.
3. **Provenance honesty:** an unversioned modified copy is `LEGACY_UNVERIFIED`, not automatically labelled corrupt or intact. Without a trusted backup, previously resaved corruption remains unclassifiable.
4. **V1 round-trip:** bool false/true, signed int64 min/max and values above `2^24`, f64, empty/Unicode strings, empty/mixed/nested arrays, and all four file kinds preserve exact values.
5. **V1 rejection:** bad magic/version/kind, unreasonable lengths/counts/depth, truncation, trailing payload mismatch, and digest mismatch are rejected before state application.
6. **Failure and retry:** simulate interruption while writing each file, manifest, and active pointer; original source and previous active snapshot remain unchanged; retry is idempotent.
7. **Regression gate:** existing level/template/room/DATA coverage remains 183/183, 6/6, 27/27, and 29/29; tests use copies/synthetic buffers, never write into the recovered fixtures.

## Approval gate

Before implementation, approve or revise these four decisions:

1. Use the V1 header and tag contract above.
2. Keep migrated/reconstructed saves under a separate `PROFILES_V1` root.
3. Block automatic migration of ambiguous legacy data; do not guess missing values.
4. Preserve source files and previous snapshots indefinitely until separately authorized cleanup.
