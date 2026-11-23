// Reconstructed from gml_Object_oDoor_chunky_Draw_0 @ 0x1411eb790
// (NativeAnalysis/decompiled/chunky_annotated).
// anim advances with reach() (not lerp()), plays a looping stone-grind sound (sndDoor_stonebig1/2)
// while moving and fades it out over 200 ms on arrival. The 3 slab frames telescope upward:
// frame 0 rises immediately at y, frame 1 waits 6 px at ystart, frame 2 waits 12 px at ystart.
// Finally x/y return to xstart/ystart so oWire at depth -60 still overlaps the door's mask.

draw_set_alpha(1);

if (power_on || power_on_t) {
    anim = reach(anim, 1, mean(abs(1 - anim) / 12, 0.02) / 2);
    if (snd == -4 && anim != power_on) {
        snd = play_sound_pos(choose(sndDoor_stonebig1, sndDoor_stonebig2), 10, 1, random_range(1, 1.05) * 0.89, 1.0 / 6.0, 400, x, y);
    }
} else {
    anim = reach(anim, 0, mean(abs(0 - anim) / 6, 0.02));
    if (snd == -4 && anim != power_on) {
        snd = play_sound_pos(choose(sndDoor_stonebig1, sndDoor_stonebig2), 10, 1, random_range(1, 1.05) * 0.89, 1.0 / 6.0, 400, x, y);
    }
}

if (anim == power_on && snd != -4) {
    audio_sound_gain(snd, 1.0 / 6.0, 0);
    audio_sound_gain(snd, 0, 200);
    snd = -4;
}

draw_sprite(sprite_index, 0, x, y);
draw_sprite(sprite_index, 1, x, min(y + 6, ystart));
draw_sprite(sprite_index, 2, x, min(y + 12, ystart));

x = xstart;
y = ystart;
