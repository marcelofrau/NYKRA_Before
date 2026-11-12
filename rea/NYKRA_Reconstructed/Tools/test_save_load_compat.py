import re
import importlib.util
import struct
import unittest
from pathlib import Path


GML_PATH = (
    Path(__file__).resolve().parents[1]
    / "ReconstructedGML"
    / "phase1_core"
    / "save_load_system.gml"
)
VALIDATOR_PATH = Path(__file__).with_name("validate_formats.py")
VALIDATOR_SPEC = importlib.util.spec_from_file_location("validate_formats", VALIDATOR_PATH)
VALIDATOR = importlib.util.module_from_spec(VALIDATOR_SPEC)
VALIDATOR_SPEC.loader.exec_module(VALIDATOR)


def function_body(source, name, next_name):
    start = source.index(f"function {name}(")
    end = source.index(f"function {next_name}(", start)
    return source[start:end]


class SaveLoadCompatibilityTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.source = GML_PATH.read_text(encoding="utf-8")

    def test_scalar_reader_matches_reconstructed_writer_tags(self):
        writer = function_body(self.source, "_save_type", "_save_type_rec")
        reader = function_body(self.source, "_read_saved_type", "_apply_instance_record")

        self.assertRegex(
            writer,
            re.compile(r"buffer_write\(_b, buffer_u8, 4\);\s*buffer_write\(_b, buffer_bool, _v\);"),
        )
        self.assertRegex(reader, re.compile(r"case 4:\s*return buffer_read\(_b, buffer_bool\);"))
        self.assertRegex(reader, re.compile(r"case 5:\s*return buffer_read\(_b, buffer_u64\);"))

    def test_native_scalar_contract_does_not_infer_tag_5_as_int64(self):
        self.assertEqual(VALIDATOR.read_saved_type(b"\x04\x01", 0), (True, 2, None))
        self.assertEqual(
            VALIDATOR.read_saved_type(b"\x05" + bytes(8), 0),
            (None, 0, "tag_5_not_emitted_by_native_writer"),
        )

    def test_native_array_string_tag_is_decoded_and_flagged(self):
        flat = b"\x03\x01\x00\x02text\x00"
        nested = b"\x03\x01\x00\x03\x01\x00\x02text\x00"
        issue = "array_string_tag_2_not_supported_by_native_loader"

        self.assertEqual(VALIDATOR.read_saved_type(flat, 0), (["text"], len(flat), issue))
        self.assertEqual(VALIDATOR.read_saved_type(nested, 0), ([["text"]], len(nested), issue))

    def test_omitted_array_value_is_reported_without_losing_next_variable(self):
        header = bytes(68)
        data = (
            b"oControl\x00"
            + header
            + b"\x02\x00"
            + b"empty_array\x00"
            + b"next_value\x00\x01"
            + struct.pack("<f", 1.25)
            + b"\x00"
        )
        instance, pos = VALIDATOR.parse_saved_instance(data, 0, {"oControl": {"Parent": None}})

        self.assertEqual(pos, len(data) - 1)
        self.assertEqual(instance["decoded_var_count"], 1)
        self.assertEqual(instance["decode_issues"][0]["variable"], "empty_array")
        self.assertEqual(instance["decode_issues"][0]["status"], "missing_or_unknown_payload")

    def test_string_arrays_use_a_legacy_safe_element_tag(self):
        writer = function_body(self.source, "_save_type_rec", "_save_type_rec2")
        nested_writer = function_body(self.source, "_save_type_rec2", "_save_ds_list")
        reader = function_body(self.source, "_read_saved_type", "_apply_instance_record")

        for array_writer, value in ((writer, "_el"), (nested_writer, "_el2")):
            self.assertRegex(
                array_writer,
                re.compile(
                    rf"is_string\({value}\)\)\s*\{{\s*(?://[^\n]*\n)?\s*"
                    rf"buffer_write\(_b, buffer_u8, 6\);\s*"
                    rf"buffer_write\(_b, buffer_string, {value}\);",
                    re.S,
                ),
            )

        self.assertRegex(reader, re.compile(r"_t2 == 6\)\s*\{\s*_arr\[_i\] = buffer_read\(_b, buffer_string\);"))
        self.assertRegex(reader, re.compile(r"_t3 == 6\)\s*\{\s*_arr2\[_j\] = buffer_read\(_b, buffer_string\);"))
        self.assertRegex(reader, re.compile(r"_t2 == 2\)\s*\{\s*_arr\[_i\] = buffer_read\(_b, buffer_u64\);"))
        self.assertRegex(reader, re.compile(r"_t3 == 2\)\s*\{\s*_arr2\[_j\] = buffer_read\(_b, buffer_u64\);"))


if __name__ == "__main__":
    unittest.main()
