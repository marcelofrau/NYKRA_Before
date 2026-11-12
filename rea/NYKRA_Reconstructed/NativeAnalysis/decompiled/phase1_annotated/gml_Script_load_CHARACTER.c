// Function: gml_Script_load_CHARACTER @ 0x1401aabe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_CHARACTER(longlong *param_1,undefined8 param_2,undefined8 *param_3)

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
  uint in_stack_fffffffffffffaa8;
  uint uVar11;
  ulonglong in_stack_fffffffffffffab0;
  undefined8 **ppuVar12;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_530;
  uint local_524;
  undefined8 local_520;
  uint local_514;
  undefined8 *local_510;
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
  undefined1 local_3d8 [12];
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
  undefined1 *local_308;
  undefined4 local_300;
  uint local_2fc;
  undefined8 local_2f8;
  uint local_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
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
  undefined8 local_270;
  uint local_264;
  undefined8 local_260;
  uint local_254;
  undefined8 local_250;
  uint local_244;
  undefined8 local_240;
  uint local_234;
  undefined8 local_230;
  uint local_224;
  undefined1 *local_220;
  undefined4 local_218;
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  uint local_1f4;
  undefined8 local_1f0;
  uint local_1e4;
  double local_1e0;
  uint local_1d4;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 *local_1c0;
  undefined4 uStack_1b8;
  uint local_1b4;
  double local_1b0;
  uint local_1a4;
  double local_1a0;
  uint local_194;
  undefined8 local_190;
  uint local_184;
  undefined8 local_180;
  uint local_174;
  double local_170;
  uint local_164;
  double local_160;
  uint local_154;
  double local_150;
  uint local_144;
  undefined1 *local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined4 local_118;
  uint local_114;
  undefined1 *local_110;
  undefined4 local_108;
  uint local_104;
  longlong local_100;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_e8 = "gml_Script_load_CHARACTER";
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
  local_3fc = 0xffffff;
  local_408 = 0;
  local_3ec = 0xffffff;
  local_3f8 = 0;
  local_2fc = 0xffffff;
  local_308 = (undefined1 *)0x0;
  DAT_142182d90 = param_1;
  local_90 = param_2;
  local_78 = param_1;
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18be8/*var:PROFILE*/);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_3dc = 0xffffff;
  local_3e8 = 0;
  local_524 = 0xffffff;
  local_530 = 0;
  local_514 = 0xffffff;
  local_520 = 0;
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
  local_184 = 0xffffff;
  local_190 = 0;
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
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_214 = 0xffffff;
  local_220 = (undefined1 *)0x0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = (undefined1 *)0x0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_128 = (ulonglong)(uint)local_128;
  local_130 = 0;
  local_2e0 = (ulonglong)(uint)local_2e0;
  local_2e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd860/*gml_Script_load_CHARACTER*/);
  local_e0 = 3;
  if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_408);
  }
  FUN_1416ab000(&local_408,&DAT_14217f640);
  if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f8);
  }
  FUN_1416ab000(&local_3f8,s_CHARACTER_1420b3890);
  local_e0 = 5;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_548 = 0;
  uStack_540 = 0;
  FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_548,in_stack_fffffffffffffaa8 & 0xffffff00,
                in_stack_fffffffffffffab0 & 0xffffffffffffff00);
  FUN_1400019a0(&local_2b8,&local_548);
  local_b8 = &local_2b8;
  ppuVar12 = &local_b8;
  uVar11 = DAT_1420da4b0/*floor*/;
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da4b0/*floor*/,ppuVar12);
  local_104 = 0;
  local_110 = &DAT_bff0000000000000;
  iVar3 = FUN_1416d9df0(uVar6,&local_110,DAT_1420f6b08,1);
  if ((iVar3 == -2) || (0 < iVar3)) {
    local_e0 = 8;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_130);
    }
    local_130 = 0;
    local_128 = 0x500000000;
    FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_308);
    FUN_1416d0010(0x4f,0x18965/*var:game_loadchapter*/,0x80000000,&local_548,uVar11 & 0xffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    FUN_1400019a0(&local_2b8,&local_548);
    local_b8 = &local_2b8;
    puVar7 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_130,1,DAT_1420da4b0/*floor*/,&local_b8);
    local_104 = *(uint *)((longlong)puVar7 + 0xc);
    local_108 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
      local_110 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1401b99d0(&local_110,puVar7);
    }
    FUN_140001c50(&local_110,1);
    FUN_1400019a0(&local_2a8,&local_110);
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    local_b0 = &local_2a8;
    FUN_1416ac010(&local_120,&DAT_1420b38b5);
    uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da2b0/*string*/,&local_b0);
    FUN_1416ac010(local_3d8,s_DATA_CHAPTER_TEMPLATES_chapter__1420b38c0);
    local_1c4 = local_2fc;
    local_1c8 = local_300;
    if ((0x46U >> (local_2fc & 0x1f) & 1) == 0) {
      local_1d0 = local_308;
    }
    else {
      FUN_1401b99d0(&local_1d0,&local_308);
    }
    FUN_140003ca0(&local_1d0,local_3d8);
    local_134 = local_1c4;
    local_138 = local_1c8;
    if ((0x46U >> (local_1c4 & 0x1f) & 1) == 0) {
      local_140 = local_1d0;
    }
    else {
      FUN_1401b99d0(&local_140,&local_1d0);
    }
    FUN_140003ca0(&local_140,uVar5);
    local_bc = local_134;
    local_c0 = local_138;
    if ((0x46U >> (local_134 & 0x1f) & 1) == 0) {
      local_c8 = local_140;
    }
    else {
      FUN_1401b99d0(&local_c8,&local_140);
    }
    FUN_140003ca0(&local_c8,&local_120);
    local_104 = local_bc;
    local_108 = local_c0;
    if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
      local_110 = local_c8;
    }
    else {
      FUN_1401b99d0(&local_110,&local_c8);
    }
    FUN_140003ca0(&local_110,&local_3f8);
    FUN_1400019a0(&local_408,&local_110);
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_140);
    }
    if ((0x46U >> (local_1c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1d0);
    }
    if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_3d8);
    }
    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_120);
    }
  }
  else {
    local_e0 = 6;
    if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_130);
    }
    local_130 = 0;
    local_128 = 0x500000000;
    FUN_1416ce870(local_78,DAT_1420d59d8/*working_directory*/,0x80000000,&local_308);
    FUN_1400019a0(&local_2a8,uVar5);
    local_b0 = &local_2a8;
    FUN_1416ac010(&local_120,&DAT_1420b38b5);
    uVar5 = FUN_1416ab210(local_78,local_90,&local_130,1,DAT_1420da2b0/*string*/,&local_b0);
    FUN_1416ac010(local_3d8,s_PROFILES_HEPTAVERSE__1420b38a0);
    local_1c4 = local_2fc;
    local_1c8 = local_300;
    if ((0x46U >> (local_2fc & 0x1f) & 1) == 0) {
      local_1d0 = local_308;
    }
    else {
      FUN_1401b99d0(&local_1d0,&local_308);
    }
    FUN_140003ca0(&local_1d0,local_3d8);
    local_134 = local_1c4;
    local_138 = local_1c8;
    if ((0x46U >> (local_1c4 & 0x1f) & 1) == 0) {
      local_140 = local_1d0;
    }
    else {
      FUN_1401b99d0(&local_140,&local_1d0);
    }
    FUN_140003ca0(&local_140,uVar5);
    local_bc = local_134;
    local_c0 = local_138;
    if ((0x46U >> (local_134 & 0x1f) & 1) == 0) {
      local_c8 = local_140;
    }
    else {
      FUN_1401b99d0(&local_c8,&local_140);
    }
    FUN_140003ca0(&local_c8,&local_120);
    local_104 = local_bc;
    local_108 = local_c0;
    if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
      local_110 = local_c8;
    }
    else {
      FUN_1401b99d0(&local_110,&local_c8);
    }
    FUN_140003ca0(&local_110,&local_3f8);
    FUN_1400019a0(&local_408,&local_110);
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_140);
    }
    if ((0x46U >> (local_1c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1d0);
    }
    if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
      FUN_140001b50(local_3d8);
    }
    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_120);
    }
  }
  local_e0 = 0xb;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_b8 = &local_408;
  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da3d0/*buffer_load*/,&local_b8);
  FUN_1400019a0(&local_d8,uVar5);
  local_104 = 0;
  local_110 = &DAT_bff0000000000000;
  iVar3 = FUN_1416d9df0(&local_d8,&local_110,DAT_1420f6b08,0);
  if (iVar3 == 0) {
    local_e0 = 0xc;
  }
  else {
    local_e0 = 0xd;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_d8;
    FUN_140002730(&local_2a8,&DAT_1420b38e0);
    local_b0 = &local_2a8;
    FUN_140002730(&local_298,&DAT_14217f648);
    local_a8 = &local_298;
    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da650/*buffer_seek*/,&local_b8);
    local_e0 = 0xe;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_d8;
    uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
    FUN_1400019a0(&local_2d8,uVar5);
    local_e0 = 0xf;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_d8;
    FUN_140002730(&local_2a8,&DAT_14217f648);
    local_b0 = &local_2a8;
    FUN_140002730(&local_298,&DAT_14217f648);
    local_a8 = &local_298;
    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da650/*buffer_seek*/,&local_b8);
    local_e0 = 0x15;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_b8 = &local_d8;
    puVar7 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
    local_104 = *(uint *)((longlong)puVar7 + 0xc);
    local_108 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
      local_110 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1401b99d0(&local_110,puVar7);
    }
    FUN_140001c50(&local_110,1);
    iVar3 = FUN_1416d9df0(&local_110,&local_2d8,DAT_1420f6b08,1);
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    if (iVar3 < 0) {
      local_e0 = 0x19;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_130);
      }
      local_130 = 0;
      local_128 = 0x500000000;
      local_b8 = &local_d8;
      FUN_140002730(&local_2a8,&DAT_1420b38f0);
      local_b0 = &local_2a8;
      uVar5 = FUN_1416ab210(local_78,local_90,&local_130,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
      FUN_1400019a0(&local_298,uVar5);
      local_a8 = &local_298;
      uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da460/*asset_get_index*/,&local_a8);
      FUN_1400019a0(&local_3e8,uVar5);
      uVar5 = DAT_1420f6b08;
      local_104 = 0;
      local_110 = &DAT_bff0000000000000;
      iVar3 = FUN_1416d9df0(&local_3e8,&local_110,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        local_104 = 0;
        local_110 = &DAT_bff0000000000000;
        iVar3 = FUN_1416d9df0(&local_3e8,&local_110,uVar5,1);
        if (0 < iVar3) {
          local_e0 = 0x1c;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_530,uVar5);
          local_e0 = 0x1d;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_520,uVar5);
          local_e0 = 0x1e;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_508,uVar5);
          local_e0 = 0x1f;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4f8,uVar5);
          local_e0 = 0x20;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3910);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4e8,uVar5);
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          puVar7 = (undefined8 *)
                   FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
          local_104 = *(uint *)((longlong)puVar7 + 0xc);
          local_108 = *(undefined4 *)(puVar7 + 1);
          if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
            local_110 = (undefined1 *)*puVar7;
          }
          else {
            FUN_1401b99d0(&local_110,puVar7);
          }
          FUN_140001c50(&local_110,1);
          iVar3 = FUN_1416d9df0(&local_110,&local_2d8,DAT_1420f6b08,1);
          if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_110);
          }
          if (-1 < iVar3) {
            local_e0 = 0x22;
            goto joined_r0x0001401aca13;
          }
          iVar3 = FUN_1416f82f0(local_78,local_90,0x40);
          if (iVar3 < 1) {
            local_e0 = 0x24;
            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_88);
            }
            local_88 = 0;
            local_80 = 0x500000000;
            local_b8 = &local_530;
            local_b0 = &local_520;
            local_a8 = &local_4e8;
            FUN_140002730(&local_288,&DAT_1420b3920);
            local_a0[0] = &local_288;
            FUN_1416ab210(local_78,local_90,&local_88,4,DAT_1420da400/*instance_create_depth*/,&local_b8);
          }
          local_bc = 0;
          local_c8 = (undefined1 *)0x4050000000000000/*64 (obj:oPlayer)*/;
          iVar3 = FUN_1416ab810(&local_110,&local_78,&local_90,&local_c8);
          local_510 = param_3;
          if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c8);
          }
          dVar1 = _DAT_141981e30;
          if (0 < iVar3) {
            do {
              local_e0 = 0x26;
              FUN_1400019a0(&local_4d8,&local_508);
              FUN_1416cfae0(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_4d8);
              local_e0 = 0x27;
              FUN_1400019a0(&local_4c8,&local_4f8);
              FUN_1416cfae0(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_4c8);
              local_e0 = 0x28;
              FUN_1400019a0(&local_4b8,&local_4e8);
              FUN_1416cfae0(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_4b8);
              local_e0 = 0x29;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_4a8,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5a98/*speed*/,0x80000000,&local_4a8);
              local_e0 = 0x2a;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_498,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5aa8/*direction*/,0x80000000,&local_498);
              local_e0 = 0x2b;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_488,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ab8/*friction*/,0x80000000,&local_488);
              local_e0 = 0x2c;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_478,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ac8/*gravity*/,0x80000000,&local_478);
              local_e0 = 0x2d;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_468,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_468);
              local_e0 = 0x2e;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_458,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ae8/*image_index*/,0x80000000,&local_458);
              local_e0 = 0x2f;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_448,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5af8/*image_speed*/,0x80000000,&local_448);
              local_e0 = 0x30;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3900);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_438,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_438);
              local_e0 = 0x31;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3930);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_428,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b18/*image_blend*/,0x80000000,&local_428);
              local_e0 = 0x32;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_130);
              }
              local_130 = 0;
              local_128 = 0x500000000;
              if ((0x46U >> (local_2e0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_2e8);
              }
              local_2e8 = 0;
              local_2e0 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3930);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_2e8,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_298,uVar5);
              local_a8 = &local_298;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_130,1,DAT_1420da230/*round*/,&local_a8);
              FUN_1400019a0(&local_288,uVar5);
              local_a0[0] = &local_288;
              ppuVar12 = local_a0;
              uVar11 = DAT_1420da620/*bool*/;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da620/*bool*/,ppuVar12);
              FUN_1400019a0(&local_418,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b28/*visible*/,0x80000000,&local_418);
              local_e0 = 0x34;
              if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_190);
              }
              local_184 = 0;
              local_190 = 0;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0,&local_3c8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3c8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x35;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3c8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0,&local_3c8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,1,&local_3b8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3b8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x36;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3b8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,1,&local_3b8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,2,&local_3a8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3a8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x37;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3a8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,2,&local_3a8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,3,&local_398,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_398,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x38;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_398,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,3,&local_398);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,4,&local_388,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_388,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x39;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_388,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,4,&local_388);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,5,&local_378,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_378,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3a;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_378,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,5,&local_378);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,6,&local_368,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_368,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3b;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_368,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,6,&local_368);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,7,&local_358,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_358,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3c;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_358,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,7,&local_358);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,8,&local_348,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_348,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3d;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_348,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,8,&local_348);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,9,&local_338,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_338,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3e;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_338,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,9,&local_338);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,10,&local_328,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_328,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x3f;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_328,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,10,&local_328);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_318,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_318,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0x40;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_318,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_318);
              }
              local_e0 = 0x42;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3940);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_2f8,uVar5);
              if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_200);
              }
              local_1f4 = 0;
              local_200 = 0;
              if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_220);
              }
              local_214 = 0;
              local_220 = (undefined1 *)0x0;
              if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_180);
              }
              local_174 = 0;
              local_180 = 0;
              if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_270);
              }
              local_264 = 0;
              local_270 = 0;
              if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_210);
              }
              local_204 = 0;
              local_210 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
              local_e0 = 0x44;
              if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1b0);
              }
              local_1a4 = 0;
              local_1b0 = 0.0;
              while ((iVar3 = FUN_1416d9df0(&local_1b0,&local_2f8,DAT_1420f6b08,1), iVar3 != -2 &&
                     (iVar3 < 0))) {
                local_e0 = 0x46;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b38f0);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_200,uVar5);
                local_e0 = 0x48;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                              (ulonglong)ppuVar12 & 0xffffffffffffff00);
                FUN_1400019a0(&local_2b8,&local_1f0);
                local_b8 = &local_2b8;
                local_b0 = &local_200;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da350/*variable_instance_exists*/,&local_b8);
                FUN_1400019a0(&local_210,uVar5);
                local_e0 = 0x4a;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3950);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_220,uVar5);
                local_e0 = 0x4c;
                local_bc = local_214;
                local_c0 = local_218;
                if ((0x46U >> (local_214 & 0x1f) & 1) == 0) {
                  local_c8 = local_220;
                }
                else {
                  FUN_1401b99d0(&local_c8,&local_220);
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                             ) < DAT_14217f6c4) &&
                   (_Init_thread_header(&DAT_14217f6c4), DAT_14217f6c4 == -1)) {
                  _DAT_14217f66c = 0;
                  _DAT_14217f660 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                  _DAT_14217f680 = 0x100000000;
                  _DAT_14217f674 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
                  _DAT_14217f694 = 0x200000000;
                  _DAT_14217f688 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                  _DAT_14217f6a8 = 0x300000000;
                  _DAT_14217f69c = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                  _DAT_14217f6bc = 0x400000000;
                  _DAT_14217f6b0 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
                  atexit(FUN_1401b9430);
                  _Init_thread_footer(&DAT_14217f6c4);
                }
                uVar5 = DAT_1420f6b08;
                iVar3 = FUN_1416d9df0(&DAT_14217f660,&local_c8,DAT_1420f6b08,0);
                if (iVar3 != 0) {
                  iVar3 = FUN_1416d9df0(&DAT_14217f674,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 1;
                    goto LAB_1401af000;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f688,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 2;
                    goto LAB_1401af000;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f69c,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 3;
                    goto LAB_1401af000;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f6b0,&local_c8,uVar5,0);
                  uVar4 = 0x93;
                  if (iVar3 == 0) {
                    lVar8 = 4;
                    goto LAB_1401af000;
                  }
                  goto LAB_1401b0700;
                }
                lVar8 = 0;
