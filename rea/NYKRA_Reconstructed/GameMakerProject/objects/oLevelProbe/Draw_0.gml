draw_set_alpha(1);
draw_set_color(c_white);

if (!level_probe_ok) {
    draw_set_color(c_red);
    draw_text(16, 16, "Level probe failed");
    draw_text(16, 40, level_probe_error);
    exit;
}

var _x0 = 690;
var _y0 = 125;
var _cell = 10;
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

draw_set_color(make_colour_rgb(35, 38, 48));
draw_rectangle(_x0, _y0, _x0 + level_probe_width * _cell, _y0 + level_probe_height * _cell, false);
for (var _y = 0; _y < level_probe_height; _y++) {
    for (var _x = 0; _x < level_probe_width; _x++) {
        var _value = level_probe_grid[_y * level_probe_width + _x];
        if (_value != 0) {
            if (_value == 1) draw_set_color(make_colour_rgb(116, 190, 132));
            else if (_value == 2) draw_set_color(make_colour_rgb(106, 151, 212));
            else draw_set_color(make_colour_rgb(224, 169, 86));
            draw_rectangle(_x0 + _x * _cell, _y0 + _y * _cell,
                _x0 + (_x + 1) * _cell - 1, _y0 + (_y + 1) * _cell - 1, false);
        }
    }
}

draw_set_color(c_white);
draw_rectangle(_x0, _y0, _x0 + level_probe_width * _cell, _y0 + level_probe_height * _cell, true);
