// Function: gml_Object_oLight_Glow_Draw_0 @ 0x1408f3460

void gml_Object_oLight_Glow_Draw_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  double *local_2b8;
  double *local_2b0;
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined8 local_290;
  char *local_288;
  undefined4 local_280;
  undefined8 local_278;
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  uint local_23c;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_228;
  uint local_21c;
  undefined8 local_218;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
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
  double local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  double local_b0;
  undefined4 local_a8;
  uint local_a4;
  double local_a0;
  undefined4 local_98;
  uint local_94;
  double local_90;
  undefined4 local_88;
  uint local_84;
  double local_80;
  undefined4 local_78;
  uint local_74;
  double local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_288 = "gml_Object_oLight_Glow_Draw_0";
  local_280 = 0;
  local_290 = DAT_142182d78;
  DAT_142182d78 = &local_290;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98/*var:tick*/);
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
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
  local_60 = 0;
  local_58 = 0x500000000;
  FUN_140002730(&local_138,&DAT_1420babc8);
  uVar5 = DAT_1420da090/*gpu_set_blendmode*/;
  ppuVar6 = &local_2c8;
  local_2c8 = &local_138;
  FUN_1416ab210(param_1,param_2,&local_60,1,DAT_1420da090/*gpu_set_blendmode*/,&local_2c8);
  local_280 = 2;
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_60 = 0;
  local_58 = 0x500000000;
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_d0,uVar5,uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_c0,uVar5,uVar7);
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d59f8/*xstart*/,0x80000000,&local_158,uVar5,uVar7);
  FUN_1416cea80(param_1,DAT_1420d5a08/*ystart*/,0x80000000,&local_148,uVar5 & 0xffffff00,
                uVar7 & 0xffffffffffffff00);
  FUN_1400019a0(&local_138,&local_d0);
  local_2c8 = &local_138;
  FUN_1400019a0(&local_128,&local_c0);
  local_2c0 = &local_128;
  FUN_140001a50(&local_b0,uVar2,0x7b);
  local_64 = local_a4;
  local_68 = local_a8;
  if ((0x46U >> (local_a4 & 0x1f) & 1) == 0) {
    local_70 = local_b0;
  }
  else {
    FUN_1408f4ad0(&local_70,&local_b0);
  }
  FUN_140003ca0(&local_70,&local_d0);
  local_74 = local_64;
  local_78 = local_68;
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_80 = local_70;
  }
  else {
    FUN_1408f4ad0(&local_80,&local_70);
  }
  FUN_140003ca0(&local_80,&local_c0);
  local_84 = local_74;
  local_88 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_90 = local_80;
  }
  else {
    FUN_1408f4ad0(&local_90,&local_80);
  }
  FUN_140003ca0(&local_90,&local_158);
  local_94 = local_84;
  local_98 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_a0 = local_90;
  }
  else {
    FUN_1408f4ad0(&local_a0,&local_90);
  }
  FUN_140003ca0(&local_a0,&local_148);
  if ((local_94 & 0xffffff) == 0) {
    dVar4 = local_a0;
  }
  else {
    dVar4 = (double)FUN_1416940c0(&local_a0);
  }
  fVar3 = (float)FUN_1416cd800(0x3f000000,(float)dVar4);
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  local_10c = 0;
  local_118 = (double)(fVar3 + 33.0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_2b8 = &local_118;
  iVar1 = FUN_1416b86b0(0x38,0x24,0x15);
  local_2b0 = &local_108;
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(local_2b0);
  }
  local_108 = (double)iVar1;
  local_fc = 0;
  FUN_140002730(&local_f8,&DAT_142180d10);
  local_2a8 = &local_f8;
  FUN_140002730(&local_e8,&DAT_142180d10);
  local_2a0 = &local_e8;
  FUN_1416ab210(param_1,param_2,&local_60,6,DAT_1420dac90/*draw_circle_colour*/,&local_2c8);
  local_280 = 4;
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_60 = 0;
  local_58 = 0x500000000;
  FUN_140002730(&local_138,&DAT_142180d10);
  local_2c8 = &local_138;
  FUN_1416ab210(param_1,param_2,&local_60,1,DAT_1420da090/*gpu_set_blendmode*/,&local_2c8);
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
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_58._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
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
  DAT_142182d78 = (undefined8 *)local_290;
  return;
}


