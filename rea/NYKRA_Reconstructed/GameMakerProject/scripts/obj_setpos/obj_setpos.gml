// Reconstructed from gml_Script_obj_setpos (NativeAnalysis/decompiled/player_lifted2).
// Puts an entity at (_x, _y) and rebuilds its bounding box around it.
function obj_setpos(_instance, _x, _y) {
    _instance.x = _x;
    _instance.y = _y;
    _instance.x1 = _x - _instance.bwh;
    _instance.y1 = _y - _instance.bhh;
    _instance.x2 = _x + _instance.bwh;
    _instance.y2 = _y + _instance.bhh;
}
