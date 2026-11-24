// Function: gml_Object_oBook_UI_Create_0 @ 0x14149fe50

void gml_Object_oBook_UI_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 *local_1d0;
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
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = "gml_Object_oBook_UI_Create_0";
  local_60 = 0;
  local_70 = DAT_142182d78;
  DAT_142182d78 = &local_70;
  local_8c = 0xffffff;
  local_98 = 0;
  DAT_142182d90 = param_1;
  local_88 = param_2;
  pdVar2 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18943/*var:FONT_MAIN*/);
  local_50 = CONCAT44(0xffffff,(undefined4)local_50);
  local_58 = 0;
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
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18a3a/*var:is_inv*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 2;
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar2;
  }
  else {
    dVar8 = (double)FUN_1416940c0(pdVar2);
  }
  thunk_FUN_14176d0f0((longlong)dVar8);
  local_60 = 3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1879d/*var:book_id*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc010000000000000/*-4*/;
  local_60 = 4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b45/*var:open*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 5;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18dde/*var:txt*/);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_142182bc0);
  local_60 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18730/*var:anim1*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  local_60 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1873b/*var:anim2*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1873e/*var:anim3*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  local_60 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18740/*var:anim4*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18741/*var:anim5*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18cf6/*var:sPages*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  local_60 = 0xe;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b10/*var:name*/);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_142182bc0);
  local_60 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18de2/*var:type*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x12;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b6f/*var:pagepile_left*/);
  uVar6 = FUN_1416ab210(param_1,local_88,&local_58,0,DAT_1420da020/*ds_list_create*/,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,uVar6);
  FUN_1416a8c00(1);
  local_60 = 0x13;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b70/*var:pagepile_right*/);
  uVar6 = FUN_1416ab210(param_1,local_88,&local_58,0,DAT_1420da020/*ds_list_create*/,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,uVar6);
  FUN_1416a8c00(1);
  local_60 = 0x15;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18bf7/*var:pscale*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  local_60 = 0x16;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b65/*var:page_click*/);
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_60 = 0x18;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b6e/*var:page_w*/);
  local_74 = 0;
  local_80 = 0x4053800000000000/*78 (obj:oCamera)*/;
  FUN_140001fe0(&local_80,puVar3);
  FUN_1400019a0(&local_98,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_1d0 = &local_98;
  uVar6 = FUN_1416ab210(param_1,local_88,&local_58,1,DAT_1420da4b0/*floor*/,&local_1d0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,uVar6);
  FUN_1416a8c00(1);
  local_60 = 0x19;
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_58 = 0;
  local_50 = 0x500000000;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18b68/*var:page_h*/);
  local_74 = 0;
  local_80 = 0x4058000000000000/*96 (obj:oIs_Inside)*/;
  FUN_140001fe0(&local_80,puVar3);
  FUN_1400019a0(&local_98,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_1d0 = &local_98;
  uVar6 = FUN_1416ab210(param_1,local_88,&local_58,1,DAT_1420da4b0/*floor*/,&local_1d0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,uVar6);
  FUN_1416a8c00(1);
  local_60 = 0x1a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b6b/*var:page_res*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/;
  local_60 = 0x1c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18dda/*var:turn_an*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc000000000000000/*-2*/;
  local_60 = 0x1d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b6c/*var:page_sel*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc000000000000000/*-2*/;
  local_60 = 0x1f;
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x18a05/*var:ink_col*/);
  iVar1 = FUN_1416b86b0(0x49,0x41,0x4d);
  if ((0x46U >> (*(uint *)((longlong)pdVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = (double)iVar1;
  local_60 = 0x21;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b6a/*var:page_min*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x22;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b69/*var:page_max*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x24;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187b2/*var:buffer*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/;
  local_60 = 0x25;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b6d/*var:page_txt*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x26;
  DAT_142182d90 = (longlong *)0x288d4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b6d/*var:page_txt*/);
  FUN_1416a8cb0(param_1);
  lVar4 = FUN_1416924a0(puVar3,0);
  FUN_1416a8cb0(*puVar3);
  if ((0x46U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(lVar4);
  }
  FUN_1416ab000(lVar4,&DAT_142182bc0);
  FUN_1416a8c00(2);
  local_60 = 0x27;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18954/*var:frontcov_an*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x28;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1876f/*var:backcov_an*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_60 = 0x2a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18de0/*var:txtpntr*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
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
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  DAT_142182d78 = (undefined8 *)local_70;
  return;
}


