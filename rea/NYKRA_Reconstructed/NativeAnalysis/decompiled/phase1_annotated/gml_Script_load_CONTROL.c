// Function: gml_Script_load_CONTROL @ 0x1401b9a50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_CONTROL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  uint in_stack_fffffffffffffac8;
  uint uVar11;
  ulonglong in_stack_fffffffffffffad0;
  undefined8 **ppuVar12;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  uint local_4fc;
  undefined8 local_4f8;
  uint local_4ec;
  undefined8 local_4e8;
  uint local_4dc;
  undefined8 local_4d8;
  uint local_4cc;
  undefined8 local_4c8;
  uint local_4bc;
  undefined8 local_4b8;
  uint local_4ac;
  undefined8 local_4a8;
  uint local_49c;
  undefined8 local_498;
  uint local_48c;
  undefined8 local_488;
  uint local_47c;
  undefined8 local_478;
  uint local_46c;
  undefined8 local_468;
  uint local_45c;
  undefined8 local_458;
  uint local_44c;
  undefined8 local_448;
  uint local_43c;
  undefined8 local_438;
  uint local_42c;
  undefined8 local_428;
  uint local_41c;
  undefined8 local_418;
  uint local_40c;
  undefined8 local_408;
  uint local_3fc;
  undefined8 local_3f8;
  uint local_3ec;
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
  undefined8 local_2d0;
  undefined1 local_2c8 [12];
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
  undefined1 *local_228;
  uint local_220;
  uint local_21c;
  undefined1 *local_218;
  uint local_210;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  undefined1 *local_1d8;
  uint local_1d0;
  uint local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  double local_168;
  uint local_15c;
  undefined1 *local_158;
  uint local_150;
  uint local_14c;
  undefined1 *local_148;
  uint local_140;
  uint local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 *local_128;
  uint local_120;
  uint local_11c;
  undefined1 *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_e8 = "gml_Script_load_CONTROL";
  local_e0 = 0;
  local_f0 = DAT_142182d78;
  DAT_142182d78 = &local_f0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_2fc = 0xffffff;
  local_308 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_20c = 0xffffff;
  local_218 = (undefined1 *)0x0;
  DAT_142182d90 = param_1;
  local_90 = param_2;
  local_88 = param_1;
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_4fc = 0xffffff;
  local_508 = 0;
  local_4ec = 0xffffff;
  local_4f8 = 0;
  local_4dc = 0xffffff;
  local_4e8 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_47c = 0xffffff;
  local_488 = 0;
  local_46c = 0xffffff;
  local_478 = 0;
  local_45c = 0xffffff;
  local_468 = 0;
  local_44c = 0xffffff;
  local_458 = 0;
  local_43c = 0xffffff;
  local_448 = 0;
  local_42c = 0xffffff;
  local_438 = 0;
  local_41c = 0xffffff;
  local_428 = 0;
  local_40c = 0xffffff;
  local_418 = 0;
  local_3fc = 0xffffff;
  local_408 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
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
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_21c = 0xffffff;
  local_228 = (undefined1 *)0x0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_1cc = 0xffffff;
  local_1d8 = (undefined1 *)0x0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_78 = (ulonglong)(uint)local_78;
  local_80 = 0;
  local_130 = (ulonglong)(uint)local_130;
  local_138 = 0;
  local_2d0 = (ulonglong)(uint)local_2d0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd880/*gml_Script_load_CONTROL*/);
  local_e0 = 2;
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
  }
  FUN_1416ab000(&local_308,&DAT_14217f820);
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  FUN_1416ab000(&local_2f8,s_CONTROL_1420b3980);
  local_e0 = 4;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  local_518 = 0;
  uStack_510 = 0;
  FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_518,in_stack_fffffffffffffac8 & 0xffffff00,
                in_stack_fffffffffffffad0 & 0xffffffffffffff00);
  FUN_1400019a0(&local_2b8,&local_518);
  local_b8 = &local_2b8;
  ppuVar12 = &local_b8;
  uVar11 = DAT_1420da4b0/*floor*/;
  uVar6 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da4b0/*floor*/,ppuVar12);
  uStack_110 = (ulonglong)(uint)uStack_110;
  local_118 = &DAT_bff0000000000000;
  iVar3 = FUN_1416d9df0(uVar6,&local_118,DAT_1420f6b08,1);
  if ((iVar3 == -2) || (0 < iVar3)) {
    local_e0 = 7;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_138);
    }
    local_138 = 0;
    local_130 = 0x500000000;
    FUN_1416ce870(local_88,DAT_1420d59d8/*working_directory*/,0x80000000,&local_218);
    FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_518,uVar11 & 0xffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    FUN_1400019a0(&local_2b8,&local_518);
    local_b8 = &local_2b8;
    puVar7 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_138,1,DAT_1420da4b0/*floor*/,&local_b8);
    uStack_110._4_4_ = *(uint *)((longlong)puVar7 + 0xc);
    uStack_110._0_4_ = *(uint *)(puVar7 + 1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
      local_118 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1401c29b0(&local_118,puVar7);
    }
    FUN_140001c50(&local_118,1);
    FUN_1400019a0(&local_2a8,&local_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    local_b0 = &local_2a8;
    FUN_1416ac010(&local_158,&DAT_1420b39a5);
    uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da2b0/*string*/,&local_b0);
    FUN_1416ac010(local_2c8,s_DATA_CHAPTER_TEMPLATES_chapter__1420b39b0);
    local_13c = local_20c;
    local_140 = local_210;
    if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
      local_148 = local_218;
    }
    else {
      FUN_1401c29b0(&local_148,&local_218);
    }
    FUN_140003ca0(&local_148,local_2c8);
    local_11c = local_13c;
    local_120 = local_140;
    if ((0x46U >> (local_13c & 0x1f) & 1) == 0) {
      local_128 = local_148;
    }
    else {
      FUN_1401c29b0(&local_128,&local_148);
    }
    FUN_140003ca0(&local_128,uVar5);
    uStack_c0._4_4_ = local_11c;
    uStack_c0._0_4_ = local_120;
    if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
      local_c8 = local_128;
    }
    else {
      FUN_1401c29b0(&local_c8,&local_128);
    }
    FUN_140003ca0(&local_c8,&local_158);
    uStack_110._4_4_ = uStack_c0._4_4_;
    uStack_110._0_4_ = (uint)uStack_c0;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      local_118 = local_c8;
    }
    else {
      FUN_1401c29b0(&local_118,&local_c8);
    }
    FUN_140003ca0(&local_118,&local_2f8);
    FUN_1400019a0(&local_308,&local_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_128);
    }
    if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_148);
    }
    if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_2c8);
    }
    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_158);
    }
  }
  else {
    local_e0 = 5;
    if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_138);
    }
    local_138 = 0;
    local_130 = 0x500000000;
    FUN_1416ce870(local_88,DAT_1420d59d8/*working_directory*/,0x80000000,&local_218);
    FUN_1400019a0(&local_2a8,uVar5);
    local_b0 = &local_2a8;
    FUN_1416ac010(&local_158,&DAT_1420b39a5);
    uVar5 = FUN_1416ab210(local_88,local_90,&local_138,1,DAT_1420da2b0/*string*/,&local_b0);
    FUN_1416ac010(local_2c8,s_PROFILES_HEPTAVERSE__1420b3990);
    local_13c = local_20c;
    local_140 = local_210;
    if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
      local_148 = local_218;
    }
    else {
      FUN_1401c29b0(&local_148,&local_218);
    }
    FUN_140003ca0(&local_148,local_2c8);
    local_11c = local_13c;
    local_120 = local_140;
    if ((0x46U >> (local_13c & 0x1f) & 1) == 0) {
      local_128 = local_148;
    }
    else {
      FUN_1401c29b0(&local_128,&local_148);
    }
    FUN_140003ca0(&local_128,uVar5);
    uStack_c0._0_4_ = local_120;
    uStack_c0._4_4_ = local_11c;
    if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
      local_c8 = local_128;
    }
    else {
      FUN_1401c29b0(&local_c8,&local_128);
    }
    FUN_140003ca0(&local_c8,&local_158);
    uStack_110._0_4_ = (uint)uStack_c0;
    uStack_110._4_4_ = uStack_c0._4_4_;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      local_118 = local_c8;
    }
    else {
      FUN_1401c29b0(&local_118,&local_c8);
    }
    FUN_140003ca0(&local_118,&local_2f8);
    FUN_1400019a0(&local_308,&local_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_128);
    }
    if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_148);
    }
    if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_2c8);
    }
    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_158);
    }
  }
  local_e0 = 10;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  local_b8 = &local_308;
  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da3d0/*buffer_load*/,&local_b8);
  FUN_1400019a0(&local_d8,uVar5);
  uStack_110._4_4_ = 0;
  local_118 = &DAT_bff0000000000000;
  iVar3 = FUN_1416d9df0(&local_d8,&local_118,DAT_1420f6b08,0);
  if (iVar3 == 0) {
    local_e0 = 0xb;
  }
  else {
    local_e0 = 0xc;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_b8 = &local_d8;
    FUN_140002730(&local_2a8,&DAT_1420b39d0);
    local_b0 = &local_2a8;
    FUN_140002730(&local_298,&DAT_14217f828);
    local_a8 = &local_298;
    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da650/*buffer_seek*/,&local_b8);
    local_e0 = 0xd;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_b8 = &local_d8;
    uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da470/*buffer_tell*/,&local_b8);
    FUN_1400019a0(&local_2e8,uVar5);
    local_e0 = 0xe;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_b8 = &local_d8;
    FUN_140002730(&local_2a8,&DAT_14217f828);
    local_b0 = &local_2a8;
    FUN_140002730(&local_298,&DAT_14217f828);
    local_a8 = &local_298;
    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da650/*buffer_seek*/,&local_b8);
    local_e0 = 0x12;
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_b8 = &local_d8;
    puVar7 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da470/*buffer_tell*/,&local_b8);
    uStack_110._4_4_ = *(uint *)((longlong)puVar7 + 0xc);
    uStack_110._0_4_ = *(uint *)(puVar7 + 1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
      local_118 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1401c29b0(&local_118,puVar7);
    }
    FUN_140001c50(&local_118,1);
    iVar3 = FUN_1416d9df0(&local_118,&local_2e8,DAT_1420f6b08,1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    if (iVar3 < 0) {
      local_e0 = 0x16;
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_80 = 0;
      local_78 = 0x500000000;
      if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      local_138 = 0;
      local_130 = 0x500000000;
      local_b8 = &local_d8;
      FUN_140002730(&local_2a8,&DAT_1420b39e0);
      local_b0 = &local_2a8;
      uVar5 = FUN_1416ab210(local_88,local_90,&local_138,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
      FUN_1400019a0(&local_298,uVar5);
      local_a8 = &local_298;
      uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da460/*asset_get_index*/,&local_a8);
      FUN_1400019a0(&local_3d8,uVar5);
      uVar5 = DAT_1420f6b08;
      uStack_110._4_4_ = 0;
      local_118 = &DAT_bff0000000000000;
      iVar3 = FUN_1416d9df0(&local_3d8,&local_118,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        uStack_110._4_4_ = 0;
        local_118 = &DAT_bff0000000000000;
        iVar3 = FUN_1416d9df0(&local_3d8,&local_118,uVar5,1);
        if (0 < iVar3) {
          local_e0 = 0x19;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b39f0);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_508,uVar5);
          local_e0 = 0x1a;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b39f0);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4f8,uVar5);
          local_e0 = 0x1b;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b39f0);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4e8,uVar5);
          local_e0 = 0x1c;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b39f0);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4d8,uVar5);
          local_e0 = 0x1d;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3a00);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4c8,uVar5);
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          local_b8 = &local_d8;
          puVar7 = (undefined8 *)
                   FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da470/*buffer_tell*/,&local_b8);
          uStack_110._4_4_ = *(uint *)((longlong)puVar7 + 0xc);
          uStack_110._0_4_ = *(uint *)(puVar7 + 1);
          if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
            local_118 = (undefined1 *)*puVar7;
          }
          else {
            FUN_1401c29b0(&local_118,puVar7);
          }
          FUN_140001c50(&local_118,1);
          iVar3 = FUN_1416d9df0(&local_118,&local_2e8,DAT_1420f6b08,1);
          if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_118);
          }
          if (-1 < iVar3) {
            local_e0 = 0x1f;
            goto joined_r0x0001401bb22e;
          }
          uStack_c0._4_4_ = 0;
          local_c8 = (undefined1 *)0x4053c00000000000/*79 (obj:oControl)*/;
          iVar3 = FUN_1416ab810(&local_118,&local_88,&local_90,&local_c8);
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c8);
          }
          dVar1 = _DAT_141981e30;
          if (0 < iVar3) {
            do {
              local_e0 = 0x23;
              FUN_1400019a0(&local_4b8,&local_4e8);
              FUN_1416cfae0(local_88,DAT_1420d58e8/*x*/,0x80000000,&local_4b8);
              local_e0 = 0x24;
              FUN_1400019a0(&local_4a8,&local_4d8);
              FUN_1416cfae0(local_88,DAT_1420d58f8/*y*/,0x80000000,&local_4a8);
              local_e0 = 0x25;
              FUN_1400019a0(&local_498,&local_4c8);
              FUN_1416cfae0(local_88,DAT_1420d5a18/*depth*/,0x80000000,&local_498);
              local_e0 = 0x26;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_488,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5a98/*speed*/,0x80000000,&local_488);
              local_e0 = 0x27;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_478,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5aa8/*direction*/,0x80000000,&local_478);
              local_e0 = 0x28;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_468,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5ab8/*friction*/,0x80000000,&local_468);
              local_e0 = 0x29;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_458,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5ac8/*gravity*/,0x80000000,&local_458);
              local_e0 = 0x2a;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_448,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_448);
              local_e0 = 0x2b;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_438,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5ae8/*image_index*/,0x80000000,&local_438);
              local_e0 = 0x2c;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a00);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_428,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5af8/*image_speed*/,0x80000000,&local_428);
              local_e0 = 0x2d;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b39f0);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_418,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_418);
              local_e0 = 0x2e;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a10);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_408,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5b18/*image_blend*/,0x80000000,&local_408);
              local_e0 = 0x2f;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_138);
              }
              local_138 = 0;
              local_130 = 0x500000000;
              if ((0x46U >> (local_2d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a10);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_2d8,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_298,uVar5);
              local_a8 = &local_298;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_138,1,DAT_1420da230/*round*/,&local_a8);
              FUN_1400019a0(&local_288,uVar5);
              local_a0[0] = &local_288;
              ppuVar12 = local_a0;
              uVar11 = DAT_1420da620/*bool*/;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da620/*bool*/,ppuVar12);
              FUN_1400019a0(&local_3f8,uVar5);
              FUN_1416cfae0(local_88,DAT_1420d5b28/*visible*/,0x80000000,&local_3f8);
              local_e0 = 0x31;
              if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1b8);
              }
              local_1ac = 0;
              local_1b8 = 0;
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,0,&local_3c8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = (ulonglong)(uint)uStack_c0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3c8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x32;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3c8,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,0,&local_3c8);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,1,&local_3b8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3b8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x33;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3b8,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,1,&local_3b8);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,2,&local_3a8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3a8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x34;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3a8,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,2,&local_3a8);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,3,&local_398,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_398,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x35;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_398,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,3,&local_398);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,4,&local_388,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_388,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x36;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_388,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,4,&local_388);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,5,&local_378,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_378,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x37;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_378,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,5,&local_378);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,6,&local_368,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_368,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x38;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_368,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,6,&local_368);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,7,&local_358,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_358,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x39;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_358,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,7,&local_358);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,8,&local_348,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_348,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x3a;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_348,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,8,&local_348);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,9,&local_338,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_338,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x3b;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_338,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,9,&local_338);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,10,&local_328,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_328,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x3c;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_328,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,10,&local_328);
              }
              FUN_1416cea80(local_88,DAT_1420d5a48/*alarm*/,0xb,&local_318,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              uStack_c0._4_4_ = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_318,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_1b8,uVar5);
              }
              else {
                local_e0 = 0x3d;
                DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a00);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_318,uVar5);
                FUN_1416cfae0(local_88,DAT_1420d5a48/*alarm*/,0xb,&local_318);
              }
              local_e0 = 0x3f;
              if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_80);
              }
              local_80 = 0;
              local_78 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3a20);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_3e8,uVar5);
              if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1f8);
              }
              local_1ec = 0;
              local_1f8 = 0;
              if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_228);
              }
              local_21c = 0;
              local_228 = (undefined1 *)0x0;
              if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1a8);
              }
              local_19c = 0;
              local_1a8 = 0;
              if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_278);
              }
              local_26c = 0;
              local_278 = 0;
              if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_208);
              }
              local_1fc = 0;
              local_208 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
              local_e0 = 0x41;
              if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1c8);
              }
              local_1bc = 0;
              local_1c8 = 0.0;
              while ((iVar3 = FUN_1416d9df0(&local_1c8,&local_3e8,DAT_1420f6b08,1), iVar3 != -2 &&
                     (iVar3 < 0))) {
                local_e0 = 0x43;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b39e0);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_1f8,uVar5);
                local_e0 = 0x45;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                              (ulonglong)ppuVar12 & 0xffffffffffffff00);
                FUN_1400019a0(&local_2b8,&local_1e8);
                local_b8 = &local_2b8;
                local_b0 = &local_1f8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da350/*variable_instance_exists*/,&local_b8);
                FUN_1400019a0(&local_208,uVar5);
                local_e0 = 0x47;
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3a30);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_228,uVar5);
                local_e0 = 0x49;
                uStack_c0._4_4_ = local_21c;
                uStack_c0._0_4_ = local_220;
                if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
                  local_c8 = local_228;
                }
                else {
                  FUN_1401c29b0(&local_c8,&local_228);
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                             ) < DAT_14217f8a4) &&
                   (_Init_thread_header(&DAT_14217f8a4), DAT_14217f8a4 == -1)) {
                  _DAT_14217f84c = 0;
                  _DAT_14217f840 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                  _DAT_14217f860 = 0x100000000;
                  _DAT_14217f854 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
                  _DAT_14217f874 = 0x200000000;
                  _DAT_14217f868 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                  _DAT_14217f888 = 0x300000000;
                  _DAT_14217f87c = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                  _DAT_14217f89c = 0x400000000;
                  _DAT_14217f890 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
                  atexit(FUN_1401c2630);
                  _Init_thread_footer(&DAT_14217f8a4);
                }
                uVar5 = DAT_1420f6b08;
                iVar3 = FUN_1416d9df0(&DAT_14217f840,&local_c8,DAT_1420f6b08,0);
                if (iVar3 != 0) {
                  iVar3 = FUN_1416d9df0(&DAT_14217f854,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 1;
                    goto LAB_1401bd7c0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f868,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 2;
                    goto LAB_1401bd7c0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f87c,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 3;
                    goto LAB_1401bd7c0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f890,&local_c8,uVar5,0);
                  uVar4 = 0x90;
                  if (iVar3 == 0) {
                    lVar8 = 4;
                    goto LAB_1401bd7c0;
                  }
                  goto LAB_1401beee0;
                }
                lVar8 = 0;
