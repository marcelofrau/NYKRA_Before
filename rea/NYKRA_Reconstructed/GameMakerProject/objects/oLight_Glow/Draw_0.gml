// Reconstructed from gml_Object_oLight_Glow_Draw_0 @ 0x1408f3460 (NativeAnalysis/decompiled/rmmal1_sun_annotated).
// A warm additive glow with a slow pulse; LIGHTING/Draw_73 also cuts a radius-64 hole in its dark mask here.
gpu_set_blendmode(bm_add);
draw_circle_colour(x, y, 33 + lengthdir_x(0.5, (tick * 123) + x + y + xstart + ystart), make_colour_rgb(56, 36, 21), c_black, false);
gpu_set_blendmode(bm_normal);
