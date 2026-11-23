// Reconstructed from gml_Object_oDoor_chunky_Step_1 @ 0x1411e9e10
// (NativeAnalysis/decompiled/chunky_lifted). The slab rises 34 px as anim goes 0 -> 1.
if (power_on != dbg_power) {
    dbg_power = power_on;
    log_note("door: power_on=" + string(power_on) + " at (" + string(x) + "," + string(y) + ")");
}
y1 = by1 - anim * 34;
y2 = by2 - anim * 34;
event_inherited();
y1 = by1 - anim * 34;
y2 = by2 - anim * 34;
// parEntity/Step_0 is not reconstructed yet; keep x/y synced with the box so Draw_0 draws at the raised y.
x = mean(x1, x2);
y = mean(y1, y2);
