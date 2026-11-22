// Function: gml_Object_oDoor_chunky2_Step_1 @ 0x140c45cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDoor_chunky2_Step_1(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [12];
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_78 = &UNK_14198c728;
  uStack_80 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_80;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_12c = 0xffffff;
  uStack_138 = 0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uStack_9c = 0xffffff;
  uStack_a8 = 0;
  uStack_8c = 0xffffff;
  uStack_98 = 0;
  uStack_70 = 1;
  plRam0000000142182d90 = param_1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x187ba);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b);
  FUN_140009980(auStack_68,uVar2,_UNK_14198c720);
  uStack_4c = *(uint *)((longlong)puVar1 + 0xc);
  uStack_50 = *(undefined4 *)(puVar1 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar1;
  }
  else {
    FUN_140c46ef0(&uStack_58,puVar1);
  }
  FUN_140003ca0(&uStack_58,auStack_68);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_68);
  }
  func_0x0001416a8c00(1);
  uStack_70 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x187bb);
  uStack_88 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d);
  FUN_140009980(auStack_68,uVar2,_UNK_14198c720);
  uStack_4c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_50 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar4;
  }
  else {
    FUN_140c46ef0(&uStack_58,puVar4);
  }
  FUN_140003ca0(&uStack_58,auStack_68);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uStack_88,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_68);
  }
  func_0x0001416a8c00(1);
  uStack_70 = 3;
  FUN_141706ee0(param_1,param_2);
  uStack_70 = 5;
  FUN_140009980(auStack_68,uVar2,_UNK_14198c720);
  uStack_4c = *(uint *)((longlong)puVar1 + 0xc);
  uStack_50 = *(undefined4 *)(puVar1 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar1;
  }
  else {
    FUN_140c46ef0(&uStack_58,puVar1);
  }
  FUN_140003ca0(&uStack_58,auStack_68);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_68);
  }
  func_0x0001416a8c00(1);
  uStack_70 = 6;
  FUN_140009980(auStack_68,uVar2,_UNK_14198c720);
  uStack_4c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_50 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar4;
  }
  else {
    FUN_140c46ef0(&uStack_58,puVar4);
  }
  FUN_140003ca0(&uStack_58,auStack_68);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uStack_88,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_68);
  }
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_80;
  return;
}


