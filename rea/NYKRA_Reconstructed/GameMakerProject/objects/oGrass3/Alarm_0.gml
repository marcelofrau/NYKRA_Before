// Reconstructed from gml_Object_oGrass3_Alarm_0 @ 0x140a77e30 (lifted output in NativeAnalysis/decompiled/lote1_lifted).
// Same neighbour rule as oGrass, looking for other oGrass3 (object 204), and it also sets flp = 1.
var _left = instance_place(x - 16, y, oGrass3) != noone;
var _right = instance_place(x + 16, y, oGrass3) != noone;
if (!_left && _right) {
    image_index = 3;
    flp = 1;
} else if (_left && !_right) {
    image_index = 4;
    flp = 1;
}