LAB_1401bd7c0:
                switch((&DAT_14217f850)[lVar8 * 5]) {
                case 0:
                  local_e0 = 0x4b;
                  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_80);
                  }
                  local_80 = 0;
                  local_78 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b39f0);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_1a8,uVar5);
                  cVar2 = FUN_1416927d0(&local_208);
                  uVar4 = 0x4d;
                  if (cVar2 != '\0') {
                    local_e0 = 0x4c;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1e8);
                    local_b8 = &local_2b8;
                    local_b0 = &local_1f8;
                    local_a8 = &local_1a8;
                    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 1:
                  local_e0 = 0x50;
                  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_80);
                  }
                  local_80 = 0;
                  local_78 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b39e0);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_1a8,uVar5);
                  cVar2 = FUN_1416927d0(&local_208);
                  uVar4 = 0x52;
                  if (cVar2 != '\0') {
                    local_e0 = 0x51;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1e8);
                    local_b8 = &local_2b8;
                    local_b0 = &local_1f8;
                    local_a8 = &local_1a8;
                    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 2:
                  local_e0 = 0x55;
                  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_248);
                  }
                  local_23c = 0;
                  local_248 = 0;
                  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_238);
                  }
                  local_22c = 0;
                  local_238 = 0;
                  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_268);
                  }
                  local_25c = 0;
                  local_268 = 0;
                  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_258);
                  }
                  local_24c = 0;
                  local_258 = 0;
                  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1d8);
                  }
                  local_1cc = 0;
                  local_1d8 = (undefined1 *)0x0;
                  local_e0 = 0x56;
                  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_80);
                  }
                  local_80 = 0;
                  local_78 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3a20);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_268,uVar5);
                  local_e0 = 0x58;
                  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_198);
                  }
                  local_18c = 0;
                  local_198 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_198,&local_268,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x59;
                    DAT_142182d90 = 0xc48866;
                    uVar4 = FUN_141693b30(&local_198);
                    puVar7 = (undefined8 *)FUN_1416924a0(&local_248,uVar4);
                    FUN_1416a8cb0(local_248);
                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                      FUN_140001b50(puVar7);
                    }
                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                    *puVar7 = 0;
                    FUN_1416a8c00(1);
                    switch(local_18c & 0xffffff) {
                    case 1:
                      local_198 = (double)FUN_1416940c0(&local_198);
                      local_198 = local_198 + dVar1;
                      local_18c = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_198,&local_198);
                      break;
                    case 7:
                      local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
                      break;
                    case 10:
                      local_198 = (double)((longlong)local_198 + 1);
                      break;
                    case 0xd:
                      local_18c = 0;
                    case 0:
                      local_198 = local_198 + dVar1;
                    }
                  }
                  local_e0 = 0x5c;
                  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_178);
                  }
                  local_16c = 0;
                  local_178 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_178,&local_268,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x5d;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    local_b8 = &local_d8;
                    FUN_140002730(&local_2a8,&DAT_1420b3a30);
                    ppuVar12 = &local_b8;
                    uVar11 = DAT_1420da3e0/*buffer_read*/;
                    local_b0 = &local_2a8;
                    uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                    FUN_1400019a0(&local_1d8,uVar5);
                    local_e0 = 0x5e;
                    local_14c = local_1cc;
                    local_150 = local_1d0;
                    if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
                      local_158 = local_1d8;
                    }
                    else {
                      FUN_1401c29b0(&local_158,&local_1d8);
                    }
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 4) < DAT_14217f8ec) &&
                       (_Init_thread_header(&DAT_14217f8ec), DAT_14217f8ec == -1)) {
                      _DAT_14217f8bc = 0;
                      _DAT_14217f8b0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                      _DAT_14217f8d0 = 0x100000000;
                      _DAT_14217f8c4 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                      _DAT_14217f8e4 = 0x200000000;
                      _DAT_14217f8d8 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                      atexit(FUN_1401c2710);
                      _Init_thread_footer(&DAT_14217f8ec);
                    }
                    uVar5 = DAT_1420f6b08;
                    iVar3 = FUN_1416d9df0(&DAT_14217f8b0,&local_158,DAT_1420f6b08,0);
                    if (iVar3 == 0) {
                      lVar8 = 0;
LAB_1401be365:
                      iVar3 = (&DAT_14217f8c0)[lVar8 * 5];
                      if (iVar3 == 2) {
                        local_e0 = 0x7c;
                        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_80);
                        }
                        local_80 = 0;
                        local_78 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,&DAT_1420b3a40);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_1a8,uVar5);
                      }
                      else {
                        if (iVar3 != 1) {
                          if (iVar3 == 0) {
                            local_e0 = 0x60;
                            if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_80);
                            }
                            local_80 = 0;
                            local_78 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,&DAT_1420b39f0);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_1a8,uVar5);
                          }
                          goto LAB_1401be440;
                        }
                        local_e0 = 100;
                        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_80);
                        }
                        local_80 = 0;
                        local_78 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,&DAT_1420b3a20);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_258,uVar5);
                        local_e0 = 0x65;
                        if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_188);
                        }
                        local_17c = 0;
                        local_188 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_188,&local_258,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x66;
                          DAT_142182d90 = 0xc48867;
                          uVar4 = FUN_141693b30(&local_188);
                          puVar7 = (undefined8 *)FUN_1416924a0(&local_238,uVar4);
                          FUN_1416a8cb0(local_238);
                          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                            FUN_140001b50(puVar7);
                          }
                          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                          *puVar7 = 0;
                          FUN_1416a8c00(1);
                          switch(local_17c & 0xffffff) {
                          case 1:
                            local_188 = (double)FUN_1416940c0(&local_188);
                            local_188 = local_188 + dVar1;
                            local_17c = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_188,&local_188);
                            break;
                          case 7:
                            local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
                            break;
                          case 10:
                            local_188 = (double)((longlong)local_188 + 1);
                            break;
                          case 0xd:
                            local_17c = 0;
                          case 0:
                            local_188 = local_188 + dVar1;
                          }
                        }
                        local_e0 = 0x69;
                        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_168);
                        }
                        local_15c = 0;
                        local_168 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_168,&local_258,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x6a;
                          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_80);
                          }
                          local_80 = 0;
                          local_78 = 0x500000000;
                          local_b8 = &local_d8;
                          FUN_140002730(&local_2a8,&DAT_1420b3a30);
                          ppuVar12 = &local_b8;
                          uVar11 = DAT_1420da3e0/*buffer_read*/;
                          local_b0 = &local_2a8;
                          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12
                                               );
                          FUN_1400019a0(&local_1d8,uVar5);
                          local_e0 = 0x6b;
                          local_11c = local_1cc;
                          local_120 = local_1d0;
                          if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
                            local_128 = local_1d8;
                          }
                          else {
                            FUN_1401c29b0(&local_128,&local_1d8);
                          }
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 4) < DAT_14217f918) &&
                             (_Init_thread_header(&DAT_14217f918), DAT_14217f918 == -1)) {
                            _DAT_14217f8fc = 0;
                            _DAT_14217f8f0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                            _DAT_14217f910 = 0x100000000;
                            _DAT_14217f904 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                            atexit(FUN_1401c27c0);
                            _Init_thread_footer(&DAT_14217f918);
                          }
                          uVar5 = DAT_1420f6b08;
                          iVar3 = FUN_1416d9df0(&DAT_14217f8f0,&local_128,DAT_1420f6b08,0);
                          if (iVar3 == 0) {
                            lVar8 = 0;
LAB_1401be9c2:
                            if ((&DAT_14217f900)[lVar8 * 5] != 1) {
                              if ((&DAT_14217f900)[lVar8 * 5] == 0) {
                                local_e0 = 0x6d;
                                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&local_80);
                                }
                                local_80 = 0;
                                local_78 = 0x500000000;
                                local_b8 = &local_d8;
                                FUN_140002730(&local_2a8,&DAT_1420b39f0);
                                ppuVar12 = &local_b8;
                                uVar11 = DAT_1420da3e0/*buffer_read*/;
                                local_b0 = &local_2a8;
                                uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,
                                                      ppuVar12);
                                FUN_1400019a0(&local_278,uVar5);
                              }
                              goto LAB_1401bea8b;
                            }
                            local_e0 = 0x71;
                            if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_80);
                            }
                            local_80 = 0;
                            local_78 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,&DAT_1420b3a40);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_278,uVar5);
                            if ((local_15c & 0xffffff) == 0) goto LAB_1401beb8f;
