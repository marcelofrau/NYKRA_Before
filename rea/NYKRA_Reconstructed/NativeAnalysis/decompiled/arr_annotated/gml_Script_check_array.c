// Function: gml_Script_check_array @ 0x14012bed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_check_array
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint in_stack_fffffffffffffdc8;
  uint uVar3;
  ulonglong in_stack_fffffffffffffdd0;
  undefined8 **ppuVar4;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
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
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_190 = "gml_Script_check_array";
  local_188 = 0;
  local_198 = DAT_142182d78;
  DAT_142182d78 = &local_198;
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
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  DAT_142182d90 = param_1;
  local_180 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e/*var:map*/);
  local_a0 = (ulonglong)(uint)local_a0;
  local_a8 = 0;
  local_90 = (ulonglong)(uint)local_90;
  local_98 = 0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  local_60 = (ulonglong)(uint)local_60;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd350/*gml_Script_check_array*/);
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0x500000000;
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  local_98 = 0;
  local_90 = 0x500000000;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_68 = 0;
  local_60 = 0x500000000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (param_4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_140004520(local_58,puVar2,_DAT_141982ef8);
  FUN_1400019a0(&local_158,local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_58);
  }
  local_218 = &local_158;
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_1b8,in_stack_fffffffffffffdc8 & 0xffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  ppuVar4 = &local_218;
  uVar3 = DAT_1420da4b0/*floor*/;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_88,1,DAT_1420da4b0/*floor*/,ppuVar4);
  FUN_1400019a0(&local_148,uVar1);
  local_210 = &local_148;
  FUN_140002730(&local_138,&DAT_14217f4e8);
  local_208 = &local_138;
  FUN_1400019a0(&local_128,&local_1b8);
  if (param_4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_200 = &local_128;
  FUN_140004520(local_58,puVar2,_DAT_141982ef8);
  FUN_1400019a0(&local_118,local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_58);
  }
  local_1f8 = &local_118;
  FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_1a8,uVar3 & 0xffffff00,
                (ulonglong)ppuVar4 & 0xffffffffffffff00);
  uVar1 = FUN_1416ab210(param_1,param_2,&local_68,1,DAT_1420da4b0/*floor*/,&local_1f8);
  FUN_1400019a0(&local_108,uVar1);
  local_1f0 = &local_108;
  FUN_140002730(&local_f8,&DAT_14217f4e8);
  local_1e8 = &local_f8;
  FUN_1400019a0(&local_e8,&local_1a8);
  local_1e0 = &local_e8;
  FUN_1400019a0(&local_d8,local_180);
  local_1d8 = &local_d8;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_98,3,DAT_1420da130/*clamp*/,&local_210);
  FUN_1400019a0(&local_c8,uVar1);
  local_1d0 = &local_c8;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_78,3,DAT_1420da130/*clamp*/,&local_1f0);
  FUN_1400019a0(&local_b8,uVar1);
  local_1c8 = &local_b8;
  uVar1 = FUN_1416ab210(param_1,param_2,&local_a8,3,DAT_1420da240/*array_get_2D*/,&local_1d8);
  FUN_1400019a0(param_3,uVar1);
  if ((0x46U >> (local_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
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
  DAT_142182d78 = (undefined8 *)local_198;
  return param_3;
}


