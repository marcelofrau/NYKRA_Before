// PROVISIONAL (plan P24). The original gml_Object_parEntity_Step_2 has the script COLLIDE inlined:
// entity-versus-object collision (solid objects, water, moving platforms) that is not reconstructed.
// What follows is the part of the original that does not need it: an entity with collide_object = 0
// and motion = 1 just moves its box. With collide_object = 1 (the player) it does nothing here, and
// the tile collision comes from ARRAY_COLLIDE, called by the player's Step_0.
if (!collide_object) {
    if (motion) {
        y1 += vsp;
        y2 += vsp;
        x1 += hsp;
        x2 += hsp;
    }
}
