// Function: gml_Script_load_game @ 0x1400c5e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_game(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffff9e8;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffff9f0;
  undefined8 **ppuVar17;
  undefined1 ***pppuVar18;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e0;
  uint local_5d4;
  undefined1 *local_5d0;
  uint local_5c4;
  undefined8 local_5c0;
  uint local_5b4;
  undefined8 local_5b0;
  uint local_5a4;
  undefined8 local_5a0;
  uint local_594;
  undefined8 local_590;
  uint local_584;
  undefined8 local_580;
  uint local_574;
  undefined8 local_570;
  uint local_564;
  undefined8 local_560;
  uint local_554;
  undefined8 local_550;
  uint local_544;
  undefined8 local_540;
  uint local_534;
  undefined8 local_530;
  uint local_524;
  undefined8 local_520;
  uint local_514;
  undefined8 local_510;
  uint local_504;
  undefined8 local_500;
  uint local_4f4;
  undefined8 local_4f0;
  uint local_4e4;
  undefined8 local_4e0;
  uint local_4d4;
  undefined8 local_4d0;
  uint local_4c4;
  undefined8 local_4c0;
  uint local_4b4;
  undefined8 local_4b0;
  uint local_4a4;
  undefined8 local_4a0;
  uint local_494;
  undefined1 *local_490;
  uint local_484;
  undefined8 local_480;
  uint local_474;
  undefined8 local_470;
  uint local_464;
  undefined8 local_460;
  uint local_454;
  undefined8 local_450;
  uint local_444;
  undefined8 local_440;
  uint local_434;
  undefined8 local_430;
  uint local_424;
  undefined8 local_420;
  uint local_414;
  undefined8 local_410;
  uint local_404;
  undefined8 local_400;
  uint local_3f4;
  undefined8 local_3f0;
  uint local_3e4;
  undefined8 local_3e0;
  uint local_3d4;
  undefined8 local_3d0;
  uint local_3c4;
  undefined8 local_3c0;
  uint local_3b4;
  undefined8 local_3b0;
  uint local_3a4;
  undefined8 local_3a0;
  uint local_394;
  undefined8 local_390;
  uint local_384;
  undefined8 local_380;
  uint local_374;
  undefined8 local_370;
  uint local_364;
  undefined8 local_360;
  uint local_354;
  undefined8 local_350;
  uint local_344;
  undefined8 local_340;
  undefined1 *local_338;
  uint local_330;
  uint local_32c;
  undefined1 *local_328;
  uint local_320;
  uint local_31c;
  undefined8 local_318;
  uint local_30c;
  undefined1 *local_308;
  uint local_2fc;
  undefined8 local_2f8;
  uint local_2ec;
  undefined1 *local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  uint local_2cc;
  undefined8 local_2c0;
  uint local_2b4;
  undefined1 *local_2b0;
  uint local_2a4;
  undefined8 local_2a0;
  uint local_294;
  undefined1 *local_290;
  uint uStack_288;
  uint local_284;
  double local_280;
  uint local_274;
  double local_270;
  uint local_264;
  undefined8 local_260;
  uint local_254;
  undefined8 *local_250;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  undefined1 *local_228;
  uint local_21c;
  undefined1 *local_218;
  undefined4 local_210;
  uint local_20c;
  undefined8 local_208;
  uint local_1fc;
  double local_1f8;
  uint local_1ec;
  double local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  uint local_1bc;
  undefined1 *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 local_198;
  uint local_18c;
  undefined1 *local_188;
  uint uStack_180;
  uint local_17c;
  undefined1 *local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined1 *local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 *local_138;
  undefined8 uStack_130;
  double local_128;
  uint local_11c;
  undefined1 *local_118;
  uint local_110;
  uint local_10c;
  undefined1 *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f0;
  uint local_e4;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined1 **local_b0;
  undefined8 *local_a8;
  undefined1 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_d8 = "gml_Script_load_game";
  local_d0 = 0;
  local_e0 = DAT_142182d78;
  DAT_142182d78 = &local_e0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2fc = 0xffffff;
  local_308 = (undefined1 *)0x0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = (undefined1 *)0x0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_394 = 0xffffff;
  local_3a0 = 0;
  local_31c = 0xffffff;
  local_328 = (undefined1 *)0x0;
  DAT_142182d90 = param_1;
  local_90 = param_2;
  local_78 = param_1;
  uVar6 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  uVar7 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a/*var:CURRENTROOM*/);
  local_4a4 = 0xffffff;
  local_4b0 = 0;
  local_21c = 0xffffff;
  local_228 = (undefined1 *)0x0;
  local_494 = 0xffffff;
  local_4a0 = 0;
  local_20c = 0xffffff;
  local_218 = (undefined1 *)0x0;
  local_340 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c9/*var:cam*/);
  local_3b4 = 0xffffff;
  local_3c0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_3a4 = 0xffffff;
  local_3b0 = 0;
  local_250 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e/*var:map*/);
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_274 = 0xffffff;
  local_280 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_264 = 0xffffff;
  local_270 = 0.0;
  local_384 = 0xffffff;
  local_390 = 0;
  local_484 = 0xffffff;
  local_490 = (undefined1 *)0x0;
  local_5d4 = 0xffffff;
  local_5e0 = 0;
  local_5c4 = 0xffffff;
  local_5d0 = (undefined1 *)0x0;
  local_5b4 = 0xffffff;
  local_5c0 = 0;
  local_5a4 = 0xffffff;
  local_5b0 = 0;
  local_4b4 = 0xffffff;
  local_4c0 = 0;
  local_594 = 0xffffff;
  local_5a0 = 0;
  local_584 = 0xffffff;
  local_590 = 0;
  local_574 = 0xffffff;
  local_580 = 0;
  local_564 = 0xffffff;
  local_570 = 0;
  local_554 = 0xffffff;
  local_560 = 0;
  local_544 = 0xffffff;
  local_550 = 0;
  local_534 = 0xffffff;
  local_540 = 0;
  local_524 = 0xffffff;
  local_530 = 0;
  local_514 = 0xffffff;
  local_520 = 0;
  local_504 = 0xffffff;
  local_510 = 0;
  local_4f4 = 0xffffff;
  local_500 = 0;
  local_4e4 = 0xffffff;
  local_4f0 = 0;
  local_4d4 = 0xffffff;
  local_4e0 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_474 = 0xffffff;
  local_480 = 0;
  local_464 = 0xffffff;
  local_470 = 0;
  local_454 = 0xffffff;
  local_460 = 0;
  local_444 = 0xffffff;
  local_450 = 0;
  local_434 = 0xffffff;
  local_440 = 0;
  local_424 = 0xffffff;
  local_430 = 0;
  local_414 = 0xffffff;
  local_420 = 0;
  local_404 = 0xffffff;
  local_410 = 0;
  local_3f4 = 0xffffff;
  local_400 = 0;
  local_3e4 = 0xffffff;
  local_3f0 = 0;
  local_3d4 = 0xffffff;
  local_3e0 = 0;
  local_3c4 = 0xffffff;
  local_3d0 = 0;
  local_4c4 = 0xffffff;
  local_4d0 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = (undefined1 *)0x0;
  local_32c = 0xffffff;
  local_338 = (undefined1 *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_374 = 0xffffff;
  local_380 = 0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_354 = 0xffffff;
  local_360 = 0;
  local_344 = 0xffffff;
  local_350 = 0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_364 = 0xffffff;
  local_370 = 0;
  local_17c = 0xffffff;
  local_188 = (undefined1 *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_140 = (ulonglong)(uint)local_140;
  local_148 = 0;
  local_1d0 = (ulonglong)(uint)local_1d0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcd30/*gml_Script_load_game*/);
  local_d0 = 0xb;
  if ((0x46U >> (local_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3a0);
  }
  FUN_1416ab000(&local_3a0,&DAT_14217f2d0);
  local_d0 = 0xd;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_5f8 = 0;
  uStack_5f0 = 0;
  in_stack_fffffffffffff9e8 = in_stack_fffffffffffff9e8 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_5f8,in_stack_fffffffffffff9e8,
                in_stack_fffffffffffff9f0 & 0xffffffffffffff00);
  uVar5 = (undefined4)(in_stack_fffffffffffff9e8 >> 0x20);
  FUN_1400019a0(&local_318,&local_5f8);
  local_b8 = &local_318;
  ppuVar17 = &local_b8;
  uVar16 = CONCAT44(uVar5,DAT_1420da4b0/*floor*/);
  uVar8 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar16,ppuVar17);
  uStack_1b0 = (ulonglong)(uint)uStack_1b0;
  local_1b8 = &DAT_bff0000000000000;
  iVar4 = FUN_1416d9df0(uVar8,&local_1b8,DAT_1420f6b08,1);
  if ((iVar4 == -2) || (0 < iVar4)) {
    local_d0 = 0x10;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_148);
    }
    local_148 = 0;
    local_140 = 0x500000000;
    FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_328);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_5f8,uVar16,(ulonglong)ppuVar17 & 0xffffffffffffff00
                 );
    uVar5 = (undefined4)(uVar16 >> 0x20);
    FUN_1400019a0(&local_318,&local_5f8);
    uVar6 = CONCAT44(uVar5,DAT_1420da4b0/*floor*/);
    local_b8 = &local_318;
    puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_148,1,uVar6,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_1b0._4_4_ = *(uint *)((longlong)puVar10 + 0xc);
    uStack_1b0._0_4_ = *(uint *)(puVar10 + 1);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) == 0) {
      local_1b8 = (undefined1 *)*puVar10;
    }
    else {
      FUN_1400d2390(&local_1b8,puVar10);
    }
    FUN_140001c50(&local_1b8,1);
    FUN_1400019a0(&local_308,&local_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1b8);
    }
    local_b0 = &local_308;
    FUN_1416ac010(&local_178,s__SAVE_1420b2aed);
    FUN_1416ac010(&local_138,s__ROOMS__1420b2ae5);
    uVar8 = CONCAT44(uVar5,DAT_1420da2b0/*string*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_b0);
    FUN_1416ac010(&local_290,s_DATA_CHAPTER_TEMPLATES_chapter__1420b2b00);
    local_10c = local_31c;
    local_110 = local_320;
    if ((0x46U >> (local_31c & 0x1f) & 1) == 0) {
      local_118 = local_328;
    }
    else {
      FUN_1400d2390(&local_118,&local_328);
    }
    FUN_140003ca0(&local_118,&local_290);
    uStack_14c = local_10c;
    uStack_150 = local_110;
    if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
      local_158 = local_118;
    }
    else {
      FUN_1400d2390(&local_158,&local_118);
    }
    FUN_140003ca0(&local_158,uVar6);
    uStack_fc = uStack_14c;
    uStack_100 = uStack_150;
    if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
      local_108 = local_158;
    }
    else {
      FUN_1400d2390(&local_108,&local_158);
    }
    FUN_140003ca0(&local_108,&local_138);
    uStack_c0._4_4_ = uStack_fc;
    uStack_c0._0_4_ = uStack_100;
    if ((0x46U >> (uStack_fc & 0x1f) & 1) == 0) {
      local_c8 = local_108;
    }
    else {
      FUN_1400d2390(&local_c8,&local_108);
    }
    FUN_140003ca0(&local_c8,uVar7);
    uStack_1b0._4_4_ = uStack_c0._4_4_;
    uStack_1b0._0_4_ = (uint)uStack_c0;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      local_1b8 = local_c8;
    }
    else {
      FUN_1400d2390(&local_1b8,&local_c8);
    }
    FUN_140003ca0(&local_1b8,&local_178);
    FUN_1400019a0(&local_3a0,&local_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1b8);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_158);
    }
    if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    if ((0x46U >> (local_284 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_290);
    }
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_138);
    }
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_178);
    }
  }
  else {
    local_d0 = 0xe;
    if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_148);
    }
    uVar5 = (undefined4)(uVar16 >> 0x20);
    local_148 = 0;
    local_140 = 0x500000000;
    FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_328);
    FUN_1400019a0(&local_308,uVar6);
    local_b0 = &local_308;
    FUN_1416ac010(&local_178,s__SAVE_1420b2aed);
    FUN_1416ac010(&local_138,s__ROOMS__1420b2ae5);
    uVar8 = CONCAT44(uVar5,DAT_1420da2b0/*string*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_148,1,uVar8,&local_b0);
    FUN_1416ac010(&local_290,s_PROFILES_HEPTAVERSE__1420b2ad0);
    local_10c = local_31c;
    local_110 = local_320;
    if ((0x46U >> (local_31c & 0x1f) & 1) == 0) {
      local_118 = local_328;
    }
    else {
      FUN_1400d2390(&local_118,&local_328);
    }
    FUN_140003ca0(&local_118,&local_290);
    uStack_150 = local_110;
    uStack_14c = local_10c;
    if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
      local_158 = local_118;
    }
    else {
      FUN_1400d2390(&local_158,&local_118);
    }
    FUN_140003ca0(&local_158,uVar6);
    uStack_100 = uStack_150;
    uStack_fc = uStack_14c;
    if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
      local_108 = local_158;
    }
    else {
      FUN_1400d2390(&local_108,&local_158);
    }
    FUN_140003ca0(&local_108,&local_138);
    uStack_c0._0_4_ = uStack_100;
    uStack_c0._4_4_ = uStack_fc;
    if ((0x46U >> (uStack_fc & 0x1f) & 1) == 0) {
      local_c8 = local_108;
    }
    else {
      FUN_1400d2390(&local_c8,&local_108);
    }
    FUN_140003ca0(&local_c8,uVar7);
    uStack_1b0._0_4_ = (uint)uStack_c0;
    uStack_1b0._4_4_ = uStack_c0._4_4_;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      local_1b8 = local_c8;
    }
    else {
      FUN_1400d2390(&local_1b8,&local_c8);
    }
    FUN_140003ca0(&local_1b8,&local_178);
    FUN_1400019a0(&local_3a0,&local_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1b8);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_158);
    }
    if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_118);
    }
    if ((0x46U >> (local_284 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_290);
    }
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_138);
    }
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_178);
    }
  }
  iVar4 = FUN_1416f82f0(local_78,local_90,0x4e);
  if (0 < iVar4) {
    cVar3 = FUN_1416f8280(local_78,local_90,0x40);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (cVar3 != '\0') {
      local_d0 = 0x15;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_4b0);
      FUN_1400019a0(&local_228,&local_4b0);
      FUN_1416cf840(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_228);
      local_d0 = 0x16;
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_4a0);
      FUN_1400019a0(&local_218,&local_4a0);
      FUN_1416cf840(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_218);
      local_d0 = 0x17;
      local_1b8 = (undefined1 *)0x0;
      uStack_1b0._0_4_ = 0;
      uStack_1b0._4_4_ = 0;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_4b0);
      uVar6 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar6);
      FUN_1400019a0(&local_1b8,&local_4b0);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&local_1b8);
      local_d0 = 0x18;
      local_178 = (undefined1 *)0x0;
      uStack_170 = 0;
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_4a0);
      uVar6 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar6);
      FUN_1400019a0(&local_178,&local_4a0);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&local_178);
      local_d0 = 0x19;
      local_c8 = (undefined1 *)0x0;
      uStack_c0._0_4_ = 0;
      uStack_c0._4_4_ = 0;
      FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&local_c8);
      local_d0 = 0x1a;
      local_108 = (undefined1 *)0x0;
      uStack_100 = 0;
      uStack_fc = 0;
      FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&local_108);
      local_d0 = 0x1b;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      local_148 = 0;
      local_140 = 0x500000000;
      if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0x500000000;
      FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_228);
      FUN_1400019a0(&local_318,local_340);
      local_b8 = &local_318;
      FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_218);
      FUN_1400019a0(&local_308,local_340);
      local_b0 = &local_308;
      FUN_1400019a0(&local_2f8,local_340);
      uVar7 = CONCAT44(uVar5,DAT_1420da3b0/*camera_get_view_width*/);
      local_a8 = &local_2f8;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_148,1,uVar7,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_140004520(&local_158,uVar6,_DAT_141982c40);
      uStack_130._4_4_ = local_21c;
      if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
        local_138 = local_228;
      }
      else {
        FUN_1400d2390(&local_138,&local_228);
      }
      FUN_140003e00(&local_138,&local_158);
      FUN_1400019a0(&local_2e8,&local_138);
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_158);
      }
      uVar7 = CONCAT44(uVar5,DAT_1420da3c0/*camera_get_view_height*/);
      local_a0 = &local_2e8;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_1d8,1,uVar7,&local_b0);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_140004520(&local_158,uVar6,_DAT_141982c40);
      uStack_130 = CONCAT44(local_20c,local_210);
      if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
        local_138 = local_218;
      }
      else {
        FUN_1400d2390(&local_138,&local_218);
      }
      FUN_140003e00(&local_138,&local_158);
      FUN_1400019a0(&local_2d8,&local_138);
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_158);
      }
      uVar8 = CONCAT44(uVar5,DAT_1420da3a0/*camera_set_view_pos*/);
      local_98 = &local_2d8;
      FUN_1416ab210(local_78,local_90,&local_88,3,uVar8,&local_a8);
    }
  }
  uStack_170 = uStack_170 & 0xffffffff;
  local_178 = (undefined1 *)0x4053c00000000000/*79 (obj:oControl)*/;
  iVar4 = FUN_1416ab810(&local_1b8,&local_78,&local_90,&local_178);
  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  uVar6 = _DAT_141982c40;
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (0 < iVar4) {
    do {
      uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_d0 = 0x1f;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18b09/*var:mw*/);
      FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_228);
      FUN_1400019a0(&local_318,&local_228);
      local_b8 = &local_318;
      FUN_140001a50(&local_178,uVar7,8);
      FUN_1400019a0(&local_308,&local_178);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      uVar9 = CONCAT44(uVar5,DAT_1420da0c0/*mean*/);
      local_b0 = &local_308;
      uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar9,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_1400019a0(&local_228,uVar8);
      FUN_1416cf840(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_228);
      local_d0 = 0x20;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      uVar8 = (**(code **)(*local_78 + 8))(local_78,0x18abd/*var:mh*/);
      FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_218);
      FUN_1400019a0(&local_318,&local_218);
      local_b8 = &local_318;
      FUN_140001a50(&local_178,uVar8,8);
      FUN_1400019a0(&local_308,&local_178);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      ppuVar17 = &local_b8;
      uVar16 = CONCAT44(uVar5,DAT_1420da0c0/*mean*/);
      local_b0 = &local_308;
      uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
      FUN_1400019a0(&local_218,uVar9);
      FUN_1416cf840(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_218);
      local_d0 = 0x21;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_178 = (undefined1 *)0x0;
      uStack_170 = 0;
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_1416d0010(0x4e,0x18e45/*var:xx*/,0x80000000,&local_178,uVar16,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar16 >> 0x20);
      FUN_1400019a0(&local_318,&local_178);
      local_b8 = &local_318;
      FUN_140001a50(&local_c8,uVar7,8);
      FUN_1400019a0(&local_308,&local_c8);
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      ppuVar17 = &local_b8;
      uVar16 = CONCAT44(uVar5,DAT_1420da0c0/*mean*/);
      local_b0 = &local_308;
      uVar7 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
      uVar9 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar9);
      FUN_1400019a0(&local_178,uVar7);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&local_178);
      local_d0 = 0x22;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_c8 = (undefined1 *)0x0;
      uStack_c0._0_4_ = 0;
      uStack_c0._4_4_ = 0;
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_1416d0010(0x4e,0x18e54/*var:yy*/,0x80000000,&local_c8,uVar16,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar16 >> 0x20);
      FUN_1400019a0(&local_318,&local_c8);
      local_b8 = &local_318;
      FUN_140001a50(&local_108,uVar8,8);
      FUN_1400019a0(&local_308,&local_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      uVar8 = CONCAT44(uVar5,DAT_1420da0c0/*mean*/);
      local_b0 = &local_308;
      uVar7 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar8 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar8);
      FUN_1400019a0(&local_c8,uVar7);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&local_c8);
      local_d0 = 0x23;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      local_148 = 0;
      local_140 = 0x500000000;
      if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0x500000000;
      FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_228);
      FUN_1400019a0(&local_318,local_340);
      local_b8 = &local_318;
      FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_218);
      FUN_1400019a0(&local_308,local_340);
      local_b0 = &local_308;
      FUN_1400019a0(&local_2f8,local_340);
      local_a8 = &local_2f8;
      uVar8 = CONCAT44(uVar5,DAT_1420da3b0/*camera_get_view_width*/);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_148,1,uVar8,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_140004520(&local_138,uVar7,uVar6);
      uStack_fc = local_21c;
      if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
        local_108 = local_228;
      }
      else {
        FUN_1400d2390(&local_108,&local_228);
      }
      FUN_140003e00(&local_108,&local_138);
      FUN_1400019a0(&local_2e8,&local_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      local_a0 = &local_2e8;
      uVar8 = CONCAT44(uVar5,DAT_1420da3c0/*camera_get_view_height*/);
      uVar7 = FUN_1416ab210(local_78,local_90,&local_1d8,1,uVar8,&local_b0);
      uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_140004520(&local_138,uVar7,uVar6);
      uStack_fc = local_20c;
      if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
        local_108 = local_218;
      }
      else {
        FUN_1400d2390(&local_108,&local_218);
      }
      FUN_140003e00(&local_108,&local_138);
      FUN_1400019a0(&local_2d8,&local_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      local_98 = &local_2d8;
      uVar8 = CONCAT44(uVar5,DAT_1420da3a0/*camera_set_view_pos*/);
      FUN_1416ab210(local_78,local_90,&local_88,3,uVar8,&local_a8);
      local_d0 = 0x24;
      local_108 = (undefined1 *)0x0;
      uStack_100 = 0;
      uStack_fc = 0;
      FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&local_108);
      local_d0 = 0x25;
      local_138 = (undefined1 *)0x0;
      uStack_130 = 0;
      FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&local_138);
      local_d0 = 0x26;
      DAT_142182d90 = (longlong *)0xd009fa;
      if ((0x46U >> (local_3b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3c0);
      }
      local_3b4 = 0;
      local_3c0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416cf840(0x4e,DAT_1420d5a48/*alarm*/,0,&local_3c0);
      cVar3 = FUN_1416abe60(&local_1b8,&local_78,&local_90);
      uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    } while (cVar3 != '\0');
  }
  FUN_1416ab620(&local_1b8,&local_78,&local_90);
  local_d0 = 0x29;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_b8 = &local_3a0;
  uVar7 = CONCAT44(uVar5,DAT_1420da3d0/*buffer_load*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar7,&local_b8);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_1400019a0(&local_f0,uVar6);
  uStack_170 = uStack_170 & 0xffffffff;
  local_178 = &DAT_bff0000000000000;
  iVar4 = FUN_1416d9df0(&local_f0,&local_178,DAT_1420f6b08,0);
  if (iVar4 == 0) {
    local_d0 = 0x2a;
    uVar16 = local_1d0;
  }
  else {
    local_d0 = 0x2b;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_f0;
    FUN_140002730(&local_308,&DAT_1420b2b20);
    local_b0 = &local_308;
    FUN_140002730(&local_2f8,&DAT_1420b2b30);
    local_a8 = &local_2f8;
    uVar6 = CONCAT44(uVar5,DAT_1420da650/*buffer_seek*/);
    FUN_1416ab210(local_78,local_90,&local_88,3,uVar6,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_d0 = 0x2c;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_f0;
    uVar7 = CONCAT44(uVar5,DAT_1420da470/*buffer_tell*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar7,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_1400019a0(&local_3b0,uVar6);
    local_d0 = 0x2d;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_f0;
    FUN_140002730(&local_308,&DAT_14217f2d8);
    local_b0 = &local_308;
    FUN_140002730(&local_2f8,&DAT_14217f2d8);
    local_a8 = &local_2f8;
    uVar6 = CONCAT44(uVar5,DAT_1420da650/*buffer_seek*/);
    FUN_1416ab210(local_78,local_90,&local_88,3,uVar6,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_d0 = 0x31;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_108 = (undefined1 *)0x0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_b8 = &local_f0;
    FUN_140002730(&local_308,&DAT_1420b2b40);
    uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
    local_b0 = &local_308;
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar7 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar7);
    FUN_1400019a0(&local_108,uVar6);
    FUN_1416a8c00(1);
    FUN_1416d0790(0x4f,0x18b09/*var:mw*/,0x80000000,&local_108);
    local_d0 = 0x32;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_138 = (undefined1 *)0x0;
    uStack_130 = 0;
    local_b8 = &local_f0;
    FUN_140002730(&local_308,&DAT_1420b2b40);
    uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
    local_b0 = &local_308;
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar7 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar7);
    FUN_1400019a0(&local_138,uVar6);
    FUN_1416a8c00(1);
    FUN_1416d0790(0x4f,0x18abd/*var:mh*/,0x80000000,&local_138);
    local_d0 = 0x33;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_158 = (undefined1 *)0x0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_b8 = &local_f0;
    FUN_140002730(&local_308,&DAT_1420b2b40);
    ppuVar17 = &local_b8;
    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
    local_b0 = &local_308;
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
    uVar7 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar7);
    FUN_1400019a0(&local_158,uVar6);
    FUN_1416a8c00(1);
    FUN_1416d0790(0x4f,0x18b9c/*var:planet*/,0x80000000,&local_158);
    local_d0 = 0x35;
    if ((0x46U >> (*(uint *)((longlong)local_250 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(local_250);
    }
    *(undefined4 *)((longlong)local_250 + 0xc) = 0;
    *local_250 = &DAT_bff0000000000000;
    local_d0 = 0x36;
    DAT_142182d90 = (longlong *)0x698765;
    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b09/*var:mw*/);
    uVar7 = (**(code **)(*local_78 + 8))(local_78,0x18abd/*var:mh*/);
    FUN_1416a8cb0(DAT_14218ecf8);
    uVar5 = FUN_141693b30(uVar6);
    puVar10 = (undefined8 *)FUN_1416924a0(local_250,uVar5);
    FUN_1416a8cb0(*local_250);
    uVar5 = FUN_141693b30(uVar7);
    puVar11 = (undefined8 *)FUN_1416924a0(puVar10,uVar5);
    FUN_1416a8cb0(*puVar10);
    if ((0x46U >> (*(uint *)((longlong)puVar11 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0;
    FUN_1416a8c00(3);
    local_d0 = 0x38;
    if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_248);
    }
    dVar2 = _DAT_141981e30;
    local_23c = 0;
    local_248 = 0.0;
    while( true ) {
      uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b09/*var:mw*/);
      iVar4 = FUN_1416d9df0(&local_248,uVar6,DAT_1420f6b08,1);
      if ((iVar4 == -2) || (0 < iVar4)) break;
      local_d0 = 0x39;
      if ((0x46U >> (local_274 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_280);
      }
      local_274 = 0;
      local_280 = 0.0;
      while( true ) {
        uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18abd/*var:mh*/);
        iVar4 = FUN_1416d9df0(&local_280,uVar6,DAT_1420f6b08,1);
        if ((iVar4 == -2) || (0 < iVar4)) break;
        local_d0 = 0x3a;
        FUN_1416a8cb0(DAT_14218ecf8);
        uVar5 = FUN_141693b30(&local_248);
        puVar10 = (undefined8 *)FUN_1416924a0(local_250,uVar5);
        FUN_1416a8cb0(*local_250);
        uVar5 = FUN_141693b30(&local_280);
        puVar11 = (undefined8 *)FUN_1416924a0(puVar10,uVar5);
        FUN_1416a8cb0(*puVar10);
        if ((0x46U >> (*(uint *)((longlong)puVar11 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar11);
        }
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        *puVar11 = 0;
        FUN_1416a8c00(3);
        local_d0 = 0x3b;
        DAT_142182d90 = (longlong *)0x680000;
        uStack_170 = uStack_170 & 0xffffffff;
        local_178 = (undefined1 *)0x0;
        if ((local_274 & 0xffffff) == 0) {
          uVar5 = SUB84(local_280,0);
          uVar15 = (undefined4)((ulonglong)local_280 >> 0x20);
          dVar14 = local_248;
        }
        else {
          uVar6 = FUN_1416940c0(&local_280);
          uVar5 = (undefined4)uVar6;
          uVar15 = (undefined4)((ulonglong)uVar6 >> 0x20);
          dVar14 = local_248;
        }
        local_248 = dVar14;
        if ((local_23c & 0xffffff) != 0) {
          dVar14 = (double)FUN_1416940c0(&local_248);
        }
        FUN_1416cd560(local_250,(longlong)dVar14,(longlong)(double)CONCAT44(uVar15,uVar5),&local_178
                     );
        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_178);
        }
        switch(local_274 & 0xffffff) {
        case 1:
          local_280 = (double)FUN_1416940c0(&local_280);
          local_280 = local_280 + dVar2;
          local_274 = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_280,&local_280);
          break;
        case 7:
          local_280 = (double)CONCAT44(local_280._4_4_,local_280._0_4_ + 1);
          break;
        case 10:
          local_280 = (double)((longlong)local_280 + 1);
          break;
        case 0xd:
          local_274 = 0;
        case 0:
          local_280 = local_280 + dVar2;
        }
      }
      switch(local_23c & 0xffffff) {
      case 1:
        local_248 = (double)FUN_1416940c0(&local_248);
        local_248 = local_248 + dVar2;
        local_23c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_248,&local_248);
        break;
      case 7:
        local_248 = (double)CONCAT44(local_248._4_4_,local_248._0_4_ + 1);
        break;
      case 10:
        local_248 = (double)((longlong)local_248 + 1);
        break;
      case 0xd:
        local_23c = 0;
      case 0:
        local_248 = local_248 + dVar2;
      }
    }
    local_d0 = 0x3f;
    if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_128);
    }
    local_11c = 0;
    local_128 = 0.0;
    while( true ) {
      ppuVar17 = (undefined8 **)((ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_108,uVar16,ppuVar17);
      iVar4 = FUN_1416d9df0(&local_128,&local_108,DAT_1420f6b08,1);
      if ((iVar4 == -2) || (-1 < iVar4)) break;
      local_d0 = 0x40;
      if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_270);
      }
      local_264 = 0;
      local_270 = 0.0;
      while( true ) {
        ppuVar17 = (undefined8 **)((ulonglong)ppuVar17 & 0xffffffffffffff00);
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_138,uVar16,ppuVar17);
        iVar4 = FUN_1416d9df0(&local_270,&local_138,DAT_1420f6b08,1);
        if ((iVar4 == -2) || (-1 < iVar4)) break;
        local_d0 = 0x41;
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        uVar5 = (undefined4)(uVar16 >> 0x20);
        local_88 = 0;
        local_80 = 0x500000000;
        local_b8 = &local_f0;
        FUN_140002730(&local_308,&DAT_1420b2b50);
        DAT_142182d90 = (longlong *)0x680000;
        ppuVar17 = &local_b8;
        uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
        local_b0 = &local_308;
        uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
        if ((local_264 & 0xffffff) == 0) {
          uVar5 = SUB84(local_270,0);
          uVar15 = (undefined4)((ulonglong)local_270 >> 0x20);
          dVar14 = local_128;
        }
        else {
          uVar7 = FUN_1416940c0(&local_270);
          uVar5 = (undefined4)uVar7;
          uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
          dVar14 = local_128;
        }
        local_128 = dVar14;
        if ((local_11c & 0xffffff) != 0) {
          dVar14 = (double)FUN_1416940c0(&local_128);
        }
        FUN_1416cd560(local_250,(longlong)dVar14,(longlong)(double)CONCAT44(uVar15,uVar5),uVar6);
        switch(local_264 & 0xffffff) {
        case 1:
          local_270 = (double)FUN_1416940c0(&local_270);
          local_270 = local_270 + dVar2;
          local_264 = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_270,&local_270);
          break;
        case 7:
          local_270 = (double)CONCAT44(local_270._4_4_,local_270._0_4_ + 1);
          break;
        case 10:
          local_270 = (double)((longlong)local_270 + 1);
          break;
        case 0xd:
          local_264 = 0;
        case 0:
          local_270 = local_270 + dVar2;
        }
      }
      switch(local_11c & 0xffffff) {
      case 1:
        local_128 = (double)FUN_1416940c0(&local_128);
        local_128 = local_128 + dVar2;
        local_11c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_128,&local_128);
        break;
      case 7:
        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
        break;
      case 10:
        local_128 = (double)((longlong)local_128 + 1);
        break;
      case 0xd:
        local_11c = 0;
      case 0:
        local_128 = local_128 + dVar2;
      }
    }
    local_d0 = 0x45;
    if ((0x46U >> (local_384 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_390);
    }
    uVar5 = (undefined4)(uVar16 >> 0x20);
    local_384 = 0;
    local_390 = 0xc010000000000000/*-4*/;
    local_d0 = 0x46;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    FUN_1416ab210(local_78,local_90,&local_88,0,CONCAT44(uVar5,DAT_1420da390/*instance_activate_all*/),0);
    local_d0 = 0x47;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    uVar6 = 0;
    gml_Script_clear_objects(local_78,local_90,&local_88,0,0);
    do {
      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_d0 = 0x49;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_b8 = &local_f0;
      uVar6 = CONCAT44(uVar5,DAT_1420da470/*buffer_tell*/);
      puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,uVar6,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_170 = puVar10[1];
      if ((0x46U >> (*(uint *)((longlong)puVar10 + 0xc) & 0x1f) & 1) == 0) {
        local_178 = (undefined1 *)*puVar10;
      }
      else {
        FUN_1400d2390(&local_178,puVar10);
      }
      FUN_140001c50(&local_178,1);
      iVar4 = FUN_1416d9df0(&local_178,&local_3b0,DAT_1420f6b08,1);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      if (-1 < iVar4) break;
      local_d0 = 0x4d;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      local_148 = 0;
      local_140 = 0x500000000;
      local_b8 = &local_f0;
      FUN_140002730(&local_308,&DAT_1420b2b60);
      uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
      local_b0 = &local_308;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_148,2,uVar7,&local_b8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&local_2f8,uVar6);
      local_a8 = &local_2f8;
      uVar7 = CONCAT44(uVar5,DAT_1420da460/*asset_get_index*/);
      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar7,&local_a8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&local_490,uVar6);
      uVar6 = DAT_1420f6b08;
      uStack_170 = uStack_170 & 0xffffffff;
      local_178 = &DAT_bff0000000000000;
      iVar4 = FUN_1416d9df0(&local_490,&local_178,DAT_1420f6b08,0);
      if (iVar4 != 0) {
        uStack_170 = uStack_170 & 0xffffffff;
        local_178 = &DAT_bff0000000000000;
        iVar4 = FUN_1416d9df0(&local_490,&local_178,uVar6,1);
        if (0 < iVar4) {
          local_d0 = 0x50;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          FUN_140002730(&local_308,&DAT_1420b2b70);
          uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
          local_b0 = &local_308;
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1400019a0(&local_5e0,uVar6);
          local_d0 = 0x51;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          FUN_140002730(&local_308,&DAT_1420b2b70);
          uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
          local_b0 = &local_308;
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1400019a0(&local_5d0,uVar6);
          local_d0 = 0x52;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          FUN_140002730(&local_308,&DAT_1420b2b70);
          uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
          local_b0 = &local_308;
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1400019a0(&local_5c0,uVar6);
          local_d0 = 0x53;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          FUN_140002730(&local_308,&DAT_1420b2b70);
          uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
          local_b0 = &local_308;
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1400019a0(&local_5b0,uVar6);
          local_d0 = 0x54;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          FUN_140002730(&local_308,&DAT_1420b2b80);
          uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
          local_b0 = &local_308;
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          FUN_1400019a0(&local_4c0,uVar6);
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_f0;
          uVar6 = CONCAT44(uVar5,DAT_1420da470/*buffer_tell*/);
          puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,uVar6,&local_b8);
          uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_170 = puVar10[1];
          if ((0x46U >> (*(uint *)((longlong)puVar10 + 0xc) & 0x1f) & 1) == 0) {
            local_178 = (undefined1 *)*puVar10;
          }
          else {
            FUN_1400d2390(&local_178,puVar10);
          }
          FUN_140001c50(&local_178,1);
          iVar4 = FUN_1416d9df0(&local_178,&local_3b0,DAT_1420f6b08,1);
          if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_178);
          }
          if (-1 < iVar4) break;
          local_d0 = 0x58;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_5e0;
          local_b0 = &local_5d0;
          local_a8 = &local_4c0;
          local_a0 = &local_490;
          uVar7 = CONCAT44(uVar5,DAT_1420da400/*instance_create_depth*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,4,uVar7,&local_b8);
          FUN_1400019a0(&local_390,uVar6);
          iVar4 = FUN_1416ab810(&local_178,&local_78,&local_90,&local_390);
          uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (0 < iVar4) {
            do {
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              local_d0 = 0x5a;
              FUN_1400019a0(&local_5a0,&local_5c0);
              FUN_1416cfae0(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_5a0);
              local_d0 = 0x5b;
              FUN_1400019a0(&local_590,&local_5b0);
              FUN_1416cfae0(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_590);
              local_d0 = 0x5c;
              FUN_1400019a0(&local_580,&local_4c0);
              FUN_1416cfae0(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_580);
              local_d0 = 0x5d;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_570,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5a98/*speed*/,0x80000000,&local_570);
              local_d0 = 0x5e;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_560,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5aa8/*direction*/,0x80000000,&local_560);
              local_d0 = 0x5f;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_550,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5ab8/*friction*/,0x80000000,&local_550);
              local_d0 = 0x60;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_540,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5ac8/*gravity*/,0x80000000,&local_540);
              local_d0 = 0x61;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_530,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_530);
              local_d0 = 0x62;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_520,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5ae8/*image_index*/,0x80000000,&local_520);
              local_d0 = 99;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b80);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_510,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5af8/*image_speed*/,0x80000000,&local_510);
              local_d0 = 100;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b70);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_500,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_500);
              local_d0 = 0x65;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b90);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_4f0,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5b18/*image_blend*/,0x80000000,&local_4f0);
              local_d0 = 0x66;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_148);
              }
              local_148 = 0;
              local_140 = 0x500000000;
              if ((0x46U >> (local_1d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1d8);
              }
              local_1d8 = 0;
              local_1d0 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b90);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_1d8,2,uVar7,&local_b8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_2f8,uVar6);
              local_a8 = &local_2f8;
              uVar7 = CONCAT44(uVar5,DAT_1420da230/*round*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_148,1,uVar7,&local_a8);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              FUN_1400019a0(&local_2e8,uVar6);
              local_a0 = &local_2e8;
              pppuVar18 = &local_a0;
              uVar16 = CONCAT44(uVar5,DAT_1420da620/*bool*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar16,pppuVar18);
              FUN_1400019a0(&local_4e0,uVar6);
              FUN_1416cfae0(local_78,DAT_1420d5b28/*visible*/,0x80000000,&local_4e0);
              local_d0 = 0x68;
              if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_208);
              }
              local_1fc = 0;
              local_208 = 0;
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0,&local_480,uVar16,
                            (ulonglong)pppuVar18 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = (ulonglong)(uint)uStack_c0;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_480,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x69;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_480,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0,&local_480);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,1,&local_470,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_470,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6a;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_470,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,1,&local_470);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,2,&local_460,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_460,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6b;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_460,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,2,&local_460);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,3,&local_450,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_450,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6c;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_450,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,3,&local_450);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,4,&local_440,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_440,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6d;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_440,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,4,&local_440);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,5,&local_430,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_430,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6e;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_430,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,5,&local_430);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,6,&local_420,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_420,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x6f;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_420,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,6,&local_420);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,7,&local_410,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_410,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x70;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_410,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,7,&local_410);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,8,&local_400,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_400,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x71;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_400,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,8,&local_400);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,9,&local_3f0,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_3f0,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x72;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_3f0,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,9,&local_3f0);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,10,&local_3e0,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_3e0,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x73;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_3e0,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,10,&local_3e0);
              }
              uVar16 = uVar16 & 0xffffffffffffff00;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_3d0,uVar16,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar16 >> 0x20);
              uStack_c0._4_4_ = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar4 = FUN_1416d9df0(&local_3d0,&local_c8,DAT_1420f6b08,1);
              if ((iVar4 == -2) || (0 < iVar4)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
                uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
                FUN_1400019a0(&local_208,uVar6);
              }
              else {
                local_d0 = 0x74;
                DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b80);
                uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
                uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
                FUN_1400019a0(&local_3d0,uVar6);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_3d0);
              }
              local_d0 = 0x76;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_f0;
              FUN_140002730(&local_308,&DAT_1420b2b50);
              uVar7 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
              local_b0 = &local_308;
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
              FUN_1400019a0(&local_4d0,uVar6);
              if ((0x46U >> (local_2a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_2b0);
              }
              local_2a4 = 0;
              local_2b0 = (undefined1 *)0x0;
              if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_338);
              }
              local_32c = 0;
              local_338 = (undefined1 *)0x0;
              if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_198);
              }
              local_18c = 0;
              local_198 = 0;
              if ((0x46U >> (local_374 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_380);
              }
              local_374 = 0;
              local_380 = 0;
              if ((0x46U >> (local_2b4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_2c0);
              }
              local_2b4 = 0;
              local_2c0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
              local_d0 = 0x78;
              if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_238);
              }
              local_22c = 0;
              local_238 = 0.0;
              while( true ) {
                iVar4 = FUN_1416d9df0(&local_238,&local_4d0,DAT_1420f6b08,1);
                uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
                if ((iVar4 == -2) || (-1 < iVar4)) break;
                local_d0 = 0x7a;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b60);
                ppuVar17 = &local_b8;
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                FUN_1400019a0(&local_2b0,uVar6);
                local_d0 = 0x7c;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                uVar16 = uVar16 & 0xffffffffffffff00;
                FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                              (ulonglong)ppuVar17 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar16 >> 0x20);
                FUN_1400019a0(&local_318,&local_260);
                local_b8 = &local_318;
                local_b0 = &local_2b0;
                uVar7 = CONCAT44(uVar5,DAT_1420da350/*variable_instance_exists*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
                uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
                FUN_1400019a0(&local_2c0,uVar6);
                local_d0 = 0x7e;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                FUN_140002730(&local_308,&DAT_1420b2b40);
                uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                local_b0 = &local_308;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,&local_b8);
                FUN_1400019a0(&local_338,uVar6);
                local_d0 = 0x80;
                uStack_c0._4_4_ = local_32c;
                uStack_c0._0_4_ = local_330;
                if ((0x46U >> (local_32c & 0x1f) & 1) == 0) {
                  local_c8 = local_338;
                }
                else {
                  FUN_1400d2390(&local_c8,&local_338);
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                             ) < DAT_14217f368) &&
                   (_Init_thread_header(&DAT_14217f368), DAT_14217f368 == -1)) {
                  _DAT_14217f2fc = 0;
                  _DAT_14217f2f0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                  _DAT_14217f310 = 0x100000000;
                  _DAT_14217f304 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
                  _DAT_14217f324 = 0x200000000;
                  _DAT_14217f318 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                  _DAT_14217f338 = 0x300000000;
                  _DAT_14217f32c = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                  _DAT_14217f34c = 0x400000000;
                  _DAT_14217f340 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
                  _DAT_14217f360 = 0x500000000;
                  _DAT_14217f354 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
                  atexit(FUN_1400d1ff0);
                  _Init_thread_footer(&DAT_14217f368);
                }
                uVar6 = DAT_1420f6b08;
                iVar4 = FUN_1416d9df0(&DAT_14217f2f0,&local_c8,DAT_1420f6b08,0);
                if (iVar4 == 0) {
                  lVar12 = 0;
LAB_1400cb8f0:
                  uVar5 = (undefined4)(uVar16 >> 0x20);
                  switch((&DAT_14217f300)[lVar12 * 5]) {
                  case 0:
                    local_d0 = 0x82;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,&DAT_1420b2b70);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_198,uVar6);
                    cVar3 = FUN_1416927d0(&local_2c0);
                    uVar5 = 0x84;
                    if (cVar3 != '\0') {
                      local_d0 = 0x83;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_318,&local_260);
                      local_b8 = &local_318;
                      local_b0 = &local_2b0;
                      local_a8 = &local_198;
                      uVar16 = CONCAT44(uVar15,DAT_1420da680/*variable_instance_set*/);
                      FUN_1416ab210(local_78,local_90,&local_88,3,uVar16,&local_b8);
                    }
                    break;
                  case 1:
                    local_d0 = 0x87;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,&DAT_1420b2b60);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_198,uVar6);
                    cVar3 = FUN_1416927d0(&local_2c0);
                    uVar5 = 0x89;
                    if (cVar3 != '\0') {
                      local_d0 = 0x88;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_318,&local_260);
                      local_b8 = &local_318;
                      local_b0 = &local_2b0;
                      local_a8 = &local_198;
                      uVar16 = CONCAT44(uVar15,DAT_1420da680/*variable_instance_set*/);
                      FUN_1416ab210(local_78,local_90,&local_88,3,uVar16,&local_b8);
                    }
                    break;
                  case 2:
                    local_d0 = 0x8c;
                    if ((0x46U >> (local_354 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_360);
                    }
                    local_354 = 0;
                    local_360 = 0;
                    if ((0x46U >> (local_344 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_350);
                    }
                    local_344 = 0;
                    local_350 = 0;
                    if ((0x46U >> (local_294 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_2a0);
                    }
                    local_294 = 0;
                    local_2a0 = 0;
                    if ((0x46U >> (local_364 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_370);
                    }
                    local_364 = 0;
                    local_370 = 0;
                    if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_188);
                    }
                    local_17c = 0;
                    local_188 = (undefined1 *)0x0;
                    local_d0 = 0x8d;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,&DAT_1420b2b50);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_2a0,uVar6);
                    local_d0 = 0x8f;
                    if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_1f8);
                    }
                    local_1ec = 0;
                    local_1f8 = 0.0;
                    while ((iVar4 = FUN_1416d9df0(&local_1f8,&local_2a0,DAT_1420f6b08,1),
                           iVar4 != -2 && (iVar4 < 0))) {
                      local_d0 = 0x90;
                      DAT_142182d90 = (longlong *)0x698866;
                      uVar5 = FUN_141693b30(&local_1f8);
                      puVar10 = (undefined8 *)FUN_1416924a0(&local_360,uVar5);
                      FUN_1416a8cb0(local_360);
                      if ((0x46U >> (*(uint *)((longlong)puVar10 + 0xc) & 0x1f) & 1) != 0) {
                        FUN_140001b50(puVar10);
                      }
                      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
                      *puVar10 = 0;
                      FUN_1416a8c00(1);
                      switch(local_1ec & 0xffffff) {
                      case 1:
                        local_1f8 = (double)FUN_1416940c0(&local_1f8);
                        local_1f8 = local_1f8 + dVar2;
                        local_1ec = 0;
                        break;
                      default:
                        FUN_140001d70(&DAT_141981e6a,&local_1f8,&local_1f8);
                        break;
                      case 7:
                        local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
                        break;
                      case 10:
                        local_1f8 = (double)((longlong)local_1f8 + 1);
                        break;
                      case 0xd:
                        local_1ec = 0;
                      case 0:
                        local_1f8 = local_1f8 + dVar2;
                      }
                    }
                    local_d0 = 0x93;
                    if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    local_11c = 0;
                    local_128 = 0.0;
                    while ((iVar4 = FUN_1416d9df0(&local_128,&local_2a0,DAT_1420f6b08,1),
                           iVar4 != -2 && (iVar4 < 0))) {
                      local_d0 = 0x94;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      uVar5 = (undefined4)(uVar16 >> 0x20);
                      local_88 = 0;
                      local_80 = 0x500000000;
                      local_b8 = &local_f0;
                      FUN_140002730(&local_308,&DAT_1420b2b40);
                      ppuVar17 = &local_b8;
                      uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                      local_b0 = &local_308;
                      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                      FUN_1400019a0(&local_188,uVar6);
                      local_d0 = 0x95;
                      local_10c = local_17c;
                      local_110 = uStack_180;
                      if ((0x46U >> (local_17c & 0x1f) & 1) == 0) {
                        local_118 = local_188;
                      }
                      else {
                        FUN_1400d2390(&local_118,&local_188);
                      }
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 4) < iRam000000014217f3ac) &&
                         (_Init_thread_header(0x14217f3ac), iRam000000014217f3ac == -1)) {
                        _DAT_14217f37c = 0;
                        _DAT_14217f370 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                        _DAT_14217f390 = 0x100000000;
                        _DAT_14217f384 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                        _DAT_14217f3a4 = 0x200000000;
                        _DAT_14217f398 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                        atexit(FUN_1400d20f0);
                        _Init_thread_footer(0x14217f3ac);
                      }
                      uVar6 = DAT_1420f6b08;
                      iVar4 = FUN_1416d9df0(&DAT_14217f370,&local_118,DAT_1420f6b08,0);
                      if (iVar4 == 0) {
                        lVar12 = 0;
code_r0x0001400cc685:
                        iVar4 = *(int *)(lVar12 * 0x14 + 0x14217f380);
                        if (iVar4 == 2) {
                          local_d0 = 0xb3;
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          uVar5 = (undefined4)(uVar16 >> 0x20);
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_b8 = &local_f0;
                          FUN_140002730(&local_308,0x1420b2ba0);
                          ppuVar17 = &local_b8;
                          uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                          local_b0 = &local_308;
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                          FUN_1400019a0(&local_198,uVar6);
                        }
                        else {
                          if (iVar4 != 1) {
                            if (iVar4 == 0) {
                              local_d0 = 0x97;
                              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_88);
                              }
                              uVar5 = (undefined4)(uVar16 >> 0x20);
                              local_88 = 0;
                              local_80 = 0x500000000;
                              local_b8 = &local_f0;
                              FUN_140002730(&local_308,&DAT_1420b2b70);
                              ppuVar17 = &local_b8;
                              uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                              local_b0 = &local_308;
                              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                              FUN_1400019a0(&local_198,uVar6);
                            }
                            goto code_r0x0001400cc760;
                          }
                          local_d0 = 0x9b;
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          uVar5 = (undefined4)(uVar16 >> 0x20);
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_b8 = &local_f0;
                          FUN_140002730(&local_308,&DAT_1420b2b50);
                          ppuVar17 = &local_b8;
                          uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                          local_b0 = &local_308;
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                          FUN_1400019a0(&local_370,uVar6);
                          local_d0 = 0x9c;
                          if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_1e8);
                          }
                          local_1dc = 0;
                          local_1e8 = 0.0;
                          while ((iVar4 = FUN_1416d9df0(&local_1e8,&local_370,DAT_1420f6b08,1),
                                 iVar4 != -2 && (iVar4 < 0))) {
                            local_d0 = 0x9d;
                            DAT_142182d90 = (longlong *)0x698867;
                            uVar5 = FUN_141693b30(&local_1e8);
                            puVar10 = (undefined8 *)FUN_1416924a0(&local_350,uVar5);
                            FUN_1416a8cb0(local_350);
                            if ((0x46U >> (*(uint *)((longlong)puVar10 + 0xc) & 0x1f) & 1) != 0) {
                              FUN_140001b50(puVar10);
                            }
                            *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
                            *puVar10 = 0;
                            FUN_1416a8c00(1);
                            switch(local_1dc & 0xffffff) {
                            case 1:
                              local_1e8 = (double)FUN_1416940c0(&local_1e8);
                              local_1e8 = local_1e8 + dVar2;
                              local_1dc = 0;
                              break;
                            default:
                              FUN_140001d70(&DAT_141981e6a,&local_1e8,&local_1e8);
                              break;
                            case 7:
                              local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
                              break;
                            case 10:
                              local_1e8 = (double)((longlong)local_1e8 + 1);
                              break;
                            case 0xd:
                              local_1dc = 0;
                            case 0:
                              local_1e8 = local_1e8 + dVar2;
                            }
                          }
                          local_d0 = 0xa0;
                          if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_1c8);
                          }
                          local_1bc = 0;
                          local_1c8 = 0.0;
                          while ((iVar4 = FUN_1416d9df0(&local_1c8,&local_370,DAT_1420f6b08,1),
                                 iVar4 != -2 && (iVar4 < 0))) {
                            local_d0 = 0xa1;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            uVar5 = (undefined4)(uVar16 >> 0x20);
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_b8 = &local_f0;
                            FUN_140002730(&local_308,&DAT_1420b2b40);
                            ppuVar17 = &local_b8;
                            uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                            local_b0 = &local_308;
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                            FUN_1400019a0(&local_188,uVar6);
                            local_d0 = 0xa2;
                            local_284 = local_17c;
                            uStack_288 = uStack_180;
                            if ((0x46U >> (local_17c & 0x1f) & 1) == 0) {
                              local_290 = local_188;
                            }
                            else {
                              FUN_1400d2390(&local_290,&local_188);
                            }
                            if ((*(int *)(*(longlong *)
                                           ((longlong)ThreadLocalStoragePointer +
                                           (ulonglong)_tls_index * 8) + 4) < iRam000000014217f3d8)
                               && (_Init_thread_header(0x14217f3d8), iRam000000014217f3d8 == -1)) {
                              _DAT_14217f3bc = 0;
                              _DAT_14217f3b0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                              _DAT_14217f3d0 = 0x100000000;
                              _DAT_14217f3c4 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                              atexit(FUN_1400d21a0);
                              _Init_thread_footer(0x14217f3d8);
                            }
                            uVar6 = DAT_1420f6b08;
                            iVar4 = FUN_1416d9df0(&DAT_14217f3b0,&local_290,DAT_1420f6b08,0);
                            if (iVar4 == 0) {
                              lVar12 = 0;
code_r0x0001400ccce2:
                              iVar4 = *(int *)(lVar12 * 0x14 + 0x14217f3c0);
                              if (iVar4 != 1) {
                                if (iVar4 == 0) {
                                  local_d0 = 0xa4;
                                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_88);
                                  }
                                  uVar5 = (undefined4)(uVar16 >> 0x20);
                                  local_88 = 0;
                                  local_80 = 0x500000000;
                                  local_b8 = &local_f0;
                                  FUN_140002730(&local_308,&DAT_1420b2b70);
                                  ppuVar17 = &local_b8;
                                  uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                                  local_b0 = &local_308;
                                  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,
                                                        ppuVar17);
                                  FUN_1400019a0(&local_380,uVar6);
                                }
                                goto code_r0x0001400ccdab;
                              }
                              local_d0 = 0xa8;
                              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_88);
                              }
                              uVar5 = (undefined4)(uVar16 >> 0x20);
                              local_88 = 0;
                              local_80 = 0x500000000;
                              local_b8 = &local_f0;
                              FUN_140002730(&local_308,0x1420b2ba0);
                              ppuVar17 = &local_b8;
                              uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                              local_b0 = &local_308;
                              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                              FUN_1400019a0(&local_380,uVar6);
                              if ((local_1bc & 0xffffff) != 0) goto code_r0x0001400ccdd0;
