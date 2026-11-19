// Reconstructed from gml_Object_oGrass_Alarm_0 @ 0x140a74c70 (lifted output in NativeAnalysis/decompiled/lote1_lifted).
// A blade with a neighbour on one side only uses the edge frame: 4 with a left neighbour, 3 with a right one.
var _left = instance_place(x - 16, y, oGrass) != noone;
var _right = instance_place(x + 16, y, oGrass) != noone;
if (_left && !_right) {
    image_index = 4;
} else if (!_left && _right) {
    image_index = 3;
}
