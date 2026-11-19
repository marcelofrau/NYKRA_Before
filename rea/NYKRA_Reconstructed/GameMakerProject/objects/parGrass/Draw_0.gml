// PARTIALLY reconstructed from gml_Object_parGrass_Draw_0 @ 0x140a69bb0 (plan section 7, P19).
// The original starts with: if (instance_number(oPlayer) > 0) { ...interaction with the player... }
// and jumps to the plain drawing below when there is no player. That interaction branch (about 500 lifted
// lines: pushes the player's hsp/vsp, shakes the blade, creates particles with scripts that are not
// reconstructed) is NOT here; the branch only runs once oPlayer exists.
// Plain drawing, copied from the end of the lifted code:
draw_sprite_skew(sprite_index, image_index, x, y,
    shake + lengthdir_x(2.75, tick * 77 + xstart * 3 + ystart * 3));
