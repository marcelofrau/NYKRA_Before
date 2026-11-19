// Reconstructed from gml_Script_box_inside_bound (NativeAnalysis/decompiled/player_lifted2).
// True when the entity's box overlaps the rectangle (_left, _top, _right, _bottom), edges excluded.
function box_inside_bound(_left, _top, _right, _bottom, _instance) {
    return _instance.x1 < _right && _instance.x2 > _left && _instance.y1 < _bottom && _instance.y2 > _top;
}
