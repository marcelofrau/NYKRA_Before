// Function: gml_Object_parSun_Glow_Draw_0 @ 0x140ee4590

/* WARNING: Removing unreachable block (ram,0x000140ee4de3) */

void gml_Object_parSun_Glow_Draw_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 in_stack_fffffffffffffc08;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined8 uVar14;
  undefined8 local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  uint local_3cc;
  undefined8 local_3c8;
  uint local_3bc;
  undefined8 local_3b8;
  uint local_3ac;
  undefined8 local_3a8;
  uint local_39c;
  undefined8 local_398;
  uint local_38c;
  undefined8 local_388;
  uint local_37c;
  undefined8 local_378;
  uint local_36c;
  undefined8 local_368;
  uint local_35c;
  undefined8 local_358;
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
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
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
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
  local_90 = 0xfffffffffffffffe;
  local_118 = "gml_Object_parSun_Glow_Draw_0";
  local_110 = 0;
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
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
  local_2bc = 0xffffff;
  local_2c8 = 0;
  DAT_142182d90 = param_1;
  local_d8 = param_2;
  local_d0 = param_1;
  local_198 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885d);
  local_1cc = 0xffffff;
  local_1d8 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885e);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_100 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885f);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_108 = puVar6;
  local_190 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187f1);
  local_c0 = CONCAT44(0xffffff,(undefined4)local_c0);
  local_c8 = 0;
  local_e0 = CONCAT44(0xffffff,(undefined4)local_e0);
  local_e8 = 0;
  local_2b0 = CONCAT44(0xffffff,(undefined4)local_2b0);
  local_2b8 = 0;
  local_2a0 = CONCAT44(0xffffff,(undefined4)local_2a0);
  local_2a8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_3bc = 0xffffff;
  local_3c8 = 0;
  local_3ac = 0xffffff;
  local_3b8 = 0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_37c = 0xffffff;
  local_388 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
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
  local_110 = 1;
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  local_2bc = 0;
  local_2c8 = 0xc05bc00000000000;
  FUN_1416cfae0(local_d0,DAT_1420d5a18,0x80000000,&local_2c8);
  local_110 = 3;
  puVar6 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(local_d0,0x18a5a);
  if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_110 = 4;
  FUN_140004520(&local_b8,local_198,0x401c000000000000);
  local_94 = uStack_b0._4_4_;
  local_98 = (uint)uStack_b0;
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
    local_a0 = local_b8;
  }
  else {
    FUN_140eeb6c0(&local_a0,&local_b8);
  }
  FUN_140001c50(&local_a0,8);
  FUN_1400019a0(&local_1d8,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_110 = 5;
  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0x500000000;
  uStack_b0 = local_108[1];
  if ((0x46U >> (*(uint *)((longlong)local_108 + 0xc) & 0x1f) & 1) == 0) {
    local_b8 = *local_108;
  }
  else {
    FUN_140eeb6c0(&local_b8);
  }
  FUN_140003ca0(&local_b8,&local_1d8);
  FUN_140004520(&local_a0,&local_b8,0x4030000000000000);
  FUN_1400019a0(&local_298,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_188 = &local_298;
  uVar8 = CONCAT44(uVar2,DAT_1420da4b0);
  uVar7 = FUN_1416ab210(local_d0,local_d8,&local_c8,1,uVar8,&local_188);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_1b8,uVar7);
  if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0x500000000;
  uStack_b0 = local_100[1];
  if ((0x46U >> (*(uint *)((longlong)local_100 + 0xc) & 0x1f) & 1) == 0) {
    local_b8 = *local_100;
  }
  else {
    FUN_140eeb6c0(&local_b8);
  }
  FUN_140001c50(&local_b8,8);
  FUN_140004520(&local_a0,&local_b8,0x4030000000000000);
  FUN_1400019a0(&local_288,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  ppuVar13 = &local_180;
  local_180 = &local_288;
  uVar12 = CONCAT44(uVar2,DAT_1420da4b0);
  uVar7 = FUN_1416ab210(local_d0,local_d8,&local_e8,1,uVar12,ppuVar13);
  FUN_140017bd0(&local_a0,uVar7,1);
  FUN_1400019a0(&local_1a8,&local_a0);
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_110 = 6;
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0.0;
LAB_140ee4e60:
  do {
    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0x500000000;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x186b9,0x80000000,&local_b8,uVar12,(ulonglong)ppuVar13 & 0xffffffffffffff00)
    ;
    uVar2 = (undefined4)(uVar12 >> 0x20);
    FUN_1400019a0(&local_298,&local_b8);
    local_188 = &local_298;
    ppuVar13 = &local_188;
    uVar12 = CONCAT44(uVar2,DAT_1420da4d0);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_c8,1,uVar12,ppuVar13);
    iVar1 = FUN_1416d9df0(&local_f8,uVar7,DAT_1420f6b08,1);
    if ((iVar1 == -2) || (-1 < iVar1)) {
      local_110 = 0x16;
      local_94 = 0;
      local_a0 = 0x4038000000000000;
      FUN_140004620(puVar6,&local_a0);
      uVar2 = (undefined4)(uVar12 >> 0x20);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_110 = 0x18;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      uVar7 = (**(code **)(*local_d0 + 0x10))(local_d0,0x18a5b);
      FUN_1400019a0(&local_298,puVar6);
      local_188 = &local_298;
      FUN_140002730(&local_288,&DAT_1420c2078);
      local_180 = &local_288;
      FUN_1400019a0(&local_278,uVar7);
      local_178 = &local_278;
      uVar8 = FUN_1416ab210(local_d0,local_d8,&local_e8,2,CONCAT44(uVar2,DAT_1420da500),&local_188);
      FUN_1400019a0(&local_268,uVar8);
      local_170 = &local_268;
      FUN_140002730(&local_258,&DAT_1420c2088);
      local_168 = &local_258;
      uVar8 = FUN_1400b9c80(local_d0,local_d8,&local_c8,3,&local_178);
      FUN_1416a8cb0(local_d0);
      FUN_1400019a0(uVar7,uVar8);
      FUN_1416a8c00(1);
      local_110 = 0x19;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      uVar8 = (**(code **)(*local_d0 + 0x10))(local_d0,0x18a5c);
      FUN_1400019a0(&local_298,uVar8);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      FUN_140002730(&local_278,&DAT_1420c2088);
      ppuVar13 = &local_188;
      local_178 = &local_278;
      uVar7 = FUN_1400b9c80(local_d0,local_d8,&local_c8,3,ppuVar13);
      uVar2 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      FUN_1416a8cb0(local_d0);
      FUN_1400019a0(uVar8,uVar7);
      FUN_1416a8c00(1);
      local_110 = 0x1b;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_1420c2098);
      uVar7 = CONCAT44(uVar2,DAT_1420da090);
      local_188 = &local_298;
      FUN_1416ab210(local_d0,local_d8,&local_c8,1,uVar7,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_110 = 0x1c;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      uVar7 = (**(code **)(*local_d0 + 8))(local_d0,0x18818);
      FUN_140002730(&local_298,&DAT_142181cd0);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      FUN_140004520(&local_a0,uVar8,0x4010000000000000);
      FUN_1400019a0(&local_278,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_178 = &local_278;
      FUN_140004520(&local_1c8,local_198,0x4000000000000000);
      uStack_b0._4_4_ = *(uint *)((longlong)local_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(local_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *local_108;
      }
      else {
        FUN_140eeb6c0(&local_b8);
      }
      FUN_140003e00(&local_b8,&local_1c8);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      FUN_1400019a0(&local_268,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1c8);
      }
      local_170 = &local_268;
      FUN_140004520(&local_b8,local_190,0x4000000000000000);
      local_94 = *(uint *)((longlong)local_100 + 0xc);
      local_98 = *(uint *)(local_100 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *local_100;
      }
      else {
        FUN_140eeb6c0(&local_a0);
      }
      FUN_140003e00(&local_a0,&local_b8);
      FUN_1400019a0(&local_258,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_168 = &local_258;
      FUN_140004520(&local_1c8,local_198,0x4000000000000000);
      uStack_b0._4_4_ = *(uint *)((longlong)local_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(local_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *local_108;
      }
      else {
        FUN_140eeb6c0(&local_b8);
      }
      FUN_140003ca0(&local_b8,&local_1c8);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      FUN_1400019a0(&local_248,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1c8);
      }
      local_160 = &local_248;
      FUN_140004520(&local_b8,local_190,0x4000000000000000);
      local_94 = *(uint *)((longlong)local_100 + 0xc);
      local_98 = *(uint *)(local_100 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *local_100;
      }
      else {
        FUN_140eeb6c0(&local_a0);
      }
      FUN_140003ca0(&local_a0,&local_b8);
      FUN_1400019a0(&local_238,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_158 = &local_238;
      uVar14 = CONCAT44(uVar2,DAT_1420da0e0);
      uVar9 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,uVar14,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&local_228,uVar9);
      local_150 = &local_228;
      FUN_140002730(&local_218,&DAT_142181cd0);
      local_148 = &local_218;
      FUN_140002730(&local_208,&DAT_142181cd0);
      local_140 = &local_208;
      uVar9 = CONCAT44(uVar2,DAT_1420db2e0);
      FUN_1416ab210(local_d0,local_d8,&local_c8,7,uVar9,&local_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_110 = 0x1d;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_142181cd0);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      FUN_1400019a0(&local_278,uVar8);
      uStack_b0._4_4_ = *(uint *)((longlong)local_108 + 0xc);
      uStack_b0._0_4_ = *(uint *)(local_108 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *local_108;
        local_178 = &local_278;
      }
      else {
        local_178 = &local_278;
        FUN_140eeb6c0(&local_b8);
      }
      FUN_140003e00(&local_b8,local_198);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      puVar6 = local_100;
      FUN_1400019a0(&local_268,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_170 = &local_268;
      }
      else {
        local_170 = &local_268;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140003e00(&local_a0,local_190);
      FUN_1400019a0(&local_258,&local_a0);
      puVar6 = local_108;
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_168 = &local_258;
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *puVar6;
      }
      else {
        FUN_140eeb6c0(&local_b8,puVar6);
      }
      FUN_140003ca0(&local_b8,local_198);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      puVar6 = local_100;
      FUN_1400019a0(&local_248,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_160 = &local_248;
      }
      else {
        local_160 = &local_248;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140003ca0(&local_a0,local_190);
      FUN_1400019a0(&local_238,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_158 = &local_238;
      uVar14 = CONCAT44(uVar2,DAT_1420da0e0);
      uVar9 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,uVar14,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&local_228,uVar9);
      local_150 = &local_228;
      FUN_140002730(&local_218,&DAT_142181cd0);
      local_148 = &local_218;
      FUN_140002730(&local_208,&DAT_142181cd0);
      local_140 = &local_208;
      uVar9 = CONCAT44(uVar2,DAT_1420db2e0);
      FUN_1416ab210(local_d0,local_d8,&local_c8,7,uVar9,&local_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_110 = 0x1e;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_1420c20a8);
      local_188 = &local_298;
      FUN_140002730(&local_288,&DAT_1420c2098);
      local_180 = &local_288;
      uVar9 = CONCAT44(uVar2,DAT_1420da7a0);
      FUN_1416ab210(local_d0,local_d8,&local_c8,2,uVar9,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_110 = 0x20;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_1420c20b8);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      uStack_b0 = (ulonglong)(uint)uStack_b0;
      local_b8 = 0x3ff0000000000000;
      FUN_140003e00(&local_b8,uVar8);
      FUN_140004520(&local_a0,&local_b8,0x4008000000000000);
      FUN_1400019a0(&local_278,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_178 = &local_278;
      uVar9 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,CONCAT44(uVar2,DAT_1420da0e0),&local_188);
      FUN_1400019a0(&local_268,uVar9);
      local_170 = &local_268;
      FUN_140002730(&local_258,&DAT_1420c2098);
      local_168 = &local_258;
      ppuVar13 = &local_170;
      FUN_14003ee60(local_d0,local_d8,&local_c8,2,ppuVar13);
      uVar2 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      local_110 = 0x21;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_1420c2098);
      uVar9 = CONCAT44(uVar2,DAT_1420da090);
      local_188 = &local_298;
      FUN_1416ab210(local_d0,local_d8,&local_c8,1,uVar9,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_110 = 0x22;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_142181cd0);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      FUN_140004520(&local_a0,uVar8,0x4010000000000000);
      FUN_1400019a0(&local_278,&local_a0);
      puVar6 = local_108;
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_178 = &local_278;
      }
      else {
        local_178 = &local_278;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      FUN_1400019a0(&local_268,&local_a0);
      puVar6 = local_100;
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_170 = &local_268;
      }
      else {
        local_170 = &local_268;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140001c50(&local_a0,1);
      FUN_1400019a0(&local_258,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_168 = &local_258;
      FUN_140017bd0(&local_a0,local_190,2);
      FUN_1400019a0(&local_248,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      uVar14 = CONCAT44(uVar2,DAT_1420da0e0);
      local_160 = &local_248;
      uVar9 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,uVar14,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
      FUN_1400019a0(&local_238,uVar9);
      local_158 = &local_238;
      FUN_140002730(&local_228,&DAT_142181cd0);
      local_150 = &local_228;
      FUN_140002730(&local_218,&DAT_142181cd0);
      local_148 = &local_218;
      uVar9 = CONCAT44(uVar2,DAT_1420dac90);
      FUN_1416ab210(local_d0,local_d8,&local_c8,6,uVar9,&local_170);
      uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_110 = 0x23;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_142181cd0);
      local_188 = &local_298;
      FUN_1400019a0(&local_288,uVar7);
      local_180 = &local_288;
      FUN_140004520(&local_a0,uVar8,0x4020000000000000);
      FUN_1400019a0(&local_278,&local_a0);
      puVar6 = local_108;
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *puVar6;
        local_178 = &local_278;
      }
      else {
        local_178 = &local_278;
        FUN_140eeb6c0(&local_b8,puVar6);
      }
      FUN_140003e00(&local_b8,local_198);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      puVar6 = local_100;
      FUN_1400019a0(&local_268,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_170 = &local_268;
      }
      else {
        local_170 = &local_268;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140003e00(&local_a0,local_190);
      FUN_1400019a0(&local_258,&local_a0);
      puVar6 = local_108;
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_168 = &local_258;
      uStack_b0._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_b0._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_b8 = *puVar6;
      }
      else {
        FUN_140eeb6c0(&local_b8,puVar6);
      }
      FUN_140003ca0(&local_b8,local_198);
      local_94 = uStack_b0._4_4_;
      local_98 = (uint)uStack_b0;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) == 0) {
        local_a0 = local_b8;
      }
      else {
        FUN_140eeb6c0(&local_a0,&local_b8);
      }
      FUN_140003ca0(&local_a0,&local_1d8);
      puVar6 = local_100;
      FUN_1400019a0(&local_248,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b8);
      }
      local_94 = *(uint *)((longlong)puVar6 + 0xc);
      local_98 = *(uint *)(puVar6 + 1);
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_a0 = *puVar6;
        local_160 = &local_248;
      }
      else {
        local_160 = &local_248;
        FUN_140eeb6c0(&local_a0,puVar6);
      }
      FUN_140003ca0(&local_a0,local_190);
      FUN_1400019a0(&local_238,&local_a0);
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_158 = &local_238;
      uVar8 = CONCAT44(uVar2,DAT_1420da0e0);
      uVar7 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,uVar8,&local_188);
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_228,uVar7);
      local_150 = &local_228;
      FUN_140002730(&local_218,&DAT_142181cd0);
      local_148 = &local_218;
      FUN_140002730(&local_208,&DAT_142181cd0);
      local_140 = &local_208;
      uVar7 = CONCAT44(uVar2,DAT_1420db2e0);
      FUN_1416ab210(local_d0,local_d8,&local_c8,7,uVar7,&local_170);
      uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_110 = 0x24;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_140002730(&local_298,&DAT_142181cd0);
      local_188 = &local_298;
      FUN_1416ab210(local_d0,local_d8,&local_c8,1,CONCAT44(uVar2,DAT_1420da090),&local_188);
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
      if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_348);
      }
      if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_358);
      }
      if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_368);
      }
      if ((0x46U >> (local_36c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_378);
      }
      if ((0x46U >> (local_37c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_388);
      }
      if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_398);
      }
      if ((0x46U >> (local_39c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3a8);
      }
      if ((0x46U >> (local_3ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3b8);
      }
      if ((0x46U >> (local_3bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3c8);
      }
      if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3d8);
      }
      if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3e8);
      }
      if ((0x46U >> (local_2a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2a8);
      }
      if ((0x46U >> (local_2b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2b8);
      }
      if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2d8);
      }
      if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2e8);
      }
      if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1a8);
      }
      if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1b8);
      }
      if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1d8);
      }
      if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2c8);
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
      DAT_142182d78 = (undefined8 *)local_120;
      return;
    }
    local_110 = 7;
    if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0x500000000;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uVar2 = FUN_141693b30(&local_f8);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x186b9,uVar2,&local_1c8,uVar12,(ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar2 = (undefined4)(uVar12 >> 0x20);
    FUN_1400019a0(&local_288,&local_1c8);
    local_180 = &local_288;
    uVar8 = CONCAT44(uVar2,DAT_1420da260);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_e8,1,uVar8,&local_180);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2e8,uVar7);
    local_110 = 8;
    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0x500000000;
    local_188 = &local_2e8;
    uVar8 = CONCAT44(uVar2,DAT_1420da270);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_c8,1,uVar8,&local_188);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2d8,uVar7);
    local_110 = 10;
    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0x500000000;
    if ((0x46U >> (local_e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0x500000000;
    if ((0x46U >> (local_2b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0x500000000;
    if ((0x46U >> (local_2a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0x500000000;
    puVar6 = (undefined8 *)(**(code **)(*local_d0 + 0x10))(local_d0,0x18a5a);
    local_188 = &local_2d8;
    local_180 = &local_1b8;
    local_178 = &local_1a8;
    local_94 = local_1ac;
    local_98 = local_1b0;
    local_170 = local_188;
    if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
      local_a0 = local_1b8;
    }
    else {
      FUN_140eeb6c0(&local_a0);
    }
    FUN_140001c50(&local_a0,1);
    FUN_1400019a0(&local_258,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_168 = &local_258;
    local_158 = &local_2d8;
    local_94 = local_19c;
    local_98 = local_1a0;
    local_160 = &local_1a8;
    local_150 = &local_1b8;
    if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
      local_a0 = local_1a8;
    }
    else {
      FUN_140eeb6c0(&local_a0,&local_1a8);
    }
    FUN_140001c50(&local_a0,1);
    FUN_1400019a0(&local_218,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_148 = &local_218;
    local_140 = &local_2d8;
    local_94 = local_1ac;
    local_98 = local_1b0;
    if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
      local_a0 = local_1b8;
    }
    else {
      FUN_140eeb6c0(&local_a0,&local_1b8);
    }
    FUN_140001c50(&local_a0,1);
    FUN_1400019a0(&local_1f8,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_138 = &local_1f8;
    local_94 = local_19c;
    local_98 = local_1a0;
    if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
      local_a0 = local_1a8;
    }
    else {
      FUN_140eeb6c0(&local_a0,&local_1a8);
    }
    FUN_140001c50(&local_a0,1);
    FUN_1400019a0(&local_1e8,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_130 = &local_1e8;
    uVar8 = CONCAT44(uVar2,DAT_1420da280);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_c8,3,uVar8,&local_188);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_94 = 0;
    local_a0 = 0;
    iVar1 = FUN_1416d9df0(uVar7,&local_a0,DAT_1420f6b08,1);
    uVar8 = CONCAT44(uVar2,DAT_1420da280);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_e8,3,uVar8,&local_170);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_94 = 0;
    local_a0 = 0;
    iVar3 = FUN_1416d9df0(uVar7,&local_a0,DAT_1420f6b08,1);
    uVar8 = CONCAT44(uVar2,DAT_1420da280);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_2b8,3,uVar8,&local_158);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    local_94 = 0;
    local_a0 = 0;
    iVar4 = FUN_1416d9df0(uVar7,&local_a0,DAT_1420f6b08,1);
    ppuVar13 = &local_140;
    uVar12 = CONCAT44(uVar2,DAT_1420da280);
    uVar7 = FUN_1416ab210(local_d0,local_d8,&local_2a8,3,uVar12,ppuVar13);
    local_94 = 0;
    local_a0 = 0;
    iVar5 = FUN_1416d9df0(uVar7,&local_a0,DAT_1420f6b08,1);
    auVar11._0_4_ = -(uint)(iVar3 < 1);
    auVar11._4_4_ = -(uint)(iVar1 < 1);
    auVar11._8_4_ = -(uint)(iVar4 < 1);
    auVar11._12_4_ = -(uint)(iVar5 < 1);
    auVar10._0_4_ = -(uint)(iVar3 == -2);
    auVar10._4_4_ = -(uint)(iVar1 == -2);
    auVar10._8_4_ = -(uint)(iVar4 == -2);
    auVar10._12_4_ = -(uint)(iVar5 == -2);
    auVar11 = ~auVar10 & auVar11;
    FUN_140001c50(puVar6,(-auVar11._4_4_ - (auVar11._12_4_ >> 0x1f)) +
                         (-auVar11._0_4_ - (auVar11._8_4_ >> 0x1f)));
    switch(local_ec & 0xffffff) {
    case 1:
      local_f8 = (double)FUN_1416940c0(&local_f8);
      local_f8 = local_f8 + 1.0;
      local_ec = 0;
      break;
    default:
      goto switchD_140ee4e14_caseD_2;
    case 7:
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
      break;
    case 10:
      local_f8 = (double)((longlong)local_f8 + 1);
      break;
    case 0xd:
      local_ec = 0;
    case 0:
      local_f8 = local_f8 + 1.0;
    }
  } while( true );
switchD_140ee4e14_caseD_2:
  FUN_140001d70(&DAT_141981e6a,&local_f8,&local_f8);
  goto LAB_140ee4e60;
}