LAB_1401beab0:
                            local_e0 = 0x75;
                            DAT_142182d90 = 0xc30000;
                            dVar10 = (double)FUN_1416940c0(&local_168);
                          }
                          else {
                            iVar3 = FUN_1416d9df0(&DAT_14217f904,&local_128,uVar5,0);
                            if (iVar3 == 0) {
                              lVar8 = 1;
                              goto LAB_1401be9c2;
                            }
LAB_1401bea8b:
                            if ((local_15c & 0xffffff) != 0) goto LAB_1401beab0;
LAB_1401beb8f:
                            local_e0 = 0x75;
                            DAT_142182d90 = 0xc30000;
                            dVar10 = local_168;
                          }
                          FUN_1416cd4e0(&local_238,(longlong)dVar10,&local_278);
                          if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_128);
                          }
                          switch(local_15c & 0xffffff) {
                          case 1:
                            local_168 = (double)FUN_1416940c0(&local_168);
                            local_168 = local_168 + dVar1;
                            local_15c = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_168,&local_168);
                            break;
                          case 7:
                            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
                            break;
                          case 10:
                            local_168 = (double)((longlong)local_168 + 1);
                            break;
                          case 0xd:
                            local_15c = 0;
                          case 0:
                            local_168 = local_168 + dVar1;
                          }
                        }
                        local_e0 = 0x78;
                        FUN_1400019a0(&local_1a8,&local_238);
                      }
                      if ((local_16c & 0xffffff) == 0) goto LAB_1401be760;
