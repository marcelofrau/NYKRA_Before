// Reconstructed from gml_Object_oOrigin_Step_1 @ 0x140a01ab0 (NativeAnalysis/decompiled/oorigin).
// Horizontal parallax for the arch (sOrigin): _UNK_141987d40 = 9.0.
// The rest of Step_1 only runs during the intro cutscene (game_start == 1), still pending (P21).
var _cx = camera_get_view_x(cam);
var _cw = camera_get_view_width(cam);
_x = xstart + (mean(xstart, _cx + _cw / 2) - xstart) / 9;
