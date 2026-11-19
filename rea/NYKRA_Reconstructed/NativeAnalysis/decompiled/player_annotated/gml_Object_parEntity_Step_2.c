// Function: gml_Object_parEntity_Step_2 @ 0x1402d3fb0

/* WARNING: Removing unreachable block (ram,0x0001402ddf91) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parEntity_Step_2(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined8 uVar10;
  double *pdVar11;
  undefined8 uVar12;
  longlong *in_RDX;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double **in_stack_fffffffffffff5e8;
  ulonglong uVar27;
  double **ppdVar28;
  undefined8 **ppuVar29;
  undefined8 **ppuVar30;
  double **in_stack_fffffffffffff5f0;
  ulonglong uVar31;
  undefined8 *local_9f8;
  undefined8 *local_9f0;
  undefined8 *local_9e8;
  undefined8 *local_9e0;
  undefined8 *local_9d8;
  undefined8 *local_9d0;
  undefined8 *local_9c8;
  undefined8 *local_9c0;
  undefined8 *local_9b8;
  undefined8 *local_9b0;
  undefined8 *local_9a8;
  undefined8 *local_9a0;
  undefined8 local_990;
  uint local_984;
  undefined8 local_980;
  uint local_974;
  undefined8 local_970;
  uint local_964;
  undefined8 local_960;
  uint local_954;
  undefined8 local_950;
  uint local_944;
  undefined8 local_940;
  uint local_934;
  undefined8 local_930;
  uint local_924;
  undefined8 local_920;
  uint local_914;
  undefined8 local_910;
  uint local_904;
  undefined8 local_900;
  uint local_8f4;
  undefined8 local_8f0;
  uint local_8e4;
  undefined8 local_8e0;
  uint local_8d4;
  undefined8 local_8d0;
  uint local_8c4;
  undefined8 local_8c0;
  uint local_8b4;
  undefined8 local_8b0;
  uint local_8a4;
  undefined8 local_8a0;
  uint local_894;
  undefined8 local_890;
  uint local_884;
  undefined8 local_880;
  uint local_874;
  undefined8 local_870;
  uint local_864;
  undefined8 local_860;
  uint local_854;
  undefined8 local_850;
  uint local_844;
  undefined8 local_840;
  uint local_834;
  undefined8 *local_830;
  undefined8 *local_828;
  undefined8 *local_820;
  undefined8 local_818;
  uint local_80c;
  undefined8 local_808;
  uint local_7fc;
  undefined8 local_7f8;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7dc;
  undefined8 local_7d8;
  uint local_7cc;
  undefined8 local_7c8;
  uint local_7bc;
  undefined8 local_7b8;
  uint local_7ac;
  undefined8 local_7a8;
  uint local_79c;
  undefined8 local_798;
  uint local_78c;
  undefined8 local_788;
  uint local_77c;
  undefined8 local_778;
  uint local_76c;
  undefined8 local_768;
  uint local_75c;
  undefined8 local_758;
  uint local_74c;
  undefined8 local_748;
  uint local_73c;
  double local_738;
  undefined4 local_730;
  uint local_72c;
  undefined8 local_728;
  uint local_71c;
  undefined8 local_718;
  uint local_70c;
  double local_708;
  uint local_6fc;
  double local_6f8;
  uint local_6ec;
  undefined8 local_6e8;
  undefined8 local_6e0;
  double local_6d8;
  uint local_6cc;
  double local_6c8;
  uint local_6bc;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  uint local_69c;
  undefined8 local_698;
  uint local_68c;
  undefined8 local_688;
  uint local_67c;
  double local_678;
  uint local_66c;
  double local_668;
  uint local_65c;
  undefined8 local_658;
  uint local_64c;
  double local_648;
  uint local_63c;
  double local_638;
  uint local_62c;
  undefined8 local_628;
  undefined8 local_620;
  double *local_618;
  double *pdStack_610;
  double *local_608;
  double *local_600;
  double *local_5f8;
  double *local_5f0;
  double *local_5e8;
  double *local_5e0;
  double *local_5d8;
  double *local_5d0;
  double *local_5c8;
  undefined8 *local_5c0;
  double *local_5b8;
  undefined8 *local_5b0;
  undefined8 *local_5a8;
  undefined8 *local_5a0;
  undefined8 *local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  undefined8 *local_580;
  undefined8 *local_578;
  undefined8 *local_570;
  undefined8 *local_568;
  undefined8 *local_560;
  undefined8 *local_558;
  undefined8 *local_550;
  undefined8 *local_548;
  undefined8 *local_540;
  undefined8 *local_538;
  undefined8 *local_530;
  double local_520;
  undefined4 local_518;
  uint local_514;
  double local_510;
  uint local_504;
  double local_500;
  uint local_4f4;
  undefined8 local_4f0;
  uint local_4e4;
  double local_4e0;
  uint local_4d4;
  longlong *local_4d0;
  double local_4c8;
  uint local_4bc;
  double local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  uint local_49c;
  undefined8 local_498;
  uint local_48c;
  double local_488;
  uint local_47c;
  double local_478;
  uint local_46c;
  double local_468;
  uint local_45c;
  double local_458;
  uint local_44c;
  double local_448;
  uint local_43c;
  double local_438;
  uint local_42c;
  double local_428;
  uint local_41c;
  double local_418;
  uint local_40c;
  double local_408;
  uint local_3fc;
  double local_3f8;
  uint local_3ec;
  double local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  uint local_3cc;
  double local_3c8;
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
  uint local_2ac;
  double local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_230;
  double local_228;
  uint local_21c;
  double local_218;
  undefined4 local_210;
  uint local_20c;
  double local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  char *pcStack_1b0;
  undefined4 local_1a8;
  double local_198;
  uint local_18c;
  double *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  undefined4 local_158;
  uint local_154;
  longlong *local_150;
  double local_148;
  undefined8 uStack_140;
  longlong local_138;
  double local_128;
  undefined8 uStack_120;
  longlong *local_110;
  double local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  local_240 = "gml_Object_parEntity_Step_2";
  local_238 = 0;
  local_248 = DAT_142182d78;
  DAT_142182d78 = (undefined8 **)&local_248;
  local_80c = 0xffffff;
  local_818 = 0;
  local_7fc = 0xffffff;
  local_808 = 0;
  local_7ec = 0xffffff;
  local_7f8 = 0;
  local_7dc = 0xffffff;
  local_7e8 = 0;
  local_7cc = 0xffffff;
  local_7d8 = 0;
  local_7bc = 0xffffff;
  local_7c8 = 0;
  local_7ac = 0xffffff;
  local_7b8 = 0;
  local_79c = 0xffffff;
  local_7a8 = 0;
  local_78c = 0xffffff;
  local_798 = 0;
  local_77c = 0xffffff;
  local_788 = 0;
  local_76c = 0xffffff;
  local_778 = 0;
  local_75c = 0xffffff;
  local_768 = 0;
  local_66c = 0xffffff;
  local_678 = 0.0;
  local_65c = 0xffffff;
  local_668 = 0.0;
  local_6cc = 0xffffff;
  local_6d8 = 0.0;
  local_6bc = 0xffffff;
  local_6c8 = 0.0;
  local_4d4 = 0xffffff;
  local_4e0 = 0.0;
  DAT_142182d90 = param_1;
  local_4d0 = in_RDX;
  local_150 = param_1;
  local_830 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1896f/*var:GLITCH*/);
  local_828 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187d0/*var:cam_shake*/);
  local_820 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187cd/*var:cam_push*/);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187cc/*var:cam_p_dir*/);
  local_844 = 0xffffff;
  local_850 = 0;
  local_834 = 0xffffff;
  local_840 = 0;
  local_1c0._4_4_ = 0xffffff;
  local_1c8 = 0;
  local_6b0 = CONCAT44(0xffffff,(undefined4)local_6b0);
  local_6b8 = 0;
  local_984 = 0xffffff;
  local_990 = 0;
  local_974 = 0xffffff;
  local_980 = 0;
  local_964 = 0xffffff;
  local_970 = 0;
  local_954 = 0xffffff;
  local_960 = 0;
  local_944 = 0xffffff;
  local_950 = 0;
  local_934 = 0xffffff;
  local_940 = 0;
  local_924 = 0xffffff;
  local_930 = 0;
  local_914 = 0xffffff;
  local_920 = 0;
  local_904 = 0xffffff;
  local_910 = 0;
  local_8f4 = 0xffffff;
  local_900 = 0;
  uVar6 = (**(code **)(*local_150 + 8))(local_150,0x18825/*var:collide_object*/);
  cVar2 = FUN_1416927d0(uVar6);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*local_150 + 8))(local_150,0x18af6/*var:motion*/);
    cVar2 = FUN_1416927d0(uVar6);
    if (cVar2 != '\0') {
      local_238 = 2;
      uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e4b/*var:y1*/);
      uVar12 = (**(code **)(*local_150 + 8))(local_150,0x18e26/*var:vsp*/);
      FUN_1416a8cb0(local_150);
      FUN_140003ca0(uVar6,uVar12);
      FUN_1416a8c00(1);
      local_238 = 3;
      uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e4d/*var:y2*/);
      FUN_1416a8cb0(local_150);
      FUN_140003ca0(uVar6,uVar12);
      FUN_1416a8c00(1);
      local_238 = 4;
      uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3b/*var:x1*/);
      uVar12 = (**(code **)(*local_150 + 8))(local_150,0x189cf/*var:hsp*/);
      FUN_1416a8cb0(local_150);
      FUN_140003ca0(uVar6,uVar12);
      FUN_1416a8c00(1);
      local_238 = 5;
      uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3d/*var:x2*/);
      FUN_1416a8cb0(local_150);
      FUN_140003ca0(uVar6,uVar12);
      FUN_1416a8c00(1);
    }
  }
  else {
    local_238 = 1;
    if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1c8);
    }
    local_110 = local_4d0;
    local_f8 = local_150;
    pcStack_1b0 = "gml_Script_COLLIDE";
    local_1a8 = 0;
    local_1b8 = DAT_142182d78;
    DAT_142182d78 = &local_1b8;
    DAT_142182d90 = local_150;
    local_47c = 0xffffff;
    local_488 = 0.0;
    local_46c = 0xffffff;
    local_478 = 0.0;
    local_45c = 0xffffff;
    local_468 = 0.0;
    local_44c = 0xffffff;
    local_458 = 0.0;
    local_43c = 0xffffff;
    local_448 = 0.0;
    local_42c = 0xffffff;
    local_438 = 0.0;
    local_41c = 0xffffff;
    local_428 = 0.0;
    local_40c = 0xffffff;
    local_418 = 0.0;
    local_3fc = 0xffffff;
    local_408 = 0.0;
    local_3ec = 0xffffff;
    local_3f8 = 0.0;
    local_3dc = 0xffffff;
    local_3e8 = 0.0;
    local_3cc = 0xffffff;
    local_3d8 = 0;
    local_3bc = 0xffffff;
    local_3c8 = 0.0;
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
    local_2dc = 0xffffff;
    local_2e8 = 0;
    local_2cc = 0xffffff;
    local_2d8 = 0;
    local_2bc = 0xffffff;
    local_2c8 = 0;
    local_2ac = 0xffffff;
    local_2b8 = 0;
    uStack_4b0 = CONCAT44(0xffffff,(undefined4)uStack_4b0);
    local_4b8 = 0.0;
    uStack_260 = CONCAT44(0xffffff,(undefined4)uStack_260);
    local_268 = 0.0;
    uStack_250 = CONCAT44(0xffffff,(undefined4)uStack_250);
    local_258 = 0.0;
    uStack_2a0 = CONCAT44(0xffffff,(undefined4)uStack_2a0);
    local_2a8 = 0.0;
    local_514 = 0xffffff;
    local_520 = 0.0;
    local_67c = 0xffffff;
    local_688 = 0;
    local_64c = 0xffffff;
    local_658 = 0;
    local_1fc = 0xffffff;
    local_208 = 0.0;
    local_72c = 0xffffff;
    local_738 = 0.0;
    local_20c = 0xffffff;
    local_218 = 0.0;
    local_71c = 0xffffff;
    local_728 = 0;
    local_70c = 0xffffff;
    local_718 = 0;
    local_21c = 0xffffff;
    local_228 = 0.0;
    local_18c = 0xffffff;
    local_198 = 0.0;
    local_69c = 0xffffff;
    local_6a8 = 0;
    local_4bc = 0xffffff;
    local_4c8 = 0.0;
    local_504 = 0xffffff;
    local_510 = 0.0;
    local_4f4 = 0xffffff;
    local_500 = 0.0;
    local_49c = 0xffffff;
    local_4a8 = 0.0;
    local_68c = 0xffffff;
    local_698 = 0;
    local_28c = 0xffffff;
    local_298 = 0;
    local_8e4 = 0xffffff;
    local_8f0 = 0;
    local_48c = 0xffffff;
    local_498 = 0;
    local_8d4 = 0xffffff;
    local_8e0 = 0;
    local_6fc = 0xffffff;
    local_708 = 0.0;
    local_74c = 0xffffff;
    local_758 = 0;
    local_6ec = 0xffffff;
    local_6f8 = 0.0;
    local_73c = 0xffffff;
    local_748 = 0;
    local_8c4 = 0xffffff;
    local_8d0 = 0;
    local_8b4 = 0xffffff;
    local_8c0 = 0;
    local_8a4 = 0xffffff;
    local_8b0 = 0;
    local_894 = 0xffffff;
    local_8a0 = 0;
    local_884 = 0xffffff;
    local_890 = 0;
    local_874 = 0xffffff;
    local_880 = 0;
    local_63c = 0xffffff;
    local_648 = 0.0;
    local_62c = 0xffffff;
    local_638 = 0.0;
    local_864 = 0xffffff;
    local_870 = 0;
    local_854 = 0xffffff;
    local_860 = 0;
    local_168 = local_168 & 0xffffffff;
    local_170 = 0;
    local_178 = local_178 & 0xffffffff;
    local_180 = 0;
    local_1f0 = local_1f0 & 0xffffffff;
    local_1f8 = 0;
    local_1e0 = local_1e0 & 0xffffffff;
    local_1e8 = 0;
    local_280 = local_280 & 0xffffffff;
    local_288 = 0;
    local_270 = local_270 & 0xffffffff;
    local_278 = 0;
    local_620 = local_620 & 0xffffffff;
    local_628 = 0;
    local_6e0 = local_6e0 & 0xffffffff;
    local_6e8 = 0;
    local_1c0._0_4_ = 0;
    local_1c0._4_4_ = 5;
    local_1c8 = 0;
    FUN_1416ab750(DAT_1420dc960/*gml_Script_COLLIDE*/);
    local_1a8 = 3;
    puVar7 = (undefined8 *)(**(code **)(*local_f8 + 0x10))(local_f8,0x189c3/*var:hit_obj*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    uVar6 = (**(code **)(*local_f8 + 8))(local_f8,0x18afe/*var:mover*/);
    uStack_140 = (ulonglong)(uint)uStack_140;
    local_148 = 0.0;
    iVar3 = FUN_1416d9df0(uVar6,&local_148,DAT_1420f6b08,0);
    uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (iVar3 == 0) {
      local_1a8 = 5;
      if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_4b8);
      }
      uStack_4b0 = uStack_4b0 & 0xffffffff;
      local_4b8 = -4.0;
      if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_268);
      }
      uStack_260 = uStack_260 & 0xffffffff;
      local_268 = 0.0;
      if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_258);
      }
      uStack_250 = uStack_250 & 0xffffffff;
      local_258 = 0.0;
      if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_2a8);
      }
      uStack_2a0 = uStack_2a0 & 0xffffffff;
      local_2a8 = 0.0;
      if ((0x46U >> (local_514 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_520);
      }
      local_514 = 0;
      local_520 = 0.0;
      if ((0x46U >> (local_67c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_688);
      }
      local_67c = 0;
      local_688 = 0;
      if ((0x46U >> (local_64c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_658);
      }
      local_64c = 0;
      local_658 = 0;
      iVar3 = FUN_1416f82f0(local_f8,local_110,0x2b);
      if (0 < iVar3) {
        local_1a8 = 6;
        uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
        local_108 = 43.0;
        iVar3 = FUN_1416ab810(&local_148,&local_f8,&local_110,&local_108);
        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_108);
        }
        uVar12 = _DAT_1419841c0;
        uVar6 = DAT_141982e78;
        dVar15 = _DAT_141982c40;
        dVar18 = _DAT_141981e30;
        if (0 < iVar3) {
          uVar4 = SUB84(_DAT_141982c40,0);
          uVar22 = (undefined4)DAT_141985628;
          uVar25 = (undefined4)DAT_141983d90;
          uVar20 = (undefined4)_DAT_141983800;
          uVar21 = (undefined4)_DAT_141981d18;
          uVar26 = (undefined4)DAT_141986528;
          do {
            local_1a8 = 7;
            uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3b/*var:x1*/);
            in_stack_fffffffffffff5f0 =
                 (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
            in_stack_fffffffffffff5e8 =
                 (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
            FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,in_stack_fffffffffffff5e8,
                          in_stack_fffffffffffff5f0);
            iVar3 = FUN_1416d9df0(uVar8,&local_208,DAT_1420f6b08,1);
            if (-1 < iVar3) {
              uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3d/*var:x2*/);
              pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e33/*var:width*/);
              uVar10 = (**(code **)(*local_f8 + 8))(local_f8,0x18c5f/*var:sec*/);
              in_stack_fffffffffffff5f0 =
                   (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
              in_stack_fffffffffffff5e8 =
                   (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
              FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,in_stack_fffffffffffff5e8,
                            in_stack_fffffffffffff5f0);
              uStack_120 = pdVar9[1];
              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                local_128 = *pdVar9;
              }
              else {
                FUN_1402ec660(&local_128,pdVar9);
              }
              FUN_140001fe0(&local_128,uVar10);
              uStack_100 = (double)CONCAT44(local_1fc,local_200);
              if ((0x46U >> (local_1fc & 0x1f) & 1) == 0) {
                local_108 = local_208;
              }
              else {
                FUN_1402ec660(&local_108,&local_208);
              }
              FUN_140003ca0(&local_108,&local_128);
              iVar3 = FUN_1416d9df0(uVar8,&local_108,DAT_1420f6b08,1);
              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_108);
              }
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_128);
              }
              if (iVar3 != -2 && iVar3 < 1) {
                uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18782/*var:bhh*/);
                uVar10 = (**(code **)(*local_110 + 8))(local_110,0x18e26/*var:vsp*/);
                uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                FUN_1416cea80(local_110,DAT_1420d58f8/*y*/,0x80000000,&local_738,uVar27,uVar31);
                in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
                in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
                FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,in_stack_fffffffffffff5e8
                              ,in_stack_fffffffffffff5f0);
                local_154 = local_72c;
                local_158 = local_730;
                if ((0x46U >> (local_72c & 0x1f) & 1) == 0) {
                  local_160 = local_738;
                }
                else {
                  FUN_1402ec660(&local_160,&local_738);
                }
                FUN_140003ca0(&local_160,uVar8);
                uStack_120 = (double)CONCAT44(local_154,local_158);
                if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                  local_128 = local_160;
                }
                else {
                  FUN_1402ec660(&local_128,&local_160);
                }
                FUN_140003ca0(&local_128,uVar10);
                uStack_100 = uStack_120;
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                  local_108 = local_128;
                }
                else {
                  FUN_1402ec660(&local_108,&local_128);
                }
                FUN_140001c50(&local_108,0x10);
                iVar3 = FUN_1416d9df0(&local_108,&local_218,DAT_1420f6b08,1);
                if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_108);
                }
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_128);
                }
                if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_160);
                }
                if (-1 < iVar3) {
                  uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                  uVar10 = (**(code **)(*local_f8 + 8))(local_f8,0x189a2/*var:height*/);
                  in_stack_fffffffffffff5f0 =
                       (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff5e8 =
                       (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                  FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                  uStack_120 = (double)CONCAT44(local_20c,local_210);
                  if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
                    local_128 = local_218;
                  }
                  else {
                    FUN_1402ec660(&local_128,&local_218);
                  }
                  FUN_140003ca0(&local_128,uVar10);
                  uStack_100 = uStack_120;
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                    local_108 = local_128;
                  }
                  else {
                    FUN_1402ec660(&local_108,&local_128);
                  }
                  FUN_140001c50(&local_108,2);
                  iVar3 = FUN_1416d9df0(uVar8,&local_108,DAT_1420f6b08,1);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_128);
                  }
                  if (iVar3 != -2 && iVar3 < 1) {
                    local_1a8 = 9;
                    pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x189cf/*var:hsp*/);
                    uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x189a2/*var:height*/);
                    local_4e4 = 0;
                    local_4f0 = 0x4050000000000000/*64 (obj:oPlayer)*/;
                    FUN_140003e00(&local_4f0,uVar8);
                    FUN_140004520(&local_1d8,&local_4f0,DAT_141983260);
                    local_154 = 0;
                    local_160 = 1.0;
                    FUN_140003ca0(&local_160,&local_1d8);
                    uStack_120 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      local_128 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&local_128,pdVar9);
                    }
                    FUN_140004620(&local_128,&local_160);
                    FUN_140009980(&local_108,&local_128,_DAT_141985238);
                    FUN_1400019a0(&local_728,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_160);
                    }
                    if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_1d8);
                    }
                    if ((0x46U >> (local_4e4 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_4f0);
                    }
                    local_188 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e26/*var:vsp*/);
                    local_4e4 = 0;
                    local_4f0 = 0x4050000000000000/*64 (obj:oPlayer)*/;
                    FUN_140003e00(&local_4f0,uVar8);
                    FUN_140004520(&local_1d8,&local_4f0,dVar15);
                    pdVar9 = local_188;
                    local_154 = 0;
                    local_160 = 1.0;
                    FUN_140003ca0(&local_160,&local_1d8);
                    uStack_120 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      local_128 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&local_128,pdVar9);
                    }
                    FUN_140004620(&local_128,&local_160);
                    FUN_140009980(&local_108,&local_128,_DAT_141985238);
                    FUN_1400019a0(&local_718,&local_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_128);
                    }
                    if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_160);
                    }
                    if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_1d8);
                    }
                    if ((0x46U >> (local_4e4 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_4f0);
                    }
                    local_1a8 = 10;
                    uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                    uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                    uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                    FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,uVar27,uVar31);
                    iVar3 = FUN_1416d9df0(uVar8,&local_218,DAT_1420f6b08,1);
                    if ((iVar3 != -2) && (iVar3 < 0)) {
                      (**(code **)(*local_f8 + 8))(local_f8,0x189a2/*var:height*/);
                      local_188 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e26/*var:vsp*/);
                      pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,uVar27,uVar31);
                      uStack_100 = pdVar9[1];
                      if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                        local_108 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&local_108,pdVar9);
                      }
                      FUN_140003ca0(&local_108,local_188);
                      iVar3 = FUN_1416d9df0(&local_108,&local_218,DAT_1420f6b08,1);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if (-1 < iVar3) {
                        local_1a8 = 0xc;
                        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_170);
                        }
                        local_170 = 0;
                        local_168 = 0x500000000;
                        if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_180);
                        }
                        local_180 = 0;
                        local_178 = 0x500000000;
                        uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3b/*var:x1*/);
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,uVar31);
                        FUN_1400019a0(&local_488,uVar8);
                        local_618 = &local_488;
                        FUN_1400019a0(&local_478,&local_228);
                        pdStack_610 = &local_478;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar8 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0/*mean*/);
                        pdVar11 = (double *)
                                  FUN_1416ab210(local_f8,local_110,&local_180,2,uVar8,&local_618);
                        uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                        uStack_120 = pdVar11[1];
                        if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                          local_128 = *pdVar11;
                        }
                        else {
                          FUN_1402ec660(&local_128,pdVar11);
                        }
                        FUN_140003e00(&local_128,&local_208);
                        FUN_140004520(&local_108,&local_128,uVar6);
                        FUN_1400019a0(&local_468,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_128);
                        }
                        local_608 = &local_468;
                        in_stack_fffffffffffff5f0 = &local_608;
                        ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                        uVar8 = FUN_1416ab210(local_f8,local_110,&local_170,1,ppdVar28,
                                              in_stack_fffffffffffff5f0);
                        FUN_1400019a0(&local_198,uVar8);
                        do {
joined_r0x0001402d5bda:
                          if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_170);
                          }
                          local_170 = 0;
                          local_168 = 0x500000000;
                          if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_180);
                          }
                          local_180 = 0;
                          local_178 = 0x500000000;
                          uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3d/*var:x2*/);
                          uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                          uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                          FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,uVar31)
                          ;
                          FUN_1400019a0(&local_488,uVar8);
                          local_618 = &local_488;
                          FUN_1400019a0(&local_478,&local_228);
                          pdStack_610 = &local_478;
                          uVar27 = uVar27 & 0xffffffffffffff00;
                          FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                        uVar31 & 0xffffffffffffff00);
                          uVar8 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0/*mean*/);
                          pdVar11 = (double *)
                                    FUN_1416ab210(local_f8,local_110,&local_180,2,uVar8,&local_618);
                          uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          uStack_120 = pdVar11[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                            local_128 = *pdVar11;
                          }
                          else {
                            FUN_1402ec660(&local_128,pdVar11);
                          }
                          FUN_140003e00(&local_128,&local_208);
                          FUN_140004520(&local_108,&local_128,uVar6);
                          FUN_1400019a0(&local_468,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_128);
                          }
                          local_608 = &local_468;
                          in_stack_fffffffffffff5f0 = &local_608;
                          ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                          uVar10 = FUN_1416ab210(local_f8,local_110,&local_170,1,ppdVar28,
                                                 in_stack_fffffffffffff5f0);
                          uVar8 = DAT_1420f6b08;
                          iVar3 = FUN_1416d9df0(&local_198,uVar10,DAT_1420f6b08,1);
                          if ((iVar3 == -2) || (0 < iVar3)) {
                            for (iVar3 = 0x20; 0 < iVar3; iVar3 = iVar3 + -1) {
                              local_1a8 = 0x13;
                              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_170);
                              }
                              local_170 = 0;
                              local_168 = 0x500000000;
                              if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_180);
                              }
                              local_180 = 0;
                              local_178 = 0x500000000;
                              if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1f8);
                              }
                              local_1f8 = 0;
                              local_1f0 = 0x500000000;
                              if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1e8);
                              }
                              local_1e8 = 0;
                              local_1e0 = 0x500000000;
                              if ((0x46U >> (local_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_288);
                              }
                              local_288 = 0;
                              local_280 = 0x500000000;
                              if ((0x46U >> (local_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_278);
                              }
                              local_278 = 0;
                              local_270 = 0x500000000;
                              pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,
                                            uVar31);
                              dVar14 = (double)FUN_1416cdc60(uVar22,_DAT_141982ef8);
                              if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_488);
                              }
                              local_47c = 0;
                              local_618 = &local_488;
                              local_488 = dVar14;
                              FUN_140002730(&local_478,&DAT_14217ee40);
                              pdStack_610 = &local_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_468);
                              }
                              local_45c = 0;
                              local_608 = &local_468;
                              local_468 = dVar14;
                              FUN_140002730(&local_458,&DAT_14217ee40);
                              local_600 = &local_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_f8,DAT_1420d5a18/*depth*/,0x80000000,&local_6a8,uVar27,
                                            uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d5a18/*depth*/,0x80000000,&local_4c8,uVar27,
                                            uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&local_108,&local_6a8,1);
                              FUN_1400019a0(&local_448,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f8 = &local_448;
                              uStack_100._4_4_ = local_4bc;
                              if ((0x46U >> (local_4bc & 0x1f) & 1) == 0) {
                                local_108 = local_4c8;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_4c8);
                              }
                              FUN_140001c50(&local_108,1);
                              FUN_1400019a0(&local_438,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f0 = &local_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_428);
                              }
                              local_428 = dVar14 + dVar15;
                              local_41c = 0;
                              local_5e8 = &local_428;
                              dVar14 = (double)FUN_1416cdc60(0,_DAT_1419842b0);
                              if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_418);
                              }
                              local_40c = 0;
                              local_5e0 = &local_418;
                              local_418 = dVar14;
                              FUN_140002730(&local_408,&DAT_1420b2748);
                              local_5d8 = &local_408;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_180,2,uVar10,
                                                    &local_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = local_21c;
                              if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
                                local_108 = local_228;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_228);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3f8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5d0 = &local_3f8;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_1f8,2,uVar10,
                                                    &local_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar9);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3e8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5c8 = &local_3e8;
                              uVar8 = FUN_1416cd660(&local_1e8,2,&local_5f8);
                              FUN_1400019a0(&local_3d8,uVar8);
                              local_5c0 = &local_3d8;
                              FUN_140002730(&local_3c8,&DAT_1420b2738);
                              local_5b8 = &local_3c8;
                              uVar10 = CONCAT44(uVar23,DAT_1420d9ff0/*sqr*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_288,1,uVar10,
                                                    &local_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&local_108,uVar8,_DAT_141986538);
                              FUN_1400019a0(&local_3b8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5b0 = &local_3b8;
                              in_stack_fffffffffffff5f0 = &local_5e0;
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_278,2,
                                                    CONCAT44(uVar23,DAT_1420da0c0/*mean*/),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&local_3a8,uVar8);
                              local_5a8 = &local_3a8;
                              FUN_140002730(&local_398,&DAT_14217ee40);
                              local_5a0 = &local_398;
                              FUN_140002730(&local_388,&DAT_14217ee40);
                              local_598 = &local_388;
                              FUN_140002730(&local_378,&DAT_1420b2728);
                              local_590 = &local_378;
                              FUN_140002730(&local_368,&DAT_14217ee40);
                              local_588 = &local_368;
                              FUN_140002730(&local_358,&DAT_1420b2728);
                              local_580 = &local_358;
                              FUN_140002730(&local_348,&DAT_1420b2758);
                              local_578 = &local_348;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_338);
                              }
                              local_32c = 0;
                              local_570 = &local_338;
                              local_338 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_328);
                              }
                              local_31c = 0;
                              local_568 = &local_328;
                              local_328 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_318);
                              }
                              local_30c = 0;
                              local_560 = &local_318;
                              local_318 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_308);
                              }
                              local_2fc = 0;
                              local_558 = &local_308;
                              local_308 = uVar8;
                              FUN_140002730(&local_2f8,&DAT_14217ee40);
                              local_550 = &local_2f8;
                              FUN_140002730(&local_2e8,&DAT_1420b2768);
                              local_548 = &local_2e8;
                              ppdVar28 = &local_5d0;
                              FUN_140106850(local_f8,local_110,&local_170,0x12,ppdVar28);
                            }
                            local_1a8 = 0x17;
                            local_188 = (double *)
                                        (**(code **)(*local_110 + 0x10))(local_110,0x18e26/*var:vsp*/);
                            uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                            local_108 = 0.9;
                            FUN_140001fe0(local_188,&local_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_108);
                            }
                            local_1a8 = 0x18;
                            if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_170);
                            }
                            local_170 = 0;
                            local_168 = 0x500000000;
                            if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_180);
                            }
                            local_180 = 0;
                            local_178 = 0x500000000;
                            FUN_140002730(&local_488,&DAT_1420b2778);
                            local_618 = &local_488;
                            FUN_140002730(&local_478,&DAT_1420b2788);
                            pdStack_610 = &local_478;
                            FUN_140002730(&local_468,&DAT_1420b2798);
                            local_608 = &local_468;
                            FUN_140002730(&local_458,&DAT_1420b27a8);
                            local_600 = &local_458;
                            FUN_140002730(&local_448,&DAT_1420b27b8);
                            local_5f8 = &local_448;
                            uVar8 = FUN_1416cd660(&local_180,5,&local_618);
                            FUN_1400019a0(&local_438,uVar8);
                            local_5f0 = &local_438;
                            FUN_140002730(&local_428,&DAT_1420b27c8);
                            local_5e8 = &local_428;
                            FUN_140002730(&local_418,&DAT_14217ee40);
                            local_5e0 = &local_418;
                            dVar14 = (double)FUN_1416cdc60((int)DAT_1419864f0,DAT_1419864f8);
                            if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_408);
                            }
                            local_408 = dVar14 * _DAT_141983970;
                            local_3fc = 0;
                            local_5d8 = &local_408;
                            param_2 = DAT_141986508;
                            dVar14 = (double)FUN_1416cdc60((int)DAT_141986500,DAT_141986508);
                            if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3f8);
                            }
                            local_3f8 = dVar14 / DAT_1419843c8;
                            local_3ec = 0;
                            local_5d0 = &local_3f8;
                            dVar14 = (double)FUN_1416cdc30(uVar4);
                            if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3e8);
                            }
                            local_3e8 = dVar14 + _DAT_141986510;
                            local_3dc = 0;
                            local_5c8 = &local_3e8;
                            in_stack_fffffffffffff5e8 = &local_5f0;
                            FUN_1400d2410(local_f8,local_110,&local_170,6,in_stack_fffffffffffff5e8)
                            ;
                            goto LAB_1402d8b79;
                          }
                          local_1a8 = 0xc;
                          uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                          local_108 = 0.0;
                          iVar3 = FUN_1416d9df0(&local_198,&local_108,uVar8,1);
                          if (-1 < iVar3) {
                            if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1f8);
                            }
                            uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            local_1f8 = 0;
                            local_1f0 = 0x500000000;
                            uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                            FUN_1400019a0(&local_458,uVar8);
                            local_600 = &local_458;
                            in_stack_fffffffffffff5f0 = &local_600;
                            ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4c0/*array_height_2d*/);
                            uVar8 = FUN_1416ab210(local_f8,local_110,&local_1f8,1,ppdVar28,
                                                  in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&local_198,uVar8,DAT_1420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              local_1a8 = 0xe;
                              if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1e8);
                              }
                              uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                              local_1e8 = 0;
                              local_1e0 = 0x500000000;
                              uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                              FUN_1400019a0(&local_448,uVar8);
                              local_5f8 = &local_448;
                              local_5f0 = &local_198;
                              FUN_140002730(&local_428,&DAT_14217ee40);
                              local_5e8 = &local_428;
                              DAT_142182d90 = (longlong *)0x480000;
                              uVar10 = CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                              pdVar11 = (double *)
                                        FUN_1416ab210(local_f8,local_110,&local_1e8,3,uVar10,
                                                      &local_5f8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar11);
                              }
                              FUN_140003ca0(&local_108,&local_718);
                              dVar14 = local_198;
                              if ((local_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&local_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,0,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_1a8 = 0xf;
                              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_170);
                              }
                              local_170 = 0;
                              local_168 = 0x500000000;
                              FUN_1400019a0(&local_488,uVar8);
                              local_618 = &local_488;
                              pdStack_610 = &local_198;
                              FUN_140002730(&local_468,&DAT_1420b2728);
                              local_608 = &local_468;
                              in_stack_fffffffffffff5f0 = &local_618;
                              ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                              pdVar11 = (double *)
                                        FUN_1416ab210(local_f8,local_110,&local_170,3,ppdVar28,
                                                      in_stack_fffffffffffff5f0);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar11);
                              }
                              FUN_140003ca0(&local_108,&local_718);
                              dVar14 = local_198;
                              if ((local_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&local_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,1,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                            }
                          }
                          switch(local_18c & 0xffffff) {
                          case 1:
                            local_198 = (double)FUN_1416940c0(&local_198);
                            local_198 = local_198 + dVar18;
                            local_18c = 0;
                            goto joined_r0x0001402d5bda;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_198,&local_198);
                            break;
                          case 7:
                            local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
                            goto joined_r0x0001402d5bda;
                          case 10:
                            goto code_r0x0001402d6038;
                          case 0xd:
                            local_18c = 0;
                          case 0:
                            local_198 = local_198 + dVar18;
                            goto joined_r0x0001402d5bda;
                          }
                        } while( true );
                      }
                    }
                    pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                    in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
                    FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    iVar3 = FUN_1416d9df0(pdVar9,&local_218,DAT_1420f6b08,1);
                    if (0 < iVar3) {
                      local_188 = (double *)(**(code **)(*local_110 + 0x10))(local_110,0x18e26/*var:vsp*/);
                      pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_100 = pdVar9[1];
                      if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                        local_108 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&local_108,pdVar9);
                      }
                      FUN_140003ca0(&local_108,local_188);
                      iVar3 = FUN_1416d9df0(&local_108,&local_218,DAT_1420f6b08,1);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if (iVar3 != -2 && iVar3 < 1) {
                        local_1a8 = 0x1c;
                        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_170);
                        }
                        local_170 = 0;
                        local_168 = 0x500000000;
                        if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_180);
                        }
                        local_180 = 0;
                        local_178 = 0x500000000;
                        uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3b/*var:x1*/);
                        uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                        FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,uVar31);
                        FUN_1400019a0(&local_488,uVar8);
                        local_618 = &local_488;
                        FUN_1400019a0(&local_478,&local_228);
                        pdStack_610 = &local_478;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar8 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0/*mean*/);
                        pdVar11 = (double *)
                                  FUN_1416ab210(local_f8,local_110,&local_180,2,uVar8,&local_618);
                        uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                        uStack_120 = pdVar11[1];
                        if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                          local_128 = *pdVar11;
                        }
                        else {
                          FUN_1402ec660(&local_128,pdVar11);
                        }
                        FUN_140003e00(&local_128,&local_208);
                        FUN_140004520(&local_108,&local_128,uVar6);
                        FUN_1400019a0(&local_468,&local_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_128);
                        }
                        local_608 = &local_468;
                        in_stack_fffffffffffff5f0 = &local_608;
                        ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                        uVar8 = FUN_1416ab210(local_f8,local_110,&local_170,1,ppdVar28,
                                              in_stack_fffffffffffff5f0);
                        FUN_1400019a0(&local_198,uVar8);
                        do {
joined_r0x0001402d6faa:
                          if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_170);
                          }
                          local_170 = 0;
                          local_168 = 0x500000000;
                          if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_180);
                          }
                          local_180 = 0;
                          local_178 = 0x500000000;
                          uVar8 = (**(code **)(*local_110 + 8))(local_110,0x18e3d/*var:x2*/);
                          uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                          uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                          FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,uVar31)
                          ;
                          FUN_1400019a0(&local_488,uVar8);
                          local_618 = &local_488;
                          FUN_1400019a0(&local_478,&local_228);
                          pdStack_610 = &local_478;
                          uVar27 = uVar27 & 0xffffffffffffff00;
                          FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                        uVar31 & 0xffffffffffffff00);
                          uVar8 = CONCAT44((int)(uVar27 >> 0x20),DAT_1420da0c0/*mean*/);
                          pdVar11 = (double *)
                                    FUN_1416ab210(local_f8,local_110,&local_180,2,uVar8,&local_618);
                          uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          uStack_120 = pdVar11[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                            local_128 = *pdVar11;
                          }
                          else {
                            FUN_1402ec660(&local_128,pdVar11);
                          }
                          FUN_140003e00(&local_128,&local_208);
                          FUN_140004520(&local_108,&local_128,uVar6);
                          FUN_1400019a0(&local_468,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_128);
                          }
                          local_608 = &local_468;
                          in_stack_fffffffffffff5f0 = &local_608;
                          ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                          uVar10 = FUN_1416ab210(local_f8,local_110,&local_170,1,ppdVar28,
                                                 in_stack_fffffffffffff5f0);
                          uVar8 = DAT_1420f6b08;
                          iVar3 = FUN_1416d9df0(&local_198,uVar10,DAT_1420f6b08,1);
                          if ((iVar3 == -2) || (0 < iVar3)) {
                            for (iVar3 = 0x20; 0 < iVar3; iVar3 = iVar3 + -1) {
                              local_1a8 = 0x23;
                              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_170);
                              }
                              local_170 = 0;
                              local_168 = 0x500000000;
                              if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_180);
                              }
                              local_180 = 0;
                              local_178 = 0x500000000;
                              if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1f8);
                              }
                              local_1f8 = 0;
                              local_1f0 = 0x500000000;
                              if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1e8);
                              }
                              local_1e8 = 0;
                              local_1e0 = 0x500000000;
                              if ((0x46U >> (local_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_288);
                              }
                              local_288 = 0;
                              local_280 = 0x500000000;
                              if ((0x46U >> (local_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_278);
                              }
                              local_278 = 0;
                              local_270 = 0x500000000;
                              pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,
                                            uVar31);
                              dVar14 = (double)FUN_1416cdc60(uVar22,_DAT_141982ef8);
                              if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_488);
                              }
                              local_47c = 0;
                              local_618 = &local_488;
                              local_488 = dVar14;
                              FUN_140002730(&local_478,&DAT_14217ee40);
                              pdStack_610 = &local_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_468);
                              }
                              local_45c = 0;
                              local_608 = &local_468;
                              local_468 = dVar14;
                              FUN_140002730(&local_458,&DAT_14217ee40);
                              local_600 = &local_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_f8,DAT_1420d5a18/*depth*/,0x80000000,&local_6a8,uVar27,
                                            uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d5a18/*depth*/,0x80000000,&local_4c8,uVar27,
                                            uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&local_108,&local_6a8,1);
                              FUN_1400019a0(&local_448,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f8 = &local_448;
                              uStack_100._4_4_ = local_4bc;
                              if ((0x46U >> (local_4bc & 0x1f) & 1) == 0) {
                                local_108 = local_4c8;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_4c8);
                              }
                              FUN_140001c50(&local_108,1);
                              FUN_1400019a0(&local_438,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f0 = &local_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_428);
                              }
                              local_428 = dVar14 + dVar15;
                              local_41c = 0;
                              local_5e8 = &local_428;
                              dVar14 = (double)FUN_1416cdc60((int)DAT_141986518,DAT_141986520);
                              if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_418);
                              }
                              local_40c = 0;
                              local_5e0 = &local_418;
                              local_418 = dVar14;
                              FUN_140002730(&local_408,&DAT_1420b2748);
                              local_5d8 = &local_408;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_180,2,uVar10,
                                                    &local_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = local_21c;
                              if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
                                local_108 = local_228;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_228);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3f8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5d0 = &local_3f8;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_1f8,2,uVar10,
                                                    &local_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar9);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3e8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5c8 = &local_3e8;
                              uVar8 = FUN_1416cd660(&local_1e8,2,&local_5f8);
                              FUN_1400019a0(&local_3d8,uVar8);
                              local_5c0 = &local_3d8;
                              FUN_140002730(&local_3c8,&DAT_1420b2738);
                              local_5b8 = &local_3c8;
                              uVar10 = CONCAT44(uVar23,DAT_1420d9ff0/*sqr*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_288,1,uVar10,
                                                    &local_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&local_108,uVar8,DAT_141986530);
                              FUN_1400019a0(&local_3b8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5b0 = &local_3b8;
                              in_stack_fffffffffffff5f0 = &local_5e0;
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_278,2,
                                                    CONCAT44(uVar23,DAT_1420da0c0/*mean*/),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&local_3a8,uVar8);
                              local_5a8 = &local_3a8;
                              FUN_140002730(&local_398,&DAT_14217ee40);
                              local_5a0 = &local_398;
                              FUN_140002730(&local_388,&DAT_14217ee40);
                              local_598 = &local_388;
                              FUN_140002730(&local_378,&DAT_1420b2728);
                              local_590 = &local_378;
                              FUN_140002730(&local_368,&DAT_14217ee40);
                              local_588 = &local_368;
                              FUN_140002730(&local_358,&DAT_1420b2728);
                              local_580 = &local_358;
                              FUN_140002730(&local_348,&DAT_1420b2758);
                              local_578 = &local_348;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_338);
                              }
                              local_32c = 0;
                              local_570 = &local_338;
                              local_338 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_328);
                              }
                              local_31c = 0;
                              local_568 = &local_328;
                              local_328 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_318);
                              }
                              local_30c = 0;
                              local_560 = &local_318;
                              local_318 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_308);
                              }
                              local_2fc = 0;
                              local_558 = &local_308;
                              local_308 = uVar8;
                              FUN_140002730(&local_2f8,&DAT_14217ee40);
                              local_550 = &local_2f8;
                              FUN_140002730(&local_2e8,&DAT_1420b2768);
                              local_548 = &local_2e8;
                              ppdVar28 = &local_5d0;
                              FUN_140106850(local_f8,local_110,&local_170,0x12,ppdVar28);
                            }
                            for (iVar3 = 0x10; 0 < iVar3; iVar3 = iVar3 + -1) {
                              local_1a8 = 0x28;
                              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_170);
                              }
                              local_170 = 0;
                              local_168 = 0x500000000;
                              if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_180);
                              }
                              local_180 = 0;
                              local_178 = 0x500000000;
                              if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1f8);
                              }
                              local_1f8 = 0;
                              local_1f0 = 0x500000000;
                              if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1e8);
                              }
                              local_1e8 = 0;
                              local_1e0 = 0x500000000;
                              if ((0x46U >> (local_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_288);
                              }
                              local_288 = 0;
                              local_280 = 0x500000000;
                              if ((0x46U >> (local_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_278);
                              }
                              local_278 = 0;
                              local_270 = 0x500000000;
                              if ((0x46U >> (local_620._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_628);
                              }
                              local_628 = 0;
                              local_620 = 0x500000000;
                              pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d58e8/*x*/,0x80000000,&local_228,uVar27,
                                            uVar31);
                              dVar14 = (double)FUN_1416cdc60((int)DAT_141983d70,uVar6);
                              if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_488);
                              }
                              local_47c = 0;
                              local_618 = &local_488;
                              local_488 = dVar14;
                              FUN_140002730(&local_478,&DAT_14217ee40);
                              pdStack_610 = &local_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (local_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_468);
                              }
                              local_45c = 0;
                              local_608 = &local_468;
                              local_468 = dVar14;
                              FUN_140002730(&local_458,&DAT_14217ee40);
                              local_600 = &local_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_f8,DAT_1420d5a18/*depth*/,0x80000000,&local_6a8,uVar27,
                                            uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(local_110,DAT_1420d5a18/*depth*/,0x80000000,&local_4c8,uVar27,
                                            uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&local_108,&local_6a8,1);
                              FUN_1400019a0(&local_448,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f8 = &local_448;
                              uStack_100._4_4_ = local_4bc;
                              if ((0x46U >> (local_4bc & 0x1f) & 1) == 0) {
                                local_108 = local_4c8;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_4c8);
                              }
                              FUN_140001c50(&local_108,1);
                              FUN_1400019a0(&local_438,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5f0 = &local_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (local_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_428);
                              }
                              local_428 = dVar14 + dVar15;
                              local_41c = 0;
                              local_5e8 = &local_428;
                              dVar14 = (double)FUN_1416cdc60((int)DAT_141986518,DAT_141986520);
                              if ((0x46U >> (local_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_418);
                              }
                              local_40c = 0;
                              local_5e0 = &local_418;
                              local_418 = dVar14;
                              FUN_140002730(&local_408,&DAT_1420b2748);
                              local_5d8 = &local_408;
                              FUN_140002730(&local_3f8,&DAT_1420b2748);
                              local_5d0 = &local_3f8;
                              dVar14 = (double)FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_3e8);
                              }
                              local_3dc = 0;
                              local_5c8 = &local_3e8;
                              local_3e8 = dVar14;
                              FUN_140002730(&local_3d8,&DAT_1420b2728);
                              local_5c0 = &local_3d8;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_180,2,uVar10,
                                                    &local_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = local_21c;
                              if ((0x46U >> (local_21c & 0x1f) & 1) == 0) {
                                local_108 = local_228;
                              }
                              else {
                                FUN_1402ec660(&local_108,&local_228);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3c8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5b8 = &local_3c8;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_1f8,2,uVar10,
                                                    &local_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar9);
                              }
                              FUN_140003ca0(&local_108,uVar8);
                              FUN_1400019a0(&local_3b8,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_5b0 = &local_3b8;
                              uVar8 = FUN_1416cd660(&local_1e8,2,&local_5f8);
                              FUN_1400019a0(&local_3a8,uVar8);
                              local_5a8 = &local_3a8;
                              FUN_140002730(&local_398,&DAT_1420b2738);
                              local_5a0 = &local_398;
                              uVar10 = CONCAT44(uVar23,DAT_1420d9ff0/*sqr*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_288,1,uVar10,
                                                    &local_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&local_108,uVar8,DAT_141985538);
                              FUN_1400019a0(&local_388,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_598 = &local_388;
                              uVar10 = CONCAT44(uVar23,DAT_1420da0c0/*mean*/);
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_278,3,uVar10,
                                                    &local_5e0);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_1400019a0(&local_378,uVar8);
                              local_590 = &local_378;
                              FUN_140002730(&local_368,&DAT_14217ee40);
                              local_588 = &local_368;
                              FUN_140002730(&local_358,&DAT_14217ee40);
                              local_580 = &local_358;
                              FUN_140002730(&local_348,&DAT_1420b2728);
                              local_578 = &local_348;
                              FUN_140002730(&local_338,&DAT_14217ee40);
                              local_570 = &local_338;
                              FUN_140002730(&local_328,&DAT_1420b2728);
                              local_568 = &local_328;
                              FUN_140002730(&local_318,&DAT_1420b2758);
                              local_560 = &local_318;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (local_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_308);
                              }
                              local_2fc = 0;
                              local_558 = &local_308;
                              local_308 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_2f8);
                              }
                              local_2ec = 0;
                              local_550 = &local_2f8;
                              local_2f8 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_2e8);
                              }
                              local_2dc = 0;
                              local_548 = &local_2e8;
                              in_stack_fffffffffffff5f0 = &local_5c8;
                              local_2e8 = uVar8;
                              uVar8 = FUN_1416ab210(local_f8,local_110,&local_628,2,
                                                    CONCAT44(uVar23,DAT_1420da0c0/*mean*/),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&local_2d8,uVar8);
                              local_540 = &local_2d8;
                              FUN_140002730(&local_2c8,&DAT_14217ee40);
                              local_538 = &local_2c8;
                              FUN_140002730(&local_2b8,&DAT_1420b2768);
                              local_530 = &local_2b8;
                              ppdVar28 = &local_5b8;
                              FUN_140106850(local_f8,local_110,&local_170,0x12,ppdVar28);
                            }
                            local_1a8 = 0x2c;
                            if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_170);
                            }
                            local_170 = 0;
                            local_168 = 0x500000000;
                            if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_180);
                            }
                            local_180 = 0;
                            local_178 = 0x500000000;
                            FUN_140002730(&local_488,&DAT_1420b2778);
                            local_618 = &local_488;
                            FUN_140002730(&local_478,&DAT_1420b2788);
                            pdStack_610 = &local_478;
                            FUN_140002730(&local_468,&DAT_1420b2798);
                            local_608 = &local_468;
                            FUN_140002730(&local_458,&DAT_1420b27a8);
                            local_600 = &local_458;
                            FUN_140002730(&local_448,&DAT_1420b27b8);
                            local_5f8 = &local_448;
                            uVar8 = FUN_1416cd660(&local_180,5,&local_618);
                            FUN_1400019a0(&local_438,uVar8);
                            local_5f0 = &local_438;
                            FUN_140002730(&local_428,&DAT_1420b27c8);
                            local_5e8 = &local_428;
                            FUN_140002730(&local_418,&DAT_14217ee40);
                            local_5e0 = &local_418;
                            dVar14 = (double)FUN_1416cdc60((int)DAT_1419864f0,DAT_1419864f8);
                            if ((0x46U >> (local_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_408);
                            }
                            local_408 = dVar14 / _DAT_141983970;
                            local_3fc = 0;
                            local_5d8 = &local_408;
                            param_2 = DAT_141986508;
                            dVar14 = (double)FUN_1416cdc60((int)DAT_141986500,DAT_141986508);
                            if ((0x46U >> (local_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3f8);
                            }
                            local_3f8 = dVar14 / DAT_1419843c8;
                            local_3ec = 0;
                            local_5d0 = &local_3f8;
                            dVar14 = (double)FUN_1416cdc30(uVar4);
                            if ((0x46U >> (local_3dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_3e8);
                            }
                            local_3e8 = dVar14 + _DAT_141986510;
                            local_3dc = 0;
                            local_5c8 = &local_3e8;
                            in_stack_fffffffffffff5e8 = &local_5f0;
                            FUN_1400d2410(local_f8,local_110,&local_170,6,in_stack_fffffffffffff5e8)
                            ;
                            break;
                          }
                          local_1a8 = 0x1c;
                          uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                          local_108 = 0.0;
                          iVar3 = FUN_1416d9df0(&local_198,&local_108,uVar8,1);
                          if (-1 < iVar3) {
                            if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1f8);
                            }
                            uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            local_1f8 = 0;
                            local_1f0 = 0x500000000;
                            uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                            FUN_1400019a0(&local_458,uVar8);
                            local_600 = &local_458;
                            in_stack_fffffffffffff5f0 = &local_600;
                            ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da4c0/*array_height_2d*/);
                            uVar8 = FUN_1416ab210(local_f8,local_110,&local_1f8,1,ppdVar28,
                                                  in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&local_198,uVar8,DAT_1420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              local_1a8 = 0x1e;
                              if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1e8);
                              }
                              uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                              local_1e8 = 0;
                              local_1e0 = 0x500000000;
                              uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                              FUN_1400019a0(&local_448,uVar8);
                              local_5f8 = &local_448;
                              local_5f0 = &local_198;
                              FUN_140002730(&local_428,&DAT_14217ee40);
                              local_5e8 = &local_428;
                              DAT_142182d90 = (longlong *)0x480000;
                              uVar10 = CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                              pdVar11 = (double *)
                                        FUN_1416ab210(local_f8,local_110,&local_1e8,3,uVar10,
                                                      &local_5f8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar11);
                              }
                              FUN_140003ca0(&local_108,&local_718);
                              dVar14 = local_198;
                              if ((local_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&local_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,0,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                              local_1a8 = 0x1f;
                              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_170);
                              }
                              local_170 = 0;
                              local_168 = 0x500000000;
                              FUN_1400019a0(&local_488,uVar8);
                              local_618 = &local_488;
                              pdStack_610 = &local_198;
                              FUN_140002730(&local_468,&DAT_1420b2728);
                              local_608 = &local_468;
                              in_stack_fffffffffffff5f0 = &local_618;
                              ppdVar28 = (double **)CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                              pdVar11 = (double *)
                                        FUN_1416ab210(local_f8,local_110,&local_170,3,ppdVar28,
                                                      in_stack_fffffffffffff5f0);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                local_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&local_108,pdVar11);
                              }
                              FUN_140003ca0(&local_108,&local_718);
                              dVar14 = local_198;
                              if ((local_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&local_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,1,&local_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_108);
                              }
                            }
                          }
                          switch(local_18c & 0xffffff) {
                          case 1:
                            local_198 = (double)FUN_1416940c0(&local_198);
                            local_198 = local_198 + dVar18;
                            local_18c = 0;
                            goto joined_r0x0001402d6faa;
                          default:
                            FUN_140001d70(&DAT_141981e6a,&local_198,&local_198);
                            break;
                          case 7:
                            local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
                            goto joined_r0x0001402d6faa;
                          case 10:
                            goto code_r0x0001402d7408;
                          case 0xd:
                            local_18c = 0;
                          case 0:
                            local_198 = local_198 + dVar18;
                            goto joined_r0x0001402d6faa;
                          }
                        } while( true );
                      }
                    }
