// Reconstructed from gml_Object_parLeaves_Step_1 @ 0x140363dd0 (lifted output in
// NativeAnalysis/decompiled/lote1_lifted). tick is the global time in seconds.
// lengthdir_x is assumed to be cos (see NativeAnalysis/YYC_HELPERS.md); r makes each tree sway out of phase.
var _t = (tick * 4 + r + xstart + ystart) * 1.2;

image_angle = lengthdir_x(3, _t * 11) * 0.5;
image_xscale = lengthdir_x(0.02, _t * 8) * 0.5 + 1;
image_yscale = lengthdir_y(-0.02, _t * 8) * 0.5 + 1;
xx = lengthdir_x(1, _t * 10) * 0.125;
yy = lengthdir_y(0.5, _t * 9) * 0.125;

if (instance_exists(otbl)) {
    otbl.image_angle = lengthdir_x(-3, _t * 11 + 90) * 0.25;
    otbl.image_xscale = lengthdir_x(-0.05, _t * 8 + 90) / 6 + 1;
    otbl.image_yscale = lengthdir_y(0.05, _t * 7 + 90) / 6 + 1;
    otbl.x = xstart;
    otbl.y = ystart + 2;
}
