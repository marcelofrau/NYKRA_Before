import struct
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
LEVEL = ROOT / "RecoveredAssets" / "Included Files" / "level_data" / "rmMal_Origin.rmlvl"


def read_cstring(data, offset):
    end = data.index(b"\0", offset)
    return data[offset:end].decode("utf-8"), end + 1


class Phase3LevelFixtureTests(unittest.TestCase):
    def test_rmMal_origin_fixture_header_grid_layers_and_counts(self):
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


if __name__ == "__main__":
    unittest.main()
