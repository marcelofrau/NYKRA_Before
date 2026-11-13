level_probe_ok = false;
level_probe_error = "";
level_probe_width = 0;
level_probe_height = 0;
level_probe_grid = [];
level_probe_tile_counts = array_create(6, 0);
level_probe_tiles = array_create(6, 0);
level_probe_tilemaps = array_create(6, -1);
level_probe_tile_set_successes = array_create(6, 0);
level_probe_tile_readbacks = array_create(6, 0);
level_probe_layer_visible_before = array_create(6, false);
level_probe_layer_depths = array_create(6, 0);
level_probe_layer_tilemap_exists = array_create(6, false);
level_probe_tilemap_uses_tileset = false;
level_probe_first_tiledata = 0;
level_probe_first_tile_index = -1;
level_probe_first_tile_empty = true;
level_probe_runtime_tileset_ok = false;
level_probe_runtime_tile_width = 0;
level_probe_runtime_tile_height = 0;
level_probe_runtime_tile_columns = 0;
level_probe_runtime_tile_count = 0;
level_probe_uvs = array_create(8, 0);
level_probe_uvs_valid = false;
level_probe_asset_counts = array_create(2, 0);
level_probe_undefined_sprites = 0;
level_probe_missing_sprites = 0;
level_probe_object_count = 0;
level_probe_file_size = 0;

var _path = "level_data/rmmal_origin.rmlvl";
if (!file_exists(_path)) {
    level_probe_error = "Included level file not found: " + _path;
    exit;
}

var _b = buffer_load(_path);
if (_b < 0) {
    level_probe_error = "buffer_load failed: " + _path;
    exit;
}

level_probe_file_size = buffer_get_size(_b);
if (level_probe_file_size < 8) {
    level_probe_error = "Level file is shorter than its 8-byte header.";
    buffer_delete(_b);
    exit;
}

level_probe_map_n = buffer_read(_b, buffer_u8);
level_probe_width = buffer_read(_b, buffer_u8);
level_probe_height = buffer_read(_b, buffer_u8);
level_probe_planet = buffer_read(_b, buffer_u8);
level_probe_horizon = buffer_read(_b, buffer_u8);
var _r1 = buffer_read(_b, buffer_u8);
var _r2 = buffer_read(_b, buffer_u8);
var _r3 = buffer_read(_b, buffer_u8);

var _cell_count = level_probe_width * level_probe_height;
if (_cell_count <= 0 || _cell_count > 4096) {
    level_probe_error = "Invalid level dimensions.";
    buffer_delete(_b);
    exit;
}

var _grid_bytes = _cell_count * 2;
if (buffer_get_size(_b) - buffer_tell(_b) < _grid_bytes * 7) {
    level_probe_error = "Truncated collision or tile grid data.";
    buffer_delete(_b);
    exit;
}

level_probe_grid = array_create(_cell_count, 0);
for (var _i = 0; _i < _cell_count; _i++) {
    level_probe_grid[_i] = buffer_read(_b, buffer_u16);
}

for (var _layer = 0; _layer < 6; _layer++) {
    var _nonzero = 0;
    var _tiles = array_create(_cell_count, 0);
    for (var _i = 0; _i < _cell_count; _i++) {
        var _tile = buffer_read(_b, buffer_u16);
        _tiles[_i] = _tile;
        if (_tile != 0) _nonzero++;
    }
    level_probe_tiles[_layer] = _tiles;
    level_probe_tile_counts[_layer] = _nonzero;
}

for (var _asset_layer = 0; _asset_layer < 2; _asset_layer++) {
    if (buffer_get_size(_b) - buffer_tell(_b) < 2) {
        level_probe_error = "Truncated asset layer count.";
        buffer_delete(_b);
        exit;
    }
    var _asset_count = buffer_read(_b, buffer_u16);
    level_probe_asset_counts[_asset_layer] = _asset_count;
    for (var _i = 0; _i < _asset_count; _i++) {
        if (buffer_get_size(_b) - buffer_tell(_b) < 5) {
            level_probe_error = "Truncated asset sprite record.";
            buffer_delete(_b);
            exit;
        }
        buffer_read(_b, buffer_u16);
        buffer_read(_b, buffer_u16);
        var _sprite_name = buffer_read(_b, buffer_string);
        if (_sprite_name == "<undefined>") {
            level_probe_undefined_sprites++;
        } else if (asset_get_index(_sprite_name) == -1) {
            level_probe_missing_sprites++;
        }
    }
}

