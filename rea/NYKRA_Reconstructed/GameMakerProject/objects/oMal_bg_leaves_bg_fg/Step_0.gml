// Reconstructed from gml_Object_oMal_bg_leaves_bg_fg_Step_0 (lifted output in NativeAnalysis/decompiled/lote1_lifted).
// Unlike its siblings, the sway of the position follows the camera centre (-CMX, -CMY), not tick.
var _ax = -CMX * 27 + xstart + ystart;
_x = xx + xstart - (mean(xstart, CMX) - xstart) / (1.8 * rr) + lengthdir_x(1, _ax);
var _ay = -CMY * 27 + xstart + ystart;
_y = yy + ystart - ((mean(ystart, CMY) - ystart) / (1.7 * rr)) / (1.45 * rr) + lengthdir_y(0.5, _ay);

var _b = -tick * 27 + xstart + ystart;
image_angle = lengthdir_x(2, _b);
image_xscale = lengthdir_x(0.025, _b) + 1;
image_yscale = lengthdir_y(0.025, _b) + 1;
