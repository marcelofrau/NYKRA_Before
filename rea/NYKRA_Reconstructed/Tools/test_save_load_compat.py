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


if __name__ == "__main__":
    unittest.main()
