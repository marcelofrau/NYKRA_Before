// Reconstructed from gml_Object_oDlg_Mal2_Create_0 (rmmal1_sun_annotated). Plan 0.7 item 6.
// The literals below are the YYC's; load_dialogue() then overwrites them from [oDlg_Mal2] in dlg_eng.lang.
// Text read from the .exe (strings at 0x1420c2670..0x1420c2720); field 3 is "" as in Mal1.
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
dlg[n, 1] = "|hooohh no, what is that stuff...";
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
dlg[n, 1] = "My eyes are having a hard time focusing on them. I can't seem to make out any flat sides.";
dlg[n, 2] = 2;
dlg[n, 3] = "";
dlg[n, 4] = 0;
dlg[n, 5] = 0;
dlg[n, 6] = oPlayer;
dlg[n, 7] = -1;
dlg[n, 16] = "sound_voice_Keu";
dlg[n, 17] = oPlayer;

n += 1;
dlg[n, 0] = "Keu";
dlg[n, 1] = "It's making a weird noise too.";
dlg[n, 2] = 0;
dlg[n, 3] = "";
dlg[n, 4] = 0;
dlg[n, 5] = 0;
dlg[n, 6] = oGnarcier_b;
dlg[n, 7] = -2;
dlg[n, 16] = "sound_voice_Keu";
dlg[n, 17] = oPlayer;

load_dialogue();