LAB_1401af000:
                switch((&DAT_14217f670)[lVar8 * 5]) {
                case 0:
                  local_e0 = 0x4e;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3900);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x50;
                  if (cVar2 != '\0') {
                    local_e0 = 0x4f;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 1:
                  local_e0 = 0x53;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b38f0);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x55;
                  if (cVar2 != '\0') {
                    local_e0 = 0x54;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 2:
                  local_e0 = 0x58;
                  if ((0x46U >> (local_234 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_240);
                  }
                  local_234 = 0;
                  local_240 = 0;
                  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_230);
                  }
                  local_224 = 0;
                  local_230 = 0;
                  if ((0x46U >> (local_254 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_260);
                  }
                  local_254 = 0;
                  local_260 = 0;
                  if ((0x46U >> (local_244 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_250);
                  }
                  local_244 = 0;
                  local_250 = 0;
                  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1c0);
                  }
                  local_1b4 = 0;
                  local_1c0 = (undefined1 *)0x0;
                  local_e0 = 0x59;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3940);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_260,uVar5);
                  local_e0 = 0x5b;
                  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_170);
                  }
                  local_164 = 0;
                  local_170 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_170,&local_260,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x5c;
                    DAT_142182d90 = (longlong *)0xc38866;
                    uVar4 = FUN_141693b30(&local_170);
                    puVar7 = (undefined8 *)FUN_1416924a0(&local_240,uVar4);
                    FUN_1416a8cb0(local_240);
                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                      FUN_140001b50(puVar7);
                    }
                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                    *puVar7 = 0;
                    FUN_1416a8c00(1);
                    switch(local_164 & 0xffffff) {
                    case 1:
                      local_170 = (double)FUN_1416940c0(&local_170);
                      local_170 = local_170 + dVar1;
                      local_164 = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_170,&local_170);
                      break;
                    case 7:
                      local_170 = (double)CONCAT44(local_170._4_4_,local_170._0_4_ + 1);
                      break;
                    case 10:
                      local_170 = (double)((longlong)local_170 + 1);
                      break;
                    case 0xd:
                      local_164 = 0;
                    case 0:
                      local_170 = local_170 + dVar1;
                    }
                  }
                  local_e0 = 0x5f;
                  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_160);
                  }
                  local_154 = 0;
                  local_160 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_160,&local_260,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x60;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_d8;
                    FUN_140002730(&local_2a8,&DAT_1420b3950);
                    ppuVar12 = &local_b8;
                    uVar11 = DAT_1420da3e0/*buffer_read*/;
                    local_b0 = &local_2a8;
                    uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                    FUN_1400019a0(&local_1c0,uVar5);
                    local_e0 = 0x61;
                    local_114 = local_1b4;
                    local_118 = uStack_1b8;
                    if ((0x46U >> (local_1b4 & 0x1f) & 1) == 0) {
                      local_120 = local_1c0;
                    }
                    else {
                      FUN_1401b99d0(&local_120,&local_1c0);
                    }
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 4) < iRam000000014217f70c) &&
                       (_Init_thread_header(0x14217f70c), iRam000000014217f70c == -1)) {
                      _DAT_14217f6dc = 0;
                      _DAT_14217f6d0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                      _DAT_14217f6f0 = 0x100000000;
                      _DAT_14217f6e4 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                      _DAT_14217f704 = 0x200000000;
                      _DAT_14217f6f8 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                      atexit(FUN_1401b9510);
                      _Init_thread_footer(0x14217f70c);
                    }
                    uVar5 = DAT_1420f6b08;
                    iVar3 = FUN_1416d9df0(&DAT_14217f6d0,&local_120,DAT_1420f6b08,0);
                    if (iVar3 == 0) {
                      lVar8 = 0;
code_r0x0001401afb95:
                      iVar3 = *(int *)(lVar8 * 0x14 + 0x14217f6e0);
                      if (iVar3 == 2) {
                        local_e0 = 0x7f;
                        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_88);
                        }
                        local_88 = 0;
                        local_80 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,0x1420b3960);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_180,uVar5);
                      }
                      else {
                        if (iVar3 != 1) {
                          if (iVar3 == 0) {
                            local_e0 = 99;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,&DAT_1420b3900);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_180,uVar5);
                          }
                          goto code_r0x0001401afc70;
                        }
                        local_e0 = 0x67;
                        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_88);
                        }
                        local_88 = 0;
                        local_80 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,&DAT_1420b3940);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_250,uVar5);
                        local_e0 = 0x68;
                        if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_1e0);
                        }
                        local_1d4 = 0;
                        local_1e0 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_1e0,&local_250,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x69;
                          DAT_142182d90 = (longlong *)0xc38867;
                          uVar4 = FUN_141693b30(&local_1e0);
                          puVar7 = (undefined8 *)FUN_1416924a0(&local_230,uVar4);
                          FUN_1416a8cb0(local_230);
                          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                            FUN_140001b50(puVar7);
                          }
                          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                          *puVar7 = 0;
                          FUN_1416a8c00(1);
                          switch(local_1d4 & 0xffffff) {
                          case 1:
                            local_1e0 = (double)FUN_1416940c0(&local_1e0);
                            local_1e0 = local_1e0 + dVar1;
                            local_1d4 = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_1e0,&local_1e0);
                            break;
                          case 7:
                            local_1e0 = (double)CONCAT44(local_1e0._4_4_,local_1e0._0_4_ + 1);
                            break;
                          case 10:
                            local_1e0 = (double)((longlong)local_1e0 + 1);
                            break;
                          case 0xd:
                            local_1d4 = 0;
                          case 0:
                            local_1e0 = local_1e0 + dVar1;
                          }
                        }
                        local_e0 = 0x6c;
                        if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_150);
                        }
                        local_144 = 0;
                        local_150 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_150,&local_250,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x6d;
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_b8 = &local_d8;
                          FUN_140002730(&local_2a8,&DAT_1420b3950);
                          ppuVar12 = &local_b8;
                          uVar11 = DAT_1420da3e0/*buffer_read*/;
                          local_b0 = &local_2a8;
                          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12
                                               );
                          FUN_1400019a0(&local_1c0,uVar5);
                          local_e0 = 0x6e;
                          local_134 = local_1b4;
                          local_138 = uStack_1b8;
                          if ((0x46U >> (local_1b4 & 0x1f) & 1) == 0) {
                            local_140 = local_1c0;
                          }
                          else {
                            FUN_1401b99d0(&local_140,&local_1c0);
                          }
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 4) < iRam000000014217f738) &&
                             (_Init_thread_header(0x14217f738), iRam000000014217f738 == -1)) {
                            _DAT_14217f71c = 0;
                            _DAT_14217f710 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                            _DAT_14217f730 = 0x100000000;
                            _DAT_14217f724 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                            atexit(FUN_1401b95c0);
                            _Init_thread_footer(0x14217f738);
                          }
                          uVar5 = DAT_1420f6b08;
                          iVar3 = FUN_1416d9df0(&DAT_14217f710,&local_140,DAT_1420f6b08,0);
                          if (iVar3 == 0) {
                            lVar8 = 0;
code_r0x0001401b01e2:
                            iVar3 = *(int *)(lVar8 * 0x14 + 0x14217f720);
                            if (iVar3 != 1) {
                              if (iVar3 == 0) {
                                local_e0 = 0x70;
                                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&local_88);
                                }
                                local_88 = 0;
                                local_80 = 0x500000000;
                                local_b8 = &local_d8;
                                FUN_140002730(&local_2a8,&DAT_1420b3900);
                                ppuVar12 = &local_b8;
                                uVar11 = DAT_1420da3e0/*buffer_read*/;
                                local_b0 = &local_2a8;
                                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                      ppuVar12);
                                FUN_1400019a0(&local_270,uVar5);
                              }
                              goto code_r0x0001401b02ab;
                            }
                            local_e0 = 0x74;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,0x1420b3960);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_270,uVar5);
                            if ((local_144 & 0xffffff) == 0) goto code_r0x0001401b03af;
