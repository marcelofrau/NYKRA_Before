"""Static checks for milestone 3.2b: the reconstructed map_load replaces the probe.

These tests read project files and fixtures only. They do not run GameMaker, so they do
not prove the level loads; the user's F5 run does.
"""
import re
import sys
import unittest
from pathlib import Path

TOOLS = Path(__file__).resolve().parent
sys.path.insert(0, str(TOOLS))
import generate_object_shells as shells  # noqa: E402
import generate_project_scripts as ported  # noqa: E402

REA = TOOLS.parent
PROJECT = REA / "GameMakerProject"


def load_yy(path):
    # GameMaker .yy files allow trailing commas, which json rejects.
    import json
    return json.loads(re.sub(r",(\s*[}\]])", r"\1", path.read_text(encoding="utf-8")))


def read(path):
    return path.read_text(encoding="utf-8")


def code(path):
    """GML source without // comments, so mentions in comments are not counted as calls."""
    return re.sub(r"//[^\n]*", "", read(path))


class PortedScriptsTests(unittest.TestCase):
    def test_project_scripts_are_the_generated_port_of_the_reconstruction(self):
        for name in ported.SCRIPTS:
            expected = ported.convert(name, read(ported.SOURCE / f"{name}.gml"))
            self.assertEqual(read(PROJECT / "scripts" / name / f"{name}.gml"), expected, name)
            self.assertEqual(load_yy(PROJECT / "scripts" / name / f"{name}.yy")["name"], name)

    def test_removed_legacy_functions_are_gone_from_project_scripts(self):
        for name in ported.SCRIPTS:
            text = code(PROJECT / "scripts" / name / f"{name}.gml")
            self.assertNotIn("array_get_2D", text)
            self.assertNotIn("array_length_1d", text)
        self.assertIn("map = [];", read(PROJECT / "scripts" / "map_load" / "map_load.gml"))

    def test_map_load_policy_edits_never_create_sprite_minus_one_nor_skip_unknown_payloads(self):
        text = read(PROJECT / "scripts" / "map_load" / "map_load.gml")
        sprite_guard = text.index("if (_aspr == -1 || asset_get_type(_aspr_name) != asset_sprite)")
        sprite_create = text.index("layer_sprite_create(_al_id, _ax, _ay, _aspr)")
        self.assertLess(sprite_guard, sprite_create)
        object_guard = text.index("if (_oidx == -1 || asset_get_type(_oname) != asset_object)")
        object_create = text.index("instance_create_depth(_ox, _oy, _odepth, _oidx)")
        self.assertLess(object_guard, object_create)
        self.assertEqual(text.count("show_debug_message("), 2)  # both skips are logged

    def test_project_scripts_registered_in_the_yyp(self):
        names = {r["id"]["name"] for r in load_yy(PROJECT / "NYKRA_VerticalSlice.yyp")["resources"]}
        for name in ported.SCRIPTS + ["provisional_stubs"]:
            self.assertIn(name, names)


