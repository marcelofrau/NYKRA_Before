// Reconstructed from gml_Object_oFade_in_Alarm_0 @ 0x14087f960 (NativeAnalysis/decompiled/fade_in_annotated), P40.
// Starts the fade (Draw_73 multiplies alpha by 0.9 while fade is set) and repeats the camera snap of Create_0.
fade = 1;
alpha = 1;
depth = -1011;
if instance_number(oPlayer) > 0 {
    if instance_number(oCamera) > 0 {
        with(oControl) {
            oCamera.x = mean(oCamera.x, mw*8);
            oCamera.y = mean(oCamera.y, mh*8);
            oCamera.xx = mean(oCamera.xx, mw*8);
            oCamera.yy = mean(oCamera.yy, mh*8);
            camera_set_view_pos(cam, oCamera.x - camera_get_view_width(cam)/2, oCamera.y - camera_get_view_height(cam)/2);
            oCamera.mv = 0;
            oCamera.mh = 0;
            oCamera.alarm[0] = 1;
        }
    }
}
