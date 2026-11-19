// Reconstructed from gml_Object_parGrass_Draw_0 @ 0x140a69bb0 (NativeAnalysis/decompiled/lote1_lifted2;
// plan P19). With a player in the room the original runs, in this order:
//   1. the CUT branch: if player_attack_distance(x, y - 8, 18.5, 1, 0.1) (the player's attack hits the blade),
//      one frame in 21 it spawns an oToka, a rustle sound (sounds 150..155), 4 dust particles
//      and 16 oObject_Bits pieces, then destroys the blade. NOT reconstructed here: it needs the player's
//      attack (the Telarod), which does not exist yet, so it cannot trigger (plan P19, part b).
//   2. the spring of the blade: shake / tshake relax toward 0 (the divisor 9 and the damping 0.975 are read
//      from the executable);
//   3. walking through: while the player's box overlaps the blade, the blade takes the player's hsp.
// Then the plain drawing, the only part that runs without a player.
if (instance_number(oPlayer) > 0) {
    if (abs(tshake) > 0.00001 || abs(shake) > 0.00001) {
        tshake += -shake / 9;
        shake += tshake / 9;
        shake *= 0.975;
        tshake *= 0.975;
    }
    if (x + 2 > oPlayer.x1 && x - 2 < oPlayer.x2 && y - 8 < oPlayer.y2 && y - 8 > oPlayer.y1) {
        shake += oPlayer.hsp;
    }
}
draw_sprite_skew(sprite_index, image_index, x, y,
    shake + lengthdir_x(2.75, tick * 77 + xstart * 3 + ystart * 3));
