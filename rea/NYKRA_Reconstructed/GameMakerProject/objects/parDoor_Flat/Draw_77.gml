// Reconstructed from gml_Object_parDoor_Flat_Draw_77 (Post Draw; NativeAnalysis/decompiled/door_lifted;
// plan P31). Walking through the door: the player is frozen and the screen fades out; at the end the player
// remembers the door (door_n), the game is saved (save_game is a loud stub for now) and the level the
// door leads to is loaded. The next level places the player at the door with the same n (oPlayer Step_1).
// Deviation (plan P35): the original always finds the level file; here, when it is not in the project,
// the door logs it and gives the player back control instead of freezing the game.
if (in == 1) {
    oPlayer.control = 0;
    oPlayer.UI_OPEN = 1;
    fade *= 0.8;
    if (fade < 0.01) {
        oPlayer.door_n = n;
        in = 0;
        save_game();
        var _rm = rm;
        var _path = working_directory + "level_data/" + _rm + ".rmlvl";
        if (file_exists(_path)) {
            with (oControl) {
                map_load(_path, _rm);
            }
        } else {
            log_note("door: level file not found: " + _path);
            oPlayer.door_n = -1;
            oPlayer.control = 1;
            oPlayer.UI_OPEN = 0;
        }
        fade = 1;
    }
}
