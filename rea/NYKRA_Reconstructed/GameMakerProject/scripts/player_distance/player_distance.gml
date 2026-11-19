// Reconstructed from gml_Script_player_distance (NativeAnalysis/decompiled/player_lifted2):
// true when the player is closer than _radius to the point (_x, _y).
function player_distance(_x, _y, _radius) {
    return point_distance(_x, _y, oPlayer.x, oPlayer.y) < _radius;
}
