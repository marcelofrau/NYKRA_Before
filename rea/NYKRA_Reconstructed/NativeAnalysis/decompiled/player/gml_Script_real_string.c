// Function: gml_Script_real_string @ 0x140135c90

undefined8 *
gml_Script_real_string
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0 [2];
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [12];
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8 = "gml_Script_real_string";
  local_d0 = 0;
  local_e0 = DAT_142182d78;
  DAT_142182d78 = &local_e0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  local_60 = (ulonglong)(uint)local_60;
  local_68 = 0;
  local_50 = (ulonglong)(uint)local_50;
  local_58 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd430);
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  if (param_4 < 1) {
    puVar3 = &DAT_1420b1000;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_a8,puVar3);
  local_100 = &local_a8;
  FUN_1416ac010(local_c8,&DAT_14217f514);
  uVar2 = FUN_1416ab210(param_1,param_2,&local_78,1,DAT_1420da870,&local_100);
  iVar1 = FUN_1416d9df0(uVar2,local_c8,DAT_1420f6b08,0);
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(local_c8);
  }
  if (iVar1 == 0) {
    if ((0x46U >> (*(uint *)((longlong)param_3 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
  }
  else {
    if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    local_68 = 0;
    local_60 = 0x500000000;
    if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_58 = 0;
    local_50 = 0x500000000;
    if (param_4 < 1) {
      param_5 = &DAT_1420b1000;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    FUN_1400019a0(&local_98,param_5);
    local_f8 = &local_98;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_58,1,DAT_1420da870,&local_f8);
    FUN_1400019a0(&local_88,uVar2);
    local_f0[0] = &local_88;
    uVar2 = FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da340,local_f0);
    FUN_1400019a0(param_3,uVar2);
  }
  if ((0x46U >> (local_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  DAT_142182d78 = (undefined8 *)local_e0;
  return param_3;
}


