// Room Start of the PROVISIONAL oControl (plan section 7, P1): load rmMal_Origin through
// the reconstructed map_load, the way oControl/Other_4.gml does for a new game.
// Saves stay off (START_GAME = 0), so load_game() is never called.
if (boot_done) exit;
boot_done = true;

if (!instance_exists(oCamera)) instance_create_depth(0, 0, -1000, oCamera);

var _room_name = "rmMal_Origin";
var _path = working_directory + "level_data/" + _room_name + ".rmlvl";
if (!file_exists(_path)) {
    level_report = ["Level file not found: " + _path];
    show_debug_message("oControl: " + level_report[0]);
    exit;
}

map_load(_path, _room_name);

// Report what map_load created, grouped by object type.
var _counts = ds_map_create();
for (var _i = 0; _i < ds_list_size(obj_list); _i++) {
    var _inst = ds_list_find_value(obj_list, _i);
    if (instance_exists(_inst)) {
        var _name = object_get_name(_inst.object_index);
        _counts[? _name] = (ds_map_exists(_counts, _name) ? _counts[? _name] : 0) + 1;
    }
}
level_report = [
    "map_load: " + CURRENTROOM + " " + string(mw) + "x" + string(mh) + " planet " + string(planet),
    "objects in obj_list: " + string(ds_list_size(obj_list)) + " (declared in the level file: see log)",
    "decorative sprites aFRONT/aBACK: " + string(ds_list_size(asset_list[0])) + "/" + string(ds_list_size(asset_list[1]))
];
var _key = ds_map_find_first(_counts);
while (!is_undefined(_key)) {
    array_push(level_report, "  " + _key + " x" + string(_counts[? _key]));
    _key = ds_map_find_next(_counts, _key);
}
ds_map_destroy(_counts);
for (var _l = 0; _l < array_length(level_report); _l++) show_debug_message("oControl: " + level_report[_l]);
