// Room Start of the PROVISIONAL oControl (plan section 7, P1): load rmMal_Origin through
// the reconstructed map_load, the way oControl/Other_4.gml does for a new game.
// Saves stay off (START_GAME = 0), so load_game() is never called.
if (boot_done) exit;
boot_done = true;

// The original calls set_game_screen at Game Start (oControl/Other_2.gml). It builds the camera, sets
// the window and creates oCamera when there is no player yet. With START_GAME = 0 the original keeps
// mode = 0, so oCamera runs its free-camera branch: W A S D scroll the view.
set_game_screen();

var _room_name = "rmMal_Origin";
var _path = working_directory + "level_data/" + _room_name + ".rmlvl";
if (!file_exists(_path)) {
    level_report = ["Level file not found: " + _path];
    log_note("oControl: " + level_report[0]);
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
// The milestone line "map_load: <room> ..." is logged by map_load itself (every load, not only the boot);
// the per-type breakdown only at LOG_LEVEL 2 (the overlay in Draw_64 shows the same list on screen).
for (var _l = 3; _l < array_length(level_report); _l++) log_verbose("oControl: " + level_report[_l]);

// PROVISIONAL (plan P21): nothing in the recovered code creates the player in a new game, and oOrigin
// (the wake-up cutscene) is not reconstructed, so the player starts where the original respawn puts him
// (oPlayer/Other_11.gml: oOrigin.x, oOrigin.y-32). mode = 3 is what the original sets for a new game;
// oCamera releases the player's control in any other mode and follows him in mode 3.
var _origin = instance_find(oOrigin, 0);
if (_origin != noone && instance_number(oPlayer) < 1) {
    instance_create_depth(_origin.x, _origin.y - 32, 0, oPlayer);
    mode = 3;
    oCamera.x = oPlayer.x;
    oCamera.y = oPlayer.y;
    oCamera.xx = oPlayer.x;
    oCamera.yy = oPlayer.y;
    camera_set_view_pos(cam, oPlayer.x - camera_get_view_width(cam) / 2, oPlayer.y - camera_get_view_height(cam) / 2);
    log_note("oControl: PROVISIONAL player created at the oOrigin position (P21)");
}
