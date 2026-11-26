// Reconstructed from gml_Object_oFade_in_Create_0 @ 0x14087d320 (NativeAnalysis/decompiled/fade_in_annotated), P40.
// Constants read from the exe: fps / 11 (_UNK_141987d48), depth -1011, alpha 1.12, objects 0x40 = oPlayer, 0x4e = oCamera, 0x4f = oControl.
// map_load sets colour = oControl.FADE_COLOUR right after creating this instance.
fade = 0;
alarm[0] = 2 + ceil(fps / 11);
depth = -1011;
alpha = 1.12;
colour = 0;
if instance_number(oPlayer) > 0 {
    if instance_number(oCamera) > 0 {
        // snap the camera to the map middle (the same block as Alarm_0)
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
