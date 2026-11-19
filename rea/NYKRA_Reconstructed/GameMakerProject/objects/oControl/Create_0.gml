// PROVISIONAL minimal oControl (MASTER_RECONSTRUCTION_PLAN.md section 7, row P1).
// It only provides what the reconstructed map_load / clear_objects / _SET_SCENE /
// reset_files read from oControl. The original oControl (editor, UI, music, saves)
// replaces this object in Phase 4 "Base global". Values are copied from the
// original oControl/Create_0.gml unless a comment says otherwise.

START_GAME = 0;            // P6: load_game/save_game stay disabled (old save format)
game_start = START_GAME;
CONTROL_MODE = 0;
planet = 0;
horizon = 0;
map_n = 0;
mode = 0;
DIALOGUE_OPEN = 0;
FADE_COLOUR = c_black;
// Read by the original oPlayer events (player stage 1), copied from oControl/Create_0.gml.
anim1 = 0;
game_dialogue = START_GAME;
EO_SPAWN = 0;
GAME_CHAPTER[0,0] = 0;
GAME_CHAPTER[0,1] = 0;
GAME_CHAPTER[0,2] = 0;
GAME_CHAPTER[0,3] = 0;
GAME_CHAPTER[0,4] = 0;
GAME_CHAPTER[0,5] = 0;
GAME_CHAPTER[1,0] = 0;
GAME_CHAPTER[1,1] = 0;
GAME_CHAPTER[1,2] = 0;
GAME_CHAPTER[1,3] = 0;
GAME_CHAPTER[1,4] = 0;
GAME_CHAPTER[1,5] = EO_SPAWN;
GAME_CHAPTER[2,0] = 0;
GAME_CHAPTER[3,0] = 0;
GAME_CHAPTER[3,1] = 0;
GAME_CHAPTER[4,0] = 0;

globalvar CURRENT_PLANET;
CURRENT_PLANET = 0;
globalvar GRV_SPD;
GRV_SPD = 0.218;
globalvar CURRENTROOM;
CURRENTROOM = "";

// Camera view and its centre, refreshed by Draw_0.gml (original oControl/Create_0.gml lines 85-113).
globalvar CX;
globalvar CY;
globalvar CW;
globalvar CH;
globalvar CMX;
globalvar CMY;
CX = 0;
CY = 0;
CW = 0;
CH = 0;
CMX = 0;
CMY = 0;

// Global clock in seconds, used by the leaves and the grass (see Step_1.gml).
globalvar tick;
globalvar tick360;
tick = random(1000.0000);
tick_n = random(1000);
tick360 = irandom(360);
globalvar map;
globalvar obj_list;
globalvar map_id;

// Camera read by map_load, oCamera and the leaves. In the original it is a GLOBAL variable (the
// decompiled leaves read it from the global scope); set_game_screen (called in Other_4) creates it.
globalvar cam;
cam = -1;

// Settings read from the original "config" file (original oControl/Create_0.gml lines 474-487).
globalvar SOUND_VOLUME;
SOUND_VOLUME = (config_get("Settings","Volume",1)/100);
global.SHAKE = (config_get("Settings","Shake",1)/100);
global.CONTROLS = round(real(config_get("Settings","Controls",1)));
global.kkl = vk_left;
global.kkr = vk_right;
global.kku = vk_up;
global.kkj = vk_space;
global.kkd = vk_down;
global.key_aenox = (ord("A"));
global.key_telarod = (ord("S"));
global.key_eo = (ord("F"));
global.key_inv = (ord("E"));

collision_list = [];
collision_list[0] = noone;

// Level file list (reset_files) and the current file name map_load updates.
file = ds_list_create();
reset_files();
file_sel = 0;
file_current = "NEW_LEVEL";
file_input = 0;

MUSIC[0] = -1;   // background music
MUSIC[1] = -1;   // ambience fx
MUSIC[2] = -1;   // ambience bg

// Layer names used by map_load.
_layer = ["tFRONT_over", "tFRONT", "tFRONT_bg", "tBACK_over", "tBACK", "tBACK_bg"];
asset_layer = ["aFRONT", "aBACK"];
asset_list = [ds_list_create(), ds_list_create()];

// P8: no sound assets exist in the project yet. _SET_SCENE reads these names inside
// with (oControl), so they are -1 (= no sound). Delete this block when the sounds are
// imported, otherwise these variables would shadow the real assets.
sndAmb_inside = -1;
sndAmb_windbirds = -1;
sndM_Amb_1 = -1;
sndM_Maldis = -1;
sndM_Praedim = -1;
sndM_ServerFarms = -1;
sndM_Confide = -1;
sndM_EO = -1;
sndM_Stronghold = -1;
sndOMWARN = -1;
sndM_Mexulta = -1;
sndM_Arthek = -1;
sndM_Irnem = -1;
sndM_Septeon = -1;
sndM_WindLoop = -1;
sndM_EDG = -1;
sndM_Quornem = -1;
sndM_Iiedakama = -1;

// Level state (the original builds this in event_user(2) / Other_12).
mw = 32;
mh = 24;
map = [];
map[mw, mh] = 0;
obj_list = ds_list_create();

// Collision cell table. Row n = [name, solid type, colour, height, spawned object, depth, y2].
// Only [4] (object) and [5] (depth) are read by map_load; the rest is kept for the editor.
// c_iiem is not defined yet, so rows 18 and 19 use c_white (editor-only colour).
map_id[0, 0] = "Air";
map_id[0, 1] = 0;
map_id[0, 2] = 0;
var _rows = [
    ["Sld Grass", 1, 8388479, 16, noone, 0, 16],
    ["JT Grass", 2, 8388479, 8, noone, 0, 16],
    ["PLACE PLAYER", 0, c_red, 12, oPlace_Player, 0, 16],
    ["Sld Dirt", 1, c_orange, 16, noone, 0, 16],
    ["JT Dirt", 2, c_orange, 8, noone, 0, 16],
    ["Sld Wood", 1, c_yellow, 16, noone, 0, 16],
    ["JT Wood", 2, c_yellow, 8, noone, 0, 16],
    ["Sld Stone", 1, c_ltgray, 16, noone, 0, 16],
    ["JT Stone", 2, c_ltgray, 8, noone, 0, 16],
    ["Sld Metal", 1, c_white, 16, noone, 0, 16],
    ["JT Metal", 2, c_white, 8, noone, 0, 16],
    ["Sld Sand", 1, c_yellow, 16, noone, 0, 16],
    ["JT Sand", 2, c_yellow, 8, noone, 0, 16],
    ["Sld Carpet", 1, c_purple, 16, noone, 0, 16],
    ["JT Carpet", 2, c_purple, 8, noone, 0, 16],
    ["Sld Water", 1, $ff7700, 16, noone, 0, 16],
    ["JT Water", 2, $ff7700, 8, noone, 0, 16],
    ["GRAB BLOCK", 1, c_white, 12, noone, 0, 16],
    ["IIEM", 1, c_white, 16, noone, 0, 16]
];
for (var _r = 0; _r < array_length(_rows); _r++) {
    for (var _c = 0; _c < 7; _c++) {
        map_id[_r + 1, _c] = _rows[_r][_c];
    }
}

// Diagnostics shown by Draw_64: filled by Other_4 after map_load.
boot_done = false;
level_report = [];
