// Function: gml_Object_oDlg_Mal1_Create_0 @ 0x140f5a5e0

void gml_Object_oDlg_Mal1_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined1 *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = "gml_Object_oDlg_Mal1_Create_0";
  local_70 = DAT_142182d78;
  DAT_142182d78 = &local_70;
  local_4c = 0xffffff;
  local_58 = (undefined1 *)0x0;
  local_78 = CONCAT44(0xffffff,(undefined4)local_78);
  local_80 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_60 = 0x22;
  DAT_142182d90 = param_1;
  local_1f0 = param_2;
  FUN_141706ee0();
  local_60 = 0x24;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18dcf/*var:trigger*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  local_1f4 = 0;
  local_200 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  iVar1 = FUN_1416d9df0(puVar3,&local_200,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_60 = 0x25;
    (**(code **)(*param_1 + 0x10))(param_1,0x18dcf/*var:trigger*/);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18dd0/*var:trigger_distance*/);
    if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4040000000000000/*32 (obj:oDlg_EO_CantWarp)*/;
  }
  local_60 = 0x27;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d36/*var:stop_player*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  local_60 = 0x28;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b40/*var:one_off*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  local_60 = 0x2a;
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_4c = 0;
  local_58 = &DAT_bff0000000000000;
  local_60 = 0x2c;
  FUN_140001c50(&local_58,1);
  local_60 = 0x2d;
  DAT_142182d90 = (longlong *)0x28897;
  local_b8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_b8,uVar2);
  FUN_1416a8cb0(*local_b8);
  lVar4 = FUN_1416924a0(puVar3,0);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_1420c25f0);
  FUN_1416a8c00(3);
  local_60 = 0x2e;
  local_b0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_b0,uVar2);
  FUN_1416a8cb0(*local_b0);
  lVar4 = FUN_1416924a0(puVar3,1);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,s__v____ohhh_okay__it_s_uh__rather_1420c2600);
  FUN_1416a8c00(3);
  local_60 = 0x2f;
  local_a8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_a8,uVar2);
  FUN_1416a8cb0(*local_a8);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,2);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  FUN_1416a8c00(3);
  local_60 = 0x30;
  local_a0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_a0,uVar2);
  FUN_1416a8cb0(*local_a0);
  lVar4 = FUN_1416924a0(puVar3,3);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_142181ea8);
  FUN_1416a8c00(3);
  local_60 = 0x31;
  local_98 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_98,uVar2);
  FUN_1416a8cb0(*local_98);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,4);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_1416a8c00(3);
  local_60 = 0x32;
  local_90 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_90,uVar2);
  FUN_1416a8cb0(*local_90);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,5);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_1416a8c00(3);
  local_60 = 0x33;
  local_88 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(local_88,uVar2);
  FUN_1416a8cb0(*local_88);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,6);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x4050000000000000/*64 (obj:oPlayer)*/;
  FUN_1416a8c00(3);
  local_60 = 0x34;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,uVar2);
  FUN_1416a8cb0(*puVar3);
  puVar6 = (undefined8 *)FUN_1416924a0(puVar5,7);
  FUN_1416a8cb0(*puVar5);
  if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  FUN_1416a8c00(3);
  local_60 = 0x35;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar6 = (undefined8 *)FUN_1416924a0(puVar5,uVar2);
  FUN_1416a8cb0(*puVar5);
  lVar4 = FUN_1416924a0(puVar6,0x10);
  FUN_1416a8cb0(*puVar6);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,s_sound_voice_Keu_1420c2630);
  FUN_1416a8c00(3);
  local_60 = 0x36;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1889d/*var:dlg*/);
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(puVar6,uVar2);
  FUN_1416a8cb0(*puVar6);
  puVar8 = (undefined8 *)FUN_1416924a0(puVar7,0x11);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x4050000000000000/*64 (obj:oPlayer)*/;
  FUN_1416a8c00(3);
  local_60 = 0x38;
  FUN_140001c50(&local_58,1);
  local_60 = 0x39;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_b8,uVar2);
  FUN_1416a8cb0(*local_b8);
  lVar4 = FUN_1416924a0(puVar7,0);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_1420c25f0);
  FUN_1416a8c00(3);
  local_60 = 0x3a;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_b0,uVar2);
  FUN_1416a8cb0(*local_b0);
  lVar4 = FUN_1416924a0(puVar7,1);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,s_This_has_to_lead_somewhere__sure_1420c2640);
  FUN_1416a8c00(3);
  local_60 = 0x3b;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_a8,uVar2);
  FUN_1416a8cb0(*local_a8);
  puVar8 = (undefined8 *)FUN_1416924a0(puVar7,2);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  FUN_1416a8c00(3);
  local_60 = 0x3c;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_a0,uVar2);
  FUN_1416a8cb0(*local_a0);
  lVar4 = FUN_1416924a0(puVar7,3);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_142181ea8);
  FUN_1416a8c00(3);
  local_60 = 0x3d;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_98,uVar2);
  FUN_1416a8cb0(*local_98);
  puVar8 = (undefined8 *)FUN_1416924a0(puVar7,4);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  FUN_1416a8c00(3);
  local_60 = 0x3e;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_90,uVar2);
  FUN_1416a8cb0(*local_90);
  puVar8 = (undefined8 *)FUN_1416924a0(puVar7,5);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0;
  FUN_1416a8c00(3);
  local_60 = 0x3f;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(local_88,uVar2);
  FUN_1416a8cb0(*local_88);
  puVar8 = (undefined8 *)FUN_1416924a0(puVar7,6);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar8);
  }
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  *puVar8 = 0x4050000000000000/*64 (obj:oPlayer)*/;
  FUN_1416a8c00(3);
  local_60 = 0x40;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar7 = (undefined8 *)FUN_1416924a0(puVar3,uVar2);
  FUN_1416a8cb0(*puVar3);
  puVar3 = (undefined8 *)FUN_1416924a0(puVar7,7);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc000000000000000/*-2*/;
  FUN_1416a8c00(3);
  local_60 = 0x41;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(puVar5,uVar2);
  FUN_1416a8cb0(*puVar5);
  lVar4 = FUN_1416924a0(puVar3,0x10);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,s_sound_voice_Keu_1420c2630);
  FUN_1416a8c00(3);
  local_60 = 0x42;
  FUN_1416a8cb0(param_1);
  uVar2 = FUN_141693b30(&local_58);
  puVar3 = (undefined8 *)FUN_1416924a0(puVar6,uVar2);
  FUN_1416a8cb0(*puVar6);
  puVar5 = (undefined8 *)FUN_1416924a0(puVar3,0x11);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x4050000000000000/*64 (obj:oPlayer)*/;
  FUN_1416a8c00(3);
  local_60 = 0x44;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  FUN_1400ec080(param_1,local_1f0,&local_80,0,0);
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  DAT_142182d78 = (undefined8 *)local_70;
  return;
}