code_r0x0001401b02d0:
                            local_e0 = 0x78;
                            DAT_142182d90 = (longlong *)0xc20000;
                            dVar10 = (double)FUN_1416940c0(&local_150);
                          }
                          else {
                            iVar3 = FUN_1416d9df0(&DAT_14217f724,&local_140,uVar5,0);
                            if (iVar3 == 0) {
                              lVar8 = 1;
                              goto code_r0x0001401b01e2;
                            }
code_r0x0001401b02ab:
                            if ((local_144 & 0xffffff) != 0) goto code_r0x0001401b02d0;
code_r0x0001401b03af:
                            local_e0 = 0x78;
                            DAT_142182d90 = (longlong *)0xc20000;
                            dVar10 = local_150;
                          }
                          FUN_1416cd4e0(&local_230,(longlong)dVar10,&local_270);
                          if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_140);
                          }
                          switch(local_144 & 0xffffff) {
                          case 1:
                            local_150 = (double)FUN_1416940c0(&local_150);
                            local_150 = local_150 + dVar1;
                            local_144 = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_150,&local_150);
                            break;
                          case 7:
                            local_150 = (double)CONCAT44(local_150._4_4_,local_150._0_4_ + 1);
                            break;
                          case 10:
                            local_150 = (double)((longlong)local_150 + 1);
                            break;
                          case 0xd:
                            local_144 = 0;
                          case 0:
                            local_150 = local_150 + dVar1;
                          }
                        }
                        local_e0 = 0x7b;
                        FUN_1400019a0(&local_180,&local_230);
                      }
                      if ((local_154 & 0xffffff) == 0) goto code_r0x0001401aff80;