LAB_1402d8b79:
                    in_stack_fffffffffffff5f0 =
                         (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 =
                         (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                    FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    uStack_100 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      local_108 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&local_108,pdVar9);
                    }
                    FUN_140003ca0(&local_108,local_188);
                    iVar3 = FUN_1416d9df0(&local_108,&local_218,DAT_1420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_108);
                    }
                    if (-1 < iVar3) {
                      local_1a8 = 0x30;
                      uVar8 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf/*var:hsp*/);
                      (**(code **)(*local_110 + 0x10))(local_110,0x18e26/*var:vsp*/);
                      (**(code **)(*local_110 + 8))(local_110,0x18e4d/*var:y2*/);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      local_108 = 0.875;
                      FUN_140001fe0(uVar8,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      local_1a8 = 0x31;
                      uVar8 = (**(code **)(*local_110 + 0x10))(local_110,0x18e26/*var:vsp*/);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      local_108 = 0.85;
                      FUN_140001fe0(uVar8,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      local_1a8 = 0x32;
                      if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_170);
                      }
                      local_170 = 0;
                      local_168 = 0x500000000;
                      uVar8 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf/*var:hsp*/);
                      pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e3b/*var:x1*/);
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                    (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      uVar23 = (undefined4)(uVar27 >> 0x20);
                      local_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      local_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&local_160,pdVar9);
                      }
                      FUN_140003ca0(&local_160,uVar8);
                      uStack_120 = (double)CONCAT44(local_154,local_158);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_128 = local_160;
                      }
                      else {
                        FUN_1402ec660(&local_128,&local_160);
                      }
                      FUN_140003e00(&local_128,&local_208);
                      FUN_140004520(&local_108,&local_128,uVar6);
                      FUN_1400019a0(&local_488,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_128);
                      }
                      if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_160);
                      }
                      local_618 = &local_488;
                      ppdVar28 = &local_618;
                      uVar27 = CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                      uVar8 = FUN_1416ab210(local_f8,local_110,&local_170,1,uVar27,ppdVar28);
                      FUN_1400019a0(&local_510,uVar8);
                      if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_180);
                      }
                      local_180 = 0;
                      local_178 = 0x500000000;
                      uVar8 = (**(code **)(*local_110 + 0x10))(local_110,0x189cf/*var:hsp*/);
                      pdVar9 = (double *)(**(code **)(*local_110 + 8))(local_110,0x18e3d/*var:x2*/);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,
                                    (ulonglong)ppdVar28 & 0xffffffffffffff00);
                      uVar23 = (undefined4)(uVar27 >> 0x20);
                      local_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      local_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&local_160,pdVar9);
                      }
                      FUN_140003ca0(&local_160,uVar8);
                      uStack_120 = (double)CONCAT44(local_154,local_158);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_128 = local_160;
                      }
                      else {
                        FUN_1402ec660(&local_128,&local_160);
                      }
                      FUN_140003e00(&local_128,&local_208);
                      FUN_140004520(&local_108,&local_128,uVar6);
                      FUN_1400019a0(&local_478,&local_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_128);
                      }
                      if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_160);
                      }
                      pdStack_610 = &local_478;
                      in_stack_fffffffffffff5f0 = &pdStack_610;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,DAT_1420da4b0/*floor*/);
                      uVar8 = FUN_1416ab210(local_f8,local_110,&local_180,1,
                                            in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      FUN_1400019a0(&local_500,uVar8);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      local_108 = 0.0;
                      uVar23 = (undefined4)DAT_1420f6b08;
                      uVar24 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                      iVar3 = FUN_1416d9df0(&local_510,&local_108,DAT_1420f6b08,1);
                      if (-1 < iVar3) {
                        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_170);
                        }
                        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        local_170 = 0;
                        local_168 = 0x500000000;
                        uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                        FUN_1400019a0(&local_488,uVar8);
                        local_618 = &local_488;
                        in_stack_fffffffffffff5f0 = &local_618;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,DAT_1420da4c0/*array_height_2d*/);
                        uVar8 = FUN_1416ab210(local_f8,local_110,&local_170,1,
                                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        uVar23 = (undefined4)DAT_1420f6b08;
                        uVar24 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                        iVar3 = FUN_1416d9df0(&local_510,uVar8,DAT_1420f6b08,1);
                        if ((iVar3 != -2) && (iVar3 < 0)) {
                          local_1a8 = 0x34;
                          if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_180);
                          }
                          uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                          local_180 = 0;
                          local_178 = 0x500000000;
                          uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                          FUN_1400019a0(&local_478,uVar8);
                          pdStack_610 = &local_478;
                          local_608 = &local_510;
                          FUN_140002730(&local_458,&DAT_14217ee40);
                          local_600 = &local_458;
                          DAT_142182d90 = (longlong *)0x480000;
                          uVar10 = CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                          pdVar9 = (double *)
                                   FUN_1416ab210(local_f8,local_110,&local_180,3,uVar10,&pdStack_610
                                                );
                          uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            local_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&local_108,pdVar9);
                          }
                          FUN_140003ca0(&local_108,&local_728);
                          dVar14 = local_510;
                          if ((local_504 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&local_510);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,0,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          local_1a8 = 0x35;
                          if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_170);
                          }
                          local_170 = 0;
                          local_168 = 0x500000000;
                          FUN_1400019a0(&local_488,uVar8);
                          local_618 = &local_488;
                          pdStack_610 = &local_510;
                          FUN_140002730(&local_468,&DAT_1420b2728);
                          local_608 = &local_468;
                          in_stack_fffffffffffff5f0 = &local_618;
                          in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                          pdVar9 = (double *)
                                   FUN_1416ab210(local_f8,local_110,&local_170,3,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            local_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&local_108,pdVar9);
                          }
                          FUN_140003ca0(&local_108,&local_728);
                          dVar14 = local_510;
                          if ((local_504 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&local_510);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,1,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          uVar23 = (undefined4)DAT_1420f6b08;
                          uVar24 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
                        }
                      }
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      local_108 = 0.0;
                      iVar3 = FUN_1416d9df0(&local_500,&local_108,CONCAT44(uVar24,uVar23),1);
                      if (-1 < iVar3) {
                        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_170);
                        }
                        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        local_170 = 0;
                        local_168 = 0x500000000;
                        uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                        FUN_1400019a0(&local_488,uVar8);
                        local_618 = &local_488;
                        in_stack_fffffffffffff5f0 = &local_618;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,DAT_1420da4c0/*array_height_2d*/);
                        uVar8 = FUN_1416ab210(local_f8,local_110,&local_170,1,
                                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        iVar3 = FUN_1416d9df0(&local_500,uVar8,DAT_1420f6b08,1);
                        if ((iVar3 != -2) && (iVar3 < 0)) {
                          local_1a8 = 0x38;
                          if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_180);
                          }
                          uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                          local_180 = 0;
                          local_178 = 0x500000000;
                          uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18bcb/*var:point*/);
                          FUN_1400019a0(&local_478,uVar8);
                          pdStack_610 = &local_478;
                          local_608 = &local_500;
                          FUN_140002730(&local_458,&DAT_14217ee40);
                          local_600 = &local_458;
                          uVar10 = CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                          pdVar9 = (double *)
                                   FUN_1416ab210(local_f8,local_110,&local_180,3,uVar10,&pdStack_610
                                                );
                          uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            local_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&local_108,pdVar9);
                          }
                          FUN_140003e00(&local_108,&local_728);
                          dVar14 = local_500;
                          if ((local_4f4 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&local_500);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,0,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                          local_1a8 = 0x39;
                          if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_170);
                          }
                          local_170 = 0;
                          local_168 = 0x500000000;
                          FUN_1400019a0(&local_488,uVar8);
                          local_618 = &local_488;
                          pdStack_610 = &local_500;
                          FUN_140002730(&local_468,&DAT_1420b2728);
                          local_608 = &local_468;
                          in_stack_fffffffffffff5f0 = &local_618;
                          in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,DAT_1420da240/*array_get_2D*/);
                          pdVar9 = (double *)
                                   FUN_1416ab210(local_f8,local_110,&local_170,3,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            local_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&local_108,pdVar9);
                          }
                          FUN_140003e00(&local_108,&local_728);
                          dVar14 = local_500;
                          if ((local_4f4 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&local_500);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,1,&local_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_108);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            cVar2 = FUN_1416abe60(&local_148,&local_f8,&local_110);
          } while (cVar2 != '\0');
        }
        FUN_1416ab620(&local_148,&local_f8,&local_110);
        if (local_138 != 0) {
          thunk_FUN_1416c46f0();
          local_138 = 0;
        }
      }
      local_1a8 = 0x3f;
      if ((0x46U >> (local_49c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_4a8);
      }
      uVar20 = _DAT_141981f80;
      uVar6 = _DAT_141981ea8;
      dVar18 = _DAT_141981e30;
      local_49c = 0;
      local_4a8 = 0.0;
      while( true ) {
        ppdVar28 = &local_618;
        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_170);
        }
        local_170 = 0;
        local_168 = 0x500000000;
        local_108 = 0.0;
        uStack_100 = 0.0;
        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
        FUN_1416d0010(0x4f,0x18826/*var:collision_list*/,0x80000000,&local_108,uVar27,
                      (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar27 >> 0x20);
        FUN_1400019a0(&local_488,&local_108);
        uVar27 = CONCAT44(uVar4,DAT_1420da4d0/*array_length_1d*/);
        in_stack_fffffffffffff5f0 = ppdVar28;
        local_618 = &local_488;
        uVar12 = FUN_1416ab210(local_f8,local_110,&local_170,1,uVar27,ppdVar28);
        iVar3 = FUN_1416d9df0(&local_4a8,uVar12,DAT_1420f6b08,1);
        uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_1a8 = 0x40;
        local_128 = 0.0;
        uStack_120 = 0.0;
        uVar4 = FUN_141693b30(&local_4a8);
        in_stack_fffffffffffff5f0 =
             (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
        in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
        FUN_1416d0010(0x4f,0x18826/*var:collision_list*/,uVar4,&local_128,in_stack_fffffffffffff5e8,
                      in_stack_fffffffffffff5f0);
        FUN_1400019a0(&local_4b8,&local_128);
        dVar15 = local_4b8;
        if ((uStack_4b0 & 0xffffff00000000) != 0) {
          dVar15 = (double)FUN_1416940c0(&local_4b8);
        }
        cVar2 = FUN_1416f8280(local_f8,local_110,(longlong)dVar15);
        if (cVar2 != '\0') {
          local_1a8 = 0x41;
          in_stack_fffffffffffff5f0 =
               (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
          in_stack_fffffffffffff5e8 =
               (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
          FUN_1416cea80(local_f8,DAT_1420d59e8/*id*/,0x80000000,&local_698,in_stack_fffffffffffff5e8,
                        in_stack_fffffffffffff5f0);
          iVar3 = FUN_1416d9df0(&local_4b8,&local_698,DAT_1420f6b08,0);
          if (iVar3 != 0) {
            FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
            uStack_140 = uStack_140 & 0xffffffff;
            local_148 = 65.0;
            iVar3 = FUN_1416d9df0(&local_298,&local_148,DAT_1420f6b08,0);
            if (iVar3 != 0) {
              local_1a8 = 0x42;
              if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_170);
              }
              uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
              local_170 = 0;
              local_168 = 0x500000000;
              FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
              FUN_1400019a0(&local_488,&local_298);
              local_618 = &local_488;
              FUN_140002730(&local_478,&DAT_1420b27d8);
              pdStack_610 = &local_478;
              in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
              uVar12 = FUN_1416ab210(local_f8,local_110,&local_170,2,in_stack_fffffffffffff5e8,
                                     ppdVar28);
              uStack_140 = uStack_140 & 0xffffffff;
              local_148 = 1.0;
              iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,0);
              in_stack_fffffffffffff5f0 = ppdVar28;
              if (iVar3 == 0) {
                local_1a8 = 0x44;
                in_stack_fffffffffffff5f0 = (double **)((ulonglong)ppdVar28 & 0xffffffffffffff00);
                in_stack_fffffffffffff5e8 =
                     (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                FUN_1416cfeb0(&local_4b8,0x18ccd/*var:solidtoothers*/,0x80000000,&local_8f0,in_stack_fffffffffffff5e8,
                              in_stack_fffffffffffff5f0);
                uStack_140 = uStack_140 & 0xffffffff;
                local_148 = 1.0;
                iVar3 = FUN_1416d9df0(&local_8f0,&local_148,DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                  uStack_140 = uStack_140 & 0xffffffff;
                  local_148 = 64.0;
                  iVar3 = FUN_1416d9df0(&local_298,&local_148,DAT_1420f6b08,0);
                  if (iVar3 == 0) {
LAB_1402d9e87:
                    uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18bae/*var:player_solid*/);
                    uStack_140 = uStack_140 & 0xffffffff;
                    local_148 = 1.0;
                    iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,0);
                    if (iVar3 != 0) goto LAB_1402d9ed6;
LAB_1402da073:
                    in_stack_fffffffffffff5f0 =
                         (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 =
                         (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                    FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    uStack_140 = uStack_140 & 0xffffffff;
                    local_148 = 64.0;
                    iVar3 = FUN_1416d9df0(&local_498,&local_148,DAT_1420f6b08,0);
                    if (iVar3 == 0) {
LAB_1402da230:
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cfeb0(&local_4b8,0x18bae/*var:player_solid*/,0x80000000,&local_8e0,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      local_148 = 1.0;
                      iVar3 = FUN_1416d9df0(&local_8e0,&local_148,DAT_1420f6b08,0);
                      if (iVar3 != 0) goto LAB_1402da295;
LAB_1402da462:
                      if ((0x46U >> (local_270._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_278);
                      }
                      local_278 = 0;
                      local_270 = 0x500000000;
                      if ((0x46U >> (local_620._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_628);
                      }
                      local_628 = 0;
                      local_620 = 0x500000000;
                      if ((0x46U >> (local_6e0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_6e8);
                      }
                      local_6e8 = 0;
                      local_6e0 = 0x500000000;
                      local_188 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x189cf/*var:hsp*/);
                      local_230 = (**(code **)(*local_f8 + 8))(local_f8,0x18e26/*var:vsp*/);
                      uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18d7b/*var:tbwh*/);
                      uVar8 = (**(code **)(*local_f8 + 8))(local_f8,0x18d7a/*var:tbhh*/);
                      uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,uVar27,uVar31);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,uVar27,uVar31);
                      FUN_1416cfc30(&local_4b8,DAT_1420d58e8/*x*/,0x80000000,&local_708);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_4b8,0x189cf/*var:hsp*/,0x80000000,&local_758,uVar27,uVar31);
                      FUN_1416cfc30(&local_4b8,DAT_1420d58f8/*y*/,0x80000000,&local_6f8);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_4b8,0x18e26/*var:vsp*/,0x80000000,&local_748,uVar27,uVar31);
                      uStack_140._4_4_ = local_1fc;
                      if ((0x46U >> (local_1fc & 0x1f) & 1) == 0) {
                        local_148 = local_208;
                      }
                      else {
                        FUN_1402ec660(&local_148,&local_208);
                      }
                      FUN_140003ca0(&local_148,local_188);
                      FUN_1400019a0(&local_3e8,&local_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_5c8 = &local_3e8;
                      uStack_140._4_4_ = local_20c;
                      if ((0x46U >> (local_20c & 0x1f) & 1) == 0) {
                        local_148 = local_218;
                      }
                      else {
                        FUN_1402ec660(&local_148,&local_218);
                      }
                      FUN_140003ca0(&local_148,local_230);
                      FUN_1400019a0(&local_3d8,&local_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_5c0 = &local_3d8;
                      uStack_140._4_4_ = local_6fc;
                      if ((0x46U >> (local_6fc & 0x1f) & 1) == 0) {
                        local_148 = local_708;
                      }
                      else {
                        FUN_1402ec660(&local_148,&local_708);
                      }
                      FUN_140003ca0(&local_148,&local_758);
                      FUN_1400019a0(&local_3c8,&local_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_5b8 = &local_3c8;
                      uStack_140._4_4_ = local_6ec;
                      if ((0x46U >> (local_6ec & 0x1f) & 1) == 0) {
                        local_148 = local_6f8;
                      }
                      else {
                        FUN_1402ec660(&local_148,&local_6f8);
                      }
                      FUN_140003ca0(&local_148,&local_748);
                      FUN_1400019a0(&local_3b8,&local_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      local_5b0 = &local_3b8;
                      FUN_1400019a0(&local_3a8,uVar12);
                      local_5a8 = &local_3a8;
                      FUN_1400019a0(&local_398,uVar8);
                      local_5a0 = &local_398;
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_4b8,0x18d7b/*var:tbwh*/,0x80000000,&local_8d0,uVar27,uVar31);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&local_4b8,0x18d7a/*var:tbhh*/,0x80000000,&local_8c0,uVar27,
                                    uVar31 & 0xffffffffffffff00);
                      uVar4 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&local_388,&local_8d0);
                      local_598 = &local_388;
                      FUN_1400019a0(&local_378,&local_8c0);
                      local_590 = &local_378;
                      uVar12 = FUN_1416cd900(&local_6e8,2,&local_598);
                      pdVar9 = (double *)FUN_1416cd900(&local_628,2,&local_5a8);
                      local_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      local_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&local_160,pdVar9);
                      }
                      FUN_140003ca0(&local_160,uVar12);
                      uStack_140 = CONCAT44(local_154,local_158);
                      if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                        local_148 = local_160;
                      }
                      else {
                        FUN_1402ec660(&local_148,&local_160);
                      }
                      FUN_140001c50(&local_148,0x50);
                      in_stack_fffffffffffff5f0 = &local_5c8;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da150/*point_distance*/);
                      uVar12 = FUN_1416ab210(local_f8,local_110,&local_278,4,
                                             in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_148);
                      }
                      if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_160);
                      }
                      uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
                      if (iVar3 != -2 && iVar3 < 1) {
                        local_1a8 = 0x4a;
                        uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x18e3b/*var:x1*/,0x80000000,&local_8b0,uVar27,uVar31);
                        FUN_1400019a0(&local_268,&local_8b0);
                        local_1a8 = 0x4b;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x18e4b/*var:y1*/,0x80000000,&local_8a0,uVar27,uVar31);
                        FUN_1400019a0(&local_258,&local_8a0);
                        local_1a8 = 0x4c;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x18e3d/*var:x2*/,0x80000000,&local_890,uVar27,uVar31);
                        FUN_1400019a0(&local_2a8,&local_890);
                        local_1a8 = 0x4d;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x18e4d/*var:y2*/,0x80000000,&local_880,uVar27,uVar31);
                        FUN_1400019a0(&local_520,&local_880);
                        local_1a8 = 0x4e;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x18e26/*var:vsp*/,0x80000000,&local_748,uVar27,uVar31);
                        FUN_1400019a0(&local_688,&local_748);
                        local_1a8 = 0x4f;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&local_4b8,0x189cf/*var:hsp*/,0x80000000,&local_758,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar21 = (undefined4)(uVar27 >> 0x20);
                        FUN_1400019a0(&local_658,&local_758);
                        if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_170);
                        }
                        local_170 = 0;
                        local_168 = 0x500000000;
                        FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                        FUN_1400019a0(&local_488,&local_298);
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar21,DAT_1420da4e0/*object_get_parent*/);
                        in_stack_fffffffffffff5f0 = &local_618;
                        local_618 = &local_488;
                        uVar12 = FUN_1416ab210(local_f8,local_110,&local_170,1,
                                               in_stack_fffffffffffff5e8,&local_618);
                        uStack_140 = uStack_140 & 0xffffffff;
                        local_148 = 51.0;
                        iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,0);
                        if (iVar3 != 0) {
                          in_stack_fffffffffffff5f0 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                          in_stack_fffffffffffff5e8 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                          FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,
                                        in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                          iVar3 = FUN_1416d9df0(&local_208,&local_268,DAT_1420f6b08,1);
                          if (0 < iVar3) {
                            in_stack_fffffffffffff5f0 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                            in_stack_fffffffffffff5e8 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                            FUN_1416cea80(local_f8,DAT_1420d58e8/*x*/,0x80000000,&local_208,
                                          in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&local_208,&local_2a8,DAT_1420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              in_stack_fffffffffffff5f0 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                              in_stack_fffffffffffff5e8 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                              FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                            in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                              iVar3 = FUN_1416d9df0(&local_218,&local_258,DAT_1420f6b08,1);
                              if (0 < iVar3) {
                                in_stack_fffffffffffff5f0 =
                                     (double **)
                                     ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                                in_stack_fffffffffffff5e8 =
                                     (double **)
                                     ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                                FUN_1416cea80(local_f8,DAT_1420d58f8/*y*/,0x80000000,&local_218,
                                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                                iVar3 = FUN_1416d9df0(&local_218,&local_520,DAT_1420f6b08,1);
                                if ((iVar3 != -2) && (iVar3 < 0)) {
                                  local_1a8 = 0x52;
                                  local_230 = (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf/*var:hsp*/);
                                  local_188 = (double *)
                                              (**(code **)(*local_f8 + 8))(local_f8,0x18e3a/*var:X*/);
                                  pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e49/*var:Y*/);
                                  uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00
                                  ;
                                  uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00
                                  ;
                                  FUN_1416cfeb0(&local_4b8,0x18e3a/*var:X*/,0x80000000,&local_648,uVar27,
                                                uVar31);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&local_4b8,0x18e49/*var:Y*/,0x80000000,&local_638,uVar27,
                                                uVar31);
                                  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                                    dVar15 = *pdVar9;
                                    if ((*(uint *)((longlong)local_188 + 0xc) & 0xffffff) == 0)
                                    goto LAB_1402daefe;
LAB_1402daee6:
                                    dVar14 = (double)FUN_1416940c0();
                                  }
                                  else {
                                    dVar15 = (double)FUN_1416940c0(pdVar9);
                                    if ((*(uint *)((longlong)local_188 + 0xc) & 0xffffff) != 0)
                                    goto LAB_1402daee6;
LAB_1402daefe:
                                    dVar14 = *local_188;
                                  }
                                  dVar16 = local_638;
                                  if ((local_62c & 0xffffff) != 0) {
                                    dVar16 = (double)FUN_1416940c0(&local_638);
                                  }
                                  dVar17 = local_648;
                                  if ((local_63c & 0xffffff) != 0) {
                                    dVar17 = (double)FUN_1416940c0(&local_648);
                                  }
                                  uVar19 = (ulonglong)(uint)(float)dVar14;
                                  uVar12 = FUN_1416cdb80((float)dVar17,CONCAT44(uVar4,(float)dVar16)
                                                         ,uVar19,(float)dVar15);
                                  uVar4 = (undefined4)(uVar19 >> 0x20);
                                  fVar13 = (float)FUN_1416cd800(uVar20,uVar12);
                                  FUN_140003f30(local_230,(double)fVar13);
                                  local_1a8 = 0x53;
                                  local_230 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26/*var:vsp*/);
                                  local_188 = (double *)
                                              (**(code **)(*local_f8 + 8))(local_f8,0x18e3a/*var:X*/);
                                  pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e49/*var:Y*/);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&local_4b8,0x18e3a/*var:X*/,0x80000000,&local_648,uVar27,
                                                uVar31);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&local_4b8,0x18e49/*var:Y*/,0x80000000,&local_638,uVar27,
                                                uVar31);
                                  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                                    dVar15 = *pdVar9;
                                    if ((*(uint *)((longlong)local_188 + 0xc) & 0xffffff) == 0)
                                    goto LAB_1402db085;
