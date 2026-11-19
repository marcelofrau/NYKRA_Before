// Reconstructed from gml_Object_oFx_Create_0 (NativeAnalysis/decompiled/fx_lifted). The small particle
// that create_fx spawns: dust, sparks, flashes. The first choice of the angle is a constant Ghidra lost
// (the other three are 90, 180, 270), taken as 0 (plan P30).
image_speed = random_range(0.75, 1.0123) * 1.5;
image_index = 0;
image_angle = choose(0, 90, 180, 270);
image_alpha = 1;
glow = 1;
player = 0;
fric = 1;
add = 0;
draw_end = 0;
fade = 0;
alph = 1;
animate = 1;
animate_loop = 0;
add_grv = 0;
grv = 0;
fade_out = 0;
phys = 0;
