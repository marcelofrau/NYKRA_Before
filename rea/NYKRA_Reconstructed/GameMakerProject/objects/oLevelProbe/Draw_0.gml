draw_set_alpha(1);
draw_set_color(c_white);

if (!level_probe_ok) {
    draw_set_color(c_red);
    draw_text(16, 16, "Level probe failed");
    draw_text(16, 40, level_probe_error);
    exit;
}

var _x0 = 900;
draw_text(_x0, 16, "rmMal_Origin: " + string(level_probe_width) + "x" + string(level_probe_height));
draw_text(_x0, 36, "collision cells: " + string(level_probe_width * level_probe_height));
draw_text(_x0, 56, "tile nonzero by layer: "
    + string(level_probe_tile_counts[0]) + ", "
    + string(level_probe_tile_counts[1]) + ", "
    + string(level_probe_tile_counts[2]) + ", "
    + string(level_probe_tile_counts[3]) + ", "
    + string(level_probe_tile_counts[4]) + ", "
    + string(level_probe_tile_counts[5]));
draw_text(_x0, 76, "aFRONT/aBACK: " + string(level_probe_asset_counts[0]) + "/" + string(level_probe_asset_counts[1])
    + " (undefined: " + string(level_probe_undefined_sprites) + ")");
draw_text(_x0, 96, "declared objects: " + string(level_probe_object_count) + " (not spawned)");
draw_text(_x0, 116, "tilemaps created: " + string(array_length(level_probe_tilemaps)));
draw_text(_x0, 136, "tileset: TILES / 16x16 / 78 columns");
draw_text(_x0, 156, "source: rmMal_Origin.rmlvl");
draw_text(_x0, 176, "tileset runtime: " + string(level_probe_runtime_tileset_ok)
    + " " + string(level_probe_runtime_tile_width) + "x" + string(level_probe_runtime_tile_height)
    + " cols=" + string(level_probe_runtime_tile_columns)
    + " count=" + string(level_probe_runtime_tile_count));
draw_text(_x0, 196, "tilemap_set true: "
    + string(level_probe_tile_set_successes[0]) + ", "
    + string(level_probe_tile_set_successes[1]) + ", "
    + string(level_probe_tile_set_successes[2]) + ", "
    + string(level_probe_tile_set_successes[3]) + ", "
    + string(level_probe_tile_set_successes[4]) + ", "
    + string(level_probe_tile_set_successes[5]));
draw_text(_x0, 216, "tilemap_get nonzero: "
    + string(level_probe_tile_readbacks[0]) + ", "
    + string(level_probe_tile_readbacks[1]) + ", "
    + string(level_probe_tile_readbacks[2]) + ", "
    + string(level_probe_tile_readbacks[3]) + ", "
    + string(level_probe_tile_readbacks[4]) + ", "
    + string(level_probe_tile_readbacks[5]));
draw_text(_x0, 236, "first raw/index: " + string(level_probe_first_tiledata)
    + "/" + string(level_probe_first_tile_index)
    + " empty=" + string(level_probe_first_tile_empty));
draw_text(_x0, 256, "layer0 visible/depth/map: "
    + string(level_probe_layer_visible_before[0]) + "/"
    + string(level_probe_layer_depths[0]) + "/"
    + string(level_probe_layer_tilemap_exists[0]));
draw_text(_x0, 276, "manual raw/index sets: "
    + string(level_probe_manual_raw_set) + "/" + string(level_probe_manual_index_set));
draw_text(_x0, 296, "manual raw/index read: "
    + string(level_probe_manual_raw_readback) + "/" + string(level_probe_manual_index_readback));
draw_text(_x0, 316, "tileset UV valid: " + string(level_probe_uvs_valid)
    + " " + string(level_probe_uvs[0]) + "," + string(level_probe_uvs[1]) + " -> "
    + string(level_probe_uvs[2]) + "," + string(level_probe_uvs[3]));
draw_text(_x0, 336, "trim/pct: " + string(level_probe_uvs[4]) + "," + string(level_probe_uvs[5])
    + " / " + string(level_probe_uvs[6]) + "," + string(level_probe_uvs[7]));
draw_text(_x0, 356, "tilemap uses TILES: " + string(level_probe_tilemap_uses_tileset));
draw_sprite_part_ext(sTileset_TILES, 0, 0, 0, 64, 64, _x0, 380, 4, 4, c_white, 1);
draw_text(_x0, 640, "draw_tile raw/index left/right:");
draw_tile(TILES, level_probe_first_tiledata, 0, _x0, 660);
draw_tile(TILES, tile_set_index(0, level_probe_first_tile_index), 0, _x0 + 16, 660);
draw_text(_x0, 680, "two tiles in static Instances layer:");
draw_text(16, 480, "draw_tilemap of the second level layer below:");
draw_tilemap(level_probe_tilemaps[1], 0, 500);