LAB_1402db06d:
                                    dVar14 = (double)FUN_1416940c0();
                                  }
                                  else {
                                    dVar15 = (double)FUN_1416940c0(pdVar9);
                                    if ((*(uint *)((longlong)local_188 + 0xc) & 0xffffff) != 0)
                                    goto LAB_1402db06d;
LAB_1402db085:
                                    dVar14 = *local_188;
                                  }
                                  dVar16 = local_638;
                                  if ((local_62c & 0xffffff) != 0) {
                                    dVar16 = (double)FUN_1416940c0(&local_638);
                                  }
                                  dVar17 = local_648;
                                  if ((local_63c & 0xffffff) != 0) {
                                    dVar17 = (double)FUN_1416940c0(&local_648);
                                  }
                                  uVar12 = FUN_1416cdb80((float)dVar17,(float)dVar16,
                                                         CONCAT44(uVar4,(float)dVar14),(float)dVar15
                                                        );
                                  fVar13 = (float)FUN_1416cd880(uVar20,uVar12);
                                  FUN_140003f30(local_230,(double)fVar13);
                                  in_stack_fffffffffffff5f0 =
                                       (double **)(uVar31 & 0xffffffffffffff00);
                                  in_stack_fffffffffffff5e8 =
                                       (double **)(uVar27 & 0xffffffffffffff00);
                                  FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                                in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0)
                                  ;
                                  uStack_140 = uStack_140 & 0xffffffff;
                                  local_148 = 64.0;
                                  iVar3 = FUN_1416d9df0(&local_498,&local_148,DAT_1420f6b08,0);
                                  if (iVar3 == 0) {
                                    local_1a8 = 0x55;
                                    if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&local_170);
                                    }
                                    local_170 = 0;
                                    local_168 = 0x500000000;
                                    if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&local_180);
                                    }
                                    local_180 = 0;
                                    local_178 = 0x500000000;
                                    uVar31 = (ulonglong)in_stack_fffffffffffff5f0 &
                                             0xffffffffffffff00;
                                    uVar27 = (ulonglong)in_stack_fffffffffffff5e8 &
                                             0xffffffffffffff00;
                                    FUN_1416cfeb0(&local_4b8,0x18e3a/*var:X*/,0x80000000,&local_648,uVar27,
                                                  uVar31);
                                    in_stack_fffffffffffff5f0 =
                                         (double **)(uVar31 & 0xffffffffffffff00);
                                    FUN_1416cfeb0(&local_4b8,0x18e49/*var:Y*/,0x80000000,&local_638,
                                                  uVar27 & 0xffffffffffffff00,
                                                  in_stack_fffffffffffff5f0);
                                    FUN_140002730(&local_488,&DAT_1420b27f8);
                                    local_618 = &local_488;
                                    FUN_140002730(&local_478,&DAT_1420b2808);
                                    pdStack_610 = &local_478;
                                    FUN_140002730(&local_468,&DAT_1420b2818);
                                    local_608 = &local_468;
                                    FUN_140002730(&local_458,&DAT_1420b2828);
                                    local_600 = &local_458;
                                    FUN_140002730(&local_448,&DAT_1420b2728);
                                    local_5f8 = &local_448;
                                    FUN_1400019a0(&local_438,&local_648);
                                    local_5f0 = &local_438;
                                    FUN_1400019a0(&local_428,&local_638);
                                    local_5e8 = &local_428;
                                    uVar12 = FUN_1416cd660(&local_180,4,&local_618);
                                    FUN_1400019a0(&local_418,uVar12);
                                    local_5e0 = &local_418;
                                    in_stack_fffffffffffff5e8 = &local_5f8;
                                    FUN_1400e28e0(local_f8,local_110,&local_170,4,
                                                  in_stack_fffffffffffff5e8);
                                  }
                                }
                              }
                            }
                          }
                        }
                        uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4d/*var:y2*/);
                        uStack_140._0_4_ = (undefined4)uStack_250;
                        uStack_140._4_4_ = uStack_250._4_4_;
                        if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) == 0) {
                          local_148 = local_258;
                        }
                        else {
                          FUN_1402ec660(&local_148,&local_258);
                        }
                        FUN_140003f30(&local_148,uVar6);
                        iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                        if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_148);
                        }
                        if (0 < iVar3) {
                          uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4b/*var:y1*/);
                          FUN_140003ba0(&local_148,&local_520,uVar6);
                          iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                          if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_148);
                          }
                          if (iVar3 != -2 && iVar3 < 0) {
                            pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e3d/*var:x2*/);
                            local_188 = (double *)(**(code **)(*local_f8 + 0x10))(local_f8,0x189cf/*var:hsp*/);
                            uStack_140._4_4_ = uStack_260._4_4_;
                            uStack_140._0_4_ = (undefined4)uStack_260;
                            if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) == 0) {
                              local_148 = local_268;
                            }
                            else {
                              FUN_1402ec660(&local_148,&local_268);
                            }
                            FUN_140003ca0(&local_148,&local_658);
                            local_154 = *(uint *)((longlong)pdVar9 + 0xc);
                            local_158 = *(undefined4 *)(pdVar9 + 1);
                            if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                              local_160 = *pdVar9;
                            }
                            else {
                              FUN_1402ec660(&local_160,pdVar9);
                            }
                            FUN_140003ca0(&local_160,local_188);
                            uVar4 = FUN_1416d9df0(&local_160,&local_148,DAT_1420f6b08,1);
                            local_188 = (double *)CONCAT44(local_188._4_4_,uVar4);
                            if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_160);
                            }
                            if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            if (-1 < (int)local_188) {
                              local_188 = (double *)
                                          (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf/*var:hsp*/);
                              pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e3b/*var:x1*/);
                              uStack_140._4_4_ = uStack_2a0._4_4_;
                              uStack_140._0_4_ = (undefined4)uStack_2a0;
                              if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) == 0) {
                                local_148 = local_2a8;
                              }
                              else {
                                FUN_1402ec660(&local_148,&local_2a8);
                              }
                              FUN_140003ca0(&local_148,&local_658);
                              local_154 = *(uint *)((longlong)pdVar9 + 0xc);
                              local_158 = *(undefined4 *)(pdVar9 + 1);
                              if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
                                local_160 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&local_160,pdVar9);
                              }
                              FUN_140003ca0(&local_160,local_188);
                              iVar3 = FUN_1416d9df0(&local_160,&local_148,DAT_1420f6b08,1);
                              if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_160);
                              }
                              if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_148);
                              }
                              if (iVar3 != -2 && iVar3 < 1) {
                                local_1a8 = 0x5c;
                                uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18e3b/*var:x1*/);
                                iVar3 = FUN_1416d9df0(uVar12,&local_268,DAT_1420f6b08,1);
                                if ((iVar3 == -2) || (-1 < iVar3)) {
                                  uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d/*var:x2*/);
                                  iVar3 = FUN_1416d9df0(uVar12,&local_2a8,DAT_1420f6b08,1);
                                  if (iVar3 < 1) goto LAB_1402dbaca;
                                  local_1a8 = 100;
                                  uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b/*var:x1*/);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(uVar12,&local_2a8);
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x65;
                                  local_188 = (double *)
                                              (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d/*var:x2*/);
                                  pdVar9 = (double *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b/*var:x1*/);
                                  local_230 = (**(code **)(*local_f8 + 8))(local_f8,0x187b4/*var:bw*/);
                                  uStack_140._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                                  uStack_140._0_4_ = *(uint *)(pdVar9 + 1);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                    local_148 = *pdVar9;
                                  }
                                  else {
                                    FUN_1402ec660(&local_148,pdVar9);
                                  }
                                  FUN_140003ca0(&local_148,local_230);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(local_188,&local_148);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_148);
                                  }
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x66;
                                  uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf/*var:hsp*/);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(uVar12,&local_658);
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x67;
                                  puVar7 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x189c3/*var:hit_obj*/);
                                  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar7);
                                  }
                                }
                                else {
                                  local_1a8 = 0x5d;
                                  local_188 = (double *)
                                              (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d/*var:x2*/);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(local_188,&local_268);
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x5e;
                                  local_230 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b/*var:x1*/);
                                  uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x187b4/*var:bw*/);
                                  uStack_140._4_4_ = *(uint *)((longlong)local_188 + 0xc);
                                  uStack_140._0_4_ = *(uint *)(local_188 + 1);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                    local_148 = *local_188;
                                  }
                                  else {
                                    FUN_1402ec660(&local_148);
                                  }
                                  FUN_140003e00(&local_148,uVar12);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(local_230,&local_148);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&local_148);
                                  }
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x5f;
                                  uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x189cf/*var:hsp*/);
                                  FUN_1416a8cb0(local_f8);
                                  FUN_1400019a0(uVar12,&local_658);
                                  FUN_1416a8c00(1);
                                  local_1a8 = 0x60;
                                  puVar7 = (undefined8 *)
                                           (**(code **)(*local_f8 + 0x10))(local_f8,0x189c3/*var:hit_obj*/);
                                  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar7);
                                  }
                                }
                                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                              }
                            }
                          }
                        }
