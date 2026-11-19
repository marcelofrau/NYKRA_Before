// Reconstructed from gml_Object_parDoor_Flat_Step_1 (NativeAnalysis/decompiled/door_lifted; plan P31).
// The player opens the door by pressing "up" next to it; the arrival fade runs here too.
topen = open;
if (playerhascontrol() && instance_number(oPlayer) > 0) {
    var _d = point_distance(x, y - 8, oPlayer.x, oPlayer.y);
    if (_d < 15 && locked != 1 && oPlayer.control && oPlayer.kpu && open == 0 && oPlayer.UI_OPEN == 0 && anim <= 0) {
        open = 1;
        if (snd) {
            play_sound(sndMystic_ping, 7, 0, 1, 0.666667, 0);
        }
    }
}
if (fade_in == 2) {
    fade *= 0.8;
    if (fade < 0.01) {
        fade_in = 0;
        fade = 1;
    }
}
if (fade_in == 1) {
    fade = 300;
    fade_in = 2;
}
