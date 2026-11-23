// Function: FUN_140106850 @ 0x140106850

undefined8 *
FUN_140106850(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
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
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  longlong lStack_c8;
  double dStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_80 = &UNK_141983cc7;
  uStack_78 = 0;
  uStack_88 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_88;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_64 = 0xffffff;
  uStack_70 = 0;
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
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_98 = (ulonglong)(uint)uStack_98;
  uStack_a0 = 0;
  uStack_ac = 0;
  dStack_b8 = (double)param_4;
  uRam0000000142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_240 = param_3;
  uStack_a8 = param_2;
  uStack_90 = param_1;
  FUN_1416ab750(uRam00000001420dd1d0);
  uStack_78 = 4;
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  if (param_4 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)*param_5;
  }
  FUN_1400019a0(&uStack_228,puVar4);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[1];
  }
  puStack_268 = &uStack_228;
  FUN_1400019a0(&uStack_218,puVar4);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[2];
  }
  puStack_260 = &uStack_218;
  FUN_1400019a0(&uStack_208,puVar4);
  puStack_258 = &uStack_208;
  FUN_140002730(&uStack_1f8,0x1420b3250);
  puStack_250 = &uStack_1f8;
  uVar3 = FUN_1416ab210(uStack_90,uStack_a8,&uStack_a0,4,uRam00000001420da400,&puStack_268);
  FUN_1400019a0(&uStack_70,uVar3);
  uStack_78 = 5;
  if (param_4 < 0xc) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xb];
  }
  FUN_1400019a0(&uStack_1e8,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5ad8,0x80000000,&uStack_1e8);
  uStack_78 = 6;
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[3];
  }
  FUN_1400019a0(&uStack_1d8,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5b18,0x80000000,&uStack_1d8);
  uStack_78 = 7;
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[4];
  }
  FUN_1400019a0(&uStack_1c8,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5a98,0x80000000,&uStack_1c8);
  uStack_78 = 8;
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[5];
  }
  FUN_1400019a0(&uStack_1b8,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5aa8,0x80000000,&uStack_1b8);
  uStack_78 = 9;
  if (param_4 < 0xd) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xc];
  }
  FUN_1400019a0(&uStack_1a8,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5ae8,0x80000000,&uStack_1a8);
  uStack_78 = 10;
  if (param_4 < 7) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[6];
  }
  FUN_1400019a0(&uStack_198,puVar4);
  FUN_1416d0720(&uStack_70,0x188c3,0x80000000,&uStack_198);
  uStack_78 = 0xb;
  if (param_4 < 8) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[7];
  }
  FUN_1400019a0(&uStack_188,puVar4);
  FUN_1416d0720(&uStack_70,0x18971,0x80000000,&uStack_188);
  uStack_78 = 0xc;
  if (param_4 < 9) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[8];
  }
  FUN_1400019a0(&uStack_178,puVar4);
  FUN_1416d0720(&uStack_70,0x186e0,0x80000000,&uStack_178);
  uStack_78 = 0xd;
  if (param_4 < 10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[9];
  }
  FUN_1400019a0(&uStack_168,puVar4);
  FUN_1416d0720(&uStack_70,0x18ba7,0x80000000,&uStack_168);
  uStack_78 = 0xe;
  if (param_4 < 0xb) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[10];
  }
  FUN_1400019a0(&uStack_158,puVar4);
  FUN_1416d0720(&uStack_70,0x18953,0x80000000,&uStack_158);
  uStack_78 = 0xf;
  if (param_4 < 0xe) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xd];
  }
  FUN_1400019a0(&uStack_148,puVar4);
  FUN_1416d0720(&uStack_70,0x18706,0x80000000,&uStack_148);
  uStack_78 = 0x10;
  if (param_4 < 0xe) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xd];
  }
  FUN_1400019a0(&uStack_138,puVar4);
  FUN_1416cf7b0(&uStack_70,uRam00000001420d5b08,0x80000000,&uStack_138);
  uStack_78 = 0x11;
  if (param_4 < 0xf) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xe];
  }
  FUN_1400019a0(&uStack_128,puVar4);
  FUN_1416d0720(&uStack_70,0x1890a,0x80000000,&uStack_128);
  uStack_78 = 0x12;
  if (param_4 < 0x10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0xf];
  }
  FUN_1400019a0(&uStack_118,puVar4);
  FUN_1416d0720(&uStack_70,0x18747,0x80000000,&uStack_118);
  uStack_78 = 0x13;
  if (param_4 < 0x11) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[0x10];
  }
  FUN_1400019a0(&uStack_108,puVar4);
  FUN_1416d0720(&uStack_70,0x18748,0x80000000,&uStack_108);
  uStack_cc = 0;
  uStack_d8 = 0x4031000000000000;
  uVar5 = (undefined4)uRam00000001420f6b08;
  iVar2 = FUN_1416d9df0(&dStack_b8,&uStack_d8,uVar5,1);
  if (0 < iVar2) {
    uStack_78 = 0x14;
    if (param_4 < 0x12) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined *)param_5[0x11];
    }
    FUN_1400019a0(&uStack_f8,puVar4);
    FUN_1416d0720(&uStack_70,0x18997,0x80000000,&uStack_f8);
    uVar5 = (undefined4)uRam00000001420f6b08;
  }
  uStack_cc = 0;
  uStack_d8 = 0x4032000000000000;
  iVar2 = FUN_1416d9df0(&dStack_b8,&uStack_d8,uVar5,1);
  if (0 < iVar2) {
    iVar2 = FUN_1416ab810(&uStack_d8,&uStack_90,&uStack_a8,&uStack_70);
    if (0 < iVar2) {
      do {
        uStack_78 = 0x15;
        uRam0000000142182d90 = 0x8d09fa;
        puVar4 = &DAT_1420b1000;
        if (0x12 < param_4) {
          puVar4 = (undefined *)param_5[0x12];
        }
        FUN_1400019a0(&uStack_238,puVar4);
        FUN_1416cfae0(uStack_90,uRam00000001420d5a48,0,&uStack_238);
        cVar1 = func_0x0001416abe60(&uStack_d8,&uStack_90);
      } while (cVar1 != '\0');
    }
    FUN_1416ab620(&uStack_d8,&uStack_90,&uStack_a8);
    if (lStack_c8 != 0) {
      func_0x000141695b90();
      lStack_c8 = 0;
    }
    uVar5 = (undefined4)uRam00000001420f6b08;
  }
  uStack_cc = 0;
  uStack_d8 = 0x4033000000000000;
  iVar2 = FUN_1416d9df0(&dStack_b8,&uStack_d8,uVar5,1);
  if (0 < iVar2) {
    uStack_78 = 0x16;
    if (param_4 < 0x14) {
      puVar4 = &DAT_1420b1000;
    }
    else {
      puVar4 = (undefined *)param_5[0x13];
    }
    FUN_1400019a0(&uStack_e8,puVar4);
    FUN_1416d0720(&uStack_70,0x18b8b,0x80000000,&uStack_e8);
  }
  uStack_78 = 0x18;
  FUN_1400019a0(puStack_240,&uStack_70);
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_b8);
  }
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
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
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
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
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_88;
  return puStack_240;
}


