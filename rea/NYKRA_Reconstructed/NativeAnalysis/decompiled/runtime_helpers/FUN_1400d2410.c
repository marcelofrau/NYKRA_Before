// Function: FUN_1400d2410 @ 0x1400d2410

undefined8 *
FUN_1400d2410(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
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
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_78 = &UNK_141983499;
  uStack_70 = 0;
  uStack_80 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_80;
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
  uStack_5c = 0xffffff;
  uStack_68 = 0;
  uStack_50 = (ulonglong)(uint)uStack_50;
  uStack_58 = 0;
  uRam0000000142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_120 = param_3;
  FUN_1416ab750(uRam00000001420dcd50);
  uStack_70 = 8;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)*param_5;
  }
  FUN_1400019a0(&uStack_b8,puVar2);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)param_5[1];
  }
  puStack_138 = &uStack_b8;
  FUN_1400019a0(&uStack_a8,puVar2);
  if (param_4 < 3) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)param_5[2];
  }
  puStack_130 = &uStack_a8;
  FUN_1400019a0(&uStack_98,puVar2);
  puStack_128 = &uStack_98;
  uVar1 = FUN_1416ab210(param_1,param_2,&uStack_58,3,uRam00000001420da690,&puStack_138);
  FUN_1400019a0(&uStack_68,uVar1);
  uStack_70 = 9;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  if (param_4 < 4) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)param_5[3];
  }
  puStack_168 = &uStack_68;
  FUN_1400019a0(&uStack_108,puVar2);
  puStack_160 = &uStack_108;
  FUN_1416ab210(param_1,param_2,&uStack_58,2,uRam00000001420da6a0,&puStack_168);
  uStack_70 = 10;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  puStack_168 = &uStack_68;
  FUN_140002730(&uStack_108,0x14217f3e0);
  puStack_160 = &uStack_108;
  FUN_140002730(&uStack_f8,0x14217f3e0);
  puStack_158 = &uStack_f8;
  FUN_1416ab210(param_1,param_2,&uStack_58,3,uRam00000001420da6b0,&puStack_168);
  uStack_70 = 0xb;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  if (param_4 < 5) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)param_5[4];
  }
  puStack_168 = &uStack_68;
  FUN_1400019a0(&uStack_108,puVar2);
  if (param_4 < 6) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined *)param_5[5];
  }
  puStack_160 = &uStack_108;
  FUN_1400019a0(&uStack_f8,puVar2);
  puStack_158 = &uStack_f8;
  FUN_1416ab210(param_1,param_2,&uStack_58,3,uRam00000001420da6b0,&puStack_168);
  uStack_70 = 0xc;
  FUN_1400019a0(puStack_120,&uStack_68);
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
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
  puRam0000000142182d78 = (undefined8 *)uStack_80;
  return puStack_120;
}


