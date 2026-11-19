// Reconstructed from gml_Object_parEntity_Step_1 (NativeAnalysis/decompiled/player_lifted2).
// Gravity, reset of the collision flags, and the map edges for an entity that left the map.
p_vsp = vsp;
if (do_grav == 1) vsp += GRV_SPD * grav;
p_onobject = onobject;
onsolid = 0;
onobject = 0;
col_l = 0;
col_r = 0;
col_t = 0;
col_b = 0;
if (vsp > 0) {
    if (y2 > oControl.mh * 16 - 1) {
        y2 = oControl.mh * 16;
        y1 = y2 - bh;
        vsp = 0;
    }
}
if (hsp < 0 && x1 < 0) {
    x1 = 0;
    x2 = x1 + bw;
    hsp = 0;
} else if (hsp > 0 && x2 > oControl.mw * 16 - 1) {
    x2 = oControl.mw * 16;
    x1 = x2 - bw;
    hsp = 0;
}
