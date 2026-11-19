// Reconstructed from gml_Script_playerhascontrol (NativeAnalysis/decompiled/player_lifted2).
// True when a player exists, has control, has physics and no UI is open.
function playerhascontrol() {
    if (instance_number(oPlayer) > 0) {
        if (oPlayer.control == 1 && oPlayer.physics == 1) {
            return oPlayer.UI_OPEN == 0;
        }
    }
    return false;
}
