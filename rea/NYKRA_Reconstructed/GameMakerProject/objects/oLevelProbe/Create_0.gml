level_probe_ok = false;
level_probe_error = "";
level_probe_width = 0;
level_probe_height = 0;
level_probe_grid = [];
level_probe_tile_counts = array_create(6, 0);
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
    for (var _i = 0; _i < _cell_count; _i++) {
        if (buffer_read(_b, buffer_u16) != 0) _nonzero++;
    }
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