code_r0x0001401afc95:
                      local_e0 = 0x83;
                      DAT_142182d90 = (longlong *)0xc20000;
                      dVar10 = (double)FUN_1416940c0(&local_160);
                    }
                    else {
                      iVar3 = FUN_1416d9df0(&DAT_14217f6e4,&local_120,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 1;
                        goto code_r0x0001401afb95;
                      }
                      iVar3 = FUN_1416d9df0(&DAT_14217f6f8,&local_120,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 2;
                        goto code_r0x0001401afb95;
                      }
code_r0x0001401afc70:
                      if ((local_154 & 0xffffff) != 0) goto code_r0x0001401afc95;
code_r0x0001401aff80:
                      local_e0 = 0x83;
                      DAT_142182d90 = (longlong *)0xc20000;
                      dVar10 = local_160;
                    }
                    FUN_1416cd4e0(&local_240,(longlong)dVar10,&local_180);
                    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_120);
                    }
                    switch(local_154 & 0xffffff) {
                    case 1:
                      local_160 = (double)FUN_1416940c0(&local_160);
                      local_160 = local_160 + dVar1;
                      local_154 = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_160,&local_160);
                      break;
                    case 7:
                      local_160 = (double)CONCAT44(local_160._4_4_,local_160._0_4_ + 1);
                      break;
                    case 10:
                      local_160 = (double)((longlong)local_160 + 1);
                      break;
                    case 0xd:
                      local_154 = 0;
                    case 0:
                      local_160 = local_160 + dVar1;
                    }
                  }
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x87;
                  if (cVar2 != '\0') {
                    local_e0 = 0x86;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_240;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 3:
                  local_e0 = 0x8a;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,0x1420b3960);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x8c;
                  if (cVar2 != '\0') {
                    local_e0 = 0x8b;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 4:
                  local_e0 = 0x8f;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,0x1420b3970);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x91;
                  if (cVar2 != '\0') {
                    local_e0 = 0x90;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                default:
                  local_e0 = 0x93;
                  goto joined_r0x0001401af360;
                }
LAB_1401b0700:
                local_e0 = uVar4;
