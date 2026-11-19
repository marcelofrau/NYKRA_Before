// Reconstructed from gml_Script_instance_create_one (NativeAnalysis/decompiled/player_lifted2).
// Creates the object only when no instance of it exists; otherwise returns 0 (as the original does).
function instance_create_one(_x, _y, _depth, _object) {
    if (instance_number(_object) < 1) {
        return instance_create_depth(_x, _y, _depth, _object);
    }
    return 0;
}
