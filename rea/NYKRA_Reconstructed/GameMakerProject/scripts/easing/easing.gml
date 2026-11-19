// PARTIAL reconstruction of gml_Script_easing (plan P25). The original is a library of 30 easing curves
// (type 0..29 = the ten Penner families Quad, Cubic, Quart, Quint, Sine, Expo, Circ, Back, Elastic,
// Bounce, each In / Out / InOut) behind a jump table at 0x140084be8. Only type 14 is reconstructed:
// it is the player's jump curve, and its code (0x140064dd8) is "-c / 2 * (cos(pi * t / d) - 1) + b",
// ease in-out sine; the three constants (pi, 2.0, -1.0) were read from the executable.
// Any other type logs a STUB line and returns the time unchanged.
function easing(_type, _t, _b, _c, _d) {
    if (_type == 14) {
        return -_c / 2 * (cos(pi * _t / _d) - 1) + _b;
    }
    stub_log("easing type " + string(_type), "only type 14 (in-out sine) is reconstructed (P25)");
    return _t;
}
