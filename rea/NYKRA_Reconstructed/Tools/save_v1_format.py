"""Reference codec for reconstructed NYKRA save format V1.

This module intentionally has no legacy-save reader or profile migration logic.
"""

import hashlib
import struct
from dataclasses import dataclass
from enum import IntEnum


MAGIC = b"NYKRASV\x00"
VERSION = 1
MAX_FILE_BYTES = 64 * 1024 * 1024
MAX_ITEMS = 1_000_000
MAX_NESTING = 64
HEADER = struct.Struct("<8sHBBQ32s")


class SaveFormatError(ValueError):
    pass


class LegacySaveUnsupported(SaveFormatError):
    pass


class FileKind(IntEnum):
    GENERAL = 1
    CONTROL = 2
    CHARACTER = 3
    ROOM = 4


@dataclass(frozen=True)
class V1File:
    kind: FileKind
    payload: bytes


@dataclass(frozen=True)
class UnknownValue:
    tag: int
    payload: bytes


def _byte_size(data):
    return data.nbytes if isinstance(data, memoryview) else len(data)


def encode_file(kind, payload):
    try:
        kind = FileKind(kind)
    except ValueError as exc:
        raise SaveFormatError("unsupported file kind") from exc
    if not isinstance(payload, (bytes, bytearray, memoryview)):
        raise TypeError("payload must be bytes-like")
    if _byte_size(payload) > MAX_FILE_BYTES - HEADER.size:
        raise SaveFormatError("file exceeds size limit")
    payload = bytes(payload)
    digest = hashlib.sha256(payload).digest()
    return HEADER.pack(MAGIC, VERSION, kind, 0, len(payload), digest) + payload


def decode_file(data, expected_kind=None):
    if not isinstance(data, (bytes, bytearray, memoryview)):
        raise TypeError("data must be bytes-like")
    if _byte_size(data) > MAX_FILE_BYTES:
        raise SaveFormatError("file exceeds size limit")
    data = bytes(data)
    if not data.startswith(MAGIC):
        raise LegacySaveUnsupported("unversioned legacy saves are unsupported")
    if len(data) < HEADER.size:
        raise SaveFormatError("truncated V1 header")

    magic, version, kind_value, flags, payload_size, digest = HEADER.unpack_from(data)
    if magic != MAGIC:
        raise SaveFormatError("bad V1 magic")
    if version != VERSION:
        raise SaveFormatError(f"unsupported V1 version: {version}")
    if flags != 0:
        raise SaveFormatError("unsupported V1 flags")
    try:
        kind = FileKind(kind_value)
    except ValueError as exc:
        raise SaveFormatError("unsupported file kind") from exc
    if expected_kind is not None:
        try:
            expected_kind = FileKind(expected_kind)
        except ValueError as exc:
            raise SaveFormatError("unsupported expected file kind") from exc
        if kind != expected_kind:
            raise SaveFormatError("unexpected file kind")
    if payload_size > MAX_FILE_BYTES - HEADER.size:
        raise SaveFormatError("file exceeds size limit")
    if len(data) != HEADER.size + payload_size:
        raise SaveFormatError("payload length mismatch")

    payload = data[HEADER.size:]
    if hashlib.sha256(payload).digest() != digest:
        raise SaveFormatError("payload digest mismatch")
    return V1File(kind, payload)


def encode_value(value, _depth=0):
    if _depth > MAX_NESTING:
        raise SaveFormatError("maximum nesting depth exceeded")

    if isinstance(value, bool):
        tag, payload = 4, bytes((int(value),))
    elif isinstance(value, int):
        if not -(2**63) <= value < 2**63:
            raise SaveFormatError("integer is outside signed int64 range")
        tag, payload = 5, struct.pack("<q", value)
    elif isinstance(value, float):
        tag, payload = 1, struct.pack("<d", value)
    elif isinstance(value, str):
        tag, payload = 2, value.encode("utf-8")
    elif isinstance(value, UnknownValue):
        if type(value.tag) is not int or not 0 <= value.tag <= 0xFF or value.tag in (1, 2, 3, 4, 5):
            raise SaveFormatError("invalid unknown tag")
        if not isinstance(value.payload, (bytes, bytearray, memoryview)):
            raise TypeError("unknown payload must be bytes-like")
        if _byte_size(value.payload) > MAX_FILE_BYTES - 5:
            raise SaveFormatError("value exceeds size limit")
        tag, payload = value.tag, bytes(value.payload)
    elif isinstance(value, (list, tuple)):
        if len(value) > MAX_ITEMS:
            raise SaveFormatError("array exceeds element limit")
        payload = bytearray(struct.pack("<I", len(value)))
        for item in value:
            encoded = encode_value(item, _depth + 1)
            if len(payload) + len(encoded) > MAX_FILE_BYTES - 5:
                raise SaveFormatError("array payload exceeds size limit")
            payload.extend(encoded)
        tag, payload = 3, bytes(payload)
    else:
        raise TypeError(f"unsupported save value type: {type(value).__name__}")

    if len(payload) > MAX_FILE_BYTES - 5:
        raise SaveFormatError("value exceeds size limit")
    return bytes((tag,)) + struct.pack("<I", len(payload)) + payload


def decode_value(data, offset=0, _depth=0):
    if not isinstance(data, (bytes, bytearray, memoryview)):
        raise TypeError("data must be bytes-like")
    if _byte_size(data) > MAX_FILE_BYTES:
        raise SaveFormatError("data exceeds size limit")
    data = bytes(data)
    return _decode_value(data, offset, len(data), _depth)


def _decode_value(data, offset, limit, _depth):
    if _depth > MAX_NESTING:
        raise SaveFormatError("maximum nesting depth exceeded")
    if offset < 0 or limit > len(data) or limit - offset < 5:
        raise SaveFormatError("truncated value header")

    tag = data[offset]
    payload_size = struct.unpack_from("<I", data, offset + 1)[0]
    payload_start = offset + 5
    payload_end = payload_start + payload_size
    if payload_size > MAX_FILE_BYTES or payload_end > limit:
        raise SaveFormatError("truncated or oversized value payload")

    if tag == 1:
        if payload_size != 8:
            raise SaveFormatError("invalid f64 payload length")
        value = struct.unpack_from("<d", data, payload_start)[0]
    elif tag == 2:
        try:
            value = data[payload_start:payload_end].decode("utf-8")
        except UnicodeDecodeError as exc:
            raise SaveFormatError("invalid UTF-8 string") from exc
    elif tag == 3:
        if payload_size < 4:
            raise SaveFormatError("truncated array payload")
        count = struct.unpack_from("<I", data, payload_start)[0]
        if count > MAX_ITEMS:
            raise SaveFormatError("array exceeds element limit")
        if count > (payload_size - 4) // 5:
            raise SaveFormatError("truncated array payload")
        values = []
        child_offset = payload_start + 4
        for _ in range(count):
            value, child_offset = _decode_value(data, child_offset, payload_end, _depth + 1)
            values.append(value)
        if child_offset != payload_end:
            raise SaveFormatError("array payload length mismatch")
        value = values
    elif tag == 4:
        if payload_size != 1 or data[payload_start] not in (0, 1):
            raise SaveFormatError("invalid bool payload")
        value = bool(data[payload_start])
    elif tag == 5:
        if payload_size != 8:
            raise SaveFormatError("invalid int64 payload length")
        value = struct.unpack_from("<q", data, payload_start)[0]
    else:
        value = UnknownValue(tag, data[payload_start:payload_end])

    return value, payload_end
