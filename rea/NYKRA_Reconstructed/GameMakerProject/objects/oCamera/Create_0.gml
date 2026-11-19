// Create_0 copied unchanged from the original oCamera/Create_0.gml (plan section 7, P2).
// The other five oCamera events (Alarm_0, Alarm_1, Step_1, Step_2, Draw_75) are not imported
// yet because they need the unrecovered scripts reach and others, so the camera does not follow.
follow = noone;
if instance_number(oPlayer)>=1 follow = oPlayer;

globalvar cam_shake;
globalvar cam_push;
globalvar cam_p_dir;
cam_shake = 0;
cam_push = 0;
cam_p_dir = 0;

mv = 0;
mh = 0;

mx = mouse_x;
my = mouse_y;
alarm[1] = 3;
depth = -1000;
alarm[0] = 1;
mxt = 0;
myt = 0;

cpx = 0;
cpy = 0;
xx = 0;
yy = 0;
an = 1;

move = 0;
