import re
import struct
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
LEVEL = ROOT / "RecoveredAssets" / "Included Files" / "level_data" / "rmMal_Origin.rmlvl"
PROJECT = ROOT / "GameMakerProject"
PROBE_CREATE = PROJECT / "objects" / "oLevelProbe" / "Create_0.gml"
PROBE_DRAW = PROJECT / "objects" / "oLevelProbe" / "Draw_0.gml"


def read_cstring(data, offset):
    end = data.index(b"\0", offset)
    return data[offset:end].decode("utf-8"), end + 1


class Phase3LevelProbeTests(unittest.TestCase):
    def test_rmMal_origin_probe_fixture_header_grid_layers_and_counts(self):
        data = LEVEL.read_bytes()
        header = struct.unpack_from("<8B", data)
        self.assertEqual(header, (0, 54, 25, 0, 0, 0, 0, 0))

        width, height = header[1:3]
        cell_count = width * height
        offset = 8
        collision = struct.unpack_from(f"<{cell_count}H", data, offset)
        offset += cell_count * 2
        self.assertEqual(sum(value != 0 for value in collision), 173)

        tile_counts = []
        for _ in range(6):
            layer = struct.unpack_from(f"<{cell_count}H", data, offset)
            offset += cell_count * 2
            tile_counts.append(sum(value != 0 for value in layer))
        self.assertEqual(tile_counts, [18, 589, 10, 20, 203, 114])

        asset_layers = []
        for _ in range(2):
            count = struct.unpack_from("<H", data, offset)[0]
            offset += 2
            records = []
            for _ in range(count):
                x, y = struct.unpack_from("<HH", data, offset)
                offset += 4
                name, offset = read_cstring(data, offset)
                records.append((x, y, name))
            asset_layers.append(records)

        self.assertEqual(asset_layers[0], [])
        self.assertEqual(
            asset_layers[1],
            [
                (0, 0, "<undefined>"),
                (0, 0, "<undefined>"),
                (0, 0, "<undefined>"),
                (0, 0, "<undefined>"),
                (565, 287, "sMal_Tree_1"),
            ],
        )
        self.assertEqual(struct.unpack_from("<H", data, offset)[0], 79)

    def test_probe_reads_metadata_without_loading_level_objects(self):
        create = PROBE_CREATE.read_text(encoding="utf-8")
        draw = PROBE_DRAW.read_text(encoding="utf-8")
        fields = (
            "level_probe_map_n = buffer_read(_b, buffer_u8);",
            "level_probe_width = buffer_read(_b, buffer_u8);",
            "level_probe_height = buffer_read(_b, buffer_u8);",
            "level_probe_planet = buffer_read(_b, buffer_u8);",
            "level_probe_grid[_i] = buffer_read(_b, buffer_u16);",
            "level_probe_tile_counts[_layer] = _nonzero;",
            "level_probe_asset_counts[_asset_layer] = _asset_count;",
            "level_probe_object_count = buffer_read(_b, buffer_u16);",
        )
        positions = [create.index(field) for field in fields]
        self.assertEqual(positions, sorted(positions))
        self.assertIn('"level_data/rmmal_origin.rmlvl"', create)
        self.assertNotRegex(create, re.compile(r"\b(instance_create|map_load|map_save)\s*\("))
        self.assertIn("(not spawned)", draw)


if __name__ == "__main__":
    unittest.main()
