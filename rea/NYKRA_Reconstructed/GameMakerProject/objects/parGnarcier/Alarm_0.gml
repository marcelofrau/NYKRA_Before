// Reconstructed from gml_Object_parGnarcier_Alarm_0 @ 0x14036ce90 (NativeAnalysis/decompiled/rmmal1_sun_annotated)
if choose(1, 1, 0) {
    if point_distance(x, y, CMX, CMY) < CHYP {
        play_sound_pos(choose(sndGnar_idle1, sndGnar_idle2, sndGnar_idle3, sndGnar_idle4), 0, 0,
            1 + random_range(-0.02, 0.02),
            (1.5/mean(1.5, 1, 1, point_distance(x, y,
                mean(camera_get_view_x(cam)+(camera_get_view_width(cam)/2), oPlayer.x),
                mean(camera_get_view_y(cam)+(camera_get_view_height(cam)/2), oPlayer.y))/2))/1.25,
            0, x, y);
    }
}
alarm[0] = ceil(irandom_range(120, 360)/1.5) + 1;
