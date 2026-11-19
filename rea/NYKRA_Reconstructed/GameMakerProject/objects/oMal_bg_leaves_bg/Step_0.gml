// Reconstructed from gml_Object_oMal_bg_leaves_bg_Step_0 (lifted output in NativeAnalysis/decompiled/lote1_lifted).
// Parallax towards the camera centre (CMX, CMY) plus a gentle sway driven by tick.
var _a = -tick * 30 + xstart + ystart;
_x = xx + xstart + (CMX - xstart) / 2.5 + lengthdir_x(2.5, _a);
_y = yy + ystart + (CMY - ystart) / 2.5 + 32;

var _b = -tick * 27 + xstart + ystart;
image_angle = lengthdir_x(2, _b);
image_xscale = lengthdir_x(0.025, _b) + 1;
image_yscale = lengthdir_y(0.025, _b) + 1;
