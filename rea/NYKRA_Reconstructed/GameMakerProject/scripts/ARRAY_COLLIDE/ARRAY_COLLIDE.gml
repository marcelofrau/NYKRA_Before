// Reconstructed from gml_Script_ARRAY_COLLIDE (NativeAnalysis/decompiled/phase1_annotated, read against
// phase1_lifted and the commented older version in oPlayer/Step_0.gml). Tile collision of an entity
// against the map grid: moves x1/y1/x2/y2 by hsp/vsp and stops at solid tiles. Runs in the entity.
// Tile classes come from map_id[cell, 1]: 1 solid, 2 jump-through (jt_col). Confidence notes:
//   - the builtins that Ghidra lost behind a function index are inferred from the older GML:
//     floor() for tile coordinates, ceil() in the jump-through test, max()/min() for the clamps.
//   - FUN_141944a50(v, 16) is taken as fmod(v, 16): "v is on a tile boundary".
//   - the comparisons carry GameMaker's own epsilon, so plain GML operators are the same test.
//   - plan P12: check_array_cell clamps with a lower bound of 0 (runtime-initialised constant).
function ARRAY_COLLIDE() {
    // keep the box inside the map, 2 px from the edges
    x1 = max(x1, 2);
    x2 = x1 + bw;
    x2 = min(x2, oControl.mw * 16 - 2);
    x1 = x2 - bw;
    y2 = min(y2, oControl.mh * 16 - 2);
    y1 = y2 - bh;

    // tiles the box would reach after this step
    var _fx1 = floor((x1 + hsp) / 16);
    var _fy1 = floor((y1 + vsp) / 16);
    var _fx2 = floor((x2 + hsp) / 16);
    var _fy2 = floor((y2 + vsp) / 16);
    // rows used when moving sideways: a box edge exactly on a tile boundary belongs to the tile inside it
    var _row_top = floor((y1 + (abs(y1 mod 16) <= 0.00001 ? 1 : 0)) / 16);
    var _row_bot = floor((y2 - (abs(y2 mod 16) <= 0.00001 ? 1 : 0)) / 16);

    // ---- horizontal ----
    var _hit_l = false;
    if (x1 < 0) {
        _hit_l = true;
    } else if (floor((x1 - hsp) / 16) > _fx1) { // moving left across a tile boundary
        if (check_block(_fx1, _row_top) == 1 || check_block(_fx1, _row_bot) == 1) _hit_l = true;
        else if (bh > 15 && check_block(_fx1, floor(y / 16)) == 1) _hit_l = true;
    }
    if (_hit_l) {
        x1 = (_fx1 + 1) * 16;
        x2 = x1 + bw;
        hsp = 0;
        col_l = 1;
    } else {
        var _hit_r = false;
        if (x2 > oControl.mw * 16) {
            _hit_r = true;
        } else if (floor((x2 - hsp) / 16) < _fx2) { // moving right across a tile boundary
            if (check_block(_fx2, _row_top) == 1 || check_block(_fx2, _row_bot) == 1) _hit_r = true;
            else if (bh > 15 && check_block(_fx2, floor(y / 16)) == 1) _hit_r = true;
        }
        if (_hit_r) {
            x2 = _fx2 * 16;
            x1 = x2 - bw;
            hsp = 0;
            col_r = 1;
        } else {
            x1 += hsp;
            x2 += hsp;
        }
    }

    // ---- vertical ----
    var _col_l = floor((x1 + (abs(x1 mod 16) <= 0.00001 ? 1 : 0)) / 16);
    var _col_r = floor((x2 - (abs(x2 mod 16) <= 0.00001 ? 1 : 0)) / 16);
    var _vdone = false;
    if (floor((y1 - vsp) / 16) > _fy1) { // moving up across a tile boundary
        var _hit_t = false;
        if (check_block(_col_l, _fy1) == 1 || check_block(_col_r, _fy1) == 1) _hit_t = true;
        else if (bw > 15 && check_block(floor(x / 16), _fy1) == 1) _hit_t = true;
        if (_hit_t) {
            y1 = (_fy1 + 1) * 16;
            y2 = y1 + bh;
            vsp = 0;
            col_t = 1;
            _vdone = true;
        }
    }
    if (!_vdone) {
        var _prev_y2 = floor((y2 - vsp) / 16);
        if (_prev_y2 < _fy2) { // moving down across a tile boundary
            var _hit_b = false;
            if (check_block(_col_l, _fy2) == 1 || check_block(_col_r, _fy2) == 1) _hit_b = true;
            else if (bw > 15 && check_block(floor(x / 16), _fy2) == 1) _hit_b = true;
            if (_hit_b) {
                y2 = _fy2 * 16;
                y1 = y2 - bh;
                vsp = 0;
                col_b = 1;
                onsolid = 1;
                _vdone = true;
            }
        }
        if (!_vdone && jt_col == 1 && _prev_y2 < _fy2
            && (check_block(_col_l, _fy2) == 2 || check_block(_col_r, _fy2) == 2)
            && ceil(y2 / 16) != ceil((y2 + vsp) / 16)) { // jump-through tile: land only from above
            y2 = _fy2 * 16;
            y1 = y2 - bh;
            onsolid = 1;
            vsp = 0;
            onJT = 1;
            _vdone = true;
        }
        if (!_vdone) {
            y1 += vsp;
            y2 += vsp;
        }
    }

    // keep the box inside the map again, 4 px from the edges
    x1 = max(x1, 4);
    x2 = x1 + bw;
    x2 = min(x2, oControl.mw * 16 - 4);
    x1 = x2 - bw;
    y2 = min(y2, oControl.mh * 16 - 4);
    y1 = y2 - bh;

    // what the entity stands on, and the damaging tile 19
    if (onsolid) {
        hit_id = map[floor(x / 16), floor((y2 + 1) / 16)];
        onblock_id = hit_id;
        if (object_index == oPlayer) {
            if (onblock_id == 19 || hit_id == 19
                || check_array(x1 - 2, mean(y, y2)) == 19 || check_array(x2 + 2, mean(y, y2)) == 19) {
                hurt_player(1, x + facing * 16, y + 8, choose(145, 146, 147, 148));
            }
        }
    }

    // standing inside a solid tile: nudge up
    var _sx1 = floor((x1 + 1) / 16);
    var _sx2 = floor((x2 - 1) / 16);
    var _sy2 = floor((y2 - 1) / 16);
    if (check_block(_sx1, _sy2) == 1 || check_block(floor(mean(x1, x2) / 16), _sy2) == 1 || check_block(_sx2, _sy2) == 1) {
        y1 -= 0.5;
        y2 -= 0.5;
        vsp = -0.5;
    }
}
