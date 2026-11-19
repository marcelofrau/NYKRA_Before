// Reconstructed from gml_Script_sleep (NativeAnalysis/decompiled/player_lifted2): freezes the game
// for _ms milliseconds by spinning on current_time (the original does the same).
function sleep(_ms) {
    var _end = current_time + _ms;
    while (current_time < _end) {
    }
}
