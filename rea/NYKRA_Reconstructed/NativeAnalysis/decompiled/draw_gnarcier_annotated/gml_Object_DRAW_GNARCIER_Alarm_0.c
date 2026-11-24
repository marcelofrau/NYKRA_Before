// Function: gml_Object_DRAW_GNARCIER_Alarm_0 @ 0x141087db0

void gml_Object_DRAW_GNARCIER_Alarm_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1b0;
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
  uint uStack_5c;
  undefined8 uStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puStack_1b8 = &UNK_141993864;
  uStack_1c0 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_1c0;
  uStack_6c = 0xffffff;
  uStack_78 = 0;
  uStack_5c = 0xffffff;
  uStack_68 = 0;
  uStack_4c = 0xffffff;
  uStack_58 = 0;
  uStack_3c = 0xffffff;
  uStack_48 = 0;
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
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uStack_1b0 = 1;
  uRam0000000142182d90 = param_1;
  iVar1 = func_0x0001416f82f0(param_1,param_2,0x3a);
  if (iVar1 < 1) {
    uStack_1b0 = 2;
    FUN_1416f8210(param_1,param_2,0,0);
  }
  else {
    uStack_1b0 = 6;
    uRam0000000142182d90 = 0x109fa;
    if ((0x46U >> (uStack_3c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_48);
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_3c = 5;
    func_0x0001416ce870(param_1,uRam00000001420d5cb8,0x80000000,&uStack_68);
    FUN_140004520(&uStack_38,&uStack_68,0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/);
    FUN_1400019a0(&uStack_78,&uStack_38);
    if ((0x46U >> (uStack_2c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_38);
    }
    puStack_1c8 = &uStack_78;
    puVar2 = (undefined8 *)
             FUN_1416ab210(param_1,param_2,&uStack_48,1,uRam00000001420da140,&puStack_1c8);
    uStack_2c = *(uint *)((longlong)puVar2 + 0xc);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    if ((0x46U >> (uStack_2c & 0x1f) & 1) == 0) {
      uStack_38 = *puVar2;
    }
    else {
      FUN_1410889a0(&uStack_38,puVar2);
    }
    FUN_140001c50(&uStack_38,0x1e);
    FUN_1400019a0(&uStack_58,&uStack_38);
    if ((0x46U >> (uStack_2c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_38);
    }
    FUN_1416cfae0(param_1,uRam00000001420d5a48,0,&uStack_58);
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
  if ((0x46U >> (uStack_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_48);
  }
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_1c0;
  return;
}


