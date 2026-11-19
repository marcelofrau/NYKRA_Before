// Reconstructed from gml_Object_oFx_Step_2 (NativeAnalysis/decompiled/fx_lifted).
// Falling with gravity (stopping on a solid tile when phys), the optional pull toward the player,
// friction, fading and the end of life. The player branch is not reconstructed (plan P30): its builtin
// calls are hidden behind function ids Ghidra lost. create_fx never sets player in the stage 1 events.
if (grv != 0) {
    add_grv += grv * GRV_SPD;
    y += add_grv;
    if (phys) {
        if (check_block(floor(x / 16), floor(yprevious / 16)) <= 0) {
            if (check_block(floor(x / 16), floor((y + add_grv) / 16)) != 0) {
                add_grv = 0;
                grv = 0;
                animate = 0;
            }
        }
    }
}
if (player == 1) {
    stub_log("oFx player branch", "the particle should steer toward the player (plan P30)");
}
speed *= fric;
image_alpha = alph;
if (fade > 0) alph *= 0.99 * fade;
if (fade_out) alph *= 0.9;
if (alph - 0.01 <= 0) {
    instance_destroy();
}
image_speed = animate;
if (sprite_index == sCloud_Puff) { // the original compares with the sprite index 392, sCloud_Puff in its asset order
    if (x < CX - 40) {
        instance_destroy();
    }
}
