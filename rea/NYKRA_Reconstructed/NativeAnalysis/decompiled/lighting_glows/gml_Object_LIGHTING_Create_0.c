// Function: gml_Object_LIGHTING_Create_0 @ 0x140780420

void gml_Object_LIGHTING_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
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
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_c8 = &UNK_141988992;
  uStack_c0 = 0;
  uStack_d0 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_d0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  plRam0000000142182d90 = param_1;
  uVar1 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9);
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uStack_9c = 0xffffff;
  uStack_a8 = 0;
  uStack_8c = 0xffffff;
  uStack_98 = 0;
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uVar2 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c2);
  uStack_70._4_4_ = 0xffffff;
  uStack_78 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
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
  uStack_c0 = 2;
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  FUN_1400019a0(&uStack_f8,uVar1);
  puStack_108 = &uStack_f8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da3b0,&puStack_108);
  FUN_1400019a0(&uStack_b8,uVar3);
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  FUN_1400019a0(&uStack_e8,uVar1);
  puStack_100 = &uStack_e8;
  uVar1 = FUN_1416ab210(param_1,param_2,&uStack_78,1,uRam00000001420da3c0,&puStack_100);
  FUN_1400019a0(&uStack_a8,uVar1);
  uStack_c0 = 3;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x18d45);
  uStack_4c = uStack_ac;
  uStack_50 = uStack_b0;
  if ((0x46U >> (uStack_ac & 0x1f) & 1) == 0) {
    uStack_58 = uStack_b8;
  }
  else {
    FUN_1407815b0(&uStack_58,&uStack_b8);
  }
  FUN_140001c50(&uStack_58,6);
  FUN_1400019a0(&uStack_f8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_4c = uStack_9c;
  uStack_50 = uStack_a0;
  puStack_108 = &uStack_f8;
  if ((0x46U >> (uStack_9c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_a8;
  }
  else {
    FUN_1407815b0(&uStack_58,&uStack_a8);
  }
  FUN_140001c50(&uStack_58,6);
  FUN_1400019a0(&uStack_e8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  puStack_100 = &uStack_e8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_68,2,uRam00000001420d9ef0,&puStack_108);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar1,uVar3);
  func_0x0001416a8c00(1);
  uStack_c0 = 4;
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  uStack_8c = 0;
  uStack_98 = 0x4059000000000000;
  FUN_1416cfae0(param_1,uRam00000001420d5a18,0x80000000,&uStack_98);
  uStack_c0 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18960);
  if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  uStack_c0 = 6;
  plRam0000000142182d90 = (longlong *)0x109fa;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_7c = 0;
  uStack_88 = 0x4000000000000000;
  FUN_1416cfae0(param_1,uRam00000001420d5a48,0,&uStack_88);
  uStack_c0 = 8;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x18829);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar1,uVar2);
  func_0x0001416a8c00(1);
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
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_d0;
  return;
}


