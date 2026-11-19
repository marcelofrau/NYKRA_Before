// Function: gml_Script_player_interact @ 0x1400d7df0

double * gml_Script_player_interact
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  uint in_stack_fffffffffffffdf8;
  ulonglong in_stack_fffffffffffffe00;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_180;
  char *local_178;
  undefined4 local_170;
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
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_178 = "gml_Script_player_interact";
  local_170 = 0;
  local_180 = DAT_142182d78;
  DAT_142182d78 = &local_180;
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
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  DAT_142182d90 = param_1;
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a53/*var:kku*/);
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_88 = (ulonglong)(uint)local_88;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  FUN_1416ab750(DAT_1420dce30/*gml_Script_player_interact*/);
  local_170 = 10;
  local_1a8 = 0;
  uStack_1a0 = 0;
  in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
  in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffff00;
  FUN_1416d0010(0x40,0x18df5/*var:UI_OPEN*/,0x80000000,&local_1a8,in_stack_fffffffffffffdf8,
                in_stack_fffffffffffffe00);
  local_74 = 0;
  local_80 = 0;
  uVar7 = (undefined4)DAT_1420f6b08;
  iVar3 = FUN_1416d9df0(&local_1a8,&local_80,uVar7,0);
  if (iVar3 == 0) {
    local_198 = 0;
    uStack_190 = 0;
    FUN_1416d0010(0x40,0x18836/*var:control*/,0x80000000,&local_198,in_stack_fffffffffffffdf8 & 0xffffff00,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    local_74 = 0;
    local_80 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    uVar7 = (undefined4)DAT_1420f6b08;
    iVar3 = FUN_1416d9df0(&local_198,&local_80,uVar7,0);
    if (iVar3 != 0) goto LAB_1400d806f;
  }
  else {
LAB_1400d806f:
    if (param_4 < 5) {
      puVar6 = &DAT_1420b1000;
    }
    else {
      puVar6 = (undefined8 *)param_5[4];
    }
    local_74 = 0;
    local_80 = 0;
    iVar3 = FUN_1416d9df0(puVar6,&local_80,uVar7,0);
    dVar1 = 0.0;
    if (iVar3 != 0) goto LAB_1400d8327;
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_c0);
  FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_b0);
  if (param_4 < 1) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_118,puVar6);
  if (param_4 < 2) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  local_1d0 = &local_118;
  FUN_1400019a0(&local_108,puVar6);
  local_1c8 = &local_108;
  FUN_1400019a0(&local_f8,&local_c0);
  local_1c0 = &local_f8;
  FUN_1400019a0(&local_e8,&local_b0);
  if (param_4 < 3) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined8 *)param_5[2];
  }
  local_1b8 = &local_e8;
  uVar5 = FUN_1416ab210(param_1,param_2,&local_a0,4,DAT_1420da150/*point_distance*/,&local_1d0);
  uVar7 = (undefined4)DAT_1420f6b08;
  iVar3 = FUN_1416d9df0(uVar5,puVar6,uVar7,1);
  dVar1 = 0.0;
  if ((iVar3 != -2) && (dVar1 = 0.0, iVar3 < 0)) {
    if (param_4 < 4) {
      puVar6 = &DAT_1420b1000;
    }
    else {
      puVar6 = (undefined8 *)param_5[3];
    }
    local_74 = 0;
    local_80 = 0;
    iVar3 = FUN_1416d9df0(puVar6,&local_80,uVar7,0);
    if (iVar3 == 0) {
      bVar2 = 1;
    }
    else {
      if (param_4 < 4) {
        puVar6 = &DAT_1420b1000;
      }
      else {
        puVar6 = (undefined8 *)param_5[3];
      }
      local_74 = 0;
      local_80 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      bVar2 = 0;
      iVar3 = FUN_1416d9df0(puVar6,&local_80,uVar7,0);
      if (iVar3 == 0) {
        if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_90);
        }
        local_90 = 0;
        local_88 = 0x500000000;
        FUN_1400019a0(&local_d8,uVar4);
        local_1b0 = &local_d8;
        uVar4 = FUN_1416ab210(param_1,param_2,&local_90,1,DAT_1420da6d0/*keyboard_check_pressed*/,&local_1b0);
        bVar2 = FUN_1416927d0(uVar4);
      }
    }
    dVar1 = (double)bVar2;
  }
LAB_1400d8327:
  if ((0x46U >> (*(uint *)((longlong)param_3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = dVar1;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
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
  DAT_142182d78 = (undefined8 *)local_180;
  return param_3;
}


