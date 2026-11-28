// Reconstructed from gml_Object_oDlg_Mal1_Create_0 (rmmal1_sun_annotated). Plan 0.7 item 6.
// The literals below are the YYC's; load_dialogue() then overwrites them from [oDlg_Mal1] in dlg_eng.lang
// (the two agree). Text and numbers read from the .exe (strings at 0x1420c25f0..0x1420c2640); the
// "after command" field 3 is "" (dlg_eng.lang dlg[0,3]).
event_inherited();
trigger = 2;
if (trigger == 2) {
    trigger_distance = 32;
}
stop_player = 1;
one_off = 1;

var n = -1;

n += 1;
dlg[n, 0] = "Keu";
dlg[n, 1] = "|v... ohhh okay, it's uh, rather dark in here.";
dlg[n, 2] = 1;
dlg[n, 3] = "";
dlg[n, 4] = 0;
dlg[n, 5] = 0;
dlg[n, 6] = oPlayer;
dlg[n, 7] = -1;
dlg[n, 16] = "sound_voice_Keu";
dlg[n, 17] = oPlayer;

n += 1;
dlg[n, 0] = "Keu";
dlg[n, 1] = "This has to lead somewhere, surely...";
dlg[n, 2] = 2;
dlg[n, 3] = "";
dlg[n, 4] = 0;
dlg[n, 5] = 0;
dlg[n, 6] = oPlayer;
dlg[n, 7] = -2;
dlg[n, 16] = "sound_voice_Keu";
dlg[n, 17] = oPlayer;

load_dialogue();
