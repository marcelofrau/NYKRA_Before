// Function: gml_Script_save_CONTROL @ 0x1401a77f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_CONTROL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  undefined8 in_stack_fffffffffffffc58;
  undefined8 uVar11;
  ulonglong uVar12;
  double **ppdVar13;
  ulonglong uVar14;
  undefined1 local_398 [16];
  longlong local_388;
  undefined8 local_378;
  undefined8 *local_370;
  undefined1 local_368 [12];
  uint local_35c;
  undefined1 local_358 [12];
  uint local_34c;
  undefined8 local_348;
  uint local_33c;
  undefined8 local_338;
  uint local_32c;
  undefined8 local_328;
  uint local_31c;
  undefined8 local_318;
  uint local_30c;
  undefined8 local_308;
  uint local_2fc;
  undefined8 local_2f8;
  uint local_2ec;
  undefined8 local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
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
  undefined4 local_170;
  uint local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  double *local_e8;
  double *local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  uint local_64;
  undefined8 local_60;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffc58 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_a0 = "gml_Script_save_CONTROL";
  local_98 = 0;
  local_a8 = DAT_142182d78;
  DAT_142182d78 = &local_a8;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_64 = 0xffffff;
  local_70 = 0.0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
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
  local_33c = 0xffffff;
  local_348 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0;
  DAT_142182d90 = param_1;
  local_90 = param_2;
  local_78 = param_1;
  local_378 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_c0 = (ulonglong)(uint)local_c0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd840/*gml_Script_save_CONTROL*/);
  local_98 = 2;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_140002730(&local_158,&DAT_1420b3870);
  local_e8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b3880);
  local_e0 = &local_148;
  FUN_140002730(&local_138,&DAT_1420b3880);
  local_d8 = &local_138;
  uVar11 = CONCAT44(uVar6,DAT_1420da220/*buffer_create*/);
  uVar7 = FUN_1416ab210(local_78,local_90,&local_88,3,uVar11,&local_e8);
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1400019a0(&local_70,uVar7);
  local_98 = 3;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_e8 = &local_70;
  FUN_140002730(&local_148,&DAT_14217f628);
  local_e0 = &local_148;
  FUN_140002730(&local_138,&DAT_14217f628);
  local_d8 = &local_138;
  ppdVar13 = &local_e8;
  uVar12 = CONCAT44(uVar6,DAT_1420da650/*buffer_seek*/);
  FUN_1416ab210(local_78,local_90,&local_88,3,uVar12,ppdVar13);
  local_ac = 0;
  local_b8 = 0x4053c00000000000/*79 (obj:oControl)*/;
  iVar3 = FUN_1416ab810(local_398,&local_78,&local_90,&local_b8);
  local_370 = param_3;
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  dVar10 = _DAT_141981e30;
  if (0 < iVar3) {
    do {
      local_98 = 7;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a28/*object_index*/,0x80000000,&local_338,uVar12,
                    (ulonglong)ppdVar13 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar12 >> 0x20);
      FUN_1400019a0(&local_158,&local_338);
      local_e8 = &local_158;
      uVar11 = CONCAT44(uVar6,DAT_1420da320/*object_get_name*/);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar11,&local_e8);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
      FUN_1400019a0(&local_148,uVar7);
      local_e0 = &local_148;
      ppdVar13 = &local_e0;
      uVar12 = CONCAT44(uVar6,DAT_1420da2b0/*string*/);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar12,ppdVar13);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,0xb,uVar7);
      local_98 = 8;
      uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59f8/*xstart*/,0x80000000,&local_328,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&local_328);
      local_98 = 9;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a08/*ystart*/,0x80000000,&local_318,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&local_318);
      local_98 = 10;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_308,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&local_308);
      local_98 = 0xb;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_2f8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&local_2f8);
      local_98 = 0xc;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_2e8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_2e8);
      local_98 = 0xd;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a98/*speed*/,0x80000000,&local_2d8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_2d8);
      local_98 = 0xe;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5aa8/*direction*/,0x80000000,&local_2c8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_2c8);
      local_98 = 0xf;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ab8/*friction*/,0x80000000,&local_2b8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_2b8);
      local_98 = 0x10;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ac8/*gravity*/,0x80000000,&local_2a8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_2a8);
      local_98 = 0x11;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_298,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_298);
      local_98 = 0x12;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5ae8/*image_index*/,0x80000000,&local_288,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_288);
      local_98 = 0x13;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5af8/*image_speed*/,0x80000000,&local_278,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_278);
      local_98 = 0x14;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_268,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&local_268);
      local_98 = 0x15;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b18/*image_blend*/,0x80000000,&local_258,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,5,&local_258);
      local_98 = 0x16;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5b28/*visible*/,0x80000000,&local_248,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,5,&local_248);
      local_98 = 0x18;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0,&local_238,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_238);
      local_98 = 0x19;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,1,&local_228,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_228);
      local_98 = 0x1a;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,2,&local_218,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_218);
      local_98 = 0x1b;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,3,&local_208,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_208);
      local_98 = 0x1c;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,4,&local_1f8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1f8);
      local_98 = 0x1d;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,5,&local_1e8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1e8);
      local_98 = 0x1e;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,6,&local_1d8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1d8);
      local_98 = 0x1f;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,7,&local_1c8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1c8);
      local_98 = 0x20;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,8,&local_1b8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1b8);
      local_98 = 0x21;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,9,&local_1a8,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_1a8);
      local_98 = 0x22;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,10,&local_198,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_198);
      local_98 = 0x23;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_188,uVar12,uVar14);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&local_188);
      local_98 = 0x25;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_348,uVar12,uVar14 & 0xffffffffffffff00)
      ;
      uVar6 = (undefined4)(uVar12 >> 0x20);
      FUN_1400019a0(&local_158,&local_348);
      local_e8 = &local_158;
      uVar11 = CONCAT44(uVar6,DAT_1420da660/*variable_instance_get_names*/);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar11,&local_e8);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
      FUN_1400019a0(&local_108,uVar7);
      if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_168);
      }
      local_15c = 0;
      local_168 = 0.0;
      local_98 = 0x27;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      ppdVar13 = (double **)CONCAT44(uVar6,DAT_1420da250/*array_length*/);
      local_e8 = &local_108;
      uVar7 = FUN_1416ab210(local_78,local_90,&local_88,1,ppdVar13,&local_e8);
      dVar9 = local_70;
      if ((local_64 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_70);
      }
      FUN_1416fbbe0((longlong)dVar9,3,uVar7);
      local_98 = 0x29;
      if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 0.0;
      while( true ) {
        uVar6 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_88 = 0;
        local_80 = 0x500000000;
        ppdVar13 = &local_e8;
        uVar12 = CONCAT44(uVar6,DAT_1420da250/*array_length*/);
        local_e8 = &local_108;
        uVar7 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar12,ppdVar13);
        iVar3 = FUN_1416d9df0(&local_f8,uVar7,DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_98 = 0x2a;
        if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c8);
        }
        local_c8 = 0;
        local_c0 = 0x500000000;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_348,uVar12,
                      (ulonglong)ppdVar13 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar12 >> 0x20);
        FUN_1400019a0(&local_148,&local_348);
        local_e0 = &local_148;
        iVar3 = FUN_141693b30(&local_f8);
        if (((local_fc & 0xffffff) == 2) && (local_108 != 0.0)) {
          FUN_1416ba910();
          if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_108), iVar4 <= iVar3)) {
            uVar5 = FUN_1416ba8f0(local_108);
            FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar5);
            pdVar8 = (double *)0x0;
          }
          else {
            pdVar8 = (double *)FUN_1416ba8e0(local_108,iVar3);
          }
        }
        else {
          FUN_1416ab080("trying to index variable that is not an array");
          pdVar8 = &local_108;
        }
        FUN_1400019a0(&local_138,pdVar8);
        local_d8 = &local_138;
        uVar7 = FUN_1416ab210(local_78,local_90,&local_c8,2,CONCAT44(uVar6,DAT_1420da670/*variable_instance_get*/),&local_e0)
        ;
        FUN_1400019a0(&local_168,uVar7);
        local_98 = 0x2c;
        iVar3 = FUN_141693b30(&local_f8);
        if (((local_fc & 0xffffff) == 2) && (local_108 != 0.0)) {
          FUN_1416ba910();
          if ((iVar3 < 0) || (iVar4 = FUN_1416ba8f0(local_108), iVar4 <= iVar3)) {
            uVar6 = FUN_1416ba8f0(local_108);
            FUN_1416ab080("index out of bounds request %d maximum size is %d",iVar3,uVar6);
            pdVar8 = (double *)0x0;
            dVar9 = local_70;
          }
          else {
            pdVar8 = (double *)FUN_1416ba8e0(local_108,iVar3);
            dVar9 = local_70;
          }
        }
        else {
          FUN_1416ab080("trying to index variable that is not an array");
          pdVar8 = &local_108;
          dVar9 = local_70;
        }
        local_70 = dVar9;
        if ((local_64 & 0xffffff) != 0) {
          dVar9 = (double)FUN_1416940c0(&local_70);
        }
        FUN_1416fbbe0((longlong)dVar9,0xb,pdVar8);
        local_98 = 0x2e;
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_88 = 0;
        local_80 = 0x500000000;
        local_e8 = &local_70;
        local_e0 = &local_168;
        ppdVar13 = &local_e8;
        gml_Script__save_type(local_78,local_90,&local_88,2,ppdVar13);
        switch(local_ec & 0xffffff) {
        case 1:
          local_f8 = (double)FUN_1416940c0(&local_f8);
          local_f8 = local_f8 + dVar10;
          local_ec = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_f8,&local_f8);
          break;
        case 7:
          local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
          break;
        case 10:
          local_f8 = (double)((longlong)local_f8 + 1);
          break;
        case 0xd:
          local_ec = 0;
        case 0:
          local_f8 = local_f8 + dVar10;
        }
      }
      cVar2 = FUN_1416abe60(local_398,&local_78,&local_90);
    } while (cVar2 != '\0');
  }
  uVar6 = (undefined4)(uVar12 >> 0x20);
  FUN_1416ab620(local_398,&local_78,&local_90);
  local_98 = 0x37;
  local_ac = 0;
  local_b8 = 0;
  dVar10 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    dVar10 = (double)FUN_1416940c0(&local_70);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&local_b8);
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_98 = 0x39;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0x500000000;
  FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_178);
  FUN_1400019a0(&local_158,local_378);
  local_e0 = &local_70;
  local_e8 = &local_158;
  FUN_1416ac010(local_368,s__CONTROL_1420b3865);
  uVar11 = CONCAT44(uVar6,DAT_1420da2b0/*string*/);
  uVar7 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar11,&local_e8);
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1416ac010(local_358,s_PROFILES_HEPTAVERSE__1420b3850);
  local_10c = local_16c;
  local_110 = local_170;
  if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
    local_118 = local_178;
  }
  else {
    FUN_1401aab60(&local_118,&local_178);
  }
  FUN_140003ca0(&local_118,local_358);
  local_11c = local_10c;
  local_120 = local_110;
  if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
    local_128 = local_118;
  }
  else {
    FUN_1401aab60(&local_128,&local_118);
  }
  FUN_140003ca0(&local_128,uVar7);
  local_ac = local_11c;
  local_b0 = local_120;
  if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
    local_b8 = local_128;
  }
  else {
    FUN_1401aab60(&local_b8,&local_128);
  }
  FUN_140003ca0(&local_b8,local_368);
  FUN_1400019a0(&local_138,&local_b8);
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_358);
  }
  if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_368);
  }
  local_d8 = &local_138;
  uVar7 = CONCAT44(uVar6,DAT_1420da360/*buffer_save*/);
  FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_e0);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_98 = 0x3a;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_e8 = &local_70;
  FUN_1416ab210(local_78,local_90,&local_88,1,CONCAT44(uVar6,DAT_1420da370/*buffer_delete*/),&local_e8);
  puVar1 = local_370;
  if (local_388 != 0) {
    thunk_FUN_1416c46f0();
    local_388 = 0;
  }
  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_348);
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
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_298);
  }
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
  }
  if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_318);
  }
  if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_328);
  }
  if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_338);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
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
  DAT_142182d78 = (undefined8 *)local_a8;
  return puVar1;
}