joined_r0x0001401af360:
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                puVar7 = (undefined8 *)
                         FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
                local_114 = *(uint *)((longlong)puVar7 + 0xc);
                local_118 = *(undefined4 *)(puVar7 + 1);
                if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
                  local_120 = (undefined1 *)*puVar7;
                }
                else {
                  FUN_1401b99d0(&local_120,puVar7);
                }
                FUN_140001c50(&local_120,1);
                iVar3 = FUN_1416d9df0(&local_120,&local_2d8,DAT_1420f6b08,1);
                if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_120);
                }
                if (iVar3 < 0) {
                  iVar9 = 0;
                  iVar3 = 0;
                }
                else {
                  local_e0 = 0x96;
                  iVar9 = 0x73;
                  iVar3 = 0x73;
                }
                if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_c8);
                  iVar3 = iVar9;
                }
                if (iVar3 != 0) break;
                switch(local_1a4 & 0xffffff) {
                case 1:
                  local_1b0 = (double)FUN_1416940c0(&local_1b0);
                  local_1b0 = local_1b0 + dVar1;
                  local_1a4 = 0;
                  break;
                default:
                  FUN_140001d70(&DAT_141981e6a,&local_1b0,&local_1b0);
                  break;
                case 7:
                  local_1b0 = (double)CONCAT44(local_1b0._4_4_,local_1b0._0_4_ + 1);
                  break;
                case 10:
                  local_1b0 = (double)((longlong)local_1b0 + 1);
                  break;
                case 0xd:
                  local_1a4 = 0;
                case 0:
                  local_1b0 = local_1b0 + dVar1;
                }
              }
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              puVar7 = (undefined8 *)
                       FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
              local_bc = *(uint *)((longlong)puVar7 + 0xc);
              local_c0 = *(undefined4 *)(puVar7 + 1);
              if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                local_c8 = (undefined1 *)*puVar7;
              }
              else {
                FUN_1401b99d0(&local_c8,puVar7);
              }
              FUN_140001c50(&local_c8,1);
              iVar3 = FUN_1416d9df0(&local_c8,&local_2d8,DAT_1420f6b08,1);
              if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_c8);
              }
              if (-1 < iVar3) {
                local_e0 = 0x9b;
                break;
              }
              local_e0 = 0x9d;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3940);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_2f8,uVar5);
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              puVar7 = (undefined8 *)
                       FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
              local_bc = *(uint *)((longlong)puVar7 + 0xc);
              local_c0 = *(undefined4 *)(puVar7 + 1);
              if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                local_c8 = (undefined1 *)*puVar7;
              }
              else {
                FUN_1401b99d0(&local_c8,puVar7);
              }
              FUN_140001c50(&local_c8,1);
              iVar3 = FUN_1416d9df0(&local_c8,&local_2d8,DAT_1420f6b08,1);
              if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_c8);
              }
              if (-1 < iVar3) {
                local_e0 = 0x9e;
                break;
              }
              cVar2 = FUN_1416927d0(&local_2f8);
              if (cVar2 != '\0') {
                local_e0 = 0xa0;
                if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_2c8);
                }
                local_2bc = 0;
                local_2c8 = 0;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                uVar5 = (**(code **)(*local_78 + 8))(local_78,0x187a0/*var:books*/);
                FUN_1400019a0(&local_2b8,uVar5);
                local_b8 = &local_2b8;
                FUN_140002730(&local_2a8,&DAT_1420b38e0);
                local_b0 = &local_2a8;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da430/*ds_exists*/,&local_b8);
                cVar2 = FUN_1416927d0(uVar6);
                if (cVar2 == '\0') {
                  local_e0 = 0xa1;
                  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_130);
                  }
                  local_130 = 0;
                  local_128 = 0x500000000;
                  uVar5 = (**(code **)(*local_78 + 0x10))(local_78,0x187a0/*var:books*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_130,0,DAT_1420da020/*ds_list_create*/,0);
                  FUN_1416a8cb0(local_78);
                  FUN_1400019a0(uVar5,uVar6);
                  FUN_1416a8c00(1);
                }
                local_e0 = 0xa2;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                FUN_1400019a0(&local_2b8,uVar5);
                local_b8 = &local_2b8;
                FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da010/*ds_list_clear*/,&local_b8);
                local_e0 = 0xa3;
                if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1a0);
                }
                local_194 = 0;
                local_1a0 = 0.0;
                while ((iVar3 = FUN_1416d9df0(&local_1a0,&local_2f8,DAT_1420f6b08,1), iVar3 != -2 &&
                       (iVar3 < 0))) {
                  local_e0 = 0xa4;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3900);
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                  FUN_1400019a0(&local_2c8,uVar5);
                  local_e0 = 0xa5;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  uVar5 = (**(code **)(*local_78 + 0x10))(local_78,0x187a0/*var:books*/);
                  FUN_1400019a0(&local_2b8,uVar5);
                  local_b8 = &local_2b8;
                  local_b0 = &local_2c8;
                  FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da1d0/*ds_list_add*/,&local_b8);
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  puVar7 = (undefined8 *)
                           FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
                  local_bc = *(uint *)((longlong)puVar7 + 0xc);
                  local_c0 = *(undefined4 *)(puVar7 + 1);
                  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                    local_c8 = (undefined1 *)*puVar7;
                  }
                  else {
                    FUN_1401b99d0(&local_c8,puVar7);
                  }
                  FUN_140001c50(&local_c8,1);
                  iVar3 = FUN_1416d9df0(&local_c8,&local_2d8,DAT_1420f6b08,1);
                  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_c8);
                  }
                  if (-1 < iVar3) break;
                  (**(code **)(*local_78 + 0x10))(local_78,0x187a0/*var:books*/);
                  switch(local_194 & 0xffffff) {
                  case 1:
                    local_1a0 = (double)FUN_1416940c0(&local_1a0);
                    local_1a0 = local_1a0 + dVar1;
                    local_194 = 0;
                    break;
                  default:
                    FUN_140001d70(&DAT_141981e6a,&local_1a0,&local_1a0);
                    break;
                  case 7:
                    local_1a0 = (double)CONCAT44(local_1a0._4_4_,local_1a0._0_4_ + 1);
                    break;
                  case 10:
                    local_1a0 = (double)((longlong)local_1a0 + 1);
                    break;
                  case 0xd:
                    local_194 = 0;
                  case 0:
                    local_1a0 = local_1a0 + dVar1;
                  }
                }
              }
              local_e0 = 0xaa;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3940);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_2f8,uVar5);
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              puVar7 = (undefined8 *)
                       FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
              local_bc = *(uint *)((longlong)puVar7 + 0xc);
              local_c0 = *(undefined4 *)(puVar7 + 1);
              if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                local_c8 = (undefined1 *)*puVar7;
              }
              else {
                FUN_1401b99d0(&local_c8,puVar7);
              }
              FUN_140001c50(&local_c8,1);
              iVar3 = FUN_1416d9df0(&local_c8,&local_2d8,DAT_1420f6b08,1);
              if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_c8);
              }
              if (-1 < iVar3) {
                local_e0 = 0xab;
                break;
              }
              cVar2 = FUN_1416927d0(&local_2f8);
              if (cVar2 != '\0') {
                local_e0 = 0xad;
                if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_2c8);
                }
                local_2bc = 0;
                local_2c8 = 0;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                uVar5 = (**(code **)(*local_78 + 8))(local_78,0x18b9d/*var:PLANET_FOUND*/);
                FUN_1400019a0(&local_2b8,uVar5);
                local_b8 = &local_2b8;
                FUN_140002730(&local_2a8,&DAT_1420b38e0);
                local_b0 = &local_2a8;
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da430/*ds_exists*/,&local_b8);
                cVar2 = FUN_1416927d0(uVar6);
                if (cVar2 == '\0') {
                  local_e0 = 0xae;
                  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_130);
                  }
                  local_130 = 0;
                  local_128 = 0x500000000;
                  uVar5 = (**(code **)(*local_78 + 0x10))(local_78,0x18b9d/*var:PLANET_FOUND*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_130,0,DAT_1420da020/*ds_list_create*/,0);
                  FUN_1416a8cb0(local_78);
                  FUN_1400019a0(uVar5,uVar6);
                  FUN_1416a8c00(1);
                }
                local_e0 = 0xaf;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                FUN_1400019a0(&local_2b8,uVar5);
                local_b8 = &local_2b8;
                FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da010/*ds_list_clear*/,&local_b8);
                local_e0 = 0xb0;
                if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1a0);
                }
                local_194 = 0;
                local_1a0 = 0.0;
                while ((iVar3 = FUN_1416d9df0(&local_1a0,&local_2f8,DAT_1420f6b08,1), iVar3 != -2 &&
                       (iVar3 < 0))) {
                  local_e0 = 0xb1;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3900);
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                  FUN_1400019a0(&local_2c8,uVar5);
                  local_e0 = 0xb2;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  uVar5 = (**(code **)(*local_78 + 0x10))(local_78,0x18b9d/*var:PLANET_FOUND*/);
                  FUN_1400019a0(&local_2b8,uVar5);
                  local_b8 = &local_2b8;
                  local_b0 = &local_2c8;
                  FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da1d0/*ds_list_add*/,&local_b8);
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  puVar7 = (undefined8 *)
                           FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
                  local_bc = *(uint *)((longlong)puVar7 + 0xc);
                  local_c0 = *(undefined4 *)(puVar7 + 1);
                  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                    local_c8 = (undefined1 *)*puVar7;
                  }
                  else {
                    FUN_1401b99d0(&local_c8,puVar7);
                  }
                  FUN_140001c50(&local_c8,1);
                  iVar3 = FUN_1416d9df0(&local_c8,&local_2d8,DAT_1420f6b08,1);
                  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_c8);
                  }
                  if (-1 < iVar3) break;
                  (**(code **)(*local_78 + 0x10))(local_78,0x18b9d/*var:PLANET_FOUND*/);
                  switch(local_194 & 0xffffff) {
                  case 1:
                    local_1a0 = (double)FUN_1416940c0(&local_1a0);
                    local_1a0 = local_1a0 + dVar1;
                    local_194 = 0;
                    break;
                  default:
                    FUN_140001d70(&DAT_141981e6a,&local_1a0,&local_1a0);
                    break;
                  case 7:
                    local_1a0 = (double)CONCAT44(local_1a0._4_4_,local_1a0._0_4_ + 1);
                    break;
                  case 10:
                    local_1a0 = (double)((longlong)local_1a0 + 1);
                    break;
                  case 0xd:
                    local_194 = 0;
                  case 0:
                    local_1a0 = local_1a0 + dVar1;
                  }
                }
              }
              local_e0 = 0xb9;
              FUN_141706f60(local_78,local_90,2);
              cVar2 = FUN_1416abe60(&local_110,&local_78,&local_90);
            } while (cVar2 != '\0');
          }
          FUN_1416ab620(&local_110,&local_78,&local_90);
          param_3 = local_510;
          if (local_100 != 0) {
            thunk_FUN_1416c46f0();
            local_100 = 0;
          }
        }
      }
      local_e0 = 0xbe;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_130);
      }
      local_130 = 0;
      local_128 = 0x500000000;
      local_b8 = &local_d8;
      FUN_140002730(&local_2a8,&DAT_1420b38f0);
      local_b0 = &local_2a8;
      uVar5 = FUN_1416ab210(local_78,local_90,&local_130,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
      FUN_1400019a0(&local_298,uVar5);
      local_a8 = &local_298;
      uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da460/*asset_get_index*/,&local_a8);
      FUN_1400019a0(&local_3e8,uVar5);
      uVar5 = DAT_1420f6b08;
      local_104 = 0;
      local_110 = &DAT_bff0000000000000;
      iVar3 = FUN_1416d9df0(&local_3e8,&local_110,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        local_104 = 0;
        local_110 = &DAT_bff0000000000000;
        iVar3 = FUN_1416d9df0(&local_3e8,&local_110,uVar5,1);
        if ((0 < iVar3) && (iVar3 = FUN_1416f82f0(local_78,local_90,0x41), 0 < iVar3)) {
          local_e0 = 0xc1;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_530,uVar5);
          local_e0 = 0xc2;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_520,uVar5);
          local_e0 = 0xc3;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_508,uVar5);
          local_e0 = 0xc4;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3900);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4f8,uVar5);
          local_e0 = 0xc5;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          FUN_140002730(&local_2a8,&DAT_1420b3910);
          local_b0 = &local_2a8;
          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
          FUN_1400019a0(&local_4e8,uVar5);
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_b8 = &local_d8;
          puVar7 = (undefined8 *)
                   FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
          local_104 = *(uint *)((longlong)puVar7 + 0xc);
          local_108 = *(undefined4 *)(puVar7 + 1);
          if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
            local_110 = (undefined1 *)*puVar7;
          }
          else {
            FUN_1401b99d0(&local_110,puVar7);
          }
          FUN_140001c50(&local_110,1);
          iVar3 = FUN_1416d9df0(&local_110,&local_2d8,DAT_1420f6b08,1);
          if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_110);
          }
          if (-1 < iVar3) {
            local_e0 = 199;
            goto joined_r0x0001401aca13;
          }
          local_bc = 0;
          local_c8 = (undefined1 *)0x4050400000000000/*65 (obj:oEo)*/;
          iVar3 = FUN_1416ab810(&local_110,&local_78,&local_90,&local_c8);
          local_510 = param_3;
          if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c8);
          }
          dVar1 = _DAT_141981e30;
          if (0 < iVar3) {
            do {
              local_e0 = 0xcb;
              FUN_1400019a0(&local_4d8,&local_508);
              FUN_1416cfae0(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_4d8);
              local_e0 = 0xcc;
              FUN_1400019a0(&local_4c8,&local_4f8);
              FUN_1416cfae0(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_4c8);
              local_e0 = 0xcd;
              FUN_1400019a0(&local_4b8,&local_4e8);
              FUN_1416cfae0(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_4b8);
              local_e0 = 0xce;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_4a8,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5a98/*speed*/,0x80000000,&local_4a8);
              local_e0 = 0xcf;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_498,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5aa8/*direction*/,0x80000000,&local_498);
              local_e0 = 0xd0;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_488,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ab8/*friction*/,0x80000000,&local_488);
              local_e0 = 0xd1;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_478,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ac8/*gravity*/,0x80000000,&local_478);
              local_e0 = 0xd2;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_468,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_468);
              local_e0 = 0xd3;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_458,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5ae8/*image_index*/,0x80000000,&local_458);
              local_e0 = 0xd4;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3910);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_448,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5af8/*image_speed*/,0x80000000,&local_448);
              local_e0 = 0xd5;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3900);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_438,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b08/*image_alpha*/,0x80000000,&local_438);
              local_e0 = 0xd6;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3930);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_428,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b18/*image_blend*/,0x80000000,&local_428);
              local_e0 = 0xd7;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_130);
              }
              local_130 = 0;
              local_128 = 0x500000000;
              if ((0x46U >> (local_2e0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_2e8);
              }
              local_2e8 = 0;
              local_2e0 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3930);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_2e8,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_298,uVar5);
              local_a8 = &local_298;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_130,1,DAT_1420da230/*round*/,&local_a8);
              FUN_1400019a0(&local_288,uVar5);
              local_a0[0] = &local_288;
              ppuVar12 = local_a0;
              uVar11 = DAT_1420da620/*bool*/;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da620/*bool*/,ppuVar12);
              FUN_1400019a0(&local_418,uVar5);
              FUN_1416cfae0(local_78,DAT_1420d5b28/*visible*/,0x80000000,&local_418);
              local_e0 = 0xd9;
              if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_190);
              }
              local_184 = 0;
              local_190 = 0;
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0,&local_3c8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3c8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xda;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3c8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0,&local_3c8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,1,&local_3b8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3b8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xdb;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3b8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,1,&local_3b8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,2,&local_3a8,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_3a8,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xdc;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_3a8,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,2,&local_3a8);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,3,&local_398,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_398,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xdd;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_398,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,3,&local_398);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,4,&local_388,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_388,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xde;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_388,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,4,&local_388);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,5,&local_378,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_378,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xdf;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_378,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,5,&local_378);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,6,&local_368,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_368,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe0;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_368,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,6,&local_368);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,7,&local_358,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_358,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe1;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_358,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,7,&local_358);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,8,&local_348,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_348,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe2;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_348,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,8,&local_348);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,9,&local_338,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_338,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe3;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_338,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,9,&local_338);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,10,&local_328,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_328,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe4;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_328,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,10,&local_328);
              }
              FUN_1416cea80(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_318,uVar11 & 0xffffff00,
                            (ulonglong)ppuVar12 & 0xffffffffffffff00);
              local_bc = 0;
              local_c8 = &DAT_bff0000000000000;
              iVar3 = FUN_1416d9df0(&local_318,&local_c8,DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_190,uVar5);
              }
              else {
                local_e0 = 0xe5;
                DAT_142182d90 = (longlong *)0xc209fa;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3910);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_318,uVar5);
                FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0xb,&local_318);
              }
              local_e0 = 0xe7;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_b8 = &local_d8;
              FUN_140002730(&local_2a8,&DAT_1420b3940);
              local_b0 = &local_2a8;
              uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
              FUN_1400019a0(&local_2f8,uVar5);
              if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_200);
              }
              local_1f4 = 0;
              local_200 = 0;
              if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_220);
              }
              local_214 = 0;
              local_220 = (undefined1 *)0x0;
              if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_180);
              }
              local_174 = 0;
              local_180 = 0;
              if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_270);
              }
              local_264 = 0;
              local_270 = 0;
              if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_210);
              }
              local_204 = 0;
              local_210 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
              local_e0 = 0xe9;
              if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1b0);
              }
              local_1a4 = 0;
              local_1b0 = 0.0;
              while ((iVar3 = FUN_1416d9df0(&local_1b0,&local_2f8,DAT_1420f6b08,1), iVar3 != -2 &&
                     (iVar3 < 0))) {
                local_e0 = 0xeb;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b38f0);
                ppuVar12 = &local_b8;
                uVar11 = DAT_1420da3e0/*buffer_read*/;
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                FUN_1400019a0(&local_200,uVar5);
                local_e0 = 0xed;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                              (ulonglong)ppuVar12 & 0xffffffffffffff00);
                FUN_1400019a0(&local_2b8,&local_1f0);
                local_b8 = &local_2b8;
                local_b0 = &local_200;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da350/*variable_instance_exists*/,&local_b8);
                FUN_1400019a0(&local_210,uVar5);
                local_e0 = 0xef;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                FUN_140002730(&local_2a8,&DAT_1420b3950);
                local_b0 = &local_2a8;
                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,&local_b8);
                FUN_1400019a0(&local_220,uVar5);
                local_e0 = 0xf1;
                local_bc = local_214;
                local_c0 = local_218;
                if ((0x46U >> (local_214 & 0x1f) & 1) == 0) {
                  local_c8 = local_220;
                }
                else {
                  FUN_1401b99d0(&local_c8,&local_220);
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                             ) < DAT_14217f7a4) &&
                   (_Init_thread_header(&DAT_14217f7a4), DAT_14217f7a4 == -1)) {
                  _DAT_14217f74c = 0;
                  _DAT_14217f740 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                  _DAT_14217f760 = 0x100000000;
                  _DAT_14217f754 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
                  _DAT_14217f774 = 0x200000000;
                  _DAT_14217f768 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                  _DAT_14217f788 = 0x300000000;
                  _DAT_14217f77c = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                  _DAT_14217f79c = 0x400000000;
                  _DAT_14217f790 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
                  atexit(FUN_1401b9650);
                  _Init_thread_footer(&DAT_14217f7a4);
                }
                uVar5 = DAT_1420f6b08;
                iVar3 = FUN_1416d9df0(&DAT_14217f740,&local_c8,DAT_1420f6b08,0);
                if (iVar3 != 0) {
                  iVar3 = FUN_1416d9df0(&DAT_14217f754,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 1;
                    goto LAB_1401b44b0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f768,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 2;
                    goto LAB_1401b44b0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f77c,&local_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar8 = 3;
                    goto LAB_1401b44b0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f790,&local_c8,uVar5,0);
                  uVar4 = 0x138;
                  if (iVar3 == 0) {
                    lVar8 = 4;
                    goto LAB_1401b44b0;
                  }
                  goto LAB_1401b5ba0;
                }
                lVar8 = 0;
