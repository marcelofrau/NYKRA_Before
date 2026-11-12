import hashlib
import struct
import unittest

from .save_v1_format import (
    FileKind,
    LegacySaveUnsupported,
    SaveFormatError,
    UnknownValue,
    decode_file,
    decode_value,
    encode_file,
    encode_value,
)


class SaveV1FormatTests(unittest.TestCase):
    def test_file_round_trip_and_kind_check(self):
        payload = encode_value([["room", "rmMal_Origin"], ["has_eo", True]])
        data = encode_file(FileKind.ROOM, payload)

        decoded = decode_file(data, expected_kind=FileKind.ROOM)
        self.assertEqual(decoded.kind, FileKind.ROOM)
        self.assertEqual(decoded.payload, payload)
        with self.assertRaises(SaveFormatError):
            decode_file(data, expected_kind=FileKind.CONTROL)

    def test_round_trip_exact_int64_float64_unicode_empty_and_nested_arrays(self):
        value = [-(2**63), 2**63 - 1, 2**24 + 1, 1.0 / 3.0, "", "λ日本語", [], [True, ["x"]]]
        encoded = encode_value(value)
        decoded, end = decode_value(encoded)

        self.assertEqual(decoded, value)
        self.assertEqual(end, len(encoded))

    def test_unknown_tag_is_length_skippable_and_preserved(self):
        original = UnknownValue(99, b"xyz")
        encoded = encode_value(original)
        value, end = decode_value(encoded)

        self.assertEqual(value, original)
        self.assertEqual(end, len(encoded))

    def test_rejects_legacy_magic_bad_digest_truncation_and_trailing_bytes(self):
        with self.assertRaises(LegacySaveUnsupported):
            decode_file(b"legacy room save")

        data = encode_file(FileKind.GENERAL, b"payload")
        with self.assertRaises(SaveFormatError):
            decode_file(data[:-1])
        with self.assertRaises(SaveFormatError):
            decode_file(data + b"\x00")
        changed = bytearray(data)
        changed[-1] ^= 1
        with self.assertRaises(SaveFormatError):
            decode_file(bytes(changed))

        for offset, value in ((8, 2), (10, 9), (11, 1)):
            changed = bytearray(data)
            changed[offset] = value
            with self.assertRaises(SaveFormatError):
                decode_file(bytes(changed))

    def test_rejects_bad_tag_payloads_oversized_lengths_and_excessive_depth(self):
        with self.assertRaises(SaveFormatError):
            decode_value(b"\x04\x02\x00\x00\x00\x00\x01")
        with self.assertRaises(SaveFormatError):
            decode_value(b"\x02\xff\xff\xff\xff")
        with self.assertRaises(SaveFormatError):
            decode_value(b"\x03\x04\x00\x00\x00\x64\x00\x00\x00")

        nested = True
        for _ in range(80):
            nested = [nested]
        with self.assertRaises(SaveFormatError):
            encode_value(nested)

    def test_file_header_contains_expected_payload_digest(self):
        payload = b"test bytes"
        data = encode_file(FileKind.CHARACTER, payload)
        digest = hashlib.sha256(payload).digest()

        self.assertIn(digest, data[:64])


if __name__ == "__main__":
    unittest.main()