code_r0x0001400cceaf:
                              local_d0 = 0xac;
                              DAT_142182d90 = (longlong *)0x680000;
                              dVar14 = local_1c8;
                            }
                            else {
                              iVar4 = FUN_1416d9df0(&DAT_14217f3c4,&local_290,uVar6,0);
                              if (iVar4 == 0) {
                                lVar12 = 1;
                                goto code_r0x0001400ccce2;
                              }
code_r0x0001400ccdab:
                              if ((local_1bc & 0xffffff) == 0) goto code_r0x0001400cceaf;
code_r0x0001400ccdd0:
                              local_d0 = 0xac;
                              DAT_142182d90 = (longlong *)0x680000;
                              dVar14 = (double)FUN_1416940c0(&local_1c8);
                            }
                            FUN_1416cd4e0(&local_350,(longlong)dVar14,&local_380);
                            if ((0x46U >> (local_284 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_290);
                            }
                            switch(local_1bc & 0xffffff) {
                            case 1:
                              local_1c8 = (double)FUN_1416940c0(&local_1c8);
                              local_1c8 = local_1c8 + dVar2;
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
                              local_1c8 = local_1c8 + dVar2;
                            }
                          }
                          local_d0 = 0xaf;
                          FUN_1400019a0(&local_198,&local_350);
                        }
                        if ((local_11c & 0xffffff) != 0) goto code_r0x0001400cc785;
