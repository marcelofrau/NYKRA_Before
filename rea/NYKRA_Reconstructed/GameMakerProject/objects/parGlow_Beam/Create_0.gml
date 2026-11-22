// Reconstructed from gml_Object_parGlow_Beam_Create_0 and the L/S child Create events.
// The light casts three rays down-right; each stops at the first solid tile.
var _off = 2;
if (object_index == oGlow_Beam_L) {
    _off = 13.5;
} else if (object_index == oGlow_Beam_S) {
    _off = 8.5;
}

sx1 = xstart - _off;
sxm = xstart;
sx2 = xstart + _off;
sy1 = ystart;
sym = ystart;
sy2 = ystart;

fx1 = sx1 + 1;
fy1 = sy1 + 1;
for (var _i = 0; _i < 128; _i++) {
    if (check_block(floor(fx1 / 16), floor(fy1 / 16)) == 1) break;
    fx1 += 1;
    fy1 += 1;
}

fxm = sxm + 1;
fym = sym + 1;
for (var _i = 0; _i < 128; _i++) {
    if (check_block(floor(fxm / 16), floor(fym / 16)) == 1) break;
    fxm += 1;
    fym += 1;
}

fx2 = sx2 + 1;
fy2 = sy2 + 1;
for (var _i = 0; _i < 128; _i++) {
    if (check_block(floor(fx2 / 16), floor(fy2 / 16)) == 1) break;
    fx2 += 1;
    fy2 += 1;
}
