// Reconstructed from gml_Script_check_block @ 0x14012cc90 (NativeAnalysis/decompiled/player_lifted2).
// Column 1 of the tile table map_id for the cell at tile coordinates (_tx, _ty):
// 1 = solid, 2 = jump-through (the values ARRAY_COLLIDE tests).
function check_block(_tx, _ty) {
    return map_id[check_array_cell(_tx, _ty), 1];
}
