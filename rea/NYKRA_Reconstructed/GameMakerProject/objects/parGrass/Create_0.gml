// Reconstructed from gml_Object_parGrass_Create_0 @ 0x140a67ac0 (NativeAnalysis/decompiled/lote1_lifted).
tshake = 0;
shake = 0;
image_index = random(100);
image_speed = 0;
// The decompilation writes wave = (instance_number(oIs_Inside) >= 1) here but
// wave = (instance_number(oIs_Inside) < 1) in Alarm_2, which runs one step later and wins.
// Kept as decompiled (plan section 7, P20).
wave = (instance_number(oIs_Inside) >= 1);
x1 = x - 8;
x2 = x + 8;
y1 = y - 16;
y2 = y + 0.5;
alarm[2] = 1;
// Grass colours per planet (decoded from the constants in the executable).
switch (CURRENT_PLANET) {
    case 0: // Maldis
        col1 = 5754965;   // $57d055
        col2 = 4560164;   // $459524
        break;
    case 1: // Mexulta
        col1 = 10909932;  // $a678ec
        col2 = 8597134;   // $832e8e
        break;
    case 4: // Septeon
        col1 = 15783214;  // $f0d52e
        col2 = 11429384;  // $ae6608
        break;
}