LAB_1401b44b0:
                switch((&DAT_14217f750)[lVar8 * 5]) {
                case 0:
                  local_e0 = 0xf3;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3900);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0xf5;
                  if (cVar2 != '\0') {
                    local_e0 = 0xf4;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 1:
                  local_e0 = 0xf8;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b38f0);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0xfa;
                  if (cVar2 != '\0') {
                    local_e0 = 0xf9;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 2:
                  local_e0 = 0xfd;
                  if ((0x46U >> (local_234 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_240);
                  }
                  local_234 = 0;
                  local_240 = 0;
                  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_230);
                  }
                  local_224 = 0;
                  local_230 = 0;
                  if ((0x46U >> (local_254 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_260);
                  }
                  local_254 = 0;
                  local_260 = 0;
                  if ((0x46U >> (local_244 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_250);
                  }
                  local_244 = 0;
                  local_250 = 0;
                  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1c0);
                  }
                  local_1b4 = 0;
                  local_1c0 = (undefined1 *)0x0;
                  local_e0 = 0xfe;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,&DAT_1420b3940);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_260,uVar5);
                  local_e0 = 0x100;
                  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_170);
                  }
                  local_164 = 0;
                  local_170 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_170,&local_260,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x101;
                    DAT_142182d90 = (longlong *)0xc38866;
                    uVar4 = FUN_141693b30(&local_170);
                    puVar7 = (undefined8 *)FUN_1416924a0(&local_240,uVar4);
                    FUN_1416a8cb0(local_240);
                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                      FUN_140001b50(puVar7);
                    }
                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                    *puVar7 = 0;
                    FUN_1416a8c00(1);
                    switch(local_164 & 0xffffff) {
                    case 1:
                      local_170 = (double)FUN_1416940c0(&local_170);
                      local_170 = local_170 + dVar1;
                      local_164 = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_170,&local_170);
                      break;
                    case 7:
                      local_170 = (double)CONCAT44(local_170._4_4_,local_170._0_4_ + 1);
                      break;
                    case 10:
                      local_170 = (double)((longlong)local_170 + 1);
                      break;
                    case 0xd:
                      local_164 = 0;
                    case 0:
                      local_170 = local_170 + dVar1;
                    }
                  }
                  local_e0 = 0x104;
                  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_160);
                  }
                  local_154 = 0;
                  local_160 = 0.0;
                  while ((iVar3 = FUN_1416d9df0(&local_160,&local_260,DAT_1420f6b08,1), iVar3 != -2
                         && (iVar3 < 0))) {
                    local_e0 = 0x105;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    local_b8 = &local_d8;
                    FUN_140002730(&local_2a8,&DAT_1420b3950);
                    ppuVar12 = &local_b8;
                    uVar11 = DAT_1420da3e0/*buffer_read*/;
                    local_b0 = &local_2a8;
                    uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                    FUN_1400019a0(&local_1c0,uVar5);
                    local_e0 = 0x106;
                    local_114 = local_1b4;
                    local_118 = uStack_1b8;
                    if ((0x46U >> (local_1b4 & 0x1f) & 1) == 0) {
                      local_120 = local_1c0;
                    }
                    else {
                      FUN_1401b99d0(&local_120,&local_1c0);
                    }
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 4) < iRam000000014217f7ec) &&
                       (_Init_thread_header(0x14217f7ec), iRam000000014217f7ec == -1)) {
                      _DAT_14217f7bc = 0;
                      _DAT_14217f7b0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                      _DAT_14217f7d0 = 0x100000000;
                      _DAT_14217f7c4 = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
                      _DAT_14217f7e4 = 0x200000000;
                      _DAT_14217f7d8 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                      atexit(FUN_1401b9730);
                      _Init_thread_footer(0x14217f7ec);
                    }
                    uVar5 = DAT_1420f6b08;
                    iVar3 = FUN_1416d9df0(&DAT_14217f7b0,&local_120,DAT_1420f6b08,0);
                    if (iVar3 == 0) {
                      lVar8 = 0;
code_r0x0001401b5045:
                      iVar3 = *(int *)(lVar8 * 0x14 + 0x14217f7c0);
                      if (iVar3 == 2) {
                        local_e0 = 0x124;
                        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_88);
                        }
                        local_88 = 0;
                        local_80 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,0x1420b3960);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_180,uVar5);
                      }
                      else {
                        if (iVar3 != 1) {
                          if (iVar3 == 0) {
                            local_e0 = 0x108;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,&DAT_1420b3900);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_180,uVar5);
                          }
                          goto code_r0x0001401b5120;
                        }
                        local_e0 = 0x10c;
                        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_88);
                        }
                        local_88 = 0;
                        local_80 = 0x500000000;
                        local_b8 = &local_d8;
                        FUN_140002730(&local_2a8,&DAT_1420b3940);
                        ppuVar12 = &local_b8;
                        uVar11 = DAT_1420da3e0/*buffer_read*/;
                        local_b0 = &local_2a8;
                        uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                        FUN_1400019a0(&local_250,uVar5);
                        local_e0 = 0x10d;
                        if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_1e0);
                        }
                        local_1d4 = 0;
                        local_1e0 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_1e0,&local_250,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x10e;
                          DAT_142182d90 = (longlong *)0xc38867;
                          uVar4 = FUN_141693b30(&local_1e0);
                          puVar7 = (undefined8 *)FUN_1416924a0(&local_230,uVar4);
                          FUN_1416a8cb0(local_230);
                          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                            FUN_140001b50(puVar7);
                          }
                          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                          *puVar7 = 0;
                          FUN_1416a8c00(1);
                          switch(local_1d4 & 0xffffff) {
                          case 1:
                            local_1e0 = (double)FUN_1416940c0(&local_1e0);
                            local_1e0 = local_1e0 + dVar1;
                            local_1d4 = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_1e0,&local_1e0);
                            break;
                          case 7:
                            local_1e0 = (double)CONCAT44(local_1e0._4_4_,local_1e0._0_4_ + 1);
                            break;
                          case 10:
                            local_1e0 = (double)((longlong)local_1e0 + 1);
                            break;
                          case 0xd:
                            local_1d4 = 0;
                          case 0:
                            local_1e0 = local_1e0 + dVar1;
                          }
                        }
                        local_e0 = 0x111;
                        if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_150);
                        }
                        local_144 = 0;
                        local_150 = 0.0;
                        while ((iVar3 = FUN_1416d9df0(&local_150,&local_250,DAT_1420f6b08,1),
                               iVar3 != -2 && (iVar3 < 0))) {
                          local_e0 = 0x112;
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_b8 = &local_d8;
                          FUN_140002730(&local_2a8,&DAT_1420b3950);
                          ppuVar12 = &local_b8;
                          uVar11 = DAT_1420da3e0/*buffer_read*/;
                          local_b0 = &local_2a8;
                          uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12
                                               );
                          FUN_1400019a0(&local_1c0,uVar5);
                          local_e0 = 0x113;
                          local_134 = local_1b4;
                          local_138 = uStack_1b8;
                          if ((0x46U >> (local_1b4 & 0x1f) & 1) == 0) {
                            local_140 = local_1c0;
                          }
                          else {
                            FUN_1401b99d0(&local_140,&local_1c0);
                          }
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 4) < iRam000000014217f818) &&
                             (_Init_thread_header(0x14217f818), iRam000000014217f818 == -1)) {
                            _DAT_14217f7fc = 0;
                            _DAT_14217f7f0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                            _DAT_14217f810 = 0x100000000;
                            _DAT_14217f804 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
                            atexit(FUN_1401b97e0);
                            _Init_thread_footer(0x14217f818);
                          }
                          uVar5 = DAT_1420f6b08;
                          iVar3 = FUN_1416d9df0(&DAT_14217f7f0,&local_140,DAT_1420f6b08,0);
                          if (iVar3 == 0) {
                            lVar8 = 0;
code_r0x0001401b5682:
                            iVar3 = *(int *)(lVar8 * 0x14 + 0x14217f800);
                            if (iVar3 != 1) {
                              if (iVar3 == 0) {
                                local_e0 = 0x115;
                                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&local_88);
                                }
                                local_88 = 0;
                                local_80 = 0x500000000;
                                local_b8 = &local_d8;
                                FUN_140002730(&local_2a8,&DAT_1420b3900);
                                ppuVar12 = &local_b8;
                                uVar11 = DAT_1420da3e0/*buffer_read*/;
                                local_b0 = &local_2a8;
                                uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                      ppuVar12);
                                FUN_1400019a0(&local_270,uVar5);
                              }
                              goto code_r0x0001401b574a;
                            }
                            local_e0 = 0x119;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_b8 = &local_d8;
                            FUN_140002730(&local_2a8,0x1420b3960);
                            ppuVar12 = &local_b8;
                            uVar11 = DAT_1420da3e0/*buffer_read*/;
                            local_b0 = &local_2a8;
                            uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,
                                                  ppuVar12);
                            FUN_1400019a0(&local_270,uVar5);
                            if ((local_144 & 0xffffff) == 0) goto code_r0x0001401b584d;
