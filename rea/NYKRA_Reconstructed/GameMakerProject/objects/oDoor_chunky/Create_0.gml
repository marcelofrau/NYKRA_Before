// Reconstructed from gml_Object_oDoor_chunky_Create_0: a 16x36 stone slab whose
// collision box rises 34 px as anim approaches 1. Parent events supply entity defaults.
event_inherited();

bw = 16;
bh = 36;
bwh = bw / 2;
bhh = bh / 2;
bx1 = x - bwh;
by1 = y - bhh;
bx2 = x + bwh;
by2 = y + bhh;
x1 = bx1;
y1 = by1;
x2 = bx2;
y2 = by2;

snd = -4;
tog = 0;
grav = 0;
bounce = 0;
collide_object = 0;
physics = 0;
do_fric = 0;
do_grav = 0;
motion = 0;
power_on_t = 0;
anim = 0;
power_on = 0;
dbg_power = 0;  // debug only: last power_on already logged in Step_1
