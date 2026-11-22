// Reconstructed from gml_Object_oVIEW_CONSTRICT_Step_2 (NativeAnalysis/decompiled/small_lifted).
// In play (mode 3), once go = 1, the view is kept on one side of the line x (and of the line y): when the
// line is in the right half of the view the view's right edge cannot pass it, in the left half the view's
// left edge cannot pass it; the view eases a fifth of the way toward the constrained position each step.
// Not in play (editor modes) the line is drawn (visible) and does nothing. Two details kept from the
// original: the vertical test uses the view WIDTH (not the height) on the far edge, and the five-value
// mean weights the constrained position four times (C decompilation: four refs to local_140/local_130,
// one ref to the original view in local_b8/local_a8).
if (oControl.mode == 3) {
    if (go == 1) {
        var _vx = camera_get_view_x(cam);
        var _vy = camera_get_view_y(cam);
        var _vw = camera_get_view_width(cam);
        var _vh = camera_get_view_height(cam);
        var _nx = _vx;
        var _ny = _vy;
        if (_vx + _vw / 2 <= x) {
            if (_vx < x) {
                if (_vx + _vw >= x) _nx = min(x - _vw, _vx);
            }
        } else {
            if (_vx <= x) _nx = max(x, _vx);
        }
        if (_vy + _vh / 2 <= y) {
            if (_vy < y) {
                if (_vy + _vw >= y) _ny = min(y - _vh, _vy);
            }
        } else {
            if (_vy <= y) _ny = max(y, _vy);
        }
        camera_set_view_pos(cam, mean(_nx, _nx, _nx, _nx, _vx), mean(_ny, _ny, _ny, _ny, _vy));
    }
    visible = false;
} else {
    go = 0;
    alarm[0] = 6;
    visible = true;
}