code_r0x0001401b576f:
                            local_e0 = 0x11d;
                            DAT_142182d90 = (longlong *)0xc20000;
                            dVar10 = (double)FUN_1416940c0(&local_150);
                          }
                          else {
                            iVar3 = FUN_1416d9df0(&DAT_14217f804,&local_140,uVar5,0);
                            if (iVar3 == 0) {
                              lVar8 = 1;
                              goto code_r0x0001401b5682;
                            }
code_r0x0001401b574a:
                            if ((local_144 & 0xffffff) != 0) goto code_r0x0001401b576f;
code_r0x0001401b584d:
                            local_e0 = 0x11d;
                            DAT_142182d90 = (longlong *)0xc20000;
                            dVar10 = local_150;
                          }
                          FUN_1416cd4e0(&local_230,(longlong)dVar10,&local_270);
                          if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_140);
                          }
                          switch(local_144 & 0xffffff) {
                          case 1:
                            local_150 = (double)FUN_1416940c0(&local_150);
                            local_150 = local_150 + dVar1;
                            local_144 = 0;
                            break;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_150,&local_150);
                            break;
                          case 7:
                            local_150 = (double)CONCAT44(local_150._4_4_,local_150._0_4_ + 1);
                            break;
                          case 10:
                            local_150 = (double)((longlong)local_150 + 1);
                            break;
                          case 0xd:
                            local_144 = 0;
                          case 0:
                            local_150 = local_150 + dVar1;
                          }
                        }
                        local_e0 = 0x120;
                        FUN_1400019a0(&local_180,&local_230);
                      }
                      if ((local_154 & 0xffffff) == 0) goto code_r0x0001401b5420;
