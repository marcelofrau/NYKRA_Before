// Function: gml_Object_oFade_in_Draw_73 @ 0x140881b00

/* WARNING: Removing unreachable block (ram,0x000140881d37) */

void gml_Object_oFade_in_Draw_73(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
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
  uint uStack_7c;
  undefined8 uStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;

  uStack_38 = 0xfffffffffffffffe;
  uStack_60 = 0x500000000;
  uStack_68 = 0;
  uStack_6c = 0xffffff;
  uStack_78 = 0;
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uStack_8c = 0xffffff;
  uStack_98 = 0;
  uStack_9c = 0xffffff;
  uStack_a8 = 0;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_12c = 0xffffff;
  uStack_138 = 0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_1c0 = 1;
  puStack_1c8 = &UNK_1419893d2;
  uStack_1d0 = puRam0000000142182d78;
  uStack_48 = 0;
  uStack_40 = 0x500000000;
  puRam0000000142182d78 = &uStack_1d0;
  plRam0000000142182d90 = param_1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18828);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18707);
  FUN_1400019a0(&uStack_a8,uVar4);
  puStack_1f8 = &uStack_a8;
  FUN_140002730(&uStack_98,0x1420ba518);
  puStack_1f0 = &uStack_98;
  FUN_1400019a0(&uStack_88,uVar3);
  puStack_1e8 = &uStack_88;
  uVar3 = FUN_1416cda40(&uStack_48,2,&puStack_1f8);
  FUN_1400019a0(&uStack_78,uVar3);
  puStack_1e0 = &uStack_78;
  FUN_14003ee60(param_1,param_2,&uStack_68,2,&puStack_1e8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1890a);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 != '\0') {
    uStack_1c0 = 2;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18707);
    uStack_4c = 0;
    uStack_58 = 0x3feccccccccccccd;
    FUN_140001fe0(uVar4,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
  }
  uStack_4c = 0;
  uStack_58 = 0;
  iVar2 = FUN_1416d9df0(uVar4,&uStack_58,uRam00000001420f6b08,1);
  if ((iVar2 != -2) && (iVar2 < 1)) {
    uStack_1c0 = 4;
    (**(code **)(*param_1 + 0x10))(param_1,0x18707);
    FUN_1416f8210(param_1,param_2,0,0);
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
  if ((0x46U >> (uStack_40._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_48);
  }
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
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
  puRam0000000142182d78 = (undefined8 *)uStack_1d0;
  return;
}
