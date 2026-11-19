import json
import re
import struct
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
LEVEL = ROOT / "RecoveredAssets" / "Included Files" / "level_data" / "rmMal_Origin.rmlvl"
SOURCE_IMAGE = ROOT / "RecoveredAssets" / "Textures" / "Backgrounds" / "TILES" / "TILES_0.png"
METADATA = ROOT / "RecoveredAssets" / "Metadata" / "tileset-TILES.json"
PROJECT = ROOT / "GameMakerProject"
PROJECT_FILE = PROJECT / "NYKRA_VerticalSlice.yyp"
TILESET_FILE = PROJECT / "tilesets" / "TILES" / "TILES.yy"


def png_dimensions(path):
    with path.open("rb") as image:
        header = image.read(24)
    if header[:8] != b"\x89PNG\r\n\x1a\n":
        raise AssertionError(f"Not a PNG: {path}")
    return struct.unpack(">II", header[16:24])


def load_yy(path):
    # GameMaker .yy files allow trailing commas, which json rejects.
    return json.loads(re.sub(r",(\s*[}\]])", r"\1", path.read_text(encoding="utf-8")))


class Phase3TilesetTests(unittest.TestCase):
    def test_tileset_reconstruction_metadata_and_image_dimensions(self):
        metadata = json.loads(METADATA.read_text(encoding="utf-8"))
        tileset = metadata["tileset"]
        self.assertEqual(metadata["name"], "TILES")
        self.assertEqual(png_dimensions(SOURCE_IMAGE), (1560, 1580))
        self.assertEqual((tileset["tile_width"], tileset["tile_height"]), (16, 16))
        self.assertEqual((tileset["tile_columns"], tileset["tile_count"]), (78, 6144))
        self.assertEqual((tileset["output_border_x"], tileset["output_border_y"]), (2, 2))
        self.assertEqual((tileset["tile_separation_x"], tileset["tile_separation_y"]), (0, 0))
        source_import = tileset["source_import"]
        self.assertEqual((source_import["tile_offset_x"], source_import["tile_offset_y"]), (2, 2))
        self.assertEqual((source_import["tile_separation_x"], source_import["tile_separation_y"]), (4, 4))
        self.assertEqual((source_import["output_border_x"], source_import["output_border_y"]), (0, 0))
        self.assertEqual((tileset["source_sprite_width"], tileset["source_sprite_height"]), (1560, 1580))

    def test_source_sprite_sTiles_matches_original_canvas(self):
        # Original source sprite: 1024x1536 = 64x96 tiles = 6144 (sprites-metadata.json).
        sprite = next((PROJECT / "sprites" / "sTiles").glob("*.png"))
        self.assertEqual(png_dimensions(sprite), (1024, 1536))
        yy = load_yy(PROJECT / "sprites" / "sTiles" / "sTiles.yy")
        self.assertEqual((yy["width"], yy["height"]), (1024, 1536))
        self.assertEqual(yy["origin"], 0)

    def test_ide_generated_output_tileset_is_present(self):
        # The IDE writes this padded output image when it saves the tileset; a hand-written
        # TILES.yy without it compiled with a NULL texture (MASTER_RECONSTRUCTION_PLAN.md §1.3c).
        output = PROJECT / "tilesets" / "TILES" / "output_tileset.png"
        self.assertEqual(png_dimensions(output), png_dimensions(SOURCE_IMAGE))  # 78x79 tiles of 20 px

    def test_rmMAIN_declares_six_tile_layers_for_TILES(self):
        # The original rmMAIN references TILES through these six layers.
        room = load_yy(PROJECT / "rooms" / "rmMAIN" / "rmMAIN.yy")
        tile_layers = {
            layer["name"]: layer for layer in room["layers"] if layer["resourceType"] == "GMRTileLayer"
        }
        expected = {
            "tFRONT_over": -30, "tFRONT": -20, "tFRONT_bg": -10,
            "tBACK_over": 10, "tBACK": 20, "tBACK_bg": 30,
        }
        self.assertEqual({n: l["depth"] for n, l in tile_layers.items()}, expected)
        for layer in tile_layers.values():
            self.assertEqual(layer["tilesetId"]["name"], "TILES")
            tiles = layer["tiles"]
            self.assertEqual((tiles["SerialiseWidth"], tiles["SerialiseHeight"]), (128, 64))
            data, total, i = tiles["TileCompressedData"], 0, 0
            while i < len(data):  # RLE: n < 0 repeats the next value, n > 0 is n literals
                n = data[i]
                total += -n if n < 0 else n
                i += 2 if n < 0 else 1 + n
            self.assertEqual((total, i), (128 * 64, len(data)))

    def test_rmMal_origin_tile_values_fit_original_tileset(self):
        data = LEVEL.read_bytes()
        _, width, height, *_ = struct.unpack_from("<8B", data)
        cell_count = width * height
        offset = 8 + cell_count * 2  # header plus collision grid
        tile_layers = []
        for _ in range(6):
            values = struct.unpack_from(f"<{cell_count}H", data, offset)
            offset += cell_count * 2
            tile_layers.append(values)

        self.assertEqual(
            [sum(value != 0 for value in layer) for layer in tile_layers],
            [18, 589, 10, 20, 203, 114],
        )
        self.assertEqual(max(value for layer in tile_layers for value in layer), 526)
        self.assertTrue(all(value < 6144 for layer in tile_layers for value in layer))

    def test_gamemaker_tileset_uses_original_import_settings(self):
        tileset = load_yy(TILESET_FILE)
        self.assertEqual(tileset["resourceType"], "GMTileSet")
        self.assertEqual(tileset["name"], "TILES")
        self.assertEqual((tileset["tileWidth"], tileset["tileHeight"]), (16, 16))
        self.assertEqual((tileset["out_columns"], tileset["tile_count"]), (78, 6144))
        self.assertEqual((tileset["out_tilehborder"], tileset["out_tilevborder"]), (2, 2))
        self.assertEqual((tileset["tilexoff"], tileset["tileyoff"]), (0, 0))
        self.assertEqual((tileset["tilehsep"], tileset["tilevsep"]), (0, 0))
        self.assertFalse(tileset["spriteNoExport"])
        self.assertEqual(tileset["spriteId"]["path"], "sprites/sTiles/sTiles.yy")
        self.assertNotIn("sTileset_TILES", PROJECT_FILE.read_text(encoding="utf-8"))
        resources = [r["id"]["name"] for r in load_yy(PROJECT_FILE)["resources"]]
        self.assertIn("TILES", resources)
        self.assertIn("sTiles", resources)



if __name__ == "__main__":
    unittest.main()