LAB_1401be465:
                      local_e0 = 0x80;
                      DAT_142182d90 = 0xc30000;
                      dVar10 = (double)FUN_1416940c0(&local_178);
                    }
                    else {
                      iVar3 = FUN_1416d9df0(&DAT_14217f8c4,&local_158,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 1;
                        goto LAB_1401be365;
                      }
                      iVar3 = FUN_1416d9df0(&DAT_14217f8d8,&local_158,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 2;
                        goto LAB_1401be365;
                      }
LAB_1401be440:
                      if ((local_16c & 0xffffff) != 0) goto LAB_1401be465;
LAB_1401be760:
                      local_e0 = 0x80;
                      DAT_142182d90 = 0xc30000;
                      dVar10 = local_178;
                    }
                    FUN_1416cd4e0(&local_248,(longlong)dVar10,&local_1a8);
                    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_158);
                    }
                    switch(local_16c & 0xffffff) {
                    case 1:
                      local_178 = (double)FUN_1416940c0(&local_178);
                      local_178 = local_178 + dVar1;
                      local_16c = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_178,&local_178);
                      break;
                    case 7:
                      local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
                      break;
                    case 10:
                      local_178 = (double)((longlong)local_178 + 1);
                      break;
                    case 0xd:
                      local_16c = 0;
                    case 0:
                      local_178 = local_178 + dVar1;
                    }
                  }
                  cVar2 = FUN_1416927d0(&local_208);
                  uVar4 = 0x84;
                  if (cVar2 != '\0') {
                    local_e0 = 0x83;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1e8);
                    local_b8 = &local_2b8;
                    local_b0 = &local_1f8;
                    local_a8 = &local_248;
                    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 3:
                  local_e0 = 0x87;
                  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_80);
                  }
                  local_80 = 0;
                  local_78 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3a40);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_1a8,uVar5);
                  cVar2 = FUN_1416927d0(&local_208);
                  uVar4 = 0x89;
                  if (cVar2 != '\0') {
                    local_e0 = 0x88;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1e8);
                    local_b8 = &local_2b8;
                    local_b0 = &local_1f8;
                    local_a8 = &local_1a8;
                    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 4:
                  local_e0 = 0x8c;
                  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_80);
                  }
                  local_80 = 0;
                  local_78 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3a50);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_1a8,uVar5);
                  cVar2 = FUN_1416927d0(&local_208);
                  uVar4 = 0x8e;
                  if (cVar2 != '\0') {
                    local_e0 = 0x8d;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_1416cea80(local_88,DAT_1420d59e8/*id*/,0x80000000,&local_1e8,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1e8);
                    local_b8 = &local_2b8;
                    local_b0 = &local_1f8;
                    local_a8 = &local_1a8;
                    FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                default:
                  local_e0 = 0x90;
                  goto joined_r0x0001401bdfb0;
                }
