// Reconstructed from gml_Object_oMal_bg_leaves_fg_Step_0 (lifted output in NativeAnalysis/decompiled/lote1_lifted).
// Parallax towards the camera centre, computed from the live camera view, plus a sway driven by tick.
var _cx = camera_get_view_x(cam);
var _cy = camera_get_view_y(cam);
var _cw = camera_get_view_width(cam);
var _ch = camera_get_view_height(cam);

var _a = -tick * 43 + xstart + ystart;
_x = xx + xstart + (mean(xstart, _cx + _cw / 2) - xstart) / 3.2 + lengthdir_x(2, _a);
_y = yy + ystart + ((mean(ystart, _cy + _ch / 2) - ystart) / 3.1) / 2 + lengthdir_y(1, _a);

image_angle = lengthdir_x(2, _a);
image_xscale = lengthdir_y(0.025, _a) + 1;
image_yscale = lengthdir_x(0.025, _a) + 1;