if (buffer_get_size(_b) - buffer_tell(_b) < 2) {
    level_probe_error = "Truncated level object count.";
    buffer_delete(_b);
    exit;
}
level_probe_object_count = buffer_read(_b, buffer_u16);
buffer_delete(_b);
level_probe_ok = true;

var _tileset_info = tileset_get_info(TILES);
level_probe_runtime_tileset_ok = !is_undefined(_tileset_info);
if (level_probe_runtime_tileset_ok) {
    level_probe_runtime_tile_width = _tileset_info.tile_width;
    level_probe_runtime_tile_height = _tileset_info.tile_height;
    level_probe_runtime_tile_columns = _tileset_info.tile_columns;
    level_probe_runtime_tile_count = _tileset_info.tile_count;
}
level_probe_uvs = tileset_get_uvs(TILES);
level_probe_uvs_valid = array_length(level_probe_uvs) == 8;

var _tile_layer_names = [
    "tFRONT_over", "tFRONT", "tFRONT_bg",
    "tBACK_over", "tBACK", "tBACK_bg"
];
var _tile_layer_depths = [-30, -20, -10, 10, 20, 30];

for (var _layer = 0; _layer < 6; _layer++) {
    var _layer_id = layer_create(_tile_layer_depths[_layer], _tile_layer_names[_layer]);
    if (_layer_id < 0) {
        level_probe_ok = false;
        level_probe_error = "Could not create tile layer: " + _tile_layer_names[_layer];
        exit;
    }
    level_probe_layer_visible_before[_layer] = layer_get_visible(_layer_id);
    level_probe_layer_depths[_layer] = layer_get_depth(_layer_id);
    layer_set_visible(_layer_id, true);

    var _tilemap = layer_tilemap_create(
        _layer_id, 0, 0, TILES, level_probe_width, level_probe_height
    );
    if (_tilemap < 0) {
        level_probe_ok = false;
        level_probe_error = "Could not create tilemap: " + _tile_layer_names[_layer];
        exit;
    }
    level_probe_tilemaps[_layer] = _tilemap;
    tilemap_tileset(_tilemap, TILES);
    if (_layer == 0) level_probe_tilemap_uses_tileset = tilemap_get_tileset(_tilemap) == TILES;
    level_probe_layer_tilemap_exists[_layer] = layer_tilemap_get_id(_layer_id) != -1;

    var _tiles = level_probe_tiles[_layer];
    for (var _i = 0; _i < _cell_count; _i++) {
        var _tile = _tiles[_i];
        if (_tile != 0) {
            var _x = floor(_i / level_probe_height);
            var _y = _i mod level_probe_height;
            if (tilemap_set(_tilemap, _tile, _x, _y)) {
                level_probe_tile_set_successes[_layer]++;
            }
            if (tilemap_get(_tilemap, _x, _y) != 0) {
                level_probe_tile_readbacks[_layer]++;
            }
            if (level_probe_first_tiledata == 0) {
                level_probe_first_tiledata = _tile;
                level_probe_first_tile_index = tile_get_index(_tile);
                level_probe_first_tile_empty = tile_get_empty(_tile);
            }
        }
    }
}

// Match rmMAIN's empty sprite layers; only the 79 level objects remain unspawned.
layer_create(-15, "aFRONT");
layer_create(25, "aBACK");

var _instance_layer_id = layer_get_id("Instances");
level_probe_manual_tilemap = layer_tilemap_create(_instance_layer_id, 900, 705, TILES, 2, 1);
level_probe_manual_raw_set = false;
level_probe_manual_index_set = false;
level_probe_manual_raw_readback = 0;
level_probe_manual_index_readback = 0;
if (level_probe_manual_tilemap >= 0) {
    tilemap_tileset(level_probe_manual_tilemap, TILES);
    var _index_tiledata = tile_set_index(0, level_probe_first_tile_index);
    level_probe_manual_raw_set = tilemap_set(level_probe_manual_tilemap, level_probe_first_tiledata, 0, 0);
    level_probe_manual_index_set = tilemap_set(level_probe_manual_tilemap, _index_tiledata, 1, 0);
    level_probe_manual_raw_readback = tilemap_get(level_probe_manual_tilemap, 0, 0);
    level_probe_manual_index_readback = tilemap_get(level_probe_manual_tilemap, 1, 0);
}