code_r0x0001401b5145:
                      local_e0 = 0x128;
                      DAT_142182d90 = (longlong *)0xc20000;
                      dVar10 = (double)FUN_1416940c0(&local_160);
                    }
                    else {
                      iVar3 = FUN_1416d9df0(&DAT_14217f7c4,&local_120,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 1;
                        goto code_r0x0001401b5045;
                      }
                      iVar3 = FUN_1416d9df0(&DAT_14217f7d8,&local_120,uVar5,0);
                      if (iVar3 == 0) {
                        lVar8 = 2;
                        goto code_r0x0001401b5045;
                      }
code_r0x0001401b5120:
                      if ((local_154 & 0xffffff) != 0) goto code_r0x0001401b5145;
code_r0x0001401b5420:
                      local_e0 = 0x128;
                      DAT_142182d90 = (longlong *)0xc20000;
                      dVar10 = local_160;
                    }
                    FUN_1416cd4e0(&local_240,(longlong)dVar10,&local_180);
                    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_120);
                    }
                    switch(local_154 & 0xffffff) {
                    case 1:
                      local_160 = (double)FUN_1416940c0(&local_160);
                      local_160 = local_160 + dVar1;
                      local_154 = 0;
                      break;
                    default:
                      FUN_140001d70(&DAT_141981e6a,&local_160,&local_160);
                      break;
                    case 7:
                      local_160 = (double)CONCAT44(local_160._4_4_,local_160._0_4_ + 1);
                      break;
                    case 10:
                      local_160 = (double)((longlong)local_160 + 1);
                      break;
                    case 0xd:
                      local_154 = 0;
                    case 0:
                      local_160 = local_160 + dVar1;
                    }
                  }
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 300;
                  if (cVar2 != '\0') {
                    local_e0 = 299;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_240;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 3:
                  local_e0 = 0x12f;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,0x1420b3960);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x131;
                  if (cVar2 != '\0') {
                    local_e0 = 0x130;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                case 4:
                  local_e0 = 0x134;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_b8 = &local_d8;
                  FUN_140002730(&local_2a8,0x1420b3970);
                  ppuVar12 = &local_b8;
                  uVar11 = DAT_1420da3e0/*buffer_read*/;
                  local_b0 = &local_2a8;
                  uVar5 = FUN_1416ab210(local_78,local_90,&local_88,2,DAT_1420da3e0/*buffer_read*/,ppuVar12);
                  FUN_1400019a0(&local_180,uVar5);
                  cVar2 = FUN_1416927d0(&local_210);
                  uVar4 = 0x136;
                  if (cVar2 != '\0') {
                    local_e0 = 0x135;
                    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_88);
                    }
                    local_88 = 0;
                    local_80 = 0x500000000;
                    FUN_1416cea80(local_78,DAT_1420d59e8/*id*/,0x80000000,&local_1f0,uVar11 & 0xffffff00,
                                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
                    FUN_1400019a0(&local_2b8,&local_1f0);
                    local_b8 = &local_2b8;
                    local_b0 = &local_200;
                    local_a8 = &local_180;
                    FUN_1416ab210(local_78,local_90,&local_88,3,DAT_1420da680/*variable_instance_set*/,&local_b8);
                  }
                  break;
                default:
                  local_e0 = 0x138;
                  goto joined_r0x0001401b4c95;
                }
LAB_1401b5ba0:
                local_e0 = uVar4;
joined_r0x0001401b4c95:
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                local_b8 = &local_d8;
                puVar7 = (undefined8 *)
                         FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
                local_114 = *(uint *)((longlong)puVar7 + 0xc);
                local_118 = *(undefined4 *)(puVar7 + 1);
                if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
                  local_120 = (undefined1 *)*puVar7;
                }
                else {
                  FUN_1401b99d0(&local_120,puVar7);
                }
                FUN_140001c50(&local_120,1);
                iVar3 = FUN_1416d9df0(&local_120,&local_2d8,DAT_1420f6b08,1);
                if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_120);
                }
                if (iVar3 < 0) {
                  iVar9 = 0;
                  iVar3 = 0;
                }
                else {
                  local_e0 = 0x13b;
                  iVar9 = 0x135;
                  iVar3 = 0x135;
                }
                if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_c8);
                  iVar3 = iVar9;
                }
                if (iVar3 != 0) break;
                switch(local_1a4 & 0xffffff) {
                case 1:
                  local_1b0 = (double)FUN_1416940c0(&local_1b0);
                  local_1b0 = local_1b0 + dVar1;
                  local_1a4 = 0;
                  break;
                default:
                  FUN_140001d70(&DAT_141981e6a,&local_1b0,&local_1b0);
                  break;
                case 7:
                  local_1b0 = (double)CONCAT44(local_1b0._4_4_,local_1b0._0_4_ + 1);
                  break;
                case 10:
                  local_1b0 = (double)((longlong)local_1b0 + 1);
                  break;
                case 0xd:
                  local_1a4 = 0;
                case 0:
                  local_1b0 = local_1b0 + dVar1;
                }
              }
              cVar2 = FUN_1416abe60(&local_110,&local_78,&local_90);
            } while (cVar2 != '\0');
          }
          FUN_1416ab620(&local_110,&local_78,&local_90);
          param_3 = local_510;
          if (local_100 != 0) {
            thunk_FUN_1416c46f0();
            local_100 = 0;
          }
        }
      }
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_b8 = &local_d8;
      puVar7 = (undefined8 *)FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da470/*buffer_tell*/,&local_b8);
      local_104 = *(uint *)((longlong)puVar7 + 0xc);
      local_108 = *(undefined4 *)(puVar7 + 1);
      if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
        local_110 = (undefined1 *)*puVar7;
      }
      else {
        FUN_1401b99d0(&local_110,puVar7);
      }
      FUN_140001c50(&local_110,1);
      iVar3 = FUN_1416d9df0(&local_110,&local_2d8,DAT_1420f6b08,1);
      if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_110);
      }
      if (-1 < iVar3) {
        local_e0 = 0x141;
        goto joined_r0x0001401aca13;
      }
      local_e0 = 0x144;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_b8 = &local_d8;
      FUN_1416ab210(local_78,local_90,&local_88,1,DAT_1420da370/*buffer_delete*/,&local_b8);
    }
    else {
      local_e0 = 0x17;
    }
  }
joined_r0x0001401aca13:
  if ((0x46U >> (local_2e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a0);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e0);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  if ((0x46U >> (local_244 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_250);
  }
  if ((0x46U >> (local_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_260);
  }
  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_230);
  }
  if ((0x46U >> (local_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_240);
  }
  if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f0);
  }
  if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b0);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_270);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
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
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
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
  if ((0x46U >> (local_514 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_520);
  }
  if ((0x46U >> (local_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_530);
  }
  if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e8);
  }
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_308);
  }
  if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f8);
  }
  if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_408);
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


