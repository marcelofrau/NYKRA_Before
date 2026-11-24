// Reconstructed from gml_Object_parGnarcier_Create_0 @ 0x14036aeb0 (NativeAnalysis/decompiled/rmmal1_sun_annotated)
hit_ang = 0;
anim = 1;
anim1 = irandom_range(15, 21);
if instance_number(DRAW_GNARCIER) < 1 {
    instance_create_depth(1, 1, -32, DRAW_GNARCIER);
}
draw_me = 1;
alarm[0] = irandom_range(30, 120);
randomize();
r = random_range(-360, 360);
depth = -100;
x = round(x);
y = round(y);
has_spikes = 1;
x1 = x - sprite_get_width(mask_index)/2;
y1 = y - sprite_get_height(mask_index)/2;
x2 = x + sprite_get_width(mask_index)/2;
y2 = y + sprite_get_height(mask_index)/2;
f_ = choose(-1, 1);
f__ = choose(-1, 1);
r__ = choose(0, 90, 180, 270);
image_xscale = f_;
image_yscale = f__;
image_angle = r__;
