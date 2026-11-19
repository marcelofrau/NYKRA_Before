// Reconstructed from gml_Script_check_array_cell @ 0x1401363e0 (NativeAnalysis/decompiled/arr_lifted).
// The map cell at tile coordinates (_tx, _ty), clamped to the map. The lower bound of both clamps
// is a runtime-initialised constant the executable does not hold (plan P12: assumed 0); the upper
// bounds are oControl.mw and oControl.mh (the map array is (mw+1) x (mh+1), see oControl Other_12).
function check_array_cell(_tx, _ty) {
    return map[clamp(_tx, 0, oControl.mw), clamp(_ty, 0, oControl.mh)];
}
