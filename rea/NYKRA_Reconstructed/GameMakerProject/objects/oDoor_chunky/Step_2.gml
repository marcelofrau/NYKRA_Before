// P24 is not ported, so block the player against the slab here. End Step runs after the
// player's movement; the box itself is raised in Step_1.
if (instance_exists(oPlayer)) {
    var _p = oPlayer;
    if (_p.x2 > x1 && _p.x1 < x2 && _p.y2 > y1 && _p.y1 < y2) {
        if (_p.x <= x) {
            _p.x2 = x1;
            _p.x1 = _p.x2 - _p.bw;
            _p.col_l = 1;
        } else {
            _p.x1 = x2;
            _p.x2 = _p.x1 + _p.bw;
            _p.col_r = 1;
        }
        _p.hsp = 0;
    }
}
