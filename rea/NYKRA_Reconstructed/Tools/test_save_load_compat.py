import re
import unittest
from pathlib import Path


GML_PATH = (
    Path(__file__).resolve().parents[1]
    / "ReconstructedGML"
    / "phase1_core"
    / "save_load_system.gml"
)


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
