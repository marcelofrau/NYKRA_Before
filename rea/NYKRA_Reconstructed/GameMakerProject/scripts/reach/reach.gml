// Reconstructed from gml_Script_reach @ 0x14003b450 (NativeAnalysis/decompiled/player_lifted2).
// Moves _value toward _goal by at most _step and never past it.
function reach(_value, _goal, _step) {
    if (_value == _goal) return _goal;
    if (_value >= _goal) return max(_value - _step, _goal);
    return min(_value + _step, _goal);
}
