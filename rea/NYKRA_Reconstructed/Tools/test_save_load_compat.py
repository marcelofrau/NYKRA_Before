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
MAP_LOAD_PATH = GML_PATH.with_name("map_load.gml")
MAP_SAVE_PATH = GML_PATH.with_name("map_save.gml")
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

    def test_chapter4_control_fixture_has_bool_and_omitted_array_evidence(self):
        fixture = (
            VALIDATOR.INCLUDED_DIR
            / "DATA"
            / "CHAPTER_TEMPLATES"
            / "chapter_4"
            / "CONTROL"
        ).read_bytes()
        anim_offset = fixture.index(b"anim1\x00")
        array_offset = fixture.index(b"asset_layer\x00")
        instance, _ = VALIDATOR.parse_saved_instance(
            fixture, 0, VALIDATOR.load_object_hierarchy()
        )

        self.assertEqual(fixture[anim_offset : anim_offset + 15], b"anim1\x00\x04\x01min_mh\x00")
        self.assertEqual(fixture[array_offset : array_offset + 16], b"asset_layer\x00FPS\x00")
        self.assertIn(
            "asset_layer",
            {issue["variable"] for issue in instance["decode_issues"]},
        )

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

    def test_map_load_follows_level_file_field_order(self):
        source = MAP_LOAD_PATH.read_text(encoding="utf-8")
        fields = (
            "map_n = buffer_read(_b, buffer_u8);",
            "mw = buffer_read(_b, buffer_u8);",
            "mh = buffer_read(_b, buffer_u8);",
            "planet = buffer_read(_b, buffer_u8);",
            "horizon = buffer_read(_b, buffer_u8);",
            "var _r3 = buffer_read(_b, buffer_u8);",
            "var _cell = buffer_read(_b, buffer_u16);",
            "var _tile = buffer_read(_b, buffer_u16);",
            "var _acount = buffer_read(_b, buffer_u16);",
            "var _ax = buffer_read(_b, buffer_u16);",
            "var _ay = buffer_read(_b, buffer_u16);",
            "var _aspr_name = buffer_read(_b, buffer_string);",
            "var _obj_count = buffer_read(_b, buffer_u16);",
            "var _ox = buffer_read(_b, buffer_s16);",
            "var _oname = buffer_read(_b, buffer_string);",
        )
        self.assert_in_source_order(source, fields)

    def test_map_save_writes_level_file_field_order(self):
        source = MAP_SAVE_PATH.read_text(encoding="utf-8")
        fields = (
            "buffer_write(_b, buffer_u8, map_n);",
            "buffer_write(_b, buffer_u8, mw);",
            "buffer_write(_b, buffer_u8, mh);",
            "buffer_write(_b, buffer_u8, planet);",
            "buffer_write(_b, buffer_u8, horizon);",
            "buffer_write(_b, buffer_u8, 0);",
            "buffer_write(_b, buffer_u16, round(array_get_2D(map, _ix, _iy)));",
            "buffer_write(_b, buffer_u16, tilemap_get(_tmap, _ix, _iy));",
            "buffer_write(_b, buffer_u16, ds_list_size(_alist));",
            "buffer_write(_b, buffer_u16, round(layer_sprite_get_x(_sp)));",
            "buffer_write(_b, buffer_u16, round(layer_sprite_get_y(_sp)));",
            "buffer_write(_b, buffer_string, string(sprite_get_name(layer_sprite_get_sprite(_sp))));",
            "buffer_write(_b, buffer_u16, ds_list_size(obj_list));",
            "buffer_write(_b, buffer_s16, _inst.xstart);",
            "buffer_write(_b, buffer_s16, _inst.ystart);",
            "buffer_write(_b, buffer_s16, _inst.depth);",
            "buffer_write(_b, buffer_string, string(object_get_name(_inst.object_index)));",
        )
        self.assert_in_source_order(source, fields)

    def test_map_object_payload_branches_match_their_read_write_order(self):
        loader = MAP_LOAD_PATH.read_text(encoding="utf-8")
        saver = MAP_SAVE_PATH.read_text(encoding="utf-8")
        load_fields = (
            "if (_oidx == PATH)",
            "_inst.n = buffer_read(_b, buffer_u8);",
            "_inst.rm = buffer_read(_b, buffer_string);",
            "else if (object_is_ancestor(_inst.object_index, parLootable))",
            "_inst.locked = buffer_read(_b, buffer_u16);",
            "var _inv_cnt = buffer_read(_b, buffer_u16);",
            "var _item_id = buffer_read(_b, buffer_u16);",
            "var _item_n = buffer_read(_b, buffer_u16);",
            "else if (object_is_ancestor(_oidx, parDoor_out))",
            "_inst.locked = buffer_read(_b, buffer_u8);",
            "else if (object_is_ancestor(_oidx, parDoor_Flat))",
            "_inst.n = buffer_read(_b, buffer_u8);",
            "_inst.rm = buffer_read(_b, buffer_string);",
            "else if (_oidx == oRoof_angle)",
            "_inst.width = buffer_read(_b, buffer_u16);",
            "_inst.repeat_t = buffer_read(_b, buffer_u16);",
            "_inst.material = buffer_read(_b, buffer_u8);",
            "_inst.dir = buffer_read(_b, buffer_s16);",
            "else if (object_is_ancestor(_oidx, parNote))",
            "var _ntxt = buffer_read(_b, buffer_string);",
            "var _npage = buffer_read(_b, buffer_u8);",
            "else if (object_is_ancestor(_oidx, oBook)",
            "_inst.book = buffer_read(_b, buffer_u8);",
            "_inst.book_text = buffer_read(_b, buffer_u8);",
            "else if (instance_exists(oSAVE_WIRE)",
            "_inst.anim1 = buffer_read(_b, buffer_s16);",
            "_inst.d[0] = buffer_read(_b, buffer_s16);",
            "_inst.an[0] = buffer_read(_b, buffer_s16);",
            "_inst.anim = buffer_read(_b, buffer_s16);",
            "_inst.on = buffer_read(_b, buffer_s16);",
            "_inst.power_on = buffer_read(_b, buffer_s16);",
        )
        save_fields = (
            "if (_inst.object_index == PATH)",
            "buffer_write(_b, buffer_u8, _inst.n);",
            "buffer_write(_b, buffer_string, _inst.rm);",
            "else if (object_is_ancestor(_inst.object_index, parLootable))",
            "buffer_write(_b, buffer_u16, _inst.locked);",
            "buffer_write(_b, buffer_u16, ds_list_size(_inst.INV));",
            "buffer_write(_b, buffer_u16, real(ds_list_find_value(_inst.INV, _j)));",
            "buffer_write(_b, buffer_u16, real(ds_list_find_value(_inst.INV_N, _j)));",
            "else if (object_is_ancestor(_inst.object_index, parDoor_out))",
            "buffer_write(_b, buffer_u8, _inst.locked);",
            "else if (object_is_ancestor(_inst.object_index, parDoor_Flat))",
            "buffer_write(_b, buffer_u8, _inst.n);",
            "buffer_write(_b, buffer_string, _inst.rm);",
            "else if (_inst.object_index == oRoof_angle)",
            "buffer_write(_b, buffer_u16, _inst.width);",
            "buffer_write(_b, buffer_u16, _inst.repeat_t);",
            "buffer_write(_b, buffer_u8, _inst.material);",
            "buffer_write(_b, buffer_s16, _inst.dir);",
            "else if (object_is_ancestor(_inst.object_index, parNote))",
            "buffer_write(_b, buffer_string, string(_inst.text));",
            "buffer_write(_b, buffer_u8, _inst.page);",
            "else if (object_is_ancestor(_inst.object_index, oBook)",
            "buffer_write(_b, buffer_u8, _inst.book);",
            "buffer_write(_b, buffer_u8, _inst.book_text);",
            "else if (instance_exists(oSAVE_WIRE)",
            "buffer_write(_b, buffer_s16, round(_inst.anim1));",
            "buffer_write(_b, buffer_s16, round(_inst.d[0]));",
            "buffer_write(_b, buffer_s16, round(_inst.an[0]));",
            "buffer_write(_b, buffer_s16, round(_inst.anim));",
            "buffer_write(_b, buffer_s16, round(_inst.on));",
            "buffer_write(_b, buffer_s16, round(_inst.power_on));",
        )
        self.assert_in_source_order(loader, load_fields)
        self.assert_in_source_order(saver, save_fields)

    def assert_in_source_order(self, source, fields):
        offset = 0
        for field in fields:
            found = source.find(field, offset)
            self.assertNotEqual(found, -1, f"missing or out-of-order field: {field}")
            offset = found + len(field)


if __name__ == "__main__":
    unittest.main()
