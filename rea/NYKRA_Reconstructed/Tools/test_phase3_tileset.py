import json
import hashlib
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
PROBE_CREATE = PROJECT / "objects" / "oLevelProbe" / "Create_0.gml"


def png_dimensions(path):
    with path.open("rb") as image:
        header = image.read(24)
    if header[:8] != b"\x89PNG\r\n\x1a\n":
        raise AssertionError(f"Not a PNG: {path}")
    return struct.unpack(">II", header[16:24])


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
        sprite = next((PROJECT / "sprites" / "sTileset_TILES").glob("*.png"))
        self.assertEqual(png_dimensions(sprite), (1560, 1580))
        self.assertEqual(
            hashlib.sha256(sprite.read_bytes()).hexdigest().upper(),
            metadata["sha256"]["runtime_texture_png"],
        )

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

    def test_gamemaker_tileset_uses_equivalent_padded_import_settings(self):
        tileset = json.loads(TILESET_FILE.read_text(encoding="utf-8"))
        self.assertEqual(tileset["resourceType"], "GMTileSet")
        self.assertEqual(tileset["name"], "TILES")
        self.assertEqual((tileset["tileWidth"], tileset["tileHeight"]), (16, 16))
        self.assertEqual((tileset["out_columns"], tileset["tile_count"]), (78, 6144))
        self.assertEqual((tileset["out_tilehborder"], tileset["out_tilevborder"]), (0, 0))
        self.assertEqual((tileset["tilexoff"], tileset["tileyoff"]), (2, 2))
        self.assertEqual((tileset["tilehsep"], tileset["tilevsep"]), (4, 4))
        self.assertFalse(tileset["spriteNoExport"])
        self.assertEqual(tileset["spriteId"]["path"], "sprites/sTileset_TILES/sTileset_TILES.yy")
        self.assertIn('"name":"TILES"', PROJECT_FILE.read_text(encoding="utf-8"))

    def test_probe_creates_the_six_maps_from_serialized_cells_without_spawning_objects(self):
        create = PROBE_CREATE.read_text(encoding="utf-8")
        for name in (
            "tFRONT_over",
            "tFRONT",
            "tFRONT_bg",
            "tBACK_over",
            "tBACK",
            "tBACK_bg",
        ):
            self.assertIn(name, create)
        self.assertIn("layer_tilemap_create(", create)
        self.assertIn("tilemap_set(", create)
        self.assertIn("var _x = floor(_i / level_probe_height);", create)
        self.assertIn("var _y = _i mod level_probe_height;", create)
        self.assertNotRegex(create, r"\b(instance_create|map_load|map_save)\s*\(")

    def test_probe_exposes_runtime_tileset_and_map_write_diagnostics(self):
        create = PROBE_CREATE.read_text(encoding="utf-8")
        draw = (PROJECT / "objects" / "oLevelProbe" / "Draw_0.gml").read_text(encoding="utf-8")
        self.assertIn("tileset_get_info(TILES)", create)
        self.assertIn("tileset_get_uvs(TILES)", create)
        self.assertIn("tilemap_get_tileset(_tilemap) == TILES", create)
        self.assertIn("tilemap_get(", create)
        self.assertIn("level_probe_tile_set_successes", create)
        self.assertIn("layer_get_visible(", create)
        self.assertIn("layer_set_visible(", create)
        self.assertIn("layer_tilemap_get_id(", create)
        self.assertIn("tile_set_index(0, level_probe_first_tile_index)", create)
        self.assertIn('layer_get_id("Instances")', create)
        self.assertIn("layer_tilemap_create(_instance_layer_id", create)
        self.assertIn("draw_sprite_part_ext(sTileset_TILES", draw)
        self.assertIn("draw_tile(TILES, level_probe_first_tiledata, 0, _x0, 660)", draw)
        self.assertIn("draw_tilemap(level_probe_tilemaps[1], 0, 500)", draw)
        self.assertIn("level_probe_uvs[0]", draw)


if __name__ == "__main__":
    unittest.main()
