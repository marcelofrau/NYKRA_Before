// Reconstructed from gml_Script_check_array @ 0x14012bed0 (NativeAnalysis/decompiled/arr_lifted).
// The map cell under the pixel position (_px, _py). Same clamps as check_array_cell (plan P12).
function check_array(_px, _py) {
    return map[clamp(floor(_px / 16), 0, oControl.mw), clamp(floor(_py / 16), 0, oControl.mh)];
}