code_r0x0001400cca80:
                        local_d0 = 0xb7;
                        DAT_142182d90 = (longlong *)0x680000;
                        dVar14 = local_128;
                      }
                      else {
                        iVar4 = FUN_1416d9df0(&DAT_14217f384,&local_118,uVar6,0);
                        if (iVar4 == 0) {
                          lVar12 = 1;
                          goto code_r0x0001400cc685;
                        }
                        iVar4 = FUN_1416d9df0(&DAT_14217f398,&local_118,uVar6,0);
                        if (iVar4 == 0) {
                          lVar12 = 2;
                          goto code_r0x0001400cc685;
                        }
code_r0x0001400cc760:
                        if ((local_11c & 0xffffff) == 0) goto code_r0x0001400cca80;
code_r0x0001400cc785:
                        local_d0 = 0xb7;
                        DAT_142182d90 = (longlong *)0x680000;
                        dVar14 = (double)FUN_1416940c0(&local_128);
                      }
                      FUN_1416cd4e0(&local_360,(longlong)dVar14,&local_198);
                      if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_118);
                      }
                      switch(local_11c & 0xffffff) {
                      case 1:
                        local_128 = (double)FUN_1416940c0(&local_128);
                        local_128 = local_128 + dVar2;
                        local_11c = 0;
                        break;
                      default:
                        FUN_140001d70(&DAT_141981e6a,&local_128,&local_128);
                        break;
                      case 7:
                        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
                        break;
                      case 10:
                        local_128 = (double)((longlong)local_128 + 1);
                        break;
                      case 0xd:
                        local_11c = 0;
                      case 0:
                        local_128 = local_128 + dVar2;
                      }
                    }
                    cVar3 = FUN_1416927d0(&local_2c0);
                    uVar5 = 0xbb;
                    if (cVar3 != '\0') {
                      local_d0 = 0xba;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_318,&local_260);
                      local_b8 = &local_318;
                      local_b0 = &local_2b0;
                      local_a8 = &local_360;
                      uVar16 = CONCAT44(uVar15,DAT_1420da680/*variable_instance_set*/);
                      FUN_1416ab210(local_78,local_90,&local_88,3,uVar16,&local_b8);
                    }
                    break;
                  case 3:
                    local_d0 = 0xbe;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,0x1420b2ba0);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_198,uVar6);
                    cVar3 = FUN_1416927d0(&local_2c0);
                    uVar5 = 0xc0;
                    if (cVar3 != '\0') {
                      local_d0 = 0xbf;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_318,&local_260);
                      local_b8 = &local_318;
                      local_b0 = &local_2b0;
                      local_a8 = &local_198;
                      uVar16 = CONCAT44(uVar15,DAT_1420da680/*variable_instance_set*/);
                      FUN_1416ab210(local_78,local_90,&local_88,3,uVar16,&local_b8);
                    }
                    break;
                  case 4:
                    local_d0 = 0xc3;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,0x1420b2bb0);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_198,uVar6);
                    cVar3 = FUN_1416927d0(&local_2c0);
                    uVar5 = 0xc5;
                    if (cVar3 != '\0') {
                      local_d0 = 0xc4;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_318,&local_260);
                      local_b8 = &local_318;
                      local_b0 = &local_2b0;
                      local_a8 = &local_198;
                      uVar16 = CONCAT44(uVar15,DAT_1420da680/*variable_instance_set*/);
                      FUN_1416ab210(local_78,local_90,&local_88,3,uVar16,&local_b8);
                    }
                    break;
                  case 5:
                    local_d0 = 200;
                    if ((0x46U >> (local_294 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_2a0);
                    }
                    local_294 = 0;
                    local_2a0 = 0;
                    if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_188);
                    }
                    local_17c = 0;
                    local_188 = (undefined1 *)0x0;
                    local_d0 = 0xc9;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_f0;
                    FUN_140002730(&local_308,&DAT_1420b2b50);
                    ppuVar17 = &local_b8;
                    uVar16 = CONCAT44(uVar5,DAT_1420da3e0/*buffer_read*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,ppuVar17);
                    FUN_1400019a0(&local_2a0,uVar6);
                    local_d0 = 0xcb;
                    cVar3 = FUN_1416927d0(&local_2c0);
                    if (cVar3 == '\0') {
                      uVar6 = CONCAT44((int)(uVar16 >> 0x20),DAT_1420da020/*ds_list_create*/);
                      puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_1d8,0,uVar6,0);
                      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
                      local_10c = *(uint *)((longlong)puVar10 + 0xc);
                      local_110 = *(uint *)(puVar10 + 1);
                      if ((0x46U >> (local_10c & 0x1f) & 1) == 0) goto code_r0x0001400cd25a;
                      FUN_1400d2390(&local_118,puVar10);
                    }
                    else {
                      if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_148 = 0;
                      local_140 = 0x500000000;
                      uVar16 = uVar16 & 0xffffffffffffff00;
                      FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_260,uVar16,
                                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
                      uVar5 = (undefined4)(uVar16 >> 0x20);
                      FUN_1400019a0(&local_2f8,&local_260);
                      local_a8 = &local_2f8;
                      local_a0 = &local_2b0;
                      uVar6 = CONCAT44(uVar5,DAT_1420da670/*variable_instance_get*/);
                      puVar10 = (undefined8 *)
                                FUN_1416ab210(local_78,local_90,&local_148,2,uVar6,&local_a8);
                      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
                      local_10c = *(uint *)((longlong)puVar10 + 0xc);
                      local_110 = *(uint *)(puVar10 + 1);
                      if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
code_r0x0001400cd25a:
                        local_118 = (undefined1 *)*puVar10;
                      }
                      else {
                        FUN_1400d2390(&local_118,puVar10);
                      }
                    }
                    FUN_1400019a0(&local_198,&local_118);
                    if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_118);
                    }
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_198;
                    FUN_140002730(&local_308,&DAT_1420b2b20);
                    uVar16 = CONCAT44(uVar5,DAT_1420da430/*ds_exists*/);
                    local_b0 = &local_308;
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,&local_b8);
                    cVar3 = FUN_1416927d0(uVar6);
                    uVar5 = (undefined4)(uVar16 >> 0x20);
                    if (cVar3 != '\0') {
                      local_d0 = 0xcd;
                      if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_148 = 0;
                      local_140 = 0x500000000;
                      local_a8 = &local_198;
                      uVar16 = CONCAT44(uVar5,DAT_1420da010/*ds_list_clear*/);
                      FUN_1416ab210(local_78,local_90,&local_148,1,uVar16,&local_a8);
                    }
                    local_d0 = 0xcf;
                    if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    local_11c = 0;
                    local_128 = 0.0;
                    while( true ) {
                      iVar4 = FUN_1416d9df0(&local_128,&local_2a0,DAT_1420f6b08,1);
                      uVar15 = (undefined4)(uVar16 >> 0x20);
                      uVar5 = 0xd4;
                      if ((iVar4 == -2) || (-1 < iVar4)) break;
                      local_d0 = 0xd0;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      local_b8 = &local_f0;
                      FUN_140002730(&local_308,&DAT_1420b2b70);
                      uVar7 = CONCAT44(uVar15,DAT_1420da3e0/*buffer_read*/);
                      local_b0 = &local_308;
                      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar7,&local_b8);
                      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
                      FUN_1400019a0(&local_188,uVar6);
                      local_d0 = 0xd1;
                      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_88);
                      }
                      local_88 = 0;
                      local_80 = 0x500000000;
                      local_b8 = &local_198;
                      local_b0 = &local_188;
                      uVar16 = CONCAT44(uVar5,DAT_1420da1d0/*ds_list_add*/);
                      FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,&local_b8);
                      switch(local_11c & 0xffffff) {
                      case 1:
                        local_128 = (double)FUN_1416940c0(&local_128);
                        local_128 = local_128 + dVar2;
                        local_11c = 0;
                        break;
                      default:
                        FUN_140001d70(&DAT_141981e6a,&local_128,&local_128);
                        break;
                      case 7:
                        local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
                        break;
                      case 10:
                        local_128 = (double)((longlong)local_128 + 1);
                        break;
                      case 0xd:
                        local_11c = 0;
                      case 0:
                        local_128 = local_128 + dVar2;
                      }
                    }
                    break;
                  default:
                    uVar5 = 0xd6;
                  }
                }
                else {
                  iVar4 = FUN_1416d9df0(&DAT_14217f304,&local_c8,uVar6,0);
                  if (iVar4 == 0) {
                    lVar12 = 1;
                    goto LAB_1400cb8f0;
                  }
                  iVar4 = FUN_1416d9df0(&DAT_14217f318,&local_c8,uVar6,0);
                  if (iVar4 == 0) {
                    lVar12 = 2;
                    goto LAB_1400cb8f0;
                  }
                  iVar4 = FUN_1416d9df0(&DAT_14217f32c,&local_c8,uVar6,0);
                  if (iVar4 == 0) {
                    lVar12 = 3;
                    goto LAB_1400cb8f0;
                  }
                  iVar4 = FUN_1416d9df0(&DAT_14217f340,&local_c8,uVar6,0);
                  if (iVar4 == 0) {
                    lVar12 = 4;
                    goto LAB_1400cb8f0;
                  }
                  iVar4 = FUN_1416d9df0(&DAT_14217f354,&local_c8,uVar6,0);
                  uVar5 = 0xd6;
                  if (iVar4 == 0) {
                    lVar12 = 5;
                    goto LAB_1400cb8f0;
                  }
                }
                uVar15 = (undefined4)(uVar16 >> 0x20);
                local_d0 = uVar5;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_f0;
                uVar7 = CONCAT44(uVar15,DAT_1420da470/*buffer_tell*/);
                puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,uVar7,&local_b8)
                ;
                local_10c = *(uint *)((longlong)puVar10 + 0xc);
                local_110 = *(uint *)(puVar10 + 1);
                if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
                  local_118 = (undefined1 *)*puVar10;
                }
                else {
                  FUN_1400d2390(&local_118,puVar10);
                }
                FUN_140001c50(&local_118,1);
                iVar4 = FUN_1416d9df0(&local_118,&local_3b0,DAT_1420f6b08,1);
                if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_118);
                }
                if (iVar4 < 0) {
                  iVar13 = 0;
                  iVar4 = 0;
                }
                else {
                  local_d0 = 0xd9;
                  iVar13 = 0x9f;
                  iVar4 = 0x9f;
                }
                if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_c8);
                  iVar4 = iVar13;
                }
                if (iVar4 != 0) break;
                switch(local_22c & 0xffffff) {
                case 1:
                  local_238 = (double)FUN_1416940c0(&local_238);
                  local_238 = local_238 + dVar2;
                  local_22c = 0;
                  break;
                default:
                  FUN_140001d70(&DAT_141981e6a,&local_238,&local_238);
                  break;
                case 7:
                  local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
                  break;
                case 10:
                  local_238 = (double)((longlong)local_238 + 1);
                  break;
                case 0xd:
                  local_22c = 0;
                case 0:
                  local_238 = local_238 + dVar2;
                }
              }
              cVar3 = FUN_1416abe60(&local_178,&local_78,&local_90);
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
            } while (cVar3 != '\0');
          }
          FUN_1416ab620(&local_178,&local_78,&local_90);
          if (local_168 != 0) {
            thunk_FUN_1416c46f0();
            local_168 = 0;
          }
        }
      }
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_b8 = &local_f0;
      uVar6 = CONCAT44(uVar5,DAT_1420da470/*buffer_tell*/);
      puVar10 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,uVar6,&local_b8);
      uStack_170 = puVar10[1];
      if ((0x46U >> (*(uint *)((longlong)puVar10 + 0xc) & 0x1f) & 1) == 0) {
        local_178 = (undefined1 *)*puVar10;
      }
      else {
        FUN_1400d2390(&local_178,puVar10);
      }
      FUN_140001c50(&local_178,1);
      iVar4 = FUN_1416d9df0(&local_178,&local_3b0,DAT_1420f6b08,1);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_178);
      }
      uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    } while (iVar4 < 0);
    local_d0 = 0xe1;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_f0;
    FUN_1416ab210(local_78,local_90,&local_88,1,CONCAT44(uVar5,DAT_1420da370/*buffer_delete*/),&local_b8);
    local_d0 = 0xe3;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    gml_Script__SET_SCENE(local_78,local_90,&local_88,0,0);
    uVar16 = local_1d0;
  }
  if (local_1a8 == 0) {
    local_1d0._4_4_ = (uint)(uVar16 >> 0x20);
    uVar1 = local_1d0._4_4_;
  }
  else {
    local_1d0 = uVar16;
    thunk_FUN_1416c46f0();
    uVar16 = local_1d0;
    uVar1 = local_1d0._4_4_;
  }
  local_1d0 = uVar16;
  local_1a8 = 0;
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  if ((0x46U >> (local_140._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_364 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_370);
  }
  if ((0x46U >> (local_294 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a0);
  }
  if ((0x46U >> (local_344 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_350);
  }
  if ((0x46U >> (local_354 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_360);
  }
  if ((0x46U >> (local_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_260);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_2b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c0);
  }
  if ((0x46U >> (local_374 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_380);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_338);
  }
  if ((0x46U >> (local_2a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b0);
  }
  if ((0x46U >> (local_4c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4d0);
  }
  if ((0x46U >> (local_3c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d0);
  }
  if ((0x46U >> (local_3d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e0);
  }
  if ((0x46U >> (local_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f0);
  }
  if ((0x46U >> (local_3f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_400);
  }
  if ((0x46U >> (local_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_410);
  }
  if ((0x46U >> (local_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_420);
  }
  if ((0x46U >> (local_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_430);
  }
  if ((0x46U >> (local_434 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_440);
  }
  if ((0x46U >> (local_444 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_450);
  }
  if ((0x46U >> (local_454 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_460);
  }
  if ((0x46U >> (local_464 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_470);
  }
  if ((0x46U >> (local_474 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_480);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4e0);
  }
  if ((0x46U >> (local_4e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4f0);
  }
  if ((0x46U >> (local_4f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_500);
  }
  if ((0x46U >> (local_504 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_510);
  }
  if ((0x46U >> (local_514 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_520);
  }
  if ((0x46U >> (local_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_530);
  }
  if ((0x46U >> (local_534 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_540);
  }
  if ((0x46U >> (local_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_550);
  }
  if ((0x46U >> (local_554 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_560);
  }
  if ((0x46U >> (local_564 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_570);
  }
  if ((0x46U >> (local_574 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_580);
  }
  if ((0x46U >> (local_584 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_590);
  }
  if ((0x46U >> (local_594 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5a0);
  }
  if ((0x46U >> (local_4b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4c0);
  }
  if ((0x46U >> (local_5a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5b0);
  }
  if ((0x46U >> (local_5b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5c0);
  }
  if ((0x46U >> (local_5c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5d0);
  }
  if ((0x46U >> (local_5d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5e0);
  }
  if ((0x46U >> (local_484 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_490);
  }
  if ((0x46U >> (local_384 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_390);
  }
  if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_270);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_274 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_280);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
  }
  if ((0x46U >> (local_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3b0);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3c0);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_494 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4a0);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_4a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b0);
  }
  if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_328);
  }
  if ((0x46U >> (local_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3a0);
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
  DAT_142182d78 = (undefined8 *)local_e0;
  return param_3;
}


