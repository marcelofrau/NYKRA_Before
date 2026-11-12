# Reconstructed Save V1 — Design (Legacy Profiles Unsupported)

## Goal and non-negotiable safety rules

Give new reconstructed saves an unambiguous format. Per the user's direction, **unversioned legacy profile saves do not need to be read or migrated**. The original `rea/NYKRA.zip`, extracted chapter templates, and legacy profile saves remain untouched in their current locations. The target runtime will use a separate V1 profile root and start a fresh profile when none exists. The current GML save/load functions are not yet integrated with V1; do not treat their unversioned output as V1 or test them on valuable profiles.

Current evidence: `validate_formats.py` structurally scans 6 chapter templates and 27 room saves, and reports 51 ambiguous/unsupported values across 18 files. Missing array payloads cannot be recovered from their bytes alone. These counts do not classify a user save as intact or corrupt.

## Format recognition

- `V1_VALID`: exact V1 magic/version, supported file kind, valid bounds, and matching payload digest; load from `PROFILES_V1`.
- `INVALID_V1`: V1 magic is present but version, kind, bounds, or digest is invalid; reject without trying the legacy parser.
- `UNVERSIONED_LEGACY_UNSUPPORTED`: no V1 magic; do not load or migrate it in the reconstructed build. Leave it untouched in the legacy location.

No classifier for "intact" versus "previously loaded/resaved" legacy profiles is needed because the reconstructed build will not consume those profiles. This does not authorize deleting them. Canonical chapter templates are separate read-only game data; if a later GameMaker vertical slice needs them to seed chapters, build and validate a dedicated one-time template seeder rather than routing them through the V1 profile reader.

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

## Fresh-profile rollout and rollback sequence

1. **Separate root:** all new saves use `PROFILES_V1/HEPTAVERSE_<profile>/`; the old `PROFILES/` path is not a fallback or write target.
2. **Stage a snapshot:** write the complete profile under `snapshots/<snapshot-id>/` and include a manifest with relative path, byte length, and digest.
3. **Verify before activation:** reopen every V1 file and validate lengths, digest, kind, and schema. Only then update the active-snapshot pointer using a same-volume temp-and-replace operation.
4. **Rollback/retry:** if any write or verification fails, keep the previous active pointer; ignore incomplete staging and retry idempotently. Keep old profiles and prior V1 snapshots until a separate cleanup action is explicitly approved.
5. **No downgrade or legacy fallback:** V1 is never written back to legacy format, and an unversioned save is not silently loaded as V1.

The Python reference encoder/decoder is implemented in `Tools/save_v1_format.py` with tests in `Tools/test_save_v1_format.py`; it validates the wire contract only and is not called by GML. Integration with GameMaker path creation, checksum calculation, template seeding, and snapshot activation remains gated on a `.yyp` and runtime tests. This is not yet an in-game save system.

## Regression-test matrix for implementation

1. **Legacy separation:** an unversioned profile is rejected/ignored without touching it; no implicit legacy parser or fallback is called.
2. **V1 round-trip:** bool false/true, signed int64 min/max and values above `2^24`, f64, empty/Unicode strings, empty/mixed/nested arrays, and all four file kinds preserve exact values.
3. **V1 rejection:** bad magic/version/kind, unreasonable lengths/counts/depth, truncation, trailing payload mismatch, and digest mismatch are rejected before state application.
4. **Failure and retry:** simulate interruption while writing each file, manifest, and active pointer; old profile and previous active V1 snapshot remain unchanged; retry is idempotent.
5. **Template safety:** canonical chapter templates remain byte-for-byte unchanged. If chapter starts require them, a separate seeder has its own tests and validation gate.
6. **Regression gate:** existing level/template/room/DATA coverage remains 183/183, 6/6, 27/27, and 29/29; tests use synthetic buffers or copies, never write into recovered fixtures.

## Scope decisions

- Legacy profile compatibility/migration is intentionally out of scope; the user confirmed these old saves need not work in the reconstruction.
- Safety rule remains: old profile files and canonical templates are not deleted or overwritten by this work.
- The V1 header and typed-value contract above are the agreed direction; runtime integration and template seeding remain separate validation stages.