LAB_1402dbaca:
                        uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3d/*var:x2*/);
                        uStack_140 = uStack_260;
                        if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) == 0) {
                          local_148 = local_268;
                        }
                        else {
                          FUN_1402ec660(&local_148,&local_268);
                        }
                        param_2 = uVar6;
                        FUN_140003f30(&local_148,uVar6);
                        iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                        if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_148);
                        }
                        if (0 < iVar3) {
                          uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e3b/*var:x1*/);
                          FUN_140003ba0(&local_148,&local_2a8,uVar6);
                          iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                          if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_148);
                          }
                          ppdVar28 = &local_618;
                          if (iVar3 != -2 && iVar3 < 0) {
                            pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e4d/*var:y2*/);
                            local_188 = (double *)(**(code **)(*local_f8 + 0x10))(local_f8,0x18e26/*var:vsp*/);
                            uStack_140 = uStack_250;
                            if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) == 0) {
                              local_148 = local_258;
                            }
                            else {
                              FUN_1402ec660(&local_148,&local_258);
                            }
                            FUN_140003ca0(&local_148,&local_688);
                            local_1cc = *(uint *)((longlong)pdVar9 + 0xc);
                            local_1d0 = *(undefined4 *)(pdVar9 + 1);
                            if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
                              local_1d8 = *pdVar9;
                            }
                            else {
                              FUN_1402ec660(&local_1d8,pdVar9);
                            }
                            FUN_140003ca0(&local_1d8,local_188);
                            local_154 = local_1cc;
                            local_158 = local_1d0;
                            if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
                              local_160 = local_1d8;
                            }
                            else {
                              FUN_1402ec660(&local_160,&local_1d8);
                            }
                            param_2 = uVar6;
                            FUN_140003f30(&local_160,uVar6);
                            uVar4 = FUN_1416d9df0(&local_160,&local_148,DAT_1420f6b08,1);
                            local_188 = (double *)CONCAT44(local_188._4_4_,uVar4);
                            if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_160);
                            }
                            if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_1d8);
                            }
                            if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_148);
                            }
                            if (-1 < (int)local_188) {
                              local_188 = (double *)
                                          (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26/*var:vsp*/);
                              pdVar9 = (double *)(**(code **)(*local_f8 + 8))(local_f8,0x18e4b/*var:y1*/);
                              uStack_140 = CONCAT44(local_514,local_518);
                              if ((0x46U >> (local_514 & 0x1f) & 1) == 0) {
                                local_148 = local_520;
                              }
                              else {
                                FUN_1402ec660(&local_148,&local_520);
                              }
                              FUN_140003ca0(&local_148,&local_688);
                              local_1cc = *(uint *)((longlong)pdVar9 + 0xc);
                              local_1d0 = *(undefined4 *)(pdVar9 + 1);
                              if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
                                local_1d8 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&local_1d8);
                              }
                              FUN_140003ca0(&local_1d8,local_188);
                              FUN_140003ba0(&local_160,&local_1d8,uVar6);
                              iVar3 = FUN_1416d9df0(&local_160,&local_148,DAT_1420f6b08,1);
                              local_188 = (double *)CONCAT71(local_188._1_7_,iVar3 != -2);
                              local_230 = CONCAT71(local_230._1_7_,iVar3 < 1);
                              if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_160);
                              }
                              if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_1d8);
                              }
                              if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&local_148);
                              }
                              bVar1 = (byte)local_188 & (byte)local_230;
                              local_188 = (double *)CONCAT71(local_188._1_7_,bVar1);
                              if (bVar1 != 0) {
                                local_1a8 = 0x6b;
                                uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x18e4b/*var:y1*/);
                                iVar3 = FUN_1416d9df0(uVar12,&local_258,DAT_1420f6b08,1);
                                if ((iVar3 != -2) && (iVar3 < 0)) {
                                  uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x1881e/*var:col_t*/);
                                  uStack_140 = uStack_140 & 0xffffffff;
                                  local_148 = 0.0;
                                  iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,0);
                                  if (iVar3 == 0) {
                                    local_1a8 = 0x6d;
                                    uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4d/*var:y2*/);
                                    FUN_1416a8cb0(local_f8);
                                    FUN_1400019a0(uVar12,&local_258);
                                    FUN_1416a8c00(1);
                                    local_1a8 = 0x6e;
                                    local_188 = (double *)
                                                (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4b/*var:y1*/);
                                    pdVar9 = (double *)
                                             (**(code **)(*local_f8 + 0x10))(local_f8,0x18e4d/*var:y2*/);
                                    local_230 = (**(code **)(*local_f8 + 8))(local_f8,0x1877f/*var:bh*/);
                                    uStack_140._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                                    uStack_140._0_4_ = *(uint *)(pdVar9 + 1);
                                    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                      local_148 = *pdVar9;
                                    }
                                    else {
                                      FUN_1402ec660(&local_148,pdVar9);
                                    }
                                    FUN_140003e00(&local_148,local_230);
                                    FUN_1416a8cb0(local_f8);
                                    FUN_1400019a0(local_188,&local_148);
                                    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&local_148);
                                    }
                                    FUN_1416a8c00(1);
                                    local_1a8 = 0x6f;
                                    uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26/*var:vsp*/);
                                    FUN_1416a8cb0(local_f8);
                                    FUN_1400019a0(uVar12,&local_688);
                                    FUN_1416a8c00(1);
                                    local_1a8 = 0x70;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*local_f8 + 0x10))(local_f8,0x18b43/*var:onsolid*/);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                                    local_1a8 = 0x71;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*local_f8 + 0x10))(local_f8,0x18b42/*var:onobject*/);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                                    local_1a8 = 0x72;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*local_f8 + 0x10))(local_f8,0x189c2/*var:hit_id*/);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/;
                                    local_1a8 = 0x73;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*local_f8 + 0x10))(local_f8,0x18b3f/*var:onblock_id*/);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/;
                                    uVar12 = (**(code **)(*local_f8 + 8))(local_f8,0x1898f/*var:grav*/);
                                    uStack_140 = (ulonglong)(uint)uStack_140;
                                    local_148 = 0.0;
                                    iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,1);
                                    if (0 < iVar3) {
                                      local_1a8 = 0x74;
                                      in_stack_fffffffffffff5f0 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff5f0 &
                                           0xffffffffffffff00);
                                      in_stack_fffffffffffff5e8 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff5e8 &
                                           0xffffffffffffff00);
                                      FUN_1416cea80(local_f8,DAT_1420d59e8/*id*/,0x80000000,&local_698,
                                                    in_stack_fffffffffffff5e8,
                                                    in_stack_fffffffffffff5f0);
                                      FUN_1400019a0(&local_870,&local_698);
                                      FUN_1416d0720(&local_4b8,0x189c4/*var:hit_top*/,0x80000000,&local_870);
                                    }
                                    in_stack_fffffffffffff5f0 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
                                    ;
                                    in_stack_fffffffffffff5e8 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00)
                                    ;
                                    FUN_1416cfeb0(&local_4b8,0x18afe/*var:mover*/,0x80000000,&local_860,
                                                  in_stack_fffffffffffff5e8,
                                                  in_stack_fffffffffffff5f0);
                                    uStack_140 = uStack_140 & 0xffffffff;
                                    local_148 = 1.0;
                                    iVar3 = FUN_1416d9df0(&local_860,&local_148,DAT_1420f6b08,0);
                                    if (iVar3 == 0) {
                                      local_1a8 = 0x75;
                                      if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
                                        FUN_140001b50(&local_170);
                                      }
                                      local_170 = 0;
                                      local_168 = 0x500000000;
                                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 &
                                               0xffffffffffffff00;
                                      FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                                    uVar27,(ulonglong)in_stack_fffffffffffff5f0 &
                                                           0xffffffffffffff00);
                                      uVar4 = (undefined4)(uVar27 >> 0x20);
                                      FUN_1400019a0(&local_488,&local_498);
                                      local_618 = &local_488;
                                      FUN_140002730(&local_478,&DAT_1420b27d8);
                                      pdStack_610 = &local_478;
                                      in_stack_fffffffffffff5e8 =
                                           (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                                      uVar12 = FUN_1416ab210(local_f8,local_110,&local_170,2,
                                                             in_stack_fffffffffffff5e8,ppdVar28);
                                      uStack_140 = uStack_140 & 0xffffffff;
                                      local_148 = 1.0;
                                      iVar3 = FUN_1416d9df0(uVar12,&local_148,DAT_1420f6b08,0);
                                      in_stack_fffffffffffff5f0 = ppdVar28;
                                      if (iVar3 == 0) {
                                        local_1a8 = 0x76;
                                        if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                                          FUN_140001b50(&local_180);
                                        }
                                        local_180 = 0;
                                        local_178 = 0x500000000;
                                        uVar12 = (**(code **)(*local_f8 + 0x10))(local_f8,0x18e26/*var:vsp*/);
                                        in_stack_fffffffffffff5f0 =
                                             (double **)((ulonglong)ppdVar28 & 0xffffffffffffff00);
                                        FUN_1416cea80(local_f8,DAT_1420d59e8/*id*/,0x80000000,&local_698,
                                                      (ulonglong)in_stack_fffffffffffff5e8 &
                                                      0xffffffffffffff00,in_stack_fffffffffffff5f0);
                                        FUN_1400019a0(&local_468,&local_698);
                                        local_608 = &local_468;
                                        FUN_1400019a0(&local_458,uVar12);
                                        local_600 = &local_458;
                                        in_stack_fffffffffffff5e8 = &local_608;
                                        FUN_140061cf0(local_f8,local_110,&local_180,2,
                                                      in_stack_fffffffffffff5e8);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      local_148 = 65.0;
                      iVar3 = FUN_1416d9df0(&local_498,&local_148,DAT_1420f6b08,0);
                      if (iVar3 == 0) goto LAB_1402da230;
                      if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_1e8);
                      }
                      local_1e8 = 0;
                      local_1e0 = 0x500000000;
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,uVar27,
                                    (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      uVar4 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&local_428,&local_498);
                      local_5e8 = &local_428;
                      FUN_140002730(&local_418,&DAT_1420b27e8);
                      local_5e0 = &local_418;
                      in_stack_fffffffffffff5f0 = &local_5e8;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                      uVar12 = FUN_1416ab210(local_f8,local_110,&local_1e8,2,
                                             in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      cVar2 = FUN_1416927d0(uVar12);
                      if (cVar2 != '\0') goto LAB_1402da230;
LAB_1402da295:
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      local_148 = 64.0;
                      iVar3 = FUN_1416d9df0(&local_498,&local_148,DAT_1420f6b08,0);
                      if (iVar3 != 0) {
                        in_stack_fffffffffffff5f0 =
                             (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                        in_stack_fffffffffffff5e8 =
                             (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                        FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,
                                      in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        uStack_140 = uStack_140 & 0xffffffff;
                        local_148 = 65.0;
                        iVar3 = FUN_1416d9df0(&local_498,&local_148,DAT_1420f6b08,0);
                        if (iVar3 != 0) {
                          if ((0x46U >> (local_280._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          local_288 = 0;
                          local_280 = 0x500000000;
                          uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                          FUN_1416cea80(local_f8,DAT_1420d5a28/*object_index*/,0x80000000,&local_498,uVar27,
                                        (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                          uVar4 = (undefined4)(uVar27 >> 0x20);
                          FUN_1400019a0(&local_408,&local_498);
                          local_5d8 = &local_408;
                          FUN_140002730(&local_3f8,&DAT_1420b27e8);
                          local_5d0 = &local_3f8;
                          in_stack_fffffffffffff5f0 = &local_5d8;
                          in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                          uVar12 = FUN_1416ab210(local_f8,local_110,&local_288,2,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          cVar2 = FUN_1416927d0(uVar12);
                          if (cVar2 == '\0') goto LAB_1402da462;
                        }
                      }
                    }
                  }
                  else {
                    FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                    uStack_140 = uStack_140 & 0xffffffff;
                    local_148 = 65.0;
                    iVar3 = FUN_1416d9df0(&local_298,&local_148,DAT_1420f6b08,0);
                    if (iVar3 == 0) goto LAB_1402d9e87;
                    if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_180);
                    }
                    uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                    local_180 = 0;
                    local_178 = 0x500000000;
                    FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                    FUN_1400019a0(&local_468,&local_298);
                    local_608 = &local_468;
                    FUN_140002730(&local_458,&DAT_1420b27e8);
                    local_600 = &local_458;
                    in_stack_fffffffffffff5f0 = &local_608;
                    in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                    uVar12 = FUN_1416ab210(local_f8,local_110,&local_180,2,in_stack_fffffffffffff5e8
                                           ,in_stack_fffffffffffff5f0);
                    cVar2 = FUN_1416927d0(uVar12);
                    if (cVar2 != '\0') goto LAB_1402d9e87;
LAB_1402d9ed6:
                    FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                    uStack_140 = uStack_140 & 0xffffffff;
                    local_148 = 64.0;
                    iVar3 = FUN_1416d9df0(&local_298,&local_148,DAT_1420f6b08,0);
                    if (iVar3 != 0) {
                      FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                      uStack_140 = uStack_140 & 0xffffffff;
                      local_148 = 65.0;
                      iVar3 = FUN_1416d9df0(&local_298,&local_148,DAT_1420f6b08,0);
                      if (iVar3 != 0) {
                        if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_1f8);
                        }
                        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        local_1f8 = 0;
                        local_1f0 = 0x500000000;
                        FUN_1416cfc30(&local_4b8,DAT_1420d5a28/*object_index*/,0x80000000,&local_298);
                        FUN_1400019a0(&local_448,&local_298);
                        local_5f8 = &local_448;
                        FUN_140002730(&local_438,&DAT_1420b27e8);
                        local_5f0 = &local_438;
                        in_stack_fffffffffffff5f0 = &local_5f8;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                        uVar12 = FUN_1416ab210(local_f8,local_110,&local_1f8,2,
                                               in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        cVar2 = FUN_1416927d0(uVar12);
                        if (cVar2 == '\0') goto LAB_1402da073;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        switch(local_49c & 0xffffff) {
        case 1:
          local_4a8 = (double)FUN_1416940c0(&local_4a8);
          local_4a8 = local_4a8 + dVar18;
          local_49c = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_4a8,&local_4a8);
          break;
        case 7:
          local_4a8 = (double)CONCAT44(local_4a8._4_4_,local_4a8._0_4_ + 1);
          break;
        case 10:
          local_4a8 = (double)((longlong)local_4a8 + 1);
          break;
        case 0xd:
          local_49c = 0;
        case 0:
          local_4a8 = local_4a8 + dVar18;
        }
      }
    }
    if ((0x46U >> (local_6e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_6e8);
    }
    if ((0x46U >> (local_620._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_628);
    }
    if ((0x46U >> (local_270._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_278);
    }
    if ((0x46U >> (local_280._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_288);
    }
    if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1e8);
    }
    if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1f8);
    }
    if ((0x46U >> (local_178._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_180);
    }
    if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_170);
    }
    if ((0x46U >> (local_854 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_860);
    }
    if ((0x46U >> (local_864 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_870);
    }
    if ((0x46U >> (local_62c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_638);
    }
    if ((0x46U >> (local_63c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_648);
    }
    if ((0x46U >> (local_874 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_880);
    }
    if ((0x46U >> (local_884 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_890);
    }
    if ((0x46U >> (local_894 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8a0);
    }
    if ((0x46U >> (local_8a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8b0);
    }
    if ((0x46U >> (local_8b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8c0);
    }
    if ((0x46U >> (local_8c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8d0);
    }
    if ((0x46U >> (local_73c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_748);
    }
    if ((0x46U >> (local_6ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_6f8);
    }
    if ((0x46U >> (local_74c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_758);
    }
    if ((0x46U >> (local_6fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_708);
    }
    if ((0x46U >> (local_8d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8e0);
    }
    if ((0x46U >> (local_48c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_498);
    }
    if ((0x46U >> (local_8e4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_8f0);
    }
    if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_298);
    }
    if ((0x46U >> (local_68c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_698);
    }
    if ((0x46U >> (local_49c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_4a8);
    }
    if ((0x46U >> (local_4f4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_500);
    }
    if ((0x46U >> (local_504 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_510);
    }
    if ((0x46U >> (local_4bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_4c8);
    }
    if ((0x46U >> (local_69c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_6a8);
    }
    if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_198);
    }
    if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_228);
    }
    if ((0x46U >> (local_70c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_718);
    }
    if ((0x46U >> (local_71c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_728);
    }
    if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_218);
    }
    if ((0x46U >> (local_72c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_738);
    }
    if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_208);
    }
    if ((0x46U >> (local_64c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_658);
    }
    if ((0x46U >> (local_67c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_688);
    }
    if ((0x46U >> (local_514 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_520);
    }
    if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2a8);
    }
    if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_258);
    }
    if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_268);
    }
    if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_4b8);
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
    DAT_142182d78 = (undefined8 **)local_1b8;
  }
  local_238 = 9;
  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0x500000000;
  ppuVar29 = (undefined8 **)0x0;
  FUN_14003d740(local_150,local_4d0,&local_1c8,0,0);
  local_238 = 10;
  puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x18afc/*var:move_t*/);
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  uVar6 = (**(code **)(*local_150 + 8))(local_150,0x189a1/*var:hazard*/);
  local_47c = 0;
  local_488 = 1.0;
  iVar3 = FUN_1416d9df0(uVar6,&local_488,DAT_1420f6b08,0);
  if (iVar3 == 0) {
    uVar6 = (**(code **)(*local_150 + 8))(local_150,0x188a5/*var:do_damage*/);
    local_47c = 0;
    local_488 = 1.0;
    iVar3 = FUN_1416d9df0(uVar6,&local_488,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      local_238 = 0xc;
      uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3b/*var:x1*/);
      local_618 = (double *)0x0;
      pdStack_610 = (double *)0x0;
      in_stack_fffffffffffff5f0 =
           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
      ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
      FUN_1416d0010(0x40,0x18e3d/*var:x2*/,0x80000000,&local_618,ppuVar29,in_stack_fffffffffffff5f0);
      iVar3 = FUN_1416d9df0(uVar6,&local_618,DAT_1420f6b08,1);
      if ((iVar3 != -2) && (iVar3 < 1)) {
        local_238 = 0xd;
        uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3d/*var:x2*/);
        local_148 = 0.0;
        uStack_140 = 0;
        in_stack_fffffffffffff5f0 =
             (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
        ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
        FUN_1416d0010(0x40,0x18e3b/*var:x1*/,0x80000000,&local_148,ppuVar29,in_stack_fffffffffffff5f0);
        iVar3 = FUN_1416d9df0(uVar6,&local_148,DAT_1420f6b08,1);
        if (-1 < iVar3) {
          local_238 = 0xe;
          uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e4b/*var:y1*/);
          local_1b8 = (undefined8 *)0x0;
          pcStack_1b0 = (char *)0x0;
          in_stack_fffffffffffff5f0 =
               (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
          ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
          FUN_1416d0010(0x40,0x18e4d/*var:y2*/,0x80000000,&local_1b8,ppuVar29,in_stack_fffffffffffff5f0);
          iVar3 = FUN_1416d9df0(uVar6,&local_1b8,DAT_1420f6b08,1);
          if ((iVar3 != -2) && (iVar3 < 1)) {
            local_238 = 0xf;
            uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e4d/*var:y2*/);
            local_108 = 0.0;
            uStack_100 = 0.0;
            in_stack_fffffffffffff5f0 =
                 (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
            ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
            FUN_1416d0010(0x40,0x18e4b/*var:y1*/,0x80000000,&local_108,ppuVar29,in_stack_fffffffffffff5f0);
            iVar3 = FUN_1416d9df0(uVar6,&local_108,DAT_1420f6b08,1);
            if (-1 < iVar3) {
              local_238 = 0x11;
              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
              uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
              FUN_1416cea80(local_150,DAT_1420d58e8/*x*/,0x80000000,&local_678,uVar27,uVar31);
              uVar31 = uVar31 & 0xffffffffffffff00;
              uVar27 = uVar27 & 0xffffffffffffff00;
              FUN_1416cea80(local_150,DAT_1420d58f8/*y*/,0x80000000,&local_668,uVar27,uVar31);
              FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_6d8);
              FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_6c8);
              dVar18 = local_6c8;
              if ((local_6bc & 0xffffff) != 0) {
                dVar18 = (double)FUN_1416940c0(&local_6c8);
              }
              dVar15 = local_6d8;
              if ((local_6cc & 0xffffff) != 0) {
                dVar15 = (double)FUN_1416940c0(&local_6d8);
              }
              dVar14 = local_668;
              if ((local_65c & 0xffffff) != 0) {
                dVar14 = (double)FUN_1416940c0(&local_668);
              }
              dVar16 = local_678;
              if ((local_66c & 0xffffff) != 0) {
                dVar16 = (double)FUN_1416940c0(&local_678);
              }
              fVar13 = (float)FUN_1416cdb80((float)dVar16,CONCAT44(uVar4,(float)dVar14),
                                            (float)dVar15,(float)dVar18);
              if ((0x46U >> (local_4d4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_4e0);
              }
              local_4d4 = 0;
              local_4e0 = (double)fVar13;
              local_4b8 = 0.0;
              uStack_4b0 = 0;
              in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
              ppuVar29 = (undefined8 **)(uVar27 & 0xffffffffffffff00);
              FUN_1416d0010(0x40,0x18864/*var:damage*/,0x80000000,&local_4b8,ppuVar29,in_stack_fffffffffffff5f0);
              local_47c = 0;
              local_488 = 0.0;
              iVar3 = FUN_1416d9df0(&local_4b8,&local_488,DAT_1420f6b08,1);
              if ((iVar3 != -2) && (iVar3 < 1)) {
                local_238 = 0x13;
                if ((0x46U >> (*(uint *)((longlong)local_830 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(local_830);
                }
                *(undefined4 *)((longlong)local_830 + 0xc) = 0;
                *local_830 = 0;
                local_238 = 0x16;
                local_268 = 0.0;
                uStack_260 = 0;
                uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
                FUN_1416d0010(0x40,0x189cf/*var:hsp*/,0x80000000,&local_268,uVar27,uVar31);
                dVar18 = local_4e0;
                if ((local_4d4 & 0xffffff) != 0) {
                  dVar18 = (double)FUN_1416940c0(&local_4e0);
                }
                fVar13 = (float)FUN_1416cd800(_DAT_141983928,(float)dVar18);
                FUN_140003f30(&local_268,(double)fVar13);
                FUN_1416d0790(0x40,0x189cf/*var:hsp*/,0x80000000,&local_268);
                local_238 = 0x17;
                local_258 = 0.0;
                uStack_250 = 0;
                uVar31 = uVar31 & 0xffffffffffffff00;
                uVar27 = uVar27 & 0xffffffffffffff00;
                FUN_1416d0010(0x40,0x18e26/*var:vsp*/,0x80000000,&local_258,uVar27,uVar31);
                dVar18 = local_4e0;
                if ((local_4d4 & 0xffffff) != 0) {
                  dVar18 = (double)FUN_1416940c0(&local_4e0);
                }
                fVar13 = (float)FUN_1416cd880(_DAT_141983928,(float)dVar18);
                FUN_140003f30(&local_258,(double)fVar13);
                FUN_1416d0790(0x40,0x18e26/*var:vsp*/,0x80000000,&local_258);
                local_238 = 0x18;
                uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x189cf/*var:hsp*/);
                FUN_140017bd0(&local_488,&local_4e0,0xb4);
                dVar18 = local_488;
                if ((local_47c & 0xffffff) != 0) {
                  dVar18 = (double)FUN_1416940c0(&local_488);
                }
                fVar13 = (float)FUN_1416cd800(_DAT_141983928,(float)dVar18);
                FUN_140003f30(uVar6,(double)fVar13);
                if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_488);
                }
                local_238 = 0x19;
                uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x18e26/*var:vsp*/);
                FUN_140017bd0(&local_488,&local_4e0,0xb4);
                dVar18 = local_488;
                if ((local_47c & 0xffffff) != 0) {
                  dVar18 = (double)FUN_1416940c0(&local_488);
                }
                fVar13 = (float)FUN_1416cd880(_DAT_141983928,(float)dVar18);
                FUN_140003f30(uVar6,(double)fVar13);
                if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_488);
                }
                local_238 = 0x1a;
                if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_4b8);
                }
                uStack_4b0 = uStack_4b0 & 0xffffffff;
                local_4b8 = 25.0;
                FUN_1416d0790(0x40,0x18864/*var:damage*/,0x80000000,&local_4b8);
                local_238 = 0x1b;
                local_2a8 = 0.0;
                uStack_2a0 = 0;
                ppuVar29 = (undefined8 **)(uVar31 & 0xffffffffffffff00);
                FUN_1416d0010(0x40,0x189cb/*var:hp*/,0x80000000,&local_2a8,uVar27 & 0xffffffffffffff00,
                              ppuVar29);
                local_47c = 0;
                local_488 = 1.0;
                FUN_140003e00(&local_2a8,&local_488);
                if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_488);
                }
                FUN_1416d0790(0x40,0x189cb/*var:hp*/,0x80000000,&local_2a8);
                local_238 = 0x1c;
                if ((0x46U >> (*(uint *)((longlong)local_828 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(local_828);
                }
                *(undefined4 *)((longlong)local_828 + 0xc) = 0;
                *local_828 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
                local_238 = 0x1d;
                if ((0x46U >> (*(uint *)((longlong)local_820 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(local_820);
                }
                *(undefined4 *)((longlong)local_820 + 0xc) = 0;
                *local_820 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
                local_238 = 0x1e;
                FUN_140017bd0(&local_488,&local_4e0,0xb4);
                FUN_1416a8cb0(DAT_14218ecf8);
                FUN_1400019a0(uVar5,&local_488);
                if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_488);
                }
                FUN_1416a8c00(1);
                local_238 = 0x1f;
                if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1c8);
                }
                local_1c8 = 0;
                local_1c0 = 0x500000000;
                FUN_140002730(&local_818,&DAT_1420b4f58);
                local_9f8 = &local_818;
                ppuVar30 = &local_9f8;
                FUN_140087080(local_150,local_4d0,&local_1c8,1,ppuVar30);
                local_188 = (double *)CONCAT44(local_188._4_4_,3);
                do {
                  local_238 = 0x20;
                  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1c8);
                  }
                  local_1c8 = 0;
                  local_1c0 = 0x500000000;
                  uVar31 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
                  uVar27 = (ulonglong)ppuVar30 & 0xffffffffffffff00;
                  FUN_1416cea80(local_4d0,DAT_1420d58e8/*x*/,0x80000000,&local_850,uVar27,uVar31);
                  uVar27 = uVar27 & 0xffffffffffffff00;
                  FUN_1416cea80(local_4d0,DAT_1420d58f8/*y*/,0x80000000,&local_840,uVar27,
                                uVar31 & 0xffffffffffffff00);
                  uVar4 = (undefined4)(uVar27 >> 0x20);
                  FUN_1400019a0(&local_818,&local_850);
                  local_9f8 = &local_818;
                  FUN_1400019a0(&local_808,&local_840);
                  local_9f0 = &local_808;
                  FUN_140002730(&local_7f8,&DAT_1420b4f68);
                  local_9e8 = &local_7f8;
                  FUN_140002730(&local_7e8,&DAT_1420b4f78);
                  local_9e0 = &local_7e8;
                  ppuVar29 = &local_9f8;
                  ppuVar30 = (undefined8 **)CONCAT44(uVar4,DAT_1420da400/*instance_create_depth*/);
                  uVar5 = FUN_1416ab210(local_150,local_4d0,&local_1c8,4,ppuVar30,ppuVar29);
                  iVar3 = FUN_1416ab810(&local_488,&local_150,&local_4d0,uVar5);
                  if (0 < iVar3) {
                    do {
                      local_238 = 0x22;
                      uVar5 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3f/*var:xd*/);
                      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_6d8);
                      FUN_1416a8cb0(local_150);
                      FUN_1400019a0(uVar5,&local_6d8);
                      FUN_1416a8c00(1);
                      local_238 = 0x23;
                      uVar5 = (**(code **)(*local_150 + 0x10))(local_150,0x18e4f/*var:yd*/);
                      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_6c8);
                      FUN_1416a8cb0(local_150);
                      FUN_1400019a0(uVar5,&local_6c8);
                      FUN_1416a8c00(1);
                      local_238 = 0x24;
                      puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x18942/*var:follow*/);
                      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                        FUN_140001b50(puVar7);
                      }
                      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                      *puVar7 = 0x4050000000000000/*64 (obj:oPlayer)*/;
                      cVar2 = FUN_1416abe60(&local_488,&local_150,&local_4d0);
                    } while (cVar2 != '\0');
                  }
                  FUN_1416ab620(&local_488,&local_150,&local_4d0);
                  if (local_478 != 0.0) {
                    thunk_FUN_1416c46f0();
                    local_478 = 0.0;
                  }
                  iVar3 = (int)local_188 + -1;
                  local_188 = (double *)CONCAT44(local_188._4_4_,iVar3);
                } while (0 < iVar3);
                local_238 = 0x27;
                if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1c8);
                }
                local_1c8 = 0;
                local_1c0 = 0x500000000;
                if ((0x46U >> (local_6b0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_6b8);
                }
                local_6b8 = 0;
                local_6b0 = 0x500000000;
                FUN_140002730(&local_818,&DAT_1420b4f88);
                local_9f8 = &local_818;
                FUN_140002730(&local_808,&DAT_1420b4f98);
                local_9f0 = &local_808;
                FUN_140002730(&local_7f8,&DAT_1420b4fa8);
                local_9e8 = &local_7f8;
                FUN_140002730(&local_7e8,&DAT_1420b4fb8);
                local_9e0 = &local_7e8;
                uVar31 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
                uVar27 = (ulonglong)ppuVar30 & 0xffffffffffffff00;
                FUN_1416cea80(local_150,DAT_1420d58e8/*x*/,0x80000000,&local_678,uVar27,uVar31);
                in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
                FUN_1416cea80(local_150,DAT_1420d58f8/*y*/,0x80000000,&local_668,
                              uVar27 & 0xffffffffffffff00,in_stack_fffffffffffff5f0);
                uVar5 = FUN_1416cd660(&local_6b8,4,&local_9f8);
                FUN_1400019a0(&local_7d8,uVar5);
                local_9d8 = &local_7d8;
                FUN_140002730(&local_7c8,&DAT_1420b4fc8);
                local_9d0 = &local_7c8;
                FUN_140002730(&local_7b8,&DAT_142180080);
                local_9c8 = &local_7b8;
                uVar5 = FUN_1416cdc60((int)DAT_141983968,_DAT_141983970);
                local_9c0 = &local_7a8;
                if ((0x46U >> (local_79c & 0x1f) & 1) != 0) {
                  FUN_140001b50(local_9c0);
                }
                local_79c = 0;
                local_7a8 = uVar5;
                FUN_140002730(&local_798,&DAT_1420b4fd8);
                local_9b8 = &local_798;
                FUN_140002730(&local_788,&DAT_142180080);
                local_9b0 = &local_788;
                FUN_1400019a0(&local_778,&local_678);
                local_9a8 = &local_778;
                FUN_1400019a0(&local_768,&local_668);
                ppuVar29 = &local_9d8;
                local_9a0 = &local_768;
                FUN_1400d4470(local_150,local_4d0,&local_1c8,8,ppuVar29);
                local_238 = 0x28;
                puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x18768/*var:attack*/);
                if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar7);
                }
                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                *puVar7 = 0x4066800000000000/*180 (obj:oPlayer_sit)*/;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = (**(code **)(*local_150 + 8))(local_150,0x188a6/*var:do_fric*/);
  local_47c = 0;
  local_488 = 0.0;
  iVar3 = FUN_1416d9df0(uVar5,&local_488,DAT_1420f6b08,1);
  if (0 < iVar3) {
    local_238 = 0x2f;
    if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0x500000000;
    uVar5 = (**(code **)(*local_150 + 8))(local_150,0x188a6/*var:do_fric*/);
    uVar6 = (**(code **)(*local_150 + 0x10))(local_150,0x189cf/*var:hsp*/);
    FUN_1400019a0(&local_818,uVar6);
    local_9f8 = &local_818;
    FUN_140002730(&local_808,&DAT_142180080);
    local_47c = 0;
    local_488 = 0.1;
    local_9f0 = &local_808;
    FUN_140001fe0(&local_488,uVar5);
    FUN_1400019a0(&local_7f8,&local_488);
    if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_488);
    }
    ppuVar29 = &local_9f8;
    local_9e8 = &local_7f8;
    uVar5 = FUN_14003b450(local_150,local_4d0,&local_1c8,3,ppuVar29);
    FUN_1416a8cb0(local_150);
    FUN_1400019a0(uVar6,uVar5);
    FUN_1416a8c00(1);
  }
  uVar5 = (**(code **)(*local_150 + 8))(local_150,0x188a7/*var:do_grav*/);
  cVar2 = FUN_1416927d0(uVar5);
  if (cVar2 != '\0') {
    local_238 = 0x31;
    puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x1898f/*var:grav*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  uVar5 = (**(code **)(*local_150 + 8))(local_150,0x18b8c/*var:physics*/);
  local_47c = 0;
  local_488 = 0.0;
  iVar3 = FUN_1416d9df0(uVar5,&local_488,DAT_1420f6b08,0);
  if (iVar3 == 0) {
    local_238 = 0x33;
    puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x189cf/*var:hsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    puVar7 = (undefined8 *)(**(code **)(*local_150 + 0x10))(local_150,0x18e26/*var:vsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  local_238 = 0x35;
  uVar5 = (**(code **)(*local_150 + 0x10))(local_150,0x18e3a/*var:X*/);
  uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
  uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
  FUN_1416cea80(local_150,DAT_1420d58e8/*x*/,0x80000000,&local_678,uVar27,uVar31);
  FUN_1416a8cb0(local_150);
  FUN_1400019a0(uVar5,&local_678);
  FUN_1416a8c00(1);
  local_238 = 0x37;
  uVar5 = (**(code **)(*local_150 + 0x10))(local_150,0x18e49/*var:Y*/);
  FUN_1416cea80(local_150,DAT_1420d58f8/*y*/,0x80000000,&local_668,uVar27 & 0xffffffffffffff00,
                uVar31 & 0xffffffffffffff00);
  FUN_1416a8cb0(local_150);
  FUN_1400019a0(uVar5,&local_668);
  FUN_1416a8c00(1);
  if ((0x46U >> (local_8f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_900);
  }
  if ((0x46U >> (local_904 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_910);
  }
  if ((0x46U >> (local_914 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_920);
  }
  if ((0x46U >> (local_924 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_930);
  }
  if ((0x46U >> (local_934 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_940);
  }
  if ((0x46U >> (local_944 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_950);
  }
  if ((0x46U >> (local_954 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_960);
  }
  if ((0x46U >> (local_964 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_970);
  }
  if ((0x46U >> (local_974 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_980);
  }
  if ((0x46U >> (local_984 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_990);
  }
  if ((0x46U >> (local_6b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6b8);
  }
  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_834 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_840);
  }
  if ((0x46U >> (local_844 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_850);
  }
  if ((0x46U >> (local_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4e0);
  }
  if ((0x46U >> (local_6bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6c8);
  }
  if ((0x46U >> (local_6cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6d8);
  }
  if ((0x46U >> (local_65c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_668);
  }
  if ((0x46U >> (local_66c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_678);
  }
  if ((0x46U >> (local_75c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_768);
  }
  if ((0x46U >> (local_76c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_778);
  }
  if ((0x46U >> (local_77c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_788);
  }
  if ((0x46U >> (local_78c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_798);
  }
  if ((0x46U >> (local_79c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7a8);
  }
  if ((0x46U >> (local_7ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7b8);
  }
  if ((0x46U >> (local_7bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7c8);
  }
  if ((0x46U >> (local_7cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7d8);
  }
  if ((0x46U >> (local_7dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7e8);
  }
  if ((0x46U >> (local_7ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7f8);
  }
  if ((0x46U >> (local_7fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_808);
  }
  if ((0x46U >> (local_80c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_818);
  }
  DAT_142182d78 = (undefined8 **)local_248;
  return;
code_r0x0001402d6038:
  local_198 = (double)((longlong)local_198 + 1);
  goto joined_r0x0001402d5bda;
code_r0x0001402d7408:
  local_198 = (double)((longlong)local_198 + 1);
  goto joined_r0x0001402d6faa;
}


