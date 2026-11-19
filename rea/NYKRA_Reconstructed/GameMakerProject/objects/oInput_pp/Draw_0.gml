// Reconstructed from gml_Object_oInput_pp_Draw_0 (NativeAnalysis/decompiled/small_lifted): a pressure
// plate. It is pressed while any parEntity (object 45: the player, the boxes) overlaps its box; when the
// state changes it writes the new state to the wire under it (d[2] of the oWire at its position).
on = (collision_rectangle(bbox_left, bbox_top, bbox_right, bbox_bottom, parEntity, true, true) != noone);
if (_on != on) {
    var _wire = instance_place(x, y, oWire);
    if (_wire != noone) {
        _wire.d[2] = on;
    }
}
_on = on;
image_index = on;
draw_sprite(sprite_index, image_index, xstart - 1, ystart);
