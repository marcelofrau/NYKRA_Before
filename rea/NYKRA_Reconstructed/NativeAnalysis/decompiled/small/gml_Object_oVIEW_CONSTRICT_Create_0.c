// Function: gml_Object_oVIEW_CONSTRICT_Create_0 @ 0x14074e3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oVIEW_CONSTRICT_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210 [2];
  undefined8 local_200;
  char *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
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
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_1f8 = "gml_Object_oVIEW_CONSTRICT_Create_0";
  local_1f0 = 0;
  local_200 = DAT_142182d78;
  DAT_142182d78 = &local_200;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_68 = CONCAT44(0xffffff,(undefined4)local_68);
  local_70 = 0;
  local_58 = CONCAT44(0xffffff,(undefined4)local_58);
  local_60 = 0;
  local_48 = CONCAT44(0xffffff,(undefined4)local_48);
  local_50 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
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
  DAT_142182d90 = param_1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18973);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_1f0 = 2;
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_74 = 0;
  local_80 = 0xc0c3880000000000;
  FUN_1416cfae0(param_1,DAT_1420d5a18,0x80000000,&local_80);
  local_1f0 = 4;
  DAT_142182d90 = (longlong *)0x109fa;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_60 = 0;
  local_58 = 0x500000000;
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  local_50 = 0;
  local_48 = 0x500000000;
  FUN_1416ce870(param_1,DAT_1420d5cb8,0x80000000,&local_a0);
  FUN_1400019a0(&local_e8,&local_a0);
  local_228 = &local_e8;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_50,1,DAT_1420da340,&local_228);
  FUN_140004520(&local_40,uVar2,_DAT_141984420);
  FUN_1400019a0(&local_d8,&local_40);
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_40);
  }
  local_220 = &local_d8;
  FUN_140002730(&local_c8,&DAT_1420b9be8);
  local_218 = &local_c8;
  uVar2 = FUN_1416ab210(param_1,param_2,&local_60,2,DAT_1420da0c0,&local_220);
  FUN_1400019a0(&local_b8,uVar2);
  local_210[0] = &local_b8;
  puVar1 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da140,local_210);
  local_34 = *(uint *)((longlong)puVar1 + 0xc);
  local_38 = *(undefined4 *)(puVar1 + 1);
  if ((0x46U >> (local_34 & 0x1f) & 1) == 0) {
    local_40 = *puVar1;
  }
  else {
    FUN_14074f1c0(&local_40,puVar1);
  }
  FUN_140001c50(&local_40,3);
  FUN_1400019a0(&local_90,&local_40);
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_40);
  }
  FUN_1416cfae0(param_1,DAT_1420d5a48,0,&local_90);
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
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_48._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
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
  DAT_142182d78 = (undefined8 *)local_200;
  return;
}