LAB_1401beee0:
                local_e0 = uVar4;
joined_r0x0001401bdfb0:
                if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_80);
                }
                local_80 = 0;
                local_78 = 0x500000000;
                local_b8 = &local_d8;
                puVar7 = (undefined8 *)
                         FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da470/*buffer_tell*/,&local_b8);
                local_14c = *(uint *)((longlong)puVar7 + 0xc);
                local_150 = *(uint *)(puVar7 + 1);
                if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
                  local_158 = (undefined1 *)*puVar7;
                }
                else {
                  FUN_1401c29b0(&local_158,puVar7);
                }
                FUN_140001c50(&local_158,1);
                iVar3 = FUN_1416d9df0(&local_158,&local_2e8,DAT_1420f6b08,1);
                if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_158);
                }
                if (iVar3 < 0) {
                  iVar9 = 0;
                  iVar3 = 0;
                }
                else {
                  local_e0 = 0x93;
                  iVar9 = 0x71;
                  iVar3 = 0x71;
                }
                if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_c8);
                  iVar3 = iVar9;
                }
                if (iVar3 != 0) break;
                switch(local_1bc & 0xffffff) {
                case 1:
                  local_1c8 = (double)FUN_1416940c0(&local_1c8);
                  local_1c8 = local_1c8 + dVar1;
                  local_1bc = 0;
                  break;
                default:
                  FUN_140001d70(&DAT_141981e6a,&local_1c8,&local_1c8);
                  break;
                case 7:
                  local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
                  break;
                case 10:
                  local_1c8 = (double)((longlong)local_1c8 + 1);
                  break;
                case 0xd:
                  local_1bc = 0;
                case 0:
                  local_1c8 = local_1c8 + dVar1;
                }
              }
              cVar2 = FUN_1416abe60(&local_118,&local_88,&local_90);
            } while (cVar2 != '\0');
          }
          FUN_1416ab620(&local_118,&local_88,&local_90);
          if (local_108 != 0) {
            thunk_FUN_1416c46f0();
            local_108 = 0;
          }
        }
      }
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_80 = 0;
      local_78 = 0x500000000;
      local_b8 = &local_d8;
      puVar7 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da470/*buffer_tell*/,&local_b8);
      uStack_110._4_4_ = *(uint *)((longlong)puVar7 + 0xc);
      uStack_110._0_4_ = *(uint *)(puVar7 + 1);
      if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
        local_118 = (undefined1 *)*puVar7;
      }
      else {
        FUN_1401c29b0(&local_118,puVar7);
      }
      FUN_140001c50(&local_118,1);
      iVar3 = FUN_1416d9df0(&local_118,&local_2e8,DAT_1420f6b08,1);
      if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_118);
      }
      if (iVar3 < 0) {
        local_e0 = 0x9b;
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        local_b8 = &local_d8;
        ppuVar12 = &local_b8;
        uVar11 = DAT_1420da370/*buffer_delete*/;
        FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da370/*buffer_delete*/,ppuVar12);
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        local_118 = (undefined1 *)0x0;
        uStack_110._0_4_ = 0;
        uStack_110._4_4_ = 0;
        FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_118,uVar11 & 0xffffff00,
                      (ulonglong)ppuVar12 & 0xffffffffffffff00);
        FUN_1400019a0(&local_2b8,&local_118);
        local_b8 = &local_2b8;
        FUN_140002730(&local_2a8,&DAT_1420b39d0);
        ppuVar12 = &local_b8;
        uVar11 = DAT_1420da430/*ds_exists*/;
        local_b0 = &local_2a8;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da430/*ds_exists*/,ppuVar12);
        cVar2 = FUN_1416927d0(uVar5);
        if (cVar2 == '\0') {
          local_e0 = 0x9e;
          DAT_142182d90 = 0x187876b;
          if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_80 = 0;
          local_78 = 0x500000000;
          ppuVar12 = (undefined8 **)0x0;
          uVar11 = DAT_1420da020/*ds_list_create*/;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_80,0,DAT_1420da020/*ds_list_create*/,0);
          uVar6 = FUN_1416cfcc0(0x4f);
          FUN_1416a8cb0(uVar6);
          FUN_1400019a0(&local_118,uVar5);
          FUN_1416a8c00(1);
          FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,0,&local_118);
        }
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        local_c8 = (undefined1 *)0x0;
        uStack_c0._0_4_ = 0;
        uStack_c0._4_4_ = 0;
        FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_c8,uVar11 & 0xffffff00,
                      (ulonglong)ppuVar12 & 0xffffffffffffff00);
        FUN_1400019a0(&local_2b8,&local_c8);
        local_b8 = &local_2b8;
        FUN_140002730(&local_2a8,&DAT_1420b39d0);
        local_b0 = &local_2a8;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da430/*ds_exists*/,&local_b8);
        cVar2 = FUN_1416927d0(uVar5);
        if (cVar2 == '\0') {
          local_e0 = 0x9f;
          if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_138);
          }
          local_138 = 0;
          local_130 = 0x500000000;
          uVar5 = FUN_1416ab210(local_88,local_90,&local_138,0,DAT_1420da020/*ds_list_create*/,0);
          uVar6 = FUN_1416cfcc0(0x4f);
          FUN_1416a8cb0(uVar6);
          FUN_1400019a0(&local_c8,uVar5);
          FUN_1416a8c00(1);
          FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,1,&local_c8);
        }
      }
      else {
        local_e0 = 0x98;
      }
    }
    else {
      local_e0 = 0x14;
    }
  }
joined_r0x0001401bb22e:
  if ((0x46U >> (local_2d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  if ((0x46U >> (local_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e8);
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
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f8);
  }
  if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_408);
  }
  if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_418);
  }
  if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_428);
  }
  if ((0x46U >> (local_42c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_438);
  }
  if ((0x46U >> (local_43c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_448);
  }
  if ((0x46U >> (local_44c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_458);
  }
  if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_468);
  }
  if ((0x46U >> (local_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_478);
  }
  if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_488);
  }
  if ((0x46U >> (local_48c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_498);
  }
  if ((0x46U >> (local_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4a8);
  }
  if ((0x46U >> (local_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b8);
  }
  if ((0x46U >> (local_4bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4c8);
  }
  if ((0x46U >> (local_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4d8);
  }
  if ((0x46U >> (local_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4e8);
  }
  if ((0x46U >> (local_4ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4f8);
  }
  if ((0x46U >> (local_4fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_508);
  }
  if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d8);
  }
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
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
  DAT_142182d78 = (undefined8 *)local_f0;
  return param_3;
}


