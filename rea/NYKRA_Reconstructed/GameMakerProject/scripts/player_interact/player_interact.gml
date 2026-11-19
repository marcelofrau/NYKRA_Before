// Reconstructed from gml_Script_player_interact (NativeAnalysis/decompiled/player_lifted2).
// True when the player is within _radius of (_x, _y) and, depending on _mode: 0 = just near,
// 1 = near and the "up" key was pressed this step. _force = 0 asks even when the player has no
// control (UI open or control off); with _force != 0 the answer is false in that case.
function player_interact(_x, _y, _radius, _mode, _force) {
    var _has_control = (oPlayer.UI_OPEN == 0 && oPlayer.control == 1);
    if (!_has_control && _force != 0) return 0;
    if (point_distance(_x, _y, oPlayer.x, oPlayer.y) < _radius) {
        if (_mode == 0) return 1;
        if (_mode == 1) return keyboard_check_pressed(global.kku);
    }
    return 0;
}