class ProvisionalControllerTests(unittest.TestCase):
    def test_saves_stay_disabled_and_stubs_are_loud(self):
        create = read(PROJECT / "objects" / "oControl" / "Create_0.gml")
        self.assertIn("START_GAME = 0;", create)
        stubs = read(PROJECT / "scripts" / "provisional_stubs" / "provisional_stubs.gml")
        functions = re.findall(r"^function (\w+)\([^)]*\)", stubs, re.M)
        # Every stub declares its parameters (GM1019 rejects extra arguments otherwise).
        self.assertIn("function obj_setpos(_instance, _x, _y)", stubs)
        self.assertIn("function inv_add_obj(_item, _count, _instance)", stubs)
        self.assertEqual(
            sorted(functions),
            ["instance_create_one", "inv_add_obj", "load_game", "obj_setpos", "real_string", "save_game"],
        )
        self.assertEqual(stubs.count('show_debug_message("STUB '), len(functions))
        # No project code other than the stubs may define these names or write PROFILES.
        for path in PROJECT.glob("**/*.gml"):
            if path.name == "provisional_stubs.gml":
                continue
            text = read(path)
            self.assertNotIn("PROFILES", text, path)
            for name in functions:
                self.assertNotRegex(text, rf"^function {name}\(", path)

    def test_boot_loads_rmMal_origin_through_map_load_only(self):
        boot = code(PROJECT / "objects" / "oControl" / "Other_4.gml")
        self.assertIn('var _room_name = "rmMal_Origin";', boot)
        self.assertIn("map_load(_path, _room_name);", boot)
        self.assertNotRegex(boot, r"\b(load_game|save_game|map_save|buffer_load)\s*\(")

    def test_sound_placeholders_cover_every_sound_named_by_set_scene(self):
        create = read(PROJECT / "objects" / "oControl" / "Create_0.gml")
        scene = read(PROJECT / "scripts" / "_SET_SCENE" / "_SET_SCENE.gml")
        for sound in sorted(set(re.findall(r"\bsnd\w+", scene))):
            self.assertIn(f"{sound} = -1;", create, sound)

    def test_room_loads_through_oControl_and_has_the_layers_map_load_looks_up(self):
        room = load_yy(PROJECT / "rooms" / "rmMAIN" / "rmMAIN.yy")
        names = {layer["name"]: layer["resourceType"] for layer in room["layers"]}
        for tile_layer in ("tFRONT_over", "tFRONT", "tFRONT_bg", "tBACK_over", "tBACK", "tBACK_bg"):
            self.assertEqual(names[tile_layer], "GMRTileLayer")
        self.assertEqual(names["aFRONT"], "GMRAssetLayer")
        self.assertEqual(names["aBACK"], "GMRAssetLayer")
        instances = [i["objectId"]["name"] for l in room["layers"] if l["resourceType"] == "GMRInstanceLayer"
                     for i in l["instances"]]
        self.assertIn("oControl", instances)
        resources = {r["id"]["name"] for r in load_yy(PROJECT / "NYKRA_VerticalSlice.yyp")["resources"]}
        for probe in ("oLevelProbe", "oLeavesProbe"):
            self.assertNotIn(probe, instances)
            self.assertNotIn(probe, resources)
            self.assertFalse((PROJECT / "objects" / probe).exists(), probe)

    def test_leaves_use_the_reconstructed_parent_events_and_no_provisional_create(self):
        # oMal_Tree1 has no code of its own (its PreCreate is empty); the crown behaviour is parLeaves.
        tree = load_yy(PROJECT / "objects" / "oMal_Tree1" / "oMal_Tree1.yy")
        self.assertEqual(tree["spriteId"]["name"], "sMal_Tree_1l")
        self.assertEqual(tree["parentObjectId"]["name"], "parLeaves")
        self.assertEqual(tree["eventList"], [])
        self.assertFalse((PROJECT / "objects" / "oMal_Tree1" / "Create_0.gml").exists())
        parent = load_yy(PROJECT / "objects" / "parLeaves" / "parLeaves.yy")
        self.assertEqual(sorted((e["eventType"], e["eventNum"]) for e in parent["eventList"]),
                         [(0, 0), (1, 0), (3, 1), (8, 0)])  # Create, Destroy, Step_1, Draw

    def test_parLeaves_events_keep_the_constants_read_from_the_executable(self):
        create = code(PROJECT / "objects" / "parLeaves" / "Create_0.gml")
        self.assertIn("instance_create_depth(x, y, 27, oTemp_Back_Leaves)", create)
        self.assertIn("r = random(360);", create)
        step = code(PROJECT / "objects" / "parLeaves" / "Step_1.gml")
        self.assertIn("(tick * 4 + r + xstart + ystart) * 1.2", step)
        self.assertIn("otbl.y = ystart + 2;", step)
        draw = code(PROJECT / "objects" / "parLeaves" / "Draw_0.gml")
        self.assertEqual(draw.count("lengthdir_x(0.8,"), 4)
        for phase in ("_a - 40", "_a - 80", "_a - 120"):
            self.assertIn(phase, draw)
        self.assertIn("instance_destroy(otbl);", code(PROJECT / "objects" / "parLeaves" / "Destroy_0.gml"))
        control = code(PROJECT / "objects" / "oControl" / "Step_1.gml")
        self.assertIn("tick = tick_n+(get_timer()/1000000);", control)

    def test_pixel_art_is_not_interpolated(self):
        options = read(PROJECT / "options" / "windows" / "options_windows.yy")
        self.assertIn('"option_windows_interpolate_pixels":false', options)


class ShellObjectTests(unittest.TestCase):
    def setUp(self):
        self.names, self.obj_by_name = shells.shell_names(["rmMal_Origin"])

    def test_every_object_of_the_level_and_its_parents_has_an_object_resource(self):
        level = shells.level_objects(["rmMal_Origin"], self.obj_by_name)
        self.assertEqual(len(level), 17)
        project_objects = {p.name for p in (PROJECT / "objects").iterdir()}
        for name in shells.closure(level, self.obj_by_name):
            self.assertIn(name, project_objects, name)

    def test_payload_carrying_objects_keep_their_parent_chains(self):
        for name, chain in {
            "oMal_Door_Flat": ["parDoor_Flat", "parSAVE"],
            "oNote": ["parNote"],
            "oDoor_chunky": ["parWirePhysics", "parPhysics", "parEntity", "parObject"],
        }.items():
            current = name
            for parent in chain:
                yy = load_yy(PROJECT / "objects" / current / f"{current}.yy")
                self.assertEqual(yy["parentObjectId"]["name"], parent, f"{current} -> {parent}")
                current = parent

    def test_shells_copy_original_flags_and_have_no_events(self):
        for name in self.names:
            yy = load_yy(PROJECT / "objects" / name / f"{name}.yy")
            original = self.obj_by_name[name]
            self.assertEqual(yy["persistent"], original["Persistent"], name)
            self.assertEqual(yy["solid"], original["Solid"], name)
            self.assertEqual(yy["eventList"], [], f"{name}: a shell must not have events")
            self.assertIsNone(yy["spriteId"], f"{name}: a shell must not draw (it would animate by itself)")
            self.assertEqual(yy["parent"]["name"], "Shells")
            expected_parent = original.get("Parent")
            actual_parent = (yy["parentObjectId"] or {}).get("name")
            self.assertEqual(actual_parent, expected_parent, name)

    def test_objects_named_by_the_scripts_exist(self):
        for name in ("oPlayer", "oEo", "PATH", "oFade_in", "oSAVE_WIRE", "oAenox_bound", "oIs_Inside",
                     "oPlace_Player", "oSun_Mal", "oSun_Iie", "parLootable", "parDoor_out", "oBook", "oRoof_angle"):
            self.assertTrue((PROJECT / "objects" / name / f"{name}.yy").exists(), name)

    def test_hand_written_objects_are_not_shells(self):
        for name in sorted(shells.HAND_WRITTEN):
            yy = load_yy(PROJECT / "objects" / name / f"{name}.yy")
            if name != "oMal_Tree1":  # a plain child with a sprite and no events of its own
                self.assertTrue(yy["eventList"], f"{name} has hand-written events")
            self.assertEqual(yy["parent"]["name"], "Objects")


if __name__ == "__main__":
    unittest.main()
