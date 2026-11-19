// Function: gml_Object_parEntity_Create_0 @ 0x1402c7cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parEntity_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = "gml_Object_parEntity_Create_0";
  local_70 = DAT_142182d78;
  DAT_142182d78 = &local_70;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
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
  local_60 = 0x13;
  DAT_142182d90 = 0x209fa;
  local_94 = 0;
  local_a0 = 0x3ff0000000000000;
  FUN_1416cf840(0x4f,DAT_1420d5a48,1,&local_a0);
  local_60 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18af6);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x18;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18ccd);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x1a;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x187b4);
  FUN_1416cea80(param_1,DAT_1420d5c78,0x80000000,&local_c0,0,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,&local_c0);
  FUN_1416a8c00(1);
  local_60 = 0x1b;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1877f);
  FUN_1416cea80(param_1,DAT_1420d5c88,0x80000000,&local_b0,0,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&local_b0);
  FUN_1416a8c00(1);
  local_60 = 0x1c;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x187b5);
  FUN_140004520(&local_58,uVar2,_DAT_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x1d;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18782);
  FUN_140004520(&local_58,uVar3,_DAT_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x1e;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18d7b);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar4);
  FUN_1416a8c00(1);
  local_60 = 0x1f;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18d7a);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar2);
  FUN_1416a8c00(1);
  local_60 = 0x20;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b59);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x21;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b58);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x22;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b42);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x24;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18afc);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x25;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b5d);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x27;
  local_c8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b);
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_90,0,0);
  local_4c = local_84;
  local_50 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_58 = local_90;
  }
  else {
    FUN_1402c9960(&local_58,&local_90);
  }
  FUN_140003e00(&local_58,uVar4);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x28;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b);
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_80,0,0);
  local_4c = local_74;
  local_50 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_58 = local_80;
  }
  else {
    FUN_1402c9960(&local_58,&local_80);
  }
  FUN_140003e00(&local_58,uVar2);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x29;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d);
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_90,0,0);
  local_4c = local_84;
  local_50 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_58 = local_90;
  }
  else {
    FUN_1402c9960(&local_58,&local_90);
  }
  FUN_140003ca0(&local_58,uVar4);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x2a;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d);
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_80,0,0);
  local_4c = local_74;
  local_50 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_58 = local_80;
  }
  else {
    FUN_1402c9960(&local_58,&local_80);
  }
  FUN_140003ca0(&local_58,uVar2);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_60 = 0x2c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18768);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188a5);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18825);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x2f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c4);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_60 = 0x30;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e31);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x32;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189a1);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x34;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18bae);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x36;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18be4);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,local_c8);
  FUN_1416a8c00(1);
  local_60 = 0x37;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18be6);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,uVar3);
  FUN_1416a8c00(1);
  local_60 = 0x38;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18be5);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,uVar5);
  FUN_1416a8c00(1);
  local_60 = 0x39;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18be7);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,uVar4);
  FUN_1416a8c00(1);
  local_60 = 0x3b;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3a);
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_90,0,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,&local_90);
  FUN_1416a8c00(1);
  local_60 = 0x3c;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18e49);
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_80,0,0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar2,&local_80);
  FUN_1416a8c00(1);
  local_60 = 0x48;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x49;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x4b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d96);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x40c3878000000000;
  local_60 = 0x4c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18ddc);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x40c3878000000000;
  local_60 = 0x4e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18a3e);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x4f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187ab);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x50;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c0);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x51;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c3);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x52;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x53;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b41);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x54;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d2a);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x55;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188a7);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x56;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18afe);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x57;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18afd);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x58;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b8c);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x59;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188a6);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x5a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18aa7);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4024000000000000;
  local_60 = 0x5b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1898f);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_60 = 0x5d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881a);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x5e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881d);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x5f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881e);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x60;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18819);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_60 = 0x62;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18d6f);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
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
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  DAT_142182d78 = (undefined8 *)local_70;
  return;
}


