// Closed, the slab sits exactly at its spawn point. It rises 44 px, enough for its 36 px
// body to clear the doorway and hide in the stone above without leaving the mountain.
if (power_on != dbg_power) {
    dbg_power = power_on;
    log_note("door: power_on=" + string(power_on) + " at (" + string(x) + "," + string(y) + ")");
}
y1 = by1 - anim * 44;
y2 = by2 - anim * 44;
x = mean(x1, x2);
y = mean(y1, y2);
