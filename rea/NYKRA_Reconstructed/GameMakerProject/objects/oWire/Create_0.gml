// Reconstructed from gml_Object_oWire_Create_0 (NativeAnalysis/decompiled/small_lifted). Wire state and the
// two 4-element arrays: d (what each side receives; the pressure plate writes d[2]) and an (animation per side).
// The drawing (Draw_0) and the click sound (Draw_77) are not reconstructed yet (plan P34).
on = 0;
p_on = on;
anim = 0;
send = 0;
sfx = 0;
rand = random_range(0, 0.4);
for (var _i = 0; _i < 4; _i++) {
    d[_i] = 0;
    an[_i] = 0;
}
