// Function: gml_Object_parEntity_Step_2 @ 0x1402d3fb0

/* WARNING: Removing unreachable block (ram,0x0001402ddf91) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parEntity_Step_2(longlong *param_1,longlong *param_2)

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
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 in_XMM1_Qa;
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
  undefined8 *puStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 *puStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  undefined8 *puStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 *puStack_9b8;
  undefined8 *puStack_9b0;
  undefined8 *puStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_990;
  uint uStack_984;
  undefined8 uStack_980;
  uint uStack_974;
  undefined8 uStack_970;
  uint uStack_964;
  undefined8 uStack_960;
  uint uStack_954;
  undefined8 uStack_950;
  uint uStack_944;
  undefined8 uStack_940;
  uint uStack_934;
  undefined8 uStack_930;
  uint uStack_924;
  undefined8 uStack_920;
  uint uStack_914;
  undefined8 uStack_910;
  uint uStack_904;
  undefined8 uStack_900;
  uint uStack_8f4;
  undefined8 uStack_8f0;
  uint uStack_8e4;
  undefined8 uStack_8e0;
  uint uStack_8d4;
  undefined8 uStack_8d0;
  uint uStack_8c4;
  undefined8 uStack_8c0;
  uint uStack_8b4;
  undefined8 uStack_8b0;
  uint uStack_8a4;
  undefined8 uStack_8a0;
  uint uStack_894;
  undefined8 uStack_890;
  uint uStack_884;
  undefined8 uStack_880;
  uint uStack_874;
  undefined8 uStack_870;
  uint uStack_864;
  undefined8 uStack_860;
  uint uStack_854;
  undefined8 uStack_850;
  uint uStack_844;
  undefined8 uStack_840;
  uint uStack_834;
  undefined8 *puStack_830;
  undefined8 *puStack_828;
  undefined8 *puStack_820;
  undefined8 uStack_818;
  uint uStack_80c;
  undefined8 uStack_808;
  uint uStack_7fc;
  undefined8 uStack_7f8;
  uint uStack_7ec;
  undefined8 uStack_7e8;
  uint uStack_7dc;
  undefined8 uStack_7d8;
  uint uStack_7cc;
  undefined8 uStack_7c8;
  uint uStack_7bc;
  undefined8 uStack_7b8;
  uint uStack_7ac;
  undefined8 uStack_7a8;
  uint uStack_79c;
  undefined8 uStack_798;
  uint uStack_78c;
  undefined8 uStack_788;
  uint uStack_77c;
  undefined8 uStack_778;
  uint uStack_76c;
  undefined8 uStack_768;
  uint uStack_75c;
  undefined8 uStack_758;
  uint uStack_74c;
  undefined8 uStack_748;
  uint uStack_73c;
  double dStack_738;
  undefined4 uStack_730;
  uint uStack_72c;
  undefined8 uStack_728;
  uint uStack_71c;
  undefined8 uStack_718;
  uint uStack_70c;
  double dStack_708;
  uint uStack_6fc;
  double dStack_6f8;
  uint uStack_6ec;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  double dStack_6d8;
  uint uStack_6cc;
  double dStack_6c8;
  uint uStack_6bc;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  uint uStack_69c;
  undefined8 uStack_698;
  uint uStack_68c;
  undefined8 uStack_688;
  uint uStack_67c;
  double dStack_678;
  uint uStack_66c;
  double dStack_668;
  uint uStack_65c;
  undefined8 uStack_658;
  uint uStack_64c;
  double dStack_648;
  uint uStack_63c;
  double dStack_638;
  uint uStack_62c;
  undefined8 uStack_628;
  undefined8 uStack_620;
  double *pdStack_618;
  double *pdStack_610;
  double *pdStack_608;
  double *pdStack_600;
  double *pdStack_5f8;
  double *pdStack_5f0;
  double *pdStack_5e8;
  double *pdStack_5e0;
  double *pdStack_5d8;
  double *pdStack_5d0;
  double *pdStack_5c8;
  undefined8 *puStack_5c0;
  double *pdStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  double dStack_520;
  undefined4 uStack_518;
  uint uStack_514;
  double dStack_510;
  uint uStack_504;
  double dStack_500;
  uint uStack_4f4;
  undefined8 uStack_4f0;
  uint uStack_4e4;
  double dStack_4e0;
  uint uStack_4d4;
  longlong *plStack_4d0;
  double dStack_4c8;
  uint uStack_4bc;
  double dStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  uint uStack_49c;
  undefined8 uStack_498;
  uint uStack_48c;
  double dStack_488;
  uint uStack_47c;
  double dStack_478;
  uint uStack_46c;
  double dStack_468;
  uint uStack_45c;
  double dStack_458;
  uint uStack_44c;
  double dStack_448;
  uint uStack_43c;
  double dStack_438;
  uint uStack_42c;
  double dStack_428;
  uint uStack_41c;
  double dStack_418;
  uint uStack_40c;
  double dStack_408;
  uint uStack_3fc;
  double dStack_3f8;
  uint uStack_3ec;
  double dStack_3e8;
  uint uStack_3dc;
  undefined8 uStack_3d8;
  uint uStack_3cc;
  double dStack_3c8;
  uint uStack_3bc;
  undefined8 uStack_3b8;
  uint uStack_3ac;
  undefined8 uStack_3a8;
  uint uStack_39c;
  undefined8 uStack_398;
  uint uStack_38c;
  undefined8 uStack_388;
  uint uStack_37c;
  undefined8 uStack_378;
  uint uStack_36c;
  undefined8 uStack_368;
  uint uStack_35c;
  undefined8 uStack_358;
  uint uStack_34c;
  undefined8 uStack_348;
  uint uStack_33c;
  undefined8 uStack_338;
  uint uStack_32c;
  undefined8 uStack_328;
  uint uStack_31c;
  undefined8 uStack_318;
  uint uStack_30c;
  undefined8 uStack_308;
  uint uStack_2fc;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  undefined8 uStack_2d8;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2ac;
  double dStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  double dStack_228;
  uint uStack_21c;
  double dStack_218;
  undefined4 uStack_210;
  uint uStack_20c;
  double dStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined4 uStack_1a8;
  double dStack_198;
  uint uStack_18c;
  double *pdStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  double dStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  longlong *plStack_150;
  double dStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  double dStack_128;
  undefined8 uStack_120;
  longlong *plStack_110;
  double dStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_240 = &UNK_141986540;
  uStack_238 = 0;
  uStack_248 = ppuRam0000000142182d78;
  ppuRam0000000142182d78 = (undefined8 **)&uStack_248;
  uStack_80c = 0xffffff;
  uStack_818 = 0;
  uStack_7fc = 0xffffff;
  uStack_808 = 0;
  uStack_7ec = 0xffffff;
  uStack_7f8 = 0;
  uStack_7dc = 0xffffff;
  uStack_7e8 = 0;
  uStack_7cc = 0xffffff;
  uStack_7d8 = 0;
  uStack_7bc = 0xffffff;
  uStack_7c8 = 0;
  uStack_7ac = 0xffffff;
  uStack_7b8 = 0;
  uStack_79c = 0xffffff;
  uStack_7a8 = 0;
  uStack_78c = 0xffffff;
  uStack_798 = 0;
  uStack_77c = 0xffffff;
  uStack_788 = 0;
  uStack_76c = 0xffffff;
  uStack_778 = 0;
  uStack_75c = 0xffffff;
  uStack_768 = 0;
  uStack_66c = 0xffffff;
  dStack_678 = 0.0;
  uStack_65c = 0xffffff;
  dStack_668 = 0.0;
  uStack_6cc = 0xffffff;
  dStack_6d8 = 0.0;
  uStack_6bc = 0xffffff;
  dStack_6c8 = 0.0;
  uStack_4d4 = 0xffffff;
  dStack_4e0 = 0.0;
  plRam0000000142182d90 = param_1;
  plStack_4d0 = param_2;
  plStack_150 = param_1;
  puStack_830 = (undefined8 *)
                (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1896f);
  puStack_828 = (undefined8 *)
                (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187d0);
  puStack_820 = (undefined8 *)
                (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cd);
  uVar5 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187cc);
  uStack_844 = 0xffffff;
  uStack_850 = 0;
  uStack_834 = 0xffffff;
  uStack_840 = 0;
  uStack_1c0._4_4_ = 0xffffff;
  uStack_1c8 = 0;
  uStack_6b0 = CONCAT44(0xffffff,(undefined4)uStack_6b0);
  uStack_6b8 = 0;
  uStack_984 = 0xffffff;
  uStack_990 = 0;
  uStack_974 = 0xffffff;
  uStack_980 = 0;
  uStack_964 = 0xffffff;
  uStack_970 = 0;
  uStack_954 = 0xffffff;
  uStack_960 = 0;
  uStack_944 = 0xffffff;
  uStack_950 = 0;
  uStack_934 = 0xffffff;
  uStack_940 = 0;
  uStack_924 = 0xffffff;
  uStack_930 = 0;
  uStack_914 = 0xffffff;
  uStack_920 = 0;
  uStack_904 = 0xffffff;
  uStack_910 = 0;
  uStack_8f4 = 0xffffff;
  uStack_900 = 0;
  uVar6 = (**(code **)(*plStack_150 + 8))(plStack_150,0x18825);
  cVar2 = FUN_1416927d0(uVar6);
  uVar4 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*plStack_150 + 8))(plStack_150,0x18af6);
    cVar2 = FUN_1416927d0(uVar6);
    if (cVar2 != '\0') {
      uStack_238 = 2;
      uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e4b);
      uVar12 = (**(code **)(*plStack_150 + 8))(plStack_150,0x18e26);
      FUN_1416a8cb0(plStack_150);
      FUN_140003ca0(uVar6,uVar12);
      func_0x0001416a8c00(1);
      uStack_238 = 3;
      uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e4d);
      FUN_1416a8cb0(plStack_150);
      FUN_140003ca0(uVar6,uVar12);
      func_0x0001416a8c00(1);
      uStack_238 = 4;
      uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3b);
      uVar12 = (**(code **)(*plStack_150 + 8))(plStack_150,0x189cf);
      FUN_1416a8cb0(plStack_150);
      FUN_140003ca0(uVar6,uVar12);
      func_0x0001416a8c00(1);
      uStack_238 = 5;
      uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3d);
      FUN_1416a8cb0(plStack_150);
      FUN_140003ca0(uVar6,uVar12);
      func_0x0001416a8c00(1);
    }
  }
  else {
    uStack_238 = 1;
    if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1c8);
    }
    plStack_110 = plStack_4d0;
    plStack_f8 = plStack_150;
    puStack_1b0 = &UNK_14198655c;
    uStack_1a8 = 0;
    puStack_1b8 = ppuRam0000000142182d78;
    ppuRam0000000142182d78 = &puStack_1b8;
    plRam0000000142182d90 = plStack_150;
    uStack_47c = 0xffffff;
    dStack_488 = 0.0;
    uStack_46c = 0xffffff;
    dStack_478 = 0.0;
    uStack_45c = 0xffffff;
    dStack_468 = 0.0;
    uStack_44c = 0xffffff;
    dStack_458 = 0.0;
    uStack_43c = 0xffffff;
    dStack_448 = 0.0;
    uStack_42c = 0xffffff;
    dStack_438 = 0.0;
    uStack_41c = 0xffffff;
    dStack_428 = 0.0;
    uStack_40c = 0xffffff;
    dStack_418 = 0.0;
    uStack_3fc = 0xffffff;
    dStack_408 = 0.0;
    uStack_3ec = 0xffffff;
    dStack_3f8 = 0.0;
    uStack_3dc = 0xffffff;
    dStack_3e8 = 0.0;
    uStack_3cc = 0xffffff;
    uStack_3d8 = 0;
    uStack_3bc = 0xffffff;
    dStack_3c8 = 0.0;
    uStack_3ac = 0xffffff;
    uStack_3b8 = 0;
    uStack_39c = 0xffffff;
    uStack_3a8 = 0;
    uStack_38c = 0xffffff;
    uStack_398 = 0;
    uStack_37c = 0xffffff;
    uStack_388 = 0;
    uStack_36c = 0xffffff;
    uStack_378 = 0;
    uStack_35c = 0xffffff;
    uStack_368 = 0;
    uStack_34c = 0xffffff;
    uStack_358 = 0;
    uStack_33c = 0xffffff;
    uStack_348 = 0;
    uStack_32c = 0xffffff;
    uStack_338 = 0;
    uStack_31c = 0xffffff;
    uStack_328 = 0;
    uStack_30c = 0xffffff;
    uStack_318 = 0;
    uStack_2fc = 0xffffff;
    uStack_308 = 0;
    uStack_2ec = 0xffffff;
    uStack_2f8 = 0;
    uStack_2dc = 0xffffff;
    uStack_2e8 = 0;
    uStack_2cc = 0xffffff;
    uStack_2d8 = 0;
    uStack_2bc = 0xffffff;
    uStack_2c8 = 0;
    uStack_2ac = 0xffffff;
    uStack_2b8 = 0;
    uStack_4b0 = CONCAT44(0xffffff,(undefined4)uStack_4b0);
    dStack_4b8 = 0.0;
    uStack_260 = CONCAT44(0xffffff,(undefined4)uStack_260);
    dStack_268 = 0.0;
    uStack_250 = CONCAT44(0xffffff,(undefined4)uStack_250);
    dStack_258 = 0.0;
    uStack_2a0 = CONCAT44(0xffffff,(undefined4)uStack_2a0);
    dStack_2a8 = 0.0;
    uStack_514 = 0xffffff;
    dStack_520 = 0.0;
    uStack_67c = 0xffffff;
    uStack_688 = 0;
    uStack_64c = 0xffffff;
    uStack_658 = 0;
    uStack_1fc = 0xffffff;
    dStack_208 = 0.0;
    uStack_72c = 0xffffff;
    dStack_738 = 0.0;
    uStack_20c = 0xffffff;
    dStack_218 = 0.0;
    uStack_71c = 0xffffff;
    uStack_728 = 0;
    uStack_70c = 0xffffff;
    uStack_718 = 0;
    uStack_21c = 0xffffff;
    dStack_228 = 0.0;
    uStack_18c = 0xffffff;
    dStack_198 = 0.0;
    uStack_69c = 0xffffff;
    uStack_6a8 = 0;
    uStack_4bc = 0xffffff;
    dStack_4c8 = 0.0;
    uStack_504 = 0xffffff;
    dStack_510 = 0.0;
    uStack_4f4 = 0xffffff;
    dStack_500 = 0.0;
    uStack_49c = 0xffffff;
    dStack_4a8 = 0.0;
    uStack_68c = 0xffffff;
    uStack_698 = 0;
    uStack_28c = 0xffffff;
    uStack_298 = 0;
    uStack_8e4 = 0xffffff;
    uStack_8f0 = 0;
    uStack_48c = 0xffffff;
    uStack_498 = 0;
    uStack_8d4 = 0xffffff;
    uStack_8e0 = 0;
    uStack_6fc = 0xffffff;
    dStack_708 = 0.0;
    uStack_74c = 0xffffff;
    uStack_758 = 0;
    uStack_6ec = 0xffffff;
    dStack_6f8 = 0.0;
    uStack_73c = 0xffffff;
    uStack_748 = 0;
    uStack_8c4 = 0xffffff;
    uStack_8d0 = 0;
    uStack_8b4 = 0xffffff;
    uStack_8c0 = 0;
    uStack_8a4 = 0xffffff;
    uStack_8b0 = 0;
    uStack_894 = 0xffffff;
    uStack_8a0 = 0;
    uStack_884 = 0xffffff;
    uStack_890 = 0;
    uStack_874 = 0xffffff;
    uStack_880 = 0;
    uStack_63c = 0xffffff;
    dStack_648 = 0.0;
    uStack_62c = 0xffffff;
    dStack_638 = 0.0;
    uStack_864 = 0xffffff;
    uStack_870 = 0;
    uStack_854 = 0xffffff;
    uStack_860 = 0;
    uStack_168 = uStack_168 & 0xffffffff;
    uStack_170 = 0;
    uStack_178 = uStack_178 & 0xffffffff;
    uStack_180 = 0;
    uStack_1f0 = uStack_1f0 & 0xffffffff;
    uStack_1f8 = 0;
    uStack_1e0 = uStack_1e0 & 0xffffffff;
    uStack_1e8 = 0;
    uStack_280 = uStack_280 & 0xffffffff;
    uStack_288 = 0;
    uStack_270 = uStack_270 & 0xffffffff;
    uStack_278 = 0;
    uStack_620 = uStack_620 & 0xffffffff;
    uStack_628 = 0;
    uStack_6e0 = uStack_6e0 & 0xffffffff;
    uStack_6e8 = 0;
    uStack_1c0._0_4_ = 0;
    uStack_1c0._4_4_ = 5;
    uStack_1c8 = 0;
    FUN_1416ab750(uRam00000001420dc960);
    uStack_1a8 = 3;
    puVar7 = (undefined8 *)(**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    uVar6 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18afe);
    uStack_140 = (ulonglong)(uint)uStack_140;
    dStack_148 = 0.0;
    iVar3 = FUN_1416d9df0(uVar6,&dStack_148,uRam00000001420f6b08,0);
    uVar4 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
    if (iVar3 == 0) {
      uStack_1a8 = 5;
      if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_4b8);
      }
      uStack_4b0 = uStack_4b0 & 0xffffffff;
      dStack_4b8 = -4.0;
      if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_268);
      }
      uStack_260 = uStack_260 & 0xffffffff;
      dStack_268 = 0.0;
      if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_258);
      }
      uStack_250 = uStack_250 & 0xffffffff;
      dStack_258 = 0.0;
      if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_2a8);
      }
      uStack_2a0 = uStack_2a0 & 0xffffffff;
      dStack_2a8 = 0.0;
      if ((0x46U >> (uStack_514 & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_520);
      }
      uStack_514 = 0;
      dStack_520 = 0.0;
      if ((0x46U >> (uStack_67c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_688);
      }
      uStack_67c = 0;
      uStack_688 = 0;
      if ((0x46U >> (uStack_64c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_658);
      }
      uStack_64c = 0;
      uStack_658 = 0;
      iVar3 = func_0x0001416f82f0(plStack_f8,plStack_110,0x2b);
      if (0 < iVar3) {
        uStack_1a8 = 6;
        uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
        dStack_108 = 43.0;
        iVar3 = FUN_1416ab810(&dStack_148,&plStack_f8,&plStack_110,&dStack_108);
        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_108);
        }
        uVar12 = _UNK_1419841c0;
        uVar6 = _UNK_141982e78;
        dVar15 = _UNK_141982c40;
        dVar18 = _UNK_141981e30;
        if (0 < iVar3) {
          uVar4 = SUB84(_UNK_141982c40,0);
          uVar22 = (undefined4)_UNK_141985628;
          uVar25 = (undefined4)_UNK_141983d90;
          uVar20 = (undefined4)_UNK_141983800;
          uVar21 = (undefined4)_UNK_141981d18;
          uVar26 = (undefined4)_UNK_141986528;
          do {
            uStack_1a8 = 7;
            uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
            in_stack_fffffffffffff5f0 =
                 (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
            in_stack_fffffffffffff5e8 =
                 (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
            FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                          in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
            iVar3 = FUN_1416d9df0(uVar8,&dStack_208,uRam00000001420f6b08,1);
            if (-1 < iVar3) {
              uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
              pdVar9 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e33);
              uVar10 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18c5f);
              in_stack_fffffffffffff5f0 =
                   (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
              in_stack_fffffffffffff5e8 =
                   (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
              FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                            in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
              uStack_120 = pdVar9[1];
              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                dStack_128 = *pdVar9;
              }
              else {
                FUN_1402ec660(&dStack_128,pdVar9);
              }
              FUN_140001fe0(&dStack_128,uVar10);
              uStack_100 = (double)CONCAT44(uStack_1fc,uStack_200);
              if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
                dStack_108 = dStack_208;
              }
              else {
                FUN_1402ec660(&dStack_108,&dStack_208);
              }
              FUN_140003ca0(&dStack_108,&dStack_128);
              iVar3 = FUN_1416d9df0(uVar8,&dStack_108,uRam00000001420f6b08,1);
              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_108);
              }
              if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_128);
              }
              if (iVar3 != -2 && iVar3 < 1) {
                uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18782);
                uVar10 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e26);
                uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_110,uRam00000001420d58f8,0x80000000,&dStack_738,uVar27,uVar31)
                ;
                in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
                in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
                FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                uStack_154 = uStack_72c;
                uStack_158 = uStack_730;
                if ((0x46U >> (uStack_72c & 0x1f) & 1) == 0) {
                  dStack_160 = dStack_738;
                }
                else {
                  FUN_1402ec660(&dStack_160,&dStack_738);
                }
                FUN_140003ca0(&dStack_160,uVar8);
                uStack_120 = (double)CONCAT44(uStack_154,uStack_158);
                if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                  dStack_128 = dStack_160;
                }
                else {
                  FUN_1402ec660(&dStack_128,&dStack_160);
                }
                FUN_140003ca0(&dStack_128,uVar10);
                uStack_100 = uStack_120;
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                  dStack_108 = dStack_128;
                }
                else {
                  FUN_1402ec660(&dStack_108,&dStack_128);
                }
                FUN_140001c50(&dStack_108,0x10);
                iVar3 = FUN_1416d9df0(&dStack_108,&dStack_218,uRam00000001420f6b08,1);
                if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_108);
                }
                if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_128);
                }
                if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_160);
                }
                if (-1 < iVar3) {
                  uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                  uVar10 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                  in_stack_fffffffffffff5f0 =
                       (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                  in_stack_fffffffffffff5e8 =
                       (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                  FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                                in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                  uStack_120 = (double)CONCAT44(uStack_20c,uStack_210);
                  if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
                    dStack_128 = dStack_218;
                  }
                  else {
                    FUN_1402ec660(&dStack_128,&dStack_218);
                  }
                  FUN_140003ca0(&dStack_128,uVar10);
                  uStack_100 = uStack_120;
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) == 0) {
                    dStack_108 = dStack_128;
                  }
                  else {
                    FUN_1402ec660(&dStack_108,&dStack_128);
                  }
                  FUN_140001c50(&dStack_108,2);
                  iVar3 = FUN_1416d9df0(uVar8,&dStack_108,uRam00000001420f6b08,1);
                  if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_108);
                  }
                  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_128);
                  }
                  if (iVar3 != -2 && iVar3 < 1) {
                    uStack_1a8 = 9;
                    pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x189cf);
                    uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                    uStack_4e4 = 0;
                    uStack_4f0 = 0x4050000000000000;
                    FUN_140003e00(&uStack_4f0,uVar8);
                    FUN_140004520(&dStack_1d8,&uStack_4f0,_UNK_141983260);
                    uStack_154 = 0;
                    dStack_160 = 1.0;
                    FUN_140003ca0(&dStack_160,&dStack_1d8);
                    uStack_120 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      dStack_128 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&dStack_128,pdVar9);
                    }
                    FUN_140004620(&dStack_128,&dStack_160);
                    FUN_140009980(&dStack_108,&dStack_128,_UNK_141985238);
                    FUN_1400019a0(&uStack_728,&dStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_128);
                    }
                    if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_160);
                    }
                    if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_1d8);
                    }
                    if ((0x46U >> (uStack_4e4 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_4f0);
                    }
                    pdStack_188 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e26);
                    uStack_4e4 = 0;
                    uStack_4f0 = 0x4050000000000000;
                    FUN_140003e00(&uStack_4f0,uVar8);
                    FUN_140004520(&dStack_1d8,&uStack_4f0,dVar15);
                    pdVar9 = pdStack_188;
                    uStack_154 = 0;
                    dStack_160 = 1.0;
                    FUN_140003ca0(&dStack_160,&dStack_1d8);
                    uStack_120 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      dStack_128 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&dStack_128,pdVar9);
                    }
                    FUN_140004620(&dStack_128,&dStack_160);
                    FUN_140009980(&dStack_108,&dStack_128,_UNK_141985238);
                    FUN_1400019a0(&uStack_718,&dStack_108);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_108);
                    }
                    if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_128);
                    }
                    if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_160);
                    }
                    if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_1d8);
                    }
                    if ((0x46U >> (uStack_4e4 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_4f0);
                    }
                    uStack_1a8 = 10;
                    uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                    uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                    uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,uVar27,
                                  uVar31);
                    iVar3 = FUN_1416d9df0(uVar8,&dStack_218,uRam00000001420f6b08,1);
                    if ((iVar3 != -2) && (iVar3 < 0)) {
                      (**(code **)(*plStack_f8 + 8))(plStack_f8,0x189a2);
                      pdStack_188 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e26);
                      pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,uVar27,
                                    uVar31);
                      uStack_100 = pdVar9[1];
                      if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                        dStack_108 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&dStack_108,pdVar9);
                      }
                      FUN_140003ca0(&dStack_108,pdStack_188);
                      iVar3 = FUN_1416d9df0(&dStack_108,&dStack_218,uRam00000001420f6b08,1);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      if (-1 < iVar3) {
                        uStack_1a8 = 0xc;
                        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_170);
                        }
                        uStack_170 = 0;
                        uStack_168 = 0x500000000;
                        if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_180);
                        }
                        uStack_180 = 0;
                        uStack_178 = 0x500000000;
                        uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,uVar27
                                      ,uVar31);
                        FUN_1400019a0(&dStack_488,uVar8);
                        pdStack_618 = &dStack_488;
                        FUN_1400019a0(&dStack_478,&dStack_228);
                        pdStack_610 = &dStack_478;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar8 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                        pdVar11 = (double *)
                                  FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar8,
                                                &pdStack_618);
                        uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                        uStack_120 = pdVar11[1];
                        if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                          dStack_128 = *pdVar11;
                        }
                        else {
                          FUN_1402ec660(&dStack_128,pdVar11);
                        }
                        FUN_140003e00(&dStack_128,&dStack_208);
                        FUN_140004520(&dStack_108,&dStack_128,uVar6);
                        FUN_1400019a0(&dStack_468,&dStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_128);
                        }
                        pdStack_608 = &dStack_468;
                        in_stack_fffffffffffff5f0 = &pdStack_608;
                        ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4b0);
                        uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,ppdVar28,
                                              in_stack_fffffffffffff5f0);
                        FUN_1400019a0(&dStack_198,uVar8);
                        do {
joined_r0x0001402d5bda:
                          if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_170);
                          }
                          uStack_170 = 0;
                          uStack_168 = 0x500000000;
                          if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_180);
                          }
                          uStack_180 = 0;
                          uStack_178 = 0x500000000;
                          uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                          uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                          uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,
                                        uVar27,uVar31);
                          FUN_1400019a0(&dStack_488,uVar8);
                          pdStack_618 = &dStack_488;
                          FUN_1400019a0(&dStack_478,&dStack_228);
                          pdStack_610 = &dStack_478;
                          uVar27 = uVar27 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                                        uVar27,uVar31 & 0xffffffffffffff00);
                          uVar8 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                          pdVar11 = (double *)
                                    FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar8,
                                                  &pdStack_618);
                          uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          uStack_120 = pdVar11[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_128 = *pdVar11;
                          }
                          else {
                            FUN_1402ec660(&dStack_128,pdVar11);
                          }
                          FUN_140003e00(&dStack_128,&dStack_208);
                          FUN_140004520(&dStack_108,&dStack_128,uVar6);
                          FUN_1400019a0(&dStack_468,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                          if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_128);
                          }
                          pdStack_608 = &dStack_468;
                          in_stack_fffffffffffff5f0 = &pdStack_608;
                          ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4b0);
                          uVar10 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,ppdVar28,
                                                 in_stack_fffffffffffff5f0);
                          uVar8 = uRam00000001420f6b08;
                          iVar3 = FUN_1416d9df0(&dStack_198,uVar10,uRam00000001420f6b08,1);
                          if ((iVar3 == -2) || (0 < iVar3)) {
                            for (iVar3 = 0x20; 0 < iVar3; iVar3 = iVar3 + -1) {
                              uStack_1a8 = 0x13;
                              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_170);
                              }
                              uStack_170 = 0;
                              uStack_168 = 0x500000000;
                              if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_180);
                              }
                              uStack_180 = 0;
                              uStack_178 = 0x500000000;
                              if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1f8);
                              }
                              uStack_1f8 = 0;
                              uStack_1f0 = 0x500000000;
                              if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1e8);
                              }
                              uStack_1e8 = 0;
                              uStack_1e0 = 0x500000000;
                              if ((0x46U >> (uStack_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_288);
                              }
                              uStack_288 = 0;
                              uStack_280 = 0x500000000;
                              if ((0x46U >> (uStack_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_278);
                              }
                              uStack_278 = 0;
                              uStack_270 = 0x500000000;
                              pdVar9 = (double *)
                                       (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,
                                            uVar27,uVar31);
                              dVar14 = (double)FUN_1416cdc60(uVar22,_UNK_141982ef8);
                              if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_488);
                              }
                              uStack_47c = 0;
                              pdStack_618 = &dStack_488;
                              dStack_488 = dVar14;
                              FUN_140002730(&dStack_478,0x14217ee40);
                              pdStack_610 = &dStack_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_468);
                              }
                              uStack_45c = 0;
                              pdStack_608 = &dStack_468;
                              dStack_468 = dVar14;
                              FUN_140002730(&dStack_458,0x14217ee40);
                              pdStack_600 = &dStack_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_6a8,
                                            uVar27,uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&dStack_4c8,
                                            uVar27,uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&dStack_108,&uStack_6a8,1);
                              FUN_1400019a0(&dStack_448,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f8 = &dStack_448;
                              uStack_100._4_4_ = uStack_4bc;
                              if ((0x46U >> (uStack_4bc & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_4c8;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_4c8);
                              }
                              FUN_140001c50(&dStack_108,1);
                              FUN_1400019a0(&dStack_438,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f0 = &dStack_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_428);
                              }
                              dStack_428 = dVar14 + dVar15;
                              uStack_41c = 0;
                              pdStack_5e8 = &dStack_428;
                              dVar14 = (double)FUN_1416cdc60(0,_UNK_1419842b0);
                              if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_418);
                              }
                              uStack_40c = 0;
                              pdStack_5e0 = &dStack_418;
                              dStack_418 = dVar14;
                              FUN_140002730(&dStack_408,0x1420b2748);
                              pdStack_5d8 = &dStack_408;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar10,
                                                    &pdStack_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = uStack_21c;
                              if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_228;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_228);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&dStack_3f8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5d0 = &dStack_3f8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,2,uVar10,
                                                    &pdStack_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar9);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&dStack_3e8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5c8 = &dStack_3e8;
                              uVar8 = FUN_1416cd660(&uStack_1e8,2,&pdStack_5f8);
                              FUN_1400019a0(&uStack_3d8,uVar8);
                              puStack_5c0 = &uStack_3d8;
                              FUN_140002730(&dStack_3c8,0x1420b2738);
                              pdStack_5b8 = &dStack_3c8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420d9ff0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_288,1,uVar10,
                                                    &pdStack_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&dStack_108,uVar8,_UNK_141986538);
                              FUN_1400019a0(&uStack_3b8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              puStack_5b0 = &uStack_3b8;
                              in_stack_fffffffffffff5f0 = &pdStack_5e0;
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_278,2,
                                                    CONCAT44(uVar23,uRam00000001420da0c0),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&uStack_3a8,uVar8);
                              puStack_5a8 = &uStack_3a8;
                              FUN_140002730(&uStack_398,0x14217ee40);
                              puStack_5a0 = &uStack_398;
                              FUN_140002730(&uStack_388,0x14217ee40);
                              puStack_598 = &uStack_388;
                              FUN_140002730(&uStack_378,0x1420b2728);
                              puStack_590 = &uStack_378;
                              FUN_140002730(&uStack_368,0x14217ee40);
                              puStack_588 = &uStack_368;
                              FUN_140002730(&uStack_358,0x1420b2728);
                              puStack_580 = &uStack_358;
                              FUN_140002730(&uStack_348,0x1420b2758);
                              puStack_578 = &uStack_348;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_338);
                              }
                              uStack_32c = 0;
                              puStack_570 = &uStack_338;
                              uStack_338 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_328);
                              }
                              uStack_31c = 0;
                              puStack_568 = &uStack_328;
                              uStack_328 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_318);
                              }
                              uStack_30c = 0;
                              puStack_560 = &uStack_318;
                              uStack_318 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_308);
                              }
                              uStack_2fc = 0;
                              puStack_558 = &uStack_308;
                              uStack_308 = uVar8;
                              FUN_140002730(&uStack_2f8,0x14217ee40);
                              puStack_550 = &uStack_2f8;
                              FUN_140002730(&uStack_2e8,0x1420b2768);
                              puStack_548 = &uStack_2e8;
                              ppdVar28 = &pdStack_5d0;
                              FUN_140106850(plStack_f8,plStack_110,&uStack_170,0x12,ppdVar28);
                            }
                            uStack_1a8 = 0x17;
                            pdStack_188 = (double *)
                                          (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                            uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                            dStack_108 = 0.9;
                            FUN_140001fe0(pdStack_188,&dStack_108);
                            if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_108);
                            }
                            uStack_1a8 = 0x18;
                            if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_170);
                            }
                            uStack_170 = 0;
                            uStack_168 = 0x500000000;
                            if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_180);
                            }
                            uStack_180 = 0;
                            uStack_178 = 0x500000000;
                            FUN_140002730(&dStack_488,0x1420b2778);
                            pdStack_618 = &dStack_488;
                            FUN_140002730(&dStack_478,0x1420b2788);
                            pdStack_610 = &dStack_478;
                            FUN_140002730(&dStack_468,0x1420b2798);
                            pdStack_608 = &dStack_468;
                            FUN_140002730(&dStack_458,0x1420b27a8);
                            pdStack_600 = &dStack_458;
                            FUN_140002730(&dStack_448,0x1420b27b8);
                            pdStack_5f8 = &dStack_448;
                            uVar8 = FUN_1416cd660(&uStack_180,5,&pdStack_618);
                            FUN_1400019a0(&dStack_438,uVar8);
                            pdStack_5f0 = &dStack_438;
                            FUN_140002730(&dStack_428,0x1420b27c8);
                            pdStack_5e8 = &dStack_428;
                            FUN_140002730(&dStack_418,0x14217ee40);
                            pdStack_5e0 = &dStack_418;
                            dVar14 = (double)FUN_1416cdc60((int)_UNK_1419864f0,_UNK_1419864f8);
                            if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_408);
                            }
                            dStack_408 = dVar14 * _UNK_141983970;
                            uStack_3fc = 0;
                            pdStack_5d8 = &dStack_408;
                            in_XMM1_Qa = _UNK_141986508;
                            dVar14 = (double)FUN_1416cdc60((int)_UNK_141986500,_UNK_141986508);
                            if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3f8);
                            }
                            dStack_3f8 = dVar14 / _UNK_1419843c8;
                            uStack_3ec = 0;
                            pdStack_5d0 = &dStack_3f8;
                            dVar14 = (double)FUN_1416cdc30(uVar4);
                            if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3e8);
                            }
                            dStack_3e8 = dVar14 + _UNK_141986510;
                            uStack_3dc = 0;
                            pdStack_5c8 = &dStack_3e8;
                            in_stack_fffffffffffff5e8 = &pdStack_5f0;
                            FUN_1400d2410(plStack_f8,plStack_110,&uStack_170,6,
                                          in_stack_fffffffffffff5e8);
                            goto code_r0x0001402d8b79;
                          }
                          uStack_1a8 = 0xc;
                          uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                          dStack_108 = 0.0;
                          iVar3 = FUN_1416d9df0(&dStack_198,&dStack_108,uVar8,1);
                          if (-1 < iVar3) {
                            if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1f8);
                            }
                            uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            uStack_1f8 = 0;
                            uStack_1f0 = 0x500000000;
                            uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                            FUN_1400019a0(&dStack_458,uVar8);
                            pdStack_600 = &dStack_458;
                            in_stack_fffffffffffff5f0 = &pdStack_600;
                            ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4c0);
                            uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,1,ppdVar28,
                                                  in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&dStack_198,uVar8,uRam00000001420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              uStack_1a8 = 0xe;
                              if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1e8);
                              }
                              uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                              uStack_1e8 = 0;
                              uStack_1e0 = 0x500000000;
                              uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                              FUN_1400019a0(&dStack_448,uVar8);
                              pdStack_5f8 = &dStack_448;
                              pdStack_5f0 = &dStack_198;
                              FUN_140002730(&dStack_428,0x14217ee40);
                              pdStack_5e8 = &dStack_428;
                              plRam0000000142182d90 = (longlong *)0x480000;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da240);
                              pdVar11 = (double *)
                                        FUN_1416ab210(plStack_f8,plStack_110,&uStack_1e8,3,uVar10,
                                                      &pdStack_5f8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar11);
                              }
                              FUN_140003ca0(&dStack_108,&uStack_718);
                              dVar14 = dStack_198;
                              if ((uStack_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&dStack_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,0,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              uStack_1a8 = 0xf;
                              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_170);
                              }
                              uStack_170 = 0;
                              uStack_168 = 0x500000000;
                              FUN_1400019a0(&dStack_488,uVar8);
                              pdStack_618 = &dStack_488;
                              pdStack_610 = &dStack_198;
                              FUN_140002730(&dStack_468,0x1420b2728);
                              pdStack_608 = &dStack_468;
                              in_stack_fffffffffffff5f0 = &pdStack_618;
                              ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da240);
                              pdVar11 = (double *)
                                        FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,3,ppdVar28,
                                                      in_stack_fffffffffffff5f0);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar11);
                              }
                              FUN_140003ca0(&dStack_108,&uStack_718);
                              dVar14 = dStack_198;
                              if ((uStack_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&dStack_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,1,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                            }
                          }
                          switch(uStack_18c & 0xffffff) {
                          case 1:
                            dStack_198 = (double)FUN_1416940c0(&dStack_198);
                            dStack_198 = dStack_198 + dVar18;
                            uStack_18c = 0;
                            goto joined_r0x0001402d5bda;
                          default:
                            FUN_140001d70(&UNK_141981e6a,&dStack_198,&dStack_198);
                            break;
                          case 7:
                            dStack_198 = (double)CONCAT44(dStack_198._4_4_,dStack_198._0_4_ + 1);
                            goto joined_r0x0001402d5bda;
                          case 10:
                            goto code_r0x0001402d6038;
                          case 0xd:
                            uStack_18c = 0;
                          case 0:
                            dStack_198 = dStack_198 + dVar18;
                            goto joined_r0x0001402d5bda;
                          }
                        } while( true );
                      }
                    }
                    pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                    in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    iVar3 = FUN_1416d9df0(pdVar9,&dStack_218,uRam00000001420f6b08,1);
                    if (0 < iVar3) {
                      pdStack_188 = (double *)
                                    (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                      pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_100 = pdVar9[1];
                      if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                        dStack_108 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&dStack_108,pdVar9);
                      }
                      FUN_140003ca0(&dStack_108,pdStack_188);
                      iVar3 = FUN_1416d9df0(&dStack_108,&dStack_218,uRam00000001420f6b08,1);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      if (iVar3 != -2 && iVar3 < 1) {
                        uStack_1a8 = 0x1c;
                        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_170);
                        }
                        uStack_170 = 0;
                        uStack_168 = 0x500000000;
                        if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_180);
                        }
                        uStack_180 = 0;
                        uStack_178 = 0x500000000;
                        uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                        uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,uVar27
                                      ,uVar31);
                        FUN_1400019a0(&dStack_488,uVar8);
                        pdStack_618 = &dStack_488;
                        FUN_1400019a0(&dStack_478,&dStack_228);
                        pdStack_610 = &dStack_478;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar8 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                        pdVar11 = (double *)
                                  FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar8,
                                                &pdStack_618);
                        uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                        uStack_120 = pdVar11[1];
                        if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                          dStack_128 = *pdVar11;
                        }
                        else {
                          FUN_1402ec660(&dStack_128,pdVar11);
                        }
                        FUN_140003e00(&dStack_128,&dStack_208);
                        FUN_140004520(&dStack_108,&dStack_128,uVar6);
                        FUN_1400019a0(&dStack_468,&dStack_108);
                        if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_108);
                        }
                        if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_128);
                        }
                        pdStack_608 = &dStack_468;
                        in_stack_fffffffffffff5f0 = &pdStack_608;
                        ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4b0);
                        uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,ppdVar28,
                                              in_stack_fffffffffffff5f0);
                        FUN_1400019a0(&dStack_198,uVar8);
                        do {
joined_r0x0001402d6faa:
                          if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_170);
                          }
                          uStack_170 = 0;
                          uStack_168 = 0x500000000;
                          if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_180);
                          }
                          uStack_180 = 0;
                          uStack_178 = 0x500000000;
                          uVar8 = (**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                          uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                          uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,
                                        uVar27,uVar31);
                          FUN_1400019a0(&dStack_488,uVar8);
                          pdStack_618 = &dStack_488;
                          FUN_1400019a0(&dStack_478,&dStack_228);
                          pdStack_610 = &dStack_478;
                          uVar27 = uVar27 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                                        uVar27,uVar31 & 0xffffffffffffff00);
                          uVar8 = CONCAT44((int)(uVar27 >> 0x20),uRam00000001420da0c0);
                          pdVar11 = (double *)
                                    FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar8,
                                                  &pdStack_618);
                          uVar23 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          uStack_120 = pdVar11[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_128 = *pdVar11;
                          }
                          else {
                            FUN_1402ec660(&dStack_128,pdVar11);
                          }
                          FUN_140003e00(&dStack_128,&dStack_208);
                          FUN_140004520(&dStack_108,&dStack_128,uVar6);
                          FUN_1400019a0(&dStack_468,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                          if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_128);
                          }
                          pdStack_608 = &dStack_468;
                          in_stack_fffffffffffff5f0 = &pdStack_608;
                          ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4b0);
                          uVar10 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,ppdVar28,
                                                 in_stack_fffffffffffff5f0);
                          uVar8 = uRam00000001420f6b08;
                          iVar3 = FUN_1416d9df0(&dStack_198,uVar10,uRam00000001420f6b08,1);
                          if ((iVar3 == -2) || (0 < iVar3)) {
                            for (iVar3 = 0x20; 0 < iVar3; iVar3 = iVar3 + -1) {
                              uStack_1a8 = 0x23;
                              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_170);
                              }
                              uStack_170 = 0;
                              uStack_168 = 0x500000000;
                              if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_180);
                              }
                              uStack_180 = 0;
                              uStack_178 = 0x500000000;
                              if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1f8);
                              }
                              uStack_1f8 = 0;
                              uStack_1f0 = 0x500000000;
                              if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1e8);
                              }
                              uStack_1e8 = 0;
                              uStack_1e0 = 0x500000000;
                              if ((0x46U >> (uStack_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_288);
                              }
                              uStack_288 = 0;
                              uStack_280 = 0x500000000;
                              if ((0x46U >> (uStack_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_278);
                              }
                              uStack_278 = 0;
                              uStack_270 = 0x500000000;
                              pdVar9 = (double *)
                                       (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,
                                            uVar27,uVar31);
                              dVar14 = (double)FUN_1416cdc60(uVar22,_UNK_141982ef8);
                              if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_488);
                              }
                              uStack_47c = 0;
                              pdStack_618 = &dStack_488;
                              dStack_488 = dVar14;
                              FUN_140002730(&dStack_478,0x14217ee40);
                              pdStack_610 = &dStack_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_468);
                              }
                              uStack_45c = 0;
                              pdStack_608 = &dStack_468;
                              dStack_468 = dVar14;
                              FUN_140002730(&dStack_458,0x14217ee40);
                              pdStack_600 = &dStack_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_6a8,
                                            uVar27,uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&dStack_4c8,
                                            uVar27,uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&dStack_108,&uStack_6a8,1);
                              FUN_1400019a0(&dStack_448,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f8 = &dStack_448;
                              uStack_100._4_4_ = uStack_4bc;
                              if ((0x46U >> (uStack_4bc & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_4c8;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_4c8);
                              }
                              FUN_140001c50(&dStack_108,1);
                              FUN_1400019a0(&dStack_438,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f0 = &dStack_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_428);
                              }
                              dStack_428 = dVar14 + dVar15;
                              uStack_41c = 0;
                              pdStack_5e8 = &dStack_428;
                              dVar14 = (double)FUN_1416cdc60((int)_UNK_141986518,_UNK_141986520);
                              if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_418);
                              }
                              uStack_40c = 0;
                              pdStack_5e0 = &dStack_418;
                              dStack_418 = dVar14;
                              FUN_140002730(&dStack_408,0x1420b2748);
                              pdStack_5d8 = &dStack_408;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar10,
                                                    &pdStack_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = uStack_21c;
                              if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_228;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_228);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&dStack_3f8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5d0 = &dStack_3f8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,2,uVar10,
                                                    &pdStack_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar9);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&dStack_3e8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5c8 = &dStack_3e8;
                              uVar8 = FUN_1416cd660(&uStack_1e8,2,&pdStack_5f8);
                              FUN_1400019a0(&uStack_3d8,uVar8);
                              puStack_5c0 = &uStack_3d8;
                              FUN_140002730(&dStack_3c8,0x1420b2738);
                              pdStack_5b8 = &dStack_3c8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420d9ff0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_288,1,uVar10,
                                                    &pdStack_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&dStack_108,uVar8,_UNK_141986530);
                              FUN_1400019a0(&uStack_3b8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              puStack_5b0 = &uStack_3b8;
                              in_stack_fffffffffffff5f0 = &pdStack_5e0;
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_278,2,
                                                    CONCAT44(uVar23,uRam00000001420da0c0),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&uStack_3a8,uVar8);
                              puStack_5a8 = &uStack_3a8;
                              FUN_140002730(&uStack_398,0x14217ee40);
                              puStack_5a0 = &uStack_398;
                              FUN_140002730(&uStack_388,0x14217ee40);
                              puStack_598 = &uStack_388;
                              FUN_140002730(&uStack_378,0x1420b2728);
                              puStack_590 = &uStack_378;
                              FUN_140002730(&uStack_368,0x14217ee40);
                              puStack_588 = &uStack_368;
                              FUN_140002730(&uStack_358,0x1420b2728);
                              puStack_580 = &uStack_358;
                              FUN_140002730(&uStack_348,0x1420b2758);
                              puStack_578 = &uStack_348;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_338);
                              }
                              uStack_32c = 0;
                              puStack_570 = &uStack_338;
                              uStack_338 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_328);
                              }
                              uStack_31c = 0;
                              puStack_568 = &uStack_328;
                              uStack_328 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_318);
                              }
                              uStack_30c = 0;
                              puStack_560 = &uStack_318;
                              uStack_318 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_308);
                              }
                              uStack_2fc = 0;
                              puStack_558 = &uStack_308;
                              uStack_308 = uVar8;
                              FUN_140002730(&uStack_2f8,0x14217ee40);
                              puStack_550 = &uStack_2f8;
                              FUN_140002730(&uStack_2e8,0x1420b2768);
                              puStack_548 = &uStack_2e8;
                              ppdVar28 = &pdStack_5d0;
                              FUN_140106850(plStack_f8,plStack_110,&uStack_170,0x12,ppdVar28);
                            }
                            for (iVar3 = 0x10; 0 < iVar3; iVar3 = iVar3 + -1) {
                              uStack_1a8 = 0x28;
                              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_170);
                              }
                              uStack_170 = 0;
                              uStack_168 = 0x500000000;
                              if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_180);
                              }
                              uStack_180 = 0;
                              uStack_178 = 0x500000000;
                              if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1f8);
                              }
                              uStack_1f8 = 0;
                              uStack_1f0 = 0x500000000;
                              if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1e8);
                              }
                              uStack_1e8 = 0;
                              uStack_1e0 = 0x500000000;
                              if ((0x46U >> (uStack_280._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_288);
                              }
                              uStack_288 = 0;
                              uStack_280 = 0x500000000;
                              if ((0x46U >> (uStack_270._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_278);
                              }
                              uStack_278 = 0;
                              uStack_270 = 0x500000000;
                              if ((0x46U >> (uStack_620._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_628);
                              }
                              uStack_628 = 0;
                              uStack_620 = 0x500000000;
                              pdVar9 = (double *)
                                       (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                              uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                              uVar27 = (ulonglong)ppdVar28 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d58e8,0x80000000,&dStack_228,
                                            uVar27,uVar31);
                              dVar14 = (double)FUN_1416cdc60((int)_UNK_141983d70,uVar6);
                              if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_488);
                              }
                              uStack_47c = 0;
                              pdStack_618 = &dStack_488;
                              dStack_488 = dVar14;
                              FUN_140002730(&dStack_478,0x14217ee40);
                              pdStack_610 = &dStack_478;
                              dVar14 = (double)FUN_1416cdc60(uVar25,dVar15);
                              if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_468);
                              }
                              uStack_45c = 0;
                              pdStack_608 = &dStack_468;
                              dStack_468 = dVar14;
                              FUN_140002730(&dStack_458,0x14217ee40);
                              pdStack_600 = &dStack_458;
                              uVar31 = uVar31 & 0xffffffffffffff00;
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_f8,uRam00000001420d5a18,0x80000000,&uStack_6a8,
                                            uVar27,uVar31);
                              uVar27 = uVar27 & 0xffffffffffffff00;
                              FUN_1416cea80(plStack_110,uRam00000001420d5a18,0x80000000,&dStack_4c8,
                                            uVar27,uVar31 & 0xffffffffffffff00);
                              uVar23 = (undefined4)(uVar27 >> 0x20);
                              FUN_140017bd0(&dStack_108,&uStack_6a8,1);
                              FUN_1400019a0(&dStack_448,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f8 = &dStack_448;
                              uStack_100._4_4_ = uStack_4bc;
                              if ((0x46U >> (uStack_4bc & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_4c8;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_4c8);
                              }
                              FUN_140001c50(&dStack_108,1);
                              FUN_1400019a0(&dStack_438,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5f0 = &dStack_438;
                              dVar14 = (double)FUN_1416cdc30(uVar4);
                              if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_428);
                              }
                              dStack_428 = dVar14 + dVar15;
                              uStack_41c = 0;
                              pdStack_5e8 = &dStack_428;
                              dVar14 = (double)FUN_1416cdc60((int)_UNK_141986518,_UNK_141986520);
                              if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_418);
                              }
                              uStack_40c = 0;
                              pdStack_5e0 = &dStack_418;
                              dStack_418 = dVar14;
                              FUN_140002730(&dStack_408,0x1420b2748);
                              pdStack_5d8 = &dStack_408;
                              FUN_140002730(&dStack_3f8,0x1420b2748);
                              pdStack_5d0 = &dStack_3f8;
                              dVar14 = (double)FUN_1416cdc60(uVar26,dVar18);
                              if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_3e8);
                              }
                              uStack_3dc = 0;
                              pdStack_5c8 = &dStack_3e8;
                              dStack_3e8 = dVar14;
                              FUN_140002730(&uStack_3d8,0x1420b2728);
                              puStack_5c0 = &uStack_3d8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,uVar10,
                                                    &pdStack_618);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100._4_4_ = uStack_21c;
                              if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
                                dStack_108 = dStack_228;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,&dStack_228);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&dStack_3c8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              pdStack_5b8 = &dStack_3c8;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,2,uVar10,
                                                    &pdStack_608);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar9[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar9);
                              }
                              FUN_140003ca0(&dStack_108,uVar8);
                              FUN_1400019a0(&uStack_3b8,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              puStack_5b0 = &uStack_3b8;
                              uVar8 = FUN_1416cd660(&uStack_1e8,2,&pdStack_5f8);
                              FUN_1400019a0(&uStack_3a8,uVar8);
                              puStack_5a8 = &uStack_3a8;
                              FUN_140002730(&uStack_398,0x1420b2738);
                              puStack_5a0 = &uStack_398;
                              uVar10 = CONCAT44(uVar23,uRam00000001420d9ff0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_288,1,uVar10,
                                                    &pdStack_5e8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_140004520(&dStack_108,uVar8,_UNK_141985538);
                              FUN_1400019a0(&uStack_388,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              puStack_598 = &uStack_388;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da0c0);
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_278,3,uVar10,
                                                    &pdStack_5e0);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              FUN_1400019a0(&uStack_378,uVar8);
                              puStack_590 = &uStack_378;
                              FUN_140002730(&uStack_368,0x14217ee40);
                              puStack_588 = &uStack_368;
                              FUN_140002730(&uStack_358,0x14217ee40);
                              puStack_580 = &uStack_358;
                              FUN_140002730(&uStack_348,0x1420b2728);
                              puStack_578 = &uStack_348;
                              FUN_140002730(&uStack_338,0x14217ee40);
                              puStack_570 = &uStack_338;
                              FUN_140002730(&uStack_328,0x1420b2728);
                              puStack_568 = &uStack_328;
                              FUN_140002730(&uStack_318,0x1420b2758);
                              puStack_560 = &uStack_318;
                              uVar8 = FUN_1416cd770(1);
                              if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_308);
                              }
                              uStack_2fc = 0;
                              puStack_558 = &uStack_308;
                              uStack_308 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar20,dVar18);
                              if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_2f8);
                              }
                              uStack_2ec = 0;
                              puStack_550 = &uStack_2f8;
                              uStack_2f8 = uVar8;
                              uVar8 = FUN_1416cdc60(uVar21,uVar12);
                              if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_2e8);
                              }
                              uStack_2dc = 0;
                              puStack_548 = &uStack_2e8;
                              in_stack_fffffffffffff5f0 = &pdStack_5c8;
                              uStack_2e8 = uVar8;
                              uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_628,2,
                                                    CONCAT44(uVar23,uRam00000001420da0c0),
                                                    in_stack_fffffffffffff5f0);
                              FUN_1400019a0(&uStack_2d8,uVar8);
                              puStack_540 = &uStack_2d8;
                              FUN_140002730(&uStack_2c8,0x14217ee40);
                              puStack_538 = &uStack_2c8;
                              FUN_140002730(&uStack_2b8,0x1420b2768);
                              puStack_530 = &uStack_2b8;
                              ppdVar28 = &pdStack_5b8;
                              FUN_140106850(plStack_f8,plStack_110,&uStack_170,0x12,ppdVar28);
                            }
                            uStack_1a8 = 0x2c;
                            if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_170);
                            }
                            uStack_170 = 0;
                            uStack_168 = 0x500000000;
                            if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_180);
                            }
                            uStack_180 = 0;
                            uStack_178 = 0x500000000;
                            FUN_140002730(&dStack_488,0x1420b2778);
                            pdStack_618 = &dStack_488;
                            FUN_140002730(&dStack_478,0x1420b2788);
                            pdStack_610 = &dStack_478;
                            FUN_140002730(&dStack_468,0x1420b2798);
                            pdStack_608 = &dStack_468;
                            FUN_140002730(&dStack_458,0x1420b27a8);
                            pdStack_600 = &dStack_458;
                            FUN_140002730(&dStack_448,0x1420b27b8);
                            pdStack_5f8 = &dStack_448;
                            uVar8 = FUN_1416cd660(&uStack_180,5,&pdStack_618);
                            FUN_1400019a0(&dStack_438,uVar8);
                            pdStack_5f0 = &dStack_438;
                            FUN_140002730(&dStack_428,0x1420b27c8);
                            pdStack_5e8 = &dStack_428;
                            FUN_140002730(&dStack_418,0x14217ee40);
                            pdStack_5e0 = &dStack_418;
                            dVar14 = (double)FUN_1416cdc60((int)_UNK_1419864f0,_UNK_1419864f8);
                            if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_408);
                            }
                            dStack_408 = dVar14 / _UNK_141983970;
                            uStack_3fc = 0;
                            pdStack_5d8 = &dStack_408;
                            in_XMM1_Qa = _UNK_141986508;
                            dVar14 = (double)FUN_1416cdc60((int)_UNK_141986500,_UNK_141986508);
                            if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3f8);
                            }
                            dStack_3f8 = dVar14 / _UNK_1419843c8;
                            uStack_3ec = 0;
                            pdStack_5d0 = &dStack_3f8;
                            dVar14 = (double)FUN_1416cdc30(uVar4);
                            if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_3e8);
                            }
                            dStack_3e8 = dVar14 + _UNK_141986510;
                            uStack_3dc = 0;
                            pdStack_5c8 = &dStack_3e8;
                            in_stack_fffffffffffff5e8 = &pdStack_5f0;
                            FUN_1400d2410(plStack_f8,plStack_110,&uStack_170,6,
                                          in_stack_fffffffffffff5e8);
                            break;
                          }
                          uStack_1a8 = 0x1c;
                          uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                          dStack_108 = 0.0;
                          iVar3 = FUN_1416d9df0(&dStack_198,&dStack_108,uVar8,1);
                          if (-1 < iVar3) {
                            if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_1f8);
                            }
                            uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                            uStack_1f8 = 0;
                            uStack_1f0 = 0x500000000;
                            uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                            FUN_1400019a0(&dStack_458,uVar8);
                            pdStack_600 = &dStack_458;
                            in_stack_fffffffffffff5f0 = &pdStack_600;
                            ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da4c0);
                            uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,1,ppdVar28,
                                                  in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&dStack_198,uVar8,uRam00000001420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              uStack_1a8 = 0x1e;
                              if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_1e8);
                              }
                              uVar23 = (undefined4)((ulonglong)ppdVar28 >> 0x20);
                              uStack_1e8 = 0;
                              uStack_1e0 = 0x500000000;
                              uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                              FUN_1400019a0(&dStack_448,uVar8);
                              pdStack_5f8 = &dStack_448;
                              pdStack_5f0 = &dStack_198;
                              FUN_140002730(&dStack_428,0x14217ee40);
                              pdStack_5e8 = &dStack_428;
                              plRam0000000142182d90 = (longlong *)0x480000;
                              uVar10 = CONCAT44(uVar23,uRam00000001420da240);
                              pdVar11 = (double *)
                                        FUN_1416ab210(plStack_f8,plStack_110,&uStack_1e8,3,uVar10,
                                                      &pdStack_5f8);
                              uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar11);
                              }
                              FUN_140003ca0(&dStack_108,&uStack_718);
                              dVar14 = dStack_198;
                              if ((uStack_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&dStack_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,0,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                              uStack_1a8 = 0x1f;
                              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_170);
                              }
                              uStack_170 = 0;
                              uStack_168 = 0x500000000;
                              FUN_1400019a0(&dStack_488,uVar8);
                              pdStack_618 = &dStack_488;
                              pdStack_610 = &dStack_198;
                              FUN_140002730(&dStack_468,0x1420b2728);
                              pdStack_608 = &dStack_468;
                              in_stack_fffffffffffff5f0 = &pdStack_618;
                              ppdVar28 = (double **)CONCAT44(uVar23,uRam00000001420da240);
                              pdVar11 = (double *)
                                        FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,3,ppdVar28,
                                                      in_stack_fffffffffffff5f0);
                              uStack_100 = pdVar11[1];
                              if ((0x46U >> (*(uint *)((longlong)pdVar11 + 0xc) & 0x1f) & 1) == 0) {
                                dStack_108 = *pdVar11;
                              }
                              else {
                                FUN_1402ec660(&dStack_108,pdVar11);
                              }
                              FUN_140003ca0(&dStack_108,&uStack_718);
                              dVar14 = dStack_198;
                              if ((uStack_18c & 0xffffff) != 0) {
                                dVar14 = (double)FUN_1416940c0(&dStack_198);
                              }
                              FUN_1416cd560(uVar8,(longlong)dVar14,1,&dStack_108);
                              if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_108);
                              }
                            }
                          }
                          switch(uStack_18c & 0xffffff) {
                          case 1:
                            dStack_198 = (double)FUN_1416940c0(&dStack_198);
                            dStack_198 = dStack_198 + dVar18;
                            uStack_18c = 0;
                            goto joined_r0x0001402d6faa;
                          default:
                            FUN_140001d70(&UNK_141981e6a,&dStack_198,&dStack_198);
                            break;
                          case 7:
                            dStack_198 = (double)CONCAT44(dStack_198._4_4_,dStack_198._0_4_ + 1);
                            goto joined_r0x0001402d6faa;
                          case 10:
                            goto code_r0x0001402d7408;
                          case 0xd:
                            uStack_18c = 0;
                          case 0:
                            dStack_198 = dStack_198 + dVar18;
                            goto joined_r0x0001402d6faa;
                          }
                        } while( true );
                      }
                    }
code_r0x0001402d8b79:
                    in_stack_fffffffffffff5f0 =
                         (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 =
                         (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    uStack_100 = pdVar9[1];
                    if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                      dStack_108 = *pdVar9;
                    }
                    else {
                      FUN_1402ec660(&dStack_108,pdVar9);
                    }
                    FUN_140003ca0(&dStack_108,pdStack_188);
                    iVar3 = FUN_1416d9df0(&dStack_108,&dStack_218,uRam00000001420f6b08,1);
                    if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_108);
                    }
                    if (-1 < iVar3) {
                      uStack_1a8 = 0x30;
                      uVar8 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                      (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                      (**(code **)(*plStack_110 + 8))(plStack_110,0x18e4d);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      dStack_108 = 0.875;
                      FUN_140001fe0(uVar8,&dStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      uStack_1a8 = 0x31;
                      uVar8 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x18e26);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      dStack_108 = 0.85;
                      FUN_140001fe0(uVar8,&dStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      uStack_1a8 = 0x32;
                      if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_170);
                      }
                      uStack_170 = 0;
                      uStack_168 = 0x500000000;
                      uVar8 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                      pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e3b);
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,uVar27,
                                    (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      uVar23 = (undefined4)(uVar27 >> 0x20);
                      uStack_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      uStack_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&dStack_160,pdVar9);
                      }
                      FUN_140003ca0(&dStack_160,uVar8);
                      uStack_120 = (double)CONCAT44(uStack_154,uStack_158);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_128 = dStack_160;
                      }
                      else {
                        FUN_1402ec660(&dStack_128,&dStack_160);
                      }
                      FUN_140003e00(&dStack_128,&dStack_208);
                      FUN_140004520(&dStack_108,&dStack_128,uVar6);
                      FUN_1400019a0(&dStack_488,&dStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_128);
                      }
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_160);
                      }
                      pdStack_618 = &dStack_488;
                      ppdVar28 = &pdStack_618;
                      uVar27 = CONCAT44(uVar23,uRam00000001420da4b0);
                      uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,uVar27,ppdVar28);
                      FUN_1400019a0(&dStack_510,uVar8);
                      if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_180);
                      }
                      uStack_180 = 0;
                      uStack_178 = 0x500000000;
                      uVar8 = (**(code **)(*plStack_110 + 0x10))(plStack_110,0x189cf);
                      pdVar9 = (double *)(**(code **)(*plStack_110 + 8))(plStack_110,0x18e3d);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,uVar27,
                                    (ulonglong)ppdVar28 & 0xffffffffffffff00);
                      uVar23 = (undefined4)(uVar27 >> 0x20);
                      uStack_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      uStack_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&dStack_160,pdVar9);
                      }
                      FUN_140003ca0(&dStack_160,uVar8);
                      uStack_120 = (double)CONCAT44(uStack_154,uStack_158);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_128 = dStack_160;
                      }
                      else {
                        FUN_1402ec660(&dStack_128,&dStack_160);
                      }
                      FUN_140003e00(&dStack_128,&dStack_208);
                      FUN_140004520(&dStack_108,&dStack_128,uVar6);
                      FUN_1400019a0(&dStack_478,&dStack_108);
                      if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_108);
                      }
                      if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_128);
                      }
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_160);
                      }
                      pdStack_610 = &dStack_478;
                      in_stack_fffffffffffff5f0 = &pdStack_610;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,uRam00000001420da4b0);
                      uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,1,
                                            in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      FUN_1400019a0(&dStack_500,uVar8);
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      dStack_108 = 0.0;
                      uVar23 = (undefined4)uRam00000001420f6b08;
                      uVar24 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                      iVar3 = FUN_1416d9df0(&dStack_510,&dStack_108,uRam00000001420f6b08,1);
                      if (-1 < iVar3) {
                        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_170);
                        }
                        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        uStack_170 = 0;
                        uStack_168 = 0x500000000;
                        uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                        FUN_1400019a0(&dStack_488,uVar8);
                        pdStack_618 = &dStack_488;
                        in_stack_fffffffffffff5f0 = &pdStack_618;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,uRam00000001420da4c0)
                        ;
                        uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,
                                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        uVar23 = (undefined4)uRam00000001420f6b08;
                        uVar24 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                        iVar3 = FUN_1416d9df0(&dStack_510,uVar8,uRam00000001420f6b08,1);
                        if ((iVar3 != -2) && (iVar3 < 0)) {
                          uStack_1a8 = 0x34;
                          if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_180);
                          }
                          uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                          uStack_180 = 0;
                          uStack_178 = 0x500000000;
                          uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                          FUN_1400019a0(&dStack_478,uVar8);
                          pdStack_610 = &dStack_478;
                          pdStack_608 = &dStack_510;
                          FUN_140002730(&dStack_458,0x14217ee40);
                          pdStack_600 = &dStack_458;
                          plRam0000000142182d90 = (longlong *)0x480000;
                          uVar10 = CONCAT44(uVar23,uRam00000001420da240);
                          pdVar9 = (double *)
                                   FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,3,uVar10,
                                                 &pdStack_610);
                          uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&dStack_108,pdVar9);
                          }
                          FUN_140003ca0(&dStack_108,&uStack_728);
                          dVar14 = dStack_510;
                          if ((uStack_504 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&dStack_510);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,0,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                          uStack_1a8 = 0x35;
                          if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_170);
                          }
                          uStack_170 = 0;
                          uStack_168 = 0x500000000;
                          FUN_1400019a0(&dStack_488,uVar8);
                          pdStack_618 = &dStack_488;
                          pdStack_610 = &dStack_510;
                          FUN_140002730(&dStack_468,0x1420b2728);
                          pdStack_608 = &dStack_468;
                          in_stack_fffffffffffff5f0 = &pdStack_618;
                          in_stack_fffffffffffff5e8 =
                               (double **)CONCAT44(uVar23,uRam00000001420da240);
                          pdVar9 = (double *)
                                   FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,3,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&dStack_108,pdVar9);
                          }
                          FUN_140003ca0(&dStack_108,&uStack_728);
                          dVar14 = dStack_510;
                          if ((uStack_504 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&dStack_510);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,1,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                          uVar23 = (undefined4)uRam00000001420f6b08;
                          uVar24 = (undefined4)((ulonglong)uRam00000001420f6b08 >> 0x20);
                        }
                      }
                      uStack_100 = (double)((ulonglong)uStack_100 & 0xffffffff);
                      dStack_108 = 0.0;
                      iVar3 = FUN_1416d9df0(&dStack_500,&dStack_108,CONCAT44(uVar24,uVar23),1);
                      if (-1 < iVar3) {
                        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_170);
                        }
                        uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        uStack_170 = 0;
                        uStack_168 = 0x500000000;
                        uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                        FUN_1400019a0(&dStack_488,uVar8);
                        pdStack_618 = &dStack_488;
                        in_stack_fffffffffffff5f0 = &pdStack_618;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar23,uRam00000001420da4c0)
                        ;
                        uVar8 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,
                                              in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        iVar3 = FUN_1416d9df0(&dStack_500,uVar8,uRam00000001420f6b08,1);
                        if ((iVar3 != -2) && (iVar3 < 0)) {
                          uStack_1a8 = 0x38;
                          if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_180);
                          }
                          uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                          uStack_180 = 0;
                          uStack_178 = 0x500000000;
                          uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bcb);
                          FUN_1400019a0(&dStack_478,uVar8);
                          pdStack_610 = &dStack_478;
                          pdStack_608 = &dStack_500;
                          FUN_140002730(&dStack_458,0x14217ee40);
                          pdStack_600 = &dStack_458;
                          uVar10 = CONCAT44(uVar23,uRam00000001420da240);
                          pdVar9 = (double *)
                                   FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,3,uVar10,
                                                 &pdStack_610);
                          uVar23 = (undefined4)((ulonglong)uVar10 >> 0x20);
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&dStack_108,pdVar9);
                          }
                          FUN_140003e00(&dStack_108,&uStack_728);
                          dVar14 = dStack_500;
                          if ((uStack_4f4 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&dStack_500);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,0,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                          uStack_1a8 = 0x39;
                          if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_170);
                          }
                          uStack_170 = 0;
                          uStack_168 = 0x500000000;
                          FUN_1400019a0(&dStack_488,uVar8);
                          pdStack_618 = &dStack_488;
                          pdStack_610 = &dStack_500;
                          FUN_140002730(&dStack_468,0x1420b2728);
                          pdStack_608 = &dStack_468;
                          in_stack_fffffffffffff5f0 = &pdStack_618;
                          in_stack_fffffffffffff5e8 =
                               (double **)CONCAT44(uVar23,uRam00000001420da240);
                          pdVar9 = (double *)
                                   FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,3,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          uStack_100 = pdVar9[1];
                          if ((0x46U >> (*(uint *)((longlong)pdVar9 + 0xc) & 0x1f) & 1) == 0) {
                            dStack_108 = *pdVar9;
                          }
                          else {
                            FUN_1402ec660(&dStack_108,pdVar9);
                          }
                          FUN_140003e00(&dStack_108,&uStack_728);
                          dVar14 = dStack_500;
                          if ((uStack_4f4 & 0xffffff) != 0) {
                            dVar14 = (double)FUN_1416940c0(&dStack_500);
                          }
                          FUN_1416cd560(uVar8,(longlong)dVar14,1,&dStack_108);
                          if ((0x46U >> (uStack_100._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_108);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            cVar2 = func_0x0001416abe60(&dStack_148,&plStack_f8,&plStack_110);
          } while (cVar2 != '\0');
        }
        FUN_1416ab620(&dStack_148,&plStack_f8,&plStack_110);
        if (lStack_138 != 0) {
          func_0x000141695b90();
          lStack_138 = 0;
        }
      }
      uStack_1a8 = 0x3f;
      if ((0x46U >> (uStack_49c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_4a8);
      }
      uVar20 = _UNK_141981f80;
      uVar6 = _UNK_141981ea8;
      dVar18 = _UNK_141981e30;
      uStack_49c = 0;
      dStack_4a8 = 0.0;
      while( true ) {
        ppdVar28 = &pdStack_618;
        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_170);
        }
        uStack_170 = 0;
        uStack_168 = 0x500000000;
        dStack_108 = 0.0;
        uStack_100 = 0.0;
        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
        FUN_1416d0010(0x4f,0x18826,0x80000000,&dStack_108,uVar27,
                      (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar27 >> 0x20);
        FUN_1400019a0(&dStack_488,&dStack_108);
        uVar27 = CONCAT44(uVar4,uRam00000001420da4d0);
        in_stack_fffffffffffff5f0 = ppdVar28;
        pdStack_618 = &dStack_488;
        uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,uVar27,ppdVar28);
        iVar3 = FUN_1416d9df0(&dStack_4a8,uVar12,uRam00000001420f6b08,1);
        uVar4 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        uStack_1a8 = 0x40;
        dStack_128 = 0.0;
        uStack_120 = 0.0;
        uVar4 = FUN_141693b30(&dStack_4a8);
        in_stack_fffffffffffff5f0 =
             (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
        in_stack_fffffffffffff5e8 = (double **)(uVar27 & 0xffffffffffffff00);
        FUN_1416d0010(0x4f,0x18826,uVar4,&dStack_128,in_stack_fffffffffffff5e8,
                      in_stack_fffffffffffff5f0);
        FUN_1400019a0(&dStack_4b8,&dStack_128);
        dVar15 = dStack_4b8;
        if ((uStack_4b0 & 0xffffff00000000) != 0) {
          dVar15 = (double)FUN_1416940c0(&dStack_4b8);
        }
        cVar2 = FUN_1416f8280(plStack_f8,plStack_110,(longlong)dVar15);
        if (cVar2 != '\0') {
          uStack_1a8 = 0x41;
          in_stack_fffffffffffff5f0 =
               (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
          in_stack_fffffffffffff5e8 =
               (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
          FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,&uStack_698,
                        in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
          iVar3 = FUN_1416d9df0(&dStack_4b8,&uStack_698,uRam00000001420f6b08,0);
          if (iVar3 != 0) {
            FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
            uStack_140 = uStack_140 & 0xffffffff;
            dStack_148 = 65.0;
            iVar3 = FUN_1416d9df0(&uStack_298,&dStack_148,uRam00000001420f6b08,0);
            if (iVar3 != 0) {
              uStack_1a8 = 0x42;
              if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_170);
              }
              uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
              uStack_170 = 0;
              uStack_168 = 0x500000000;
              FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
              FUN_1400019a0(&dStack_488,&uStack_298);
              pdStack_618 = &dStack_488;
              FUN_140002730(&dStack_478,0x1420b27d8);
              pdStack_610 = &dStack_478;
              in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,uRam00000001420da330);
              uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,2,in_stack_fffffffffffff5e8,
                                     ppdVar28);
              uStack_140 = uStack_140 & 0xffffffff;
              dStack_148 = 1.0;
              iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,0);
              in_stack_fffffffffffff5f0 = ppdVar28;
              if (iVar3 == 0) {
                uStack_1a8 = 0x44;
                in_stack_fffffffffffff5f0 = (double **)((ulonglong)ppdVar28 & 0xffffffffffffff00);
                in_stack_fffffffffffff5e8 =
                     (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                FUN_1416cfeb0(&dStack_4b8,0x18ccd,0x80000000,&uStack_8f0,in_stack_fffffffffffff5e8,
                              in_stack_fffffffffffff5f0);
                uStack_140 = uStack_140 & 0xffffffff;
                dStack_148 = 1.0;
                iVar3 = FUN_1416d9df0(&uStack_8f0,&dStack_148,uRam00000001420f6b08,0);
                if (iVar3 == 0) {
                  FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                  uStack_140 = uStack_140 & 0xffffffff;
                  dStack_148 = 64.0;
                  iVar3 = FUN_1416d9df0(&uStack_298,&dStack_148,uRam00000001420f6b08,0);
                  if (iVar3 == 0) {
code_r0x0001402d9e87:
                    uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18bae);
                    uStack_140 = uStack_140 & 0xffffffff;
                    dStack_148 = 1.0;
                    iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,0);
                    if (iVar3 != 0) goto code_r0x0001402d9ed6;
code_r0x0001402da073:
                    in_stack_fffffffffffff5f0 =
                         (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                    in_stack_fffffffffffff5e8 =
                         (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                    FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,
                                  in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    uStack_140 = uStack_140 & 0xffffffff;
                    dStack_148 = 64.0;
                    iVar3 = FUN_1416d9df0(&uStack_498,&dStack_148,uRam00000001420f6b08,0);
                    if (iVar3 == 0) {
code_r0x0001402da230:
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cfeb0(&dStack_4b8,0x18bae,0x80000000,&uStack_8e0,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      dStack_148 = 1.0;
                      iVar3 = FUN_1416d9df0(&uStack_8e0,&dStack_148,uRam00000001420f6b08,0);
                      if (iVar3 != 0) goto code_r0x0001402da295;
code_r0x0001402da462:
                      if ((0x46U >> (uStack_270._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_278);
                      }
                      uStack_278 = 0;
                      uStack_270 = 0x500000000;
                      if ((0x46U >> (uStack_620._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_628);
                      }
                      uStack_628 = 0;
                      uStack_620 = 0x500000000;
                      if ((0x46U >> (uStack_6e0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_6e8);
                      }
                      uStack_6e8 = 0;
                      uStack_6e0 = 0x500000000;
                      pdStack_188 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x189cf);
                      uStack_230 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e26);
                      uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18d7b);
                      uVar8 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18d7a);
                      uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,uVar27,
                                    uVar31);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,uVar27,
                                    uVar31);
                      FUN_1416cfc30(&dStack_4b8,uRam00000001420d58e8,0x80000000,&dStack_708);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_4b8,0x189cf,0x80000000,&uStack_758,uVar27,uVar31);
                      FUN_1416cfc30(&dStack_4b8,uRam00000001420d58f8,0x80000000,&dStack_6f8);
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_4b8,0x18e26,0x80000000,&uStack_748,uVar27,uVar31);
                      uStack_140._4_4_ = uStack_1fc;
                      if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
                        dStack_148 = dStack_208;
                      }
                      else {
                        FUN_1402ec660(&dStack_148,&dStack_208);
                      }
                      FUN_140003ca0(&dStack_148,pdStack_188);
                      FUN_1400019a0(&dStack_3e8,&dStack_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_148);
                      }
                      pdStack_5c8 = &dStack_3e8;
                      uStack_140._4_4_ = uStack_20c;
                      if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
                        dStack_148 = dStack_218;
                      }
                      else {
                        FUN_1402ec660(&dStack_148,&dStack_218);
                      }
                      FUN_140003ca0(&dStack_148,uStack_230);
                      FUN_1400019a0(&uStack_3d8,&dStack_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_148);
                      }
                      puStack_5c0 = &uStack_3d8;
                      uStack_140._4_4_ = uStack_6fc;
                      if ((0x46U >> (uStack_6fc & 0x1f) & 1) == 0) {
                        dStack_148 = dStack_708;
                      }
                      else {
                        FUN_1402ec660(&dStack_148,&dStack_708);
                      }
                      FUN_140003ca0(&dStack_148,&uStack_758);
                      FUN_1400019a0(&dStack_3c8,&dStack_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_148);
                      }
                      pdStack_5b8 = &dStack_3c8;
                      uStack_140._4_4_ = uStack_6ec;
                      if ((0x46U >> (uStack_6ec & 0x1f) & 1) == 0) {
                        dStack_148 = dStack_6f8;
                      }
                      else {
                        FUN_1402ec660(&dStack_148,&dStack_6f8);
                      }
                      FUN_140003ca0(&dStack_148,&uStack_748);
                      FUN_1400019a0(&uStack_3b8,&dStack_148);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_148);
                      }
                      puStack_5b0 = &uStack_3b8;
                      FUN_1400019a0(&uStack_3a8,uVar12);
                      puStack_5a8 = &uStack_3a8;
                      FUN_1400019a0(&uStack_398,uVar8);
                      puStack_5a0 = &uStack_398;
                      uVar31 = uVar31 & 0xffffffffffffff00;
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_4b8,0x18d7b,0x80000000,&uStack_8d0,uVar27,uVar31);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      FUN_1416cfeb0(&dStack_4b8,0x18d7a,0x80000000,&uStack_8c0,uVar27,
                                    uVar31 & 0xffffffffffffff00);
                      uVar4 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&uStack_388,&uStack_8d0);
                      puStack_598 = &uStack_388;
                      FUN_1400019a0(&uStack_378,&uStack_8c0);
                      puStack_590 = &uStack_378;
                      uVar12 = FUN_1416cd900(&uStack_6e8,2,&puStack_598);
                      pdVar9 = (double *)FUN_1416cd900(&uStack_628,2,&puStack_5a8);
                      uStack_154 = *(uint *)((longlong)pdVar9 + 0xc);
                      uStack_158 = *(undefined4 *)(pdVar9 + 1);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_160 = *pdVar9;
                      }
                      else {
                        FUN_1402ec660(&dStack_160,pdVar9);
                      }
                      FUN_140003ca0(&dStack_160,uVar12);
                      uStack_140 = CONCAT44(uStack_154,uStack_158);
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                        dStack_148 = dStack_160;
                      }
                      else {
                        FUN_1402ec660(&dStack_148,&dStack_160);
                      }
                      FUN_140001c50(&dStack_148,0x50);
                      in_stack_fffffffffffff5f0 = &pdStack_5c8;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,uRam00000001420da150);
                      uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_278,4,
                                             in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1);
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_148);
                      }
                      if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                        FUN_140001b50(&dStack_160);
                      }
                      uVar4 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
                      if (iVar3 != -2 && iVar3 < 1) {
                        uStack_1a8 = 0x4a;
                        uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
                        uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x18e3b,0x80000000,&uStack_8b0,uVar27,uVar31);
                        FUN_1400019a0(&dStack_268,&uStack_8b0);
                        uStack_1a8 = 0x4b;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x18e4b,0x80000000,&uStack_8a0,uVar27,uVar31);
                        FUN_1400019a0(&dStack_258,&uStack_8a0);
                        uStack_1a8 = 0x4c;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x18e3d,0x80000000,&uStack_890,uVar27,uVar31);
                        FUN_1400019a0(&dStack_2a8,&uStack_890);
                        uStack_1a8 = 0x4d;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x18e4d,0x80000000,&uStack_880,uVar27,uVar31);
                        FUN_1400019a0(&dStack_520,&uStack_880);
                        uStack_1a8 = 0x4e;
                        uVar31 = uVar31 & 0xffffffffffffff00;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x18e26,0x80000000,&uStack_748,uVar27,uVar31);
                        FUN_1400019a0(&uStack_688,&uStack_748);
                        uStack_1a8 = 0x4f;
                        uVar27 = uVar27 & 0xffffffffffffff00;
                        FUN_1416cfeb0(&dStack_4b8,0x189cf,0x80000000,&uStack_758,uVar27,
                                      uVar31 & 0xffffffffffffff00);
                        uVar21 = (undefined4)(uVar27 >> 0x20);
                        FUN_1400019a0(&uStack_658,&uStack_758);
                        if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_170);
                        }
                        uStack_170 = 0;
                        uStack_168 = 0x500000000;
                        FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                        FUN_1400019a0(&dStack_488,&uStack_298);
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar21,uRam00000001420da4e0)
                        ;
                        in_stack_fffffffffffff5f0 = &pdStack_618;
                        pdStack_618 = &dStack_488;
                        uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,1,
                                               in_stack_fffffffffffff5e8,&pdStack_618);
                        uStack_140 = uStack_140 & 0xffffffff;
                        dStack_148 = 51.0;
                        iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,0);
                        if (iVar3 != 0) {
                          in_stack_fffffffffffff5f0 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                          in_stack_fffffffffffff5e8 =
                               (double **)
                               ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                          FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                                        in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                          iVar3 = FUN_1416d9df0(&dStack_208,&dStack_268,uRam00000001420f6b08,1);
                          if (0 < iVar3) {
                            in_stack_fffffffffffff5f0 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                            in_stack_fffffffffffff5e8 =
                                 (double **)
                                 ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                            FUN_1416cea80(plStack_f8,uRam00000001420d58e8,0x80000000,&dStack_208,
                                          in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                            iVar3 = FUN_1416d9df0(&dStack_208,&dStack_2a8,uRam00000001420f6b08,1);
                            if ((iVar3 != -2) && (iVar3 < 0)) {
                              in_stack_fffffffffffff5f0 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                              in_stack_fffffffffffff5e8 =
                                   (double **)
                                   ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                              FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218,
                                            in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                              iVar3 = FUN_1416d9df0(&dStack_218,&dStack_258,uRam00000001420f6b08,1);
                              if (0 < iVar3) {
                                in_stack_fffffffffffff5f0 =
                                     (double **)
                                     ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                                in_stack_fffffffffffff5e8 =
                                     (double **)
                                     ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                                FUN_1416cea80(plStack_f8,uRam00000001420d58f8,0x80000000,&dStack_218
                                              ,in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                                iVar3 = FUN_1416d9df0(&dStack_218,&dStack_520,uRam00000001420f6b08,1
                                                     );
                                if ((iVar3 != -2) && (iVar3 < 0)) {
                                  uStack_1a8 = 0x52;
                                  uStack_230 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf)
                                  ;
                                  pdStack_188 = (double *)
                                                (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3a);
                                  pdVar9 = (double *)
                                           (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e49);
                                  uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00
                                  ;
                                  uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00
                                  ;
                                  FUN_1416cfeb0(&dStack_4b8,0x18e3a,0x80000000,&dStack_648,uVar27,
                                                uVar31);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&dStack_4b8,0x18e49,0x80000000,&dStack_638,uVar27,
                                                uVar31);
                                  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                                    dVar15 = *pdVar9;
                                    if ((*(uint *)((longlong)pdStack_188 + 0xc) & 0xffffff) == 0)
                                    goto code_r0x0001402daefe;
code_r0x0001402daee6:
                                    dVar14 = (double)FUN_1416940c0();
                                    if ((uStack_62c & 0xffffff) != 0) goto code_r0x0001402daf0f;
code_r0x0001402daf2e:
                                    dVar16 = dStack_638;
                                    if ((uStack_63c & 0xffffff) == 0) goto code_r0x0001402daf51;
code_r0x0001402daf43:
                                    dVar17 = (double)FUN_1416940c0(&dStack_648);
                                  }
                                  else {
                                    dVar15 = (double)FUN_1416940c0(pdVar9);
                                    if ((*(uint *)((longlong)pdStack_188 + 0xc) & 0xffffff) != 0)
                                    goto code_r0x0001402daee6;
code_r0x0001402daefe:
                                    dVar14 = *pdStack_188;
                                    if ((uStack_62c & 0xffffff) == 0) goto code_r0x0001402daf2e;
code_r0x0001402daf0f:
                                    dVar16 = (double)FUN_1416940c0(&dStack_638);
                                    if ((uStack_63c & 0xffffff) != 0) goto code_r0x0001402daf43;
code_r0x0001402daf51:
                                    dVar17 = dStack_648;
                                  }
                                  uVar19 = (ulonglong)(uint)(float)dVar14;
                                  uVar12 = FUN_1416cdb80((float)dVar17,CONCAT44(uVar4,(float)dVar16)
                                                         ,uVar19,(float)dVar15);
                                  uVar4 = (undefined4)(uVar19 >> 0x20);
                                  fVar13 = (float)FUN_1416cd800(uVar20,uVar12);
                                  FUN_140003f30(uStack_230,(double)fVar13);
                                  uStack_1a8 = 0x53;
                                  uStack_230 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26)
                                  ;
                                  pdStack_188 = (double *)
                                                (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3a);
                                  pdVar9 = (double *)
                                           (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e49);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&dStack_4b8,0x18e3a,0x80000000,&dStack_648,uVar27,
                                                uVar31);
                                  uVar31 = uVar31 & 0xffffffffffffff00;
                                  uVar27 = uVar27 & 0xffffffffffffff00;
                                  FUN_1416cfeb0(&dStack_4b8,0x18e49,0x80000000,&dStack_638,uVar27,
                                                uVar31);
                                  if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
                                    dVar15 = *pdVar9;
                                    if ((*(uint *)((longlong)pdStack_188 + 0xc) & 0xffffff) == 0)
                                    goto code_r0x0001402db085;
code_r0x0001402db06d:
                                    dVar14 = (double)FUN_1416940c0();
                                    if ((uStack_62c & 0xffffff) != 0) goto code_r0x0001402db096;
code_r0x0001402db0b5:
                                    dVar16 = dStack_638;
                                    if ((uStack_63c & 0xffffff) == 0) goto code_r0x0001402db0d8;
code_r0x0001402db0ca:
                                    dVar17 = (double)FUN_1416940c0(&dStack_648);
                                  }
                                  else {
                                    dVar15 = (double)FUN_1416940c0(pdVar9);
                                    if ((*(uint *)((longlong)pdStack_188 + 0xc) & 0xffffff) != 0)
                                    goto code_r0x0001402db06d;
code_r0x0001402db085:
                                    dVar14 = *pdStack_188;
                                    if ((uStack_62c & 0xffffff) == 0) goto code_r0x0001402db0b5;
code_r0x0001402db096:
                                    dVar16 = (double)FUN_1416940c0(&dStack_638);
                                    if ((uStack_63c & 0xffffff) != 0) goto code_r0x0001402db0ca;
code_r0x0001402db0d8:
                                    dVar17 = dStack_648;
                                  }
                                  uVar12 = FUN_1416cdb80((float)dVar17,(float)dVar16,
                                                         CONCAT44(uVar4,(float)dVar14),(float)dVar15
                                                        );
                                  fVar13 = (float)FUN_1416cd880(uVar20,uVar12);
                                  FUN_140003f30(uStack_230,(double)fVar13);
                                  in_stack_fffffffffffff5f0 =
                                       (double **)(uVar31 & 0xffffffffffffff00);
                                  in_stack_fffffffffffff5e8 =
                                       (double **)(uVar27 & 0xffffffffffffff00);
                                  FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,
                                                &uStack_498,in_stack_fffffffffffff5e8,
                                                in_stack_fffffffffffff5f0);
                                  uStack_140 = uStack_140 & 0xffffffff;
                                  dStack_148 = 64.0;
                                  iVar3 = FUN_1416d9df0(&uStack_498,&dStack_148,uRam00000001420f6b08
                                                        ,0);
                                  if (iVar3 == 0) {
                                    uStack_1a8 = 0x55;
                                    if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&uStack_170);
                                    }
                                    uStack_170 = 0;
                                    uStack_168 = 0x500000000;
                                    if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&uStack_180);
                                    }
                                    uStack_180 = 0;
                                    uStack_178 = 0x500000000;
                                    uVar31 = (ulonglong)in_stack_fffffffffffff5f0 &
                                             0xffffffffffffff00;
                                    uVar27 = (ulonglong)in_stack_fffffffffffff5e8 &
                                             0xffffffffffffff00;
                                    FUN_1416cfeb0(&dStack_4b8,0x18e3a,0x80000000,&dStack_648,uVar27,
                                                  uVar31);
                                    in_stack_fffffffffffff5f0 =
                                         (double **)(uVar31 & 0xffffffffffffff00);
                                    FUN_1416cfeb0(&dStack_4b8,0x18e49,0x80000000,&dStack_638,
                                                  uVar27 & 0xffffffffffffff00,
                                                  in_stack_fffffffffffff5f0);
                                    FUN_140002730(&dStack_488,0x1420b27f8);
                                    pdStack_618 = &dStack_488;
                                    FUN_140002730(&dStack_478,0x1420b2808);
                                    pdStack_610 = &dStack_478;
                                    FUN_140002730(&dStack_468,0x1420b2818);
                                    pdStack_608 = &dStack_468;
                                    FUN_140002730(&dStack_458,0x1420b2828);
                                    pdStack_600 = &dStack_458;
                                    FUN_140002730(&dStack_448,0x1420b2728);
                                    pdStack_5f8 = &dStack_448;
                                    FUN_1400019a0(&dStack_438,&dStack_648);
                                    pdStack_5f0 = &dStack_438;
                                    FUN_1400019a0(&dStack_428,&dStack_638);
                                    pdStack_5e8 = &dStack_428;
                                    uVar12 = FUN_1416cd660(&uStack_180,4,&pdStack_618);
                                    FUN_1400019a0(&dStack_418,uVar12);
                                    pdStack_5e0 = &dStack_418;
                                    in_stack_fffffffffffff5e8 = &pdStack_5f8;
                                    FUN_1400e28e0(plStack_f8,plStack_110,&uStack_170,4,
                                                  in_stack_fffffffffffff5e8);
                                  }
                                }
                              }
                            }
                          }
                        }
                        uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4d);
                        uStack_140._0_4_ = (undefined4)uStack_250;
                        uStack_140._4_4_ = uStack_250._4_4_;
                        if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) == 0) {
                          dStack_148 = dStack_258;
                        }
                        else {
                          FUN_1402ec660(&dStack_148,&dStack_258);
                        }
                        FUN_140003f30(&dStack_148,uVar6);
                        iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1);
                        if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_148);
                        }
                        if (0 < iVar3) {
                          uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                          FUN_140003ba0(&dStack_148,&dStack_520,uVar6);
                          iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1);
                          if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_148);
                          }
                          if (iVar3 != -2 && iVar3 < 0) {
                            pdVar9 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3d);
                            pdStack_188 = (double *)
                                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                            uStack_140._4_4_ = uStack_260._4_4_;
                            uStack_140._0_4_ = (undefined4)uStack_260;
                            if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) == 0) {
                              dStack_148 = dStack_268;
                            }
                            else {
                              FUN_1402ec660(&dStack_148,&dStack_268);
                            }
                            FUN_140003ca0(&dStack_148,&uStack_658);
                            uStack_154 = *(uint *)((longlong)pdVar9 + 0xc);
                            uStack_158 = *(undefined4 *)(pdVar9 + 1);
                            if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                              dStack_160 = *pdVar9;
                            }
                            else {
                              FUN_1402ec660(&dStack_160,pdVar9);
                            }
                            FUN_140003ca0(&dStack_160,pdStack_188);
                            uVar4 = FUN_1416d9df0(&dStack_160,&dStack_148,uRam00000001420f6b08,1);
                            pdStack_188 = (double *)CONCAT44(pdStack_188._4_4_,uVar4);
                            if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_160);
                            }
                            if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_148);
                            }
                            if (-1 < (int)pdStack_188) {
                              pdStack_188 = (double *)
                                            (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                              pdVar9 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3b);
                              uStack_140._4_4_ = uStack_2a0._4_4_;
                              uStack_140._0_4_ = (undefined4)uStack_2a0;
                              if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) == 0) {
                                dStack_148 = dStack_2a8;
                              }
                              else {
                                FUN_1402ec660(&dStack_148,&dStack_2a8);
                              }
                              FUN_140003ca0(&dStack_148,&uStack_658);
                              uStack_154 = *(uint *)((longlong)pdVar9 + 0xc);
                              uStack_158 = *(undefined4 *)(pdVar9 + 1);
                              if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
                                dStack_160 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&dStack_160,pdVar9);
                              }
                              FUN_140003ca0(&dStack_160,pdStack_188);
                              iVar3 = FUN_1416d9df0(&dStack_160,&dStack_148,uRam00000001420f6b08,1);
                              if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_160);
                              }
                              if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_148);
                              }
                              if (iVar3 != -2 && iVar3 < 1) {
                                uStack_1a8 = 0x5c;
                                uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e3b);
                                iVar3 = FUN_1416d9df0(uVar12,&dStack_268,uRam00000001420f6b08,1);
                                if ((iVar3 == -2) || (-1 < iVar3)) {
                                  uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                                  iVar3 = FUN_1416d9df0(uVar12,&dStack_2a8,uRam00000001420f6b08,1);
                                  if (iVar3 < 1) goto code_r0x0001402dbaca;
                                  uStack_1a8 = 100;
                                  uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uVar12,&dStack_2a8);
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x65;
                                  pdStack_188 = (double *)
                                                (**(code **)(*plStack_f8 + 0x10))
                                                          (plStack_f8,0x18e3d);
                                  pdVar9 = (double *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                                  uStack_230 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x187b4);
                                  uStack_140._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                                  uStack_140._0_4_ = *(uint *)(pdVar9 + 1);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                    dStack_148 = *pdVar9;
                                  }
                                  else {
                                    FUN_1402ec660(&dStack_148,pdVar9);
                                  }
                                  FUN_140003ca0(&dStack_148,uStack_230);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(pdStack_188,&dStack_148);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&dStack_148);
                                  }
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x66;
                                  uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uVar12,&uStack_658);
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x67;
                                  puVar7 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
                                  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar7);
                                  }
                                }
                                else {
                                  uStack_1a8 = 0x5d;
                                  pdStack_188 = (double *)
                                                (**(code **)(*plStack_f8 + 0x10))
                                                          (plStack_f8,0x18e3d);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(pdStack_188,&dStack_268);
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x5e;
                                  uStack_230 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b)
                                  ;
                                  uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x187b4);
                                  uStack_140._4_4_ = *(uint *)((longlong)pdStack_188 + 0xc);
                                  uStack_140._0_4_ = *(uint *)(pdStack_188 + 1);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                    dStack_148 = *pdStack_188;
                                  }
                                  else {
                                    FUN_1402ec660(&dStack_148);
                                  }
                                  FUN_140003e00(&dStack_148,uVar12);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uStack_230,&dStack_148);
                                  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&dStack_148);
                                  }
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x5f;
                                  uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189cf);
                                  FUN_1416a8cb0(plStack_f8);
                                  FUN_1400019a0(uVar12,&uStack_658);
                                  func_0x0001416a8c00(1);
                                  uStack_1a8 = 0x60;
                                  puVar7 = (undefined8 *)
                                           (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c3);
                                  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0
                                     ) {
                                    FUN_140001b50(puVar7);
                                  }
                                }
                                *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                *puVar7 = 0x3ff0000000000000;
                              }
                            }
                          }
                        }
code_r0x0001402dbaca:
                        uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3d);
                        uStack_140 = uStack_260;
                        if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) == 0) {
                          dStack_148 = dStack_268;
                        }
                        else {
                          FUN_1402ec660(&dStack_148,&dStack_268);
                        }
                        in_XMM1_Qa = uVar6;
                        FUN_140003f30(&dStack_148,uVar6);
                        iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1);
                        if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_148);
                        }
                        if (0 < iVar3) {
                          uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e3b);
                          FUN_140003ba0(&dStack_148,&dStack_2a8,uVar6);
                          iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1);
                          if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_148);
                          }
                          ppdVar28 = &pdStack_618;
                          if (iVar3 != -2 && iVar3 < 0) {
                            pdVar9 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4d);
                            pdStack_188 = (double *)
                                          (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                            uStack_140 = uStack_250;
                            if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) == 0) {
                              dStack_148 = dStack_258;
                            }
                            else {
                              FUN_1402ec660(&dStack_148,&dStack_258);
                            }
                            FUN_140003ca0(&dStack_148,&uStack_688);
                            uStack_1cc = *(uint *)((longlong)pdVar9 + 0xc);
                            uStack_1d0 = *(undefined4 *)(pdVar9 + 1);
                            if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
                              dStack_1d8 = *pdVar9;
                            }
                            else {
                              FUN_1402ec660(&dStack_1d8,pdVar9);
                            }
                            FUN_140003ca0(&dStack_1d8,pdStack_188);
                            uStack_154 = uStack_1cc;
                            uStack_158 = uStack_1d0;
                            if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
                              dStack_160 = dStack_1d8;
                            }
                            else {
                              FUN_1402ec660(&dStack_160,&dStack_1d8);
                            }
                            in_XMM1_Qa = uVar6;
                            FUN_140003f30(&dStack_160,uVar6);
                            uVar4 = FUN_1416d9df0(&dStack_160,&dStack_148,uRam00000001420f6b08,1);
                            pdStack_188 = (double *)CONCAT44(pdStack_188._4_4_,uVar4);
                            if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_160);
                            }
                            if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_1d8);
                            }
                            if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&dStack_148);
                            }
                            if (-1 < (int)pdStack_188) {
                              pdStack_188 = (double *)
                                            (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                              pdVar9 = (double *)(**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                              uStack_140 = CONCAT44(uStack_514,uStack_518);
                              if ((0x46U >> (uStack_514 & 0x1f) & 1) == 0) {
                                dStack_148 = dStack_520;
                              }
                              else {
                                FUN_1402ec660(&dStack_148,&dStack_520);
                              }
                              FUN_140003ca0(&dStack_148,&uStack_688);
                              uStack_1cc = *(uint *)((longlong)pdVar9 + 0xc);
                              uStack_1d0 = *(undefined4 *)(pdVar9 + 1);
                              if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
                                dStack_1d8 = *pdVar9;
                              }
                              else {
                                FUN_1402ec660(&dStack_1d8);
                              }
                              FUN_140003ca0(&dStack_1d8,pdStack_188);
                              FUN_140003ba0(&dStack_160,&dStack_1d8,uVar6);
                              iVar3 = FUN_1416d9df0(&dStack_160,&dStack_148,uRam00000001420f6b08,1);
                              pdStack_188 = (double *)CONCAT71(pdStack_188._1_7_,iVar3 != -2);
                              uStack_230 = CONCAT71(uStack_230._1_7_,iVar3 < 1);
                              if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_160);
                              }
                              if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_1d8);
                              }
                              if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&dStack_148);
                              }
                              bVar1 = (byte)pdStack_188 & (byte)uStack_230;
                              pdStack_188 = (double *)CONCAT71(pdStack_188._1_7_,bVar1);
                              if (bVar1 != 0) {
                                uStack_1a8 = 0x6b;
                                uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x18e4b);
                                iVar3 = FUN_1416d9df0(uVar12,&dStack_258,uRam00000001420f6b08,1);
                                if ((iVar3 != -2) && (iVar3 < 0)) {
                                  uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1881e);
                                  uStack_140 = uStack_140 & 0xffffffff;
                                  dStack_148 = 0.0;
                                  iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,0);
                                  if (iVar3 == 0) {
                                    uStack_1a8 = 0x6d;
                                    uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e4d);
                                    FUN_1416a8cb0(plStack_f8);
                                    FUN_1400019a0(uVar12,&dStack_258);
                                    func_0x0001416a8c00(1);
                                    uStack_1a8 = 0x6e;
                                    pdStack_188 = (double *)
                                                  (**(code **)(*plStack_f8 + 0x10))
                                                            (plStack_f8,0x18e4b);
                                    pdVar9 = (double *)
                                             (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e4d);
                                    uStack_230 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1877f);
                                    uStack_140._4_4_ = *(uint *)((longlong)pdVar9 + 0xc);
                                    uStack_140._0_4_ = *(uint *)(pdVar9 + 1);
                                    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
                                      dStack_148 = *pdVar9;
                                    }
                                    else {
                                      FUN_1402ec660(&dStack_148,pdVar9);
                                    }
                                    FUN_140003e00(&dStack_148,uStack_230);
                                    FUN_1416a8cb0(plStack_f8);
                                    FUN_1400019a0(pdStack_188,&dStack_148);
                                    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                                      FUN_140001b50(&dStack_148);
                                    }
                                    func_0x0001416a8c00(1);
                                    uStack_1a8 = 0x6f;
                                    uVar12 = (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18e26);
                                    FUN_1416a8cb0(plStack_f8);
                                    FUN_1400019a0(uVar12,&uStack_688);
                                    func_0x0001416a8c00(1);
                                    uStack_1a8 = 0x70;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b43);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x3ff0000000000000;
                                    uStack_1a8 = 0x71;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b42);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x3ff0000000000000;
                                    uStack_1a8 = 0x72;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x189c2);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x4020000000000000;
                                    uStack_1a8 = 0x73;
                                    puVar7 = (undefined8 *)
                                             (**(code **)(*plStack_f8 + 0x10))(plStack_f8,0x18b3f);
                                    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) !=
                                        0) {
                                      FUN_140001b50(puVar7);
                                    }
                                    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
                                    *puVar7 = 0x4020000000000000;
                                    uVar12 = (**(code **)(*plStack_f8 + 8))(plStack_f8,0x1898f);
                                    uStack_140 = (ulonglong)(uint)uStack_140;
                                    dStack_148 = 0.0;
                                    iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,1)
                                    ;
                                    if (0 < iVar3) {
                                      uStack_1a8 = 0x74;
                                      in_stack_fffffffffffff5f0 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff5f0 &
                                           0xffffffffffffff00);
                                      in_stack_fffffffffffff5e8 =
                                           (double **)
                                           ((ulonglong)in_stack_fffffffffffff5e8 &
                                           0xffffffffffffff00);
                                      FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,
                                                    &uStack_698,in_stack_fffffffffffff5e8,
                                                    in_stack_fffffffffffff5f0);
                                      FUN_1400019a0(&uStack_870,&uStack_698);
                                      FUN_1416d0720(&dStack_4b8,0x189c4,0x80000000,&uStack_870);
                                    }
                                    in_stack_fffffffffffff5f0 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
                                    ;
                                    in_stack_fffffffffffff5e8 =
                                         (double **)
                                         ((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00)
                                    ;
                                    FUN_1416cfeb0(&dStack_4b8,0x18afe,0x80000000,&uStack_860,
                                                  in_stack_fffffffffffff5e8,
                                                  in_stack_fffffffffffff5f0);
                                    uStack_140 = uStack_140 & 0xffffffff;
                                    dStack_148 = 1.0;
                                    iVar3 = FUN_1416d9df0(&uStack_860,&dStack_148,
                                                          uRam00000001420f6b08,0);
                                    if (iVar3 == 0) {
                                      uStack_1a8 = 0x75;
                                      if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
                                        FUN_140001b50(&uStack_170);
                                      }
                                      uStack_170 = 0;
                                      uStack_168 = 0x500000000;
                                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 &
                                               0xffffffffffffff00;
                                      FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,
                                                    &uStack_498,uVar27,
                                                    (ulonglong)in_stack_fffffffffffff5f0 &
                                                    0xffffffffffffff00);
                                      uVar4 = (undefined4)(uVar27 >> 0x20);
                                      FUN_1400019a0(&dStack_488,&uStack_498);
                                      pdStack_618 = &dStack_488;
                                      FUN_140002730(&dStack_478,0x1420b27d8);
                                      pdStack_610 = &dStack_478;
                                      in_stack_fffffffffffff5e8 =
                                           (double **)CONCAT44(uVar4,uRam00000001420da330);
                                      uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_170,2,
                                                             in_stack_fffffffffffff5e8,ppdVar28);
                                      uStack_140 = uStack_140 & 0xffffffff;
                                      dStack_148 = 1.0;
                                      iVar3 = FUN_1416d9df0(uVar12,&dStack_148,uRam00000001420f6b08,
                                                            0);
                                      in_stack_fffffffffffff5f0 = ppdVar28;
                                      if (iVar3 == 0) {
                                        uStack_1a8 = 0x76;
                                        if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                                          FUN_140001b50(&uStack_180);
                                        }
                                        uStack_180 = 0;
                                        uStack_178 = 0x500000000;
                                        uVar12 = (**(code **)(*plStack_f8 + 0x10))
                                                           (plStack_f8,0x18e26);
                                        in_stack_fffffffffffff5f0 =
                                             (double **)((ulonglong)ppdVar28 & 0xffffffffffffff00);
                                        FUN_1416cea80(plStack_f8,uRam00000001420d59e8,0x80000000,
                                                      &uStack_698,
                                                      (ulonglong)in_stack_fffffffffffff5e8 &
                                                      0xffffffffffffff00,in_stack_fffffffffffff5f0);
                                        FUN_1400019a0(&dStack_468,&uStack_698);
                                        pdStack_608 = &dStack_468;
                                        FUN_1400019a0(&dStack_458,uVar12);
                                        pdStack_600 = &dStack_458;
                                        in_stack_fffffffffffff5e8 = &pdStack_608;
                                        FUN_140061cf0(plStack_f8,plStack_110,&uStack_180,2,
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
                      FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      dStack_148 = 65.0;
                      iVar3 = FUN_1416d9df0(&uStack_498,&dStack_148,uRam00000001420f6b08,0);
                      if (iVar3 == 0) goto code_r0x0001402da230;
                      if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_1e8);
                      }
                      uStack_1e8 = 0;
                      uStack_1e0 = 0x500000000;
                      uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,uVar27,
                                    (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      uVar4 = (undefined4)(uVar27 >> 0x20);
                      FUN_1400019a0(&dStack_428,&uStack_498);
                      pdStack_5e8 = &dStack_428;
                      FUN_140002730(&dStack_418,0x1420b27e8);
                      pdStack_5e0 = &dStack_418;
                      in_stack_fffffffffffff5f0 = &pdStack_5e8;
                      in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,uRam00000001420da330);
                      uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1e8,2,
                                             in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      cVar2 = FUN_1416927d0(uVar12);
                      if (cVar2 != '\0') goto code_r0x0001402da230;
code_r0x0001402da295:
                      in_stack_fffffffffffff5f0 =
                           (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                      in_stack_fffffffffffff5e8 =
                           (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                      FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,
                                    in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                      uStack_140 = uStack_140 & 0xffffffff;
                      dStack_148 = 64.0;
                      iVar3 = FUN_1416d9df0(&uStack_498,&dStack_148,uRam00000001420f6b08,0);
                      if (iVar3 != 0) {
                        in_stack_fffffffffffff5f0 =
                             (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00);
                        in_stack_fffffffffffff5e8 =
                             (double **)((ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00);
                        FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,
                                      in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        uStack_140 = uStack_140 & 0xffffffff;
                        dStack_148 = 65.0;
                        iVar3 = FUN_1416d9df0(&uStack_498,&dStack_148,uRam00000001420f6b08,0);
                        if (iVar3 != 0) {
                          if ((0x46U >> (uStack_280._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_288);
                          }
                          uStack_288 = 0;
                          uStack_280 = 0x500000000;
                          uVar27 = (ulonglong)in_stack_fffffffffffff5e8 & 0xffffffffffffff00;
                          FUN_1416cea80(plStack_f8,uRam00000001420d5a28,0x80000000,&uStack_498,
                                        uVar27,(ulonglong)in_stack_fffffffffffff5f0 &
                                               0xffffffffffffff00);
                          uVar4 = (undefined4)(uVar27 >> 0x20);
                          FUN_1400019a0(&dStack_408,&uStack_498);
                          pdStack_5d8 = &dStack_408;
                          FUN_140002730(&dStack_3f8,0x1420b27e8);
                          pdStack_5d0 = &dStack_3f8;
                          in_stack_fffffffffffff5f0 = &pdStack_5d8;
                          in_stack_fffffffffffff5e8 =
                               (double **)CONCAT44(uVar4,uRam00000001420da330);
                          uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_288,2,
                                                 in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0
                                                );
                          cVar2 = FUN_1416927d0(uVar12);
                          if (cVar2 == '\0') goto code_r0x0001402da462;
                        }
                      }
                    }
                  }
                  else {
                    FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                    uStack_140 = uStack_140 & 0xffffffff;
                    dStack_148 = 65.0;
                    iVar3 = FUN_1416d9df0(&uStack_298,&dStack_148,uRam00000001420f6b08,0);
                    if (iVar3 == 0) goto code_r0x0001402d9e87;
                    if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_180);
                    }
                    uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                    uStack_180 = 0;
                    uStack_178 = 0x500000000;
                    FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                    FUN_1400019a0(&dStack_468,&uStack_298);
                    pdStack_608 = &dStack_468;
                    FUN_140002730(&dStack_458,0x1420b27e8);
                    pdStack_600 = &dStack_458;
                    in_stack_fffffffffffff5f0 = &pdStack_608;
                    in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,uRam00000001420da330);
                    uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_180,2,
                                           in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                    cVar2 = FUN_1416927d0(uVar12);
                    if (cVar2 != '\0') goto code_r0x0001402d9e87;
code_r0x0001402d9ed6:
                    FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                    uStack_140 = uStack_140 & 0xffffffff;
                    dStack_148 = 64.0;
                    iVar3 = FUN_1416d9df0(&uStack_298,&dStack_148,uRam00000001420f6b08,0);
                    if (iVar3 != 0) {
                      FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                      uStack_140 = uStack_140 & 0xffffffff;
                      dStack_148 = 65.0;
                      iVar3 = FUN_1416d9df0(&uStack_298,&dStack_148,uRam00000001420f6b08,0);
                      if (iVar3 != 0) {
                        if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_1f8);
                        }
                        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff5e8 >> 0x20);
                        uStack_1f8 = 0;
                        uStack_1f0 = 0x500000000;
                        FUN_1416cfc30(&dStack_4b8,uRam00000001420d5a28,0x80000000,&uStack_298);
                        FUN_1400019a0(&dStack_448,&uStack_298);
                        pdStack_5f8 = &dStack_448;
                        FUN_140002730(&dStack_438,0x1420b27e8);
                        pdStack_5f0 = &dStack_438;
                        in_stack_fffffffffffff5f0 = &pdStack_5f8;
                        in_stack_fffffffffffff5e8 = (double **)CONCAT44(uVar4,uRam00000001420da330);
                        uVar12 = FUN_1416ab210(plStack_f8,plStack_110,&uStack_1f8,2,
                                               in_stack_fffffffffffff5e8,in_stack_fffffffffffff5f0);
                        cVar2 = FUN_1416927d0(uVar12);
                        if (cVar2 == '\0') goto code_r0x0001402da073;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        switch(uStack_49c & 0xffffff) {
        case 1:
          dStack_4a8 = (double)FUN_1416940c0(&dStack_4a8);
          dStack_4a8 = dStack_4a8 + dVar18;
          uStack_49c = 0;
          break;
        default:
          FUN_140001d70(&UNK_141981e6a,&dStack_4a8,&dStack_4a8);
          break;
        case 7:
          dStack_4a8 = (double)CONCAT44(dStack_4a8._4_4_,dStack_4a8._0_4_ + 1);
          break;
        case 10:
          dStack_4a8 = (double)((longlong)dStack_4a8 + 1);
          break;
        case 0xd:
          uStack_49c = 0;
        case 0:
          dStack_4a8 = dStack_4a8 + dVar18;
        }
      }
    }
    if ((0x46U >> (uStack_6e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_6e8);
    }
    if ((0x46U >> (uStack_620._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_628);
    }
    if ((0x46U >> (uStack_270._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_278);
    }
    if ((0x46U >> (uStack_280._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_288);
    }
    if ((0x46U >> (uStack_1e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1e8);
    }
    if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1f8);
    }
    if ((0x46U >> (uStack_178._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_180);
    }
    if ((0x46U >> (uStack_168._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_170);
    }
    if ((0x46U >> (uStack_854 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_860);
    }
    if ((0x46U >> (uStack_864 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_870);
    }
    if ((0x46U >> (uStack_62c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_638);
    }
    if ((0x46U >> (uStack_63c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_648);
    }
    if ((0x46U >> (uStack_874 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_880);
    }
    if ((0x46U >> (uStack_884 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_890);
    }
    if ((0x46U >> (uStack_894 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8a0);
    }
    if ((0x46U >> (uStack_8a4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8b0);
    }
    if ((0x46U >> (uStack_8b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8c0);
    }
    if ((0x46U >> (uStack_8c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8d0);
    }
    if ((0x46U >> (uStack_73c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_748);
    }
    if ((0x46U >> (uStack_6ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_6f8);
    }
    if ((0x46U >> (uStack_74c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_758);
    }
    if ((0x46U >> (uStack_6fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_708);
    }
    if ((0x46U >> (uStack_8d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8e0);
    }
    if ((0x46U >> (uStack_48c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_498);
    }
    if ((0x46U >> (uStack_8e4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_8f0);
    }
    if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_298);
    }
    if ((0x46U >> (uStack_68c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_698);
    }
    if ((0x46U >> (uStack_49c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_4a8);
    }
    if ((0x46U >> (uStack_4f4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_500);
    }
    if ((0x46U >> (uStack_504 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_510);
    }
    if ((0x46U >> (uStack_4bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_4c8);
    }
    if ((0x46U >> (uStack_69c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_6a8);
    }
    if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_198);
    }
    if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_228);
    }
    if ((0x46U >> (uStack_70c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_718);
    }
    if ((0x46U >> (uStack_71c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_728);
    }
    if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_218);
    }
    if ((0x46U >> (uStack_72c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_738);
    }
    if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_208);
    }
    if ((0x46U >> (uStack_64c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_658);
    }
    if ((0x46U >> (uStack_67c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_688);
    }
    if ((0x46U >> (uStack_514 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_520);
    }
    if ((0x46U >> (uStack_2a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_2a8);
    }
    if ((0x46U >> (uStack_250._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_258);
    }
    if ((0x46U >> (uStack_260._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_268);
    }
    if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_4b8);
    }
    if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2b8);
    }
    if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2c8);
    }
    if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2d8);
    }
    if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2e8);
    }
    if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_2f8);
    }
    if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_308);
    }
    if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_318);
    }
    if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_328);
    }
    if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_338);
    }
    if ((0x46U >> (uStack_33c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_348);
    }
    if ((0x46U >> (uStack_34c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_358);
    }
    if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_368);
    }
    if ((0x46U >> (uStack_36c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_378);
    }
    if ((0x46U >> (uStack_37c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_388);
    }
    if ((0x46U >> (uStack_38c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_398);
    }
    if ((0x46U >> (uStack_39c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_3a8);
    }
    if ((0x46U >> (uStack_3ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_3b8);
    }
    if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_3c8);
    }
    if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_3d8);
    }
    if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_3e8);
    }
    if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_3f8);
    }
    if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_408);
    }
    if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_418);
    }
    if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_428);
    }
    if ((0x46U >> (uStack_42c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_438);
    }
    if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_448);
    }
    if ((0x46U >> (uStack_44c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_458);
    }
    if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_468);
    }
    if ((0x46U >> (uStack_46c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_478);
    }
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    ppuRam0000000142182d78 = (undefined8 **)puStack_1b8;
  }
  uStack_238 = 9;
  if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  uStack_1c8 = 0;
  uStack_1c0 = 0x500000000;
  ppuVar29 = (undefined8 **)0x0;
  FUN_14003d740(plStack_150,plStack_4d0,&uStack_1c8,0,0);
  uStack_238 = 10;
  puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x18afc);
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  uVar6 = (**(code **)(*plStack_150 + 8))(plStack_150,0x189a1);
  uStack_47c = 0;
  dStack_488 = 1.0;
  iVar3 = FUN_1416d9df0(uVar6,&dStack_488,uRam00000001420f6b08,0);
  if (iVar3 != 0) goto code_r0x0001402dcf46;
  uVar6 = (**(code **)(*plStack_150 + 8))(plStack_150,0x188a5);
  uStack_47c = 0;
  dStack_488 = 1.0;
  iVar3 = FUN_1416d9df0(uVar6,&dStack_488,uRam00000001420f6b08,0);
  if (iVar3 != 0) goto code_r0x0001402dcf46;
  uStack_238 = 0xc;
  uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3b);
  pdStack_618 = (double *)0x0;
  pdStack_610 = (double *)0x0;
  in_stack_fffffffffffff5f0 = (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
  ;
  ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
  FUN_1416d0010(0x40,0x18e3d,0x80000000,&pdStack_618,ppuVar29,in_stack_fffffffffffff5f0);
  iVar3 = FUN_1416d9df0(uVar6,&pdStack_618,uRam00000001420f6b08,1);
  if ((iVar3 == -2) || (0 < iVar3)) goto code_r0x0001402dcf46;
  uStack_238 = 0xd;
  uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3d);
  dStack_148 = 0.0;
  uStack_140 = 0;
  in_stack_fffffffffffff5f0 = (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
  ;
  ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
  FUN_1416d0010(0x40,0x18e3b,0x80000000,&dStack_148,ppuVar29,in_stack_fffffffffffff5f0);
  iVar3 = FUN_1416d9df0(uVar6,&dStack_148,uRam00000001420f6b08,1);
  if (iVar3 < 0) goto code_r0x0001402dcf46;
  uStack_238 = 0xe;
  uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e4b);
  puStack_1b8 = (undefined8 *)0x0;
  puStack_1b0 = (undefined *)0x0;
  in_stack_fffffffffffff5f0 = (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
  ;
  ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
  FUN_1416d0010(0x40,0x18e4d,0x80000000,&puStack_1b8,ppuVar29,in_stack_fffffffffffff5f0);
  iVar3 = FUN_1416d9df0(uVar6,&puStack_1b8,uRam00000001420f6b08,1);
  if ((iVar3 == -2) || (0 < iVar3)) goto code_r0x0001402dcf46;
  uStack_238 = 0xf;
  uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e4d);
  dStack_108 = 0.0;
  uStack_100 = 0.0;
  in_stack_fffffffffffff5f0 = (double **)((ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00)
  ;
  ppuVar29 = (undefined8 **)((ulonglong)ppuVar29 & 0xffffffffffffff00);
  FUN_1416d0010(0x40,0x18e4b,0x80000000,&dStack_108,ppuVar29,in_stack_fffffffffffff5f0);
  iVar3 = FUN_1416d9df0(uVar6,&dStack_108,uRam00000001420f6b08,1);
  if (iVar3 < 0) goto code_r0x0001402dcf46;
  uStack_238 = 0x11;
  uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
  uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
  FUN_1416cea80(plStack_150,uRam00000001420d58e8,0x80000000,&dStack_678,uVar27,uVar31);
  uVar31 = uVar31 & 0xffffffffffffff00;
  uVar27 = uVar27 & 0xffffffffffffff00;
  FUN_1416cea80(plStack_150,uRam00000001420d58f8,0x80000000,&dStack_668,uVar27,uVar31);
  FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&dStack_6d8);
  FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&dStack_6c8);
  if ((uStack_6bc & 0xffffff) == 0) {
    dVar18 = dStack_6c8;
    if ((uStack_6cc & 0xffffff) == 0) goto code_r0x0001402dd911;
code_r0x0001402dd8f3:
    dVar15 = (double)FUN_1416940c0(&dStack_6d8);
    if ((uStack_65c & 0xffffff) != 0) goto code_r0x0001402dd925;
code_r0x0001402dd943:
    dVar14 = dStack_668;
    if ((uStack_66c & 0xffffff) == 0) goto code_r0x0001402dd965;
code_r0x0001402dd957:
    dVar16 = (double)FUN_1416940c0(&dStack_678);
  }
  else {
    dVar18 = (double)FUN_1416940c0(&dStack_6c8);
    if ((uStack_6cc & 0xffffff) != 0) goto code_r0x0001402dd8f3;
code_r0x0001402dd911:
    dVar15 = dStack_6d8;
    if ((uStack_65c & 0xffffff) == 0) goto code_r0x0001402dd943;
code_r0x0001402dd925:
    dVar14 = (double)FUN_1416940c0(&dStack_668);
    if ((uStack_66c & 0xffffff) != 0) goto code_r0x0001402dd957;
code_r0x0001402dd965:
    dVar16 = dStack_678;
  }
  fVar13 = (float)FUN_1416cdb80((float)dVar16,CONCAT44(uVar4,(float)dVar14),(float)dVar15,
                                (float)dVar18);
  if ((0x46U >> (uStack_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4e0);
  }
  uStack_4d4 = 0;
  dStack_4e0 = (double)fVar13;
  dStack_4b8 = 0.0;
  uStack_4b0 = 0;
  in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
  ppuVar29 = (undefined8 **)(uVar27 & 0xffffffffffffff00);
  FUN_1416d0010(0x40,0x18864,0x80000000,&dStack_4b8,ppuVar29,in_stack_fffffffffffff5f0);
  uStack_47c = 0;
  dStack_488 = 0.0;
  iVar3 = FUN_1416d9df0(&dStack_4b8,&dStack_488,uRam00000001420f6b08,1);
  if ((iVar3 != -2) && (iVar3 < 1)) {
    uStack_238 = 0x13;
    if ((0x46U >> (*(uint *)((longlong)puStack_830 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_830);
    }
    *(undefined4 *)((longlong)puStack_830 + 0xc) = 0;
    *puStack_830 = 0;
    uStack_238 = 0x16;
    dStack_268 = 0.0;
    uStack_260 = 0;
    uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
    uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
    FUN_1416d0010(0x40,0x189cf,0x80000000,&dStack_268,uVar27,uVar31);
    dVar18 = dStack_4e0;
    if ((uStack_4d4 & 0xffffff) != 0) {
      dVar18 = (double)FUN_1416940c0(&dStack_4e0);
    }
    fVar13 = (float)FUN_1416cd800(_UNK_141983928,(float)dVar18);
    FUN_140003f30(&dStack_268,(double)fVar13);
    FUN_1416d0790(0x40,0x189cf,0x80000000,&dStack_268);
    uStack_238 = 0x17;
    dStack_258 = 0.0;
    uStack_250 = 0;
    uVar31 = uVar31 & 0xffffffffffffff00;
    uVar27 = uVar27 & 0xffffffffffffff00;
    FUN_1416d0010(0x40,0x18e26,0x80000000,&dStack_258,uVar27,uVar31);
    dVar18 = dStack_4e0;
    if ((uStack_4d4 & 0xffffff) != 0) {
      dVar18 = (double)FUN_1416940c0(&dStack_4e0);
    }
    fVar13 = (float)FUN_1416cd880(_UNK_141983928,(float)dVar18);
    FUN_140003f30(&dStack_258,(double)fVar13);
    FUN_1416d0790(0x40,0x18e26,0x80000000,&dStack_258);
    uStack_238 = 0x18;
    uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x189cf);
    FUN_140017bd0(&dStack_488,&dStack_4e0,0xb4);
    dVar18 = dStack_488;
    if ((uStack_47c & 0xffffff) != 0) {
      dVar18 = (double)FUN_1416940c0(&dStack_488);
    }
    fVar13 = (float)FUN_1416cd800(_UNK_141983928,(float)dVar18);
    FUN_140003f30(uVar6,(double)fVar13);
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    uStack_238 = 0x19;
    uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e26);
    FUN_140017bd0(&dStack_488,&dStack_4e0,0xb4);
    dVar18 = dStack_488;
    if ((uStack_47c & 0xffffff) != 0) {
      dVar18 = (double)FUN_1416940c0(&dStack_488);
    }
    fVar13 = (float)FUN_1416cd880(_UNK_141983928,(float)dVar18);
    FUN_140003f30(uVar6,(double)fVar13);
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    uStack_238 = 0x1a;
    if ((0x46U >> (uStack_4b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_4b8);
    }
    uStack_4b0 = uStack_4b0 & 0xffffffff;
    dStack_4b8 = 25.0;
    FUN_1416d0790(0x40,0x18864,0x80000000,&dStack_4b8);
    uStack_238 = 0x1b;
    dStack_2a8 = 0.0;
    uStack_2a0 = 0;
    ppuVar29 = (undefined8 **)(uVar31 & 0xffffffffffffff00);
    FUN_1416d0010(0x40,0x189cb,0x80000000,&dStack_2a8,uVar27 & 0xffffffffffffff00,ppuVar29);
    uStack_47c = 0;
    dStack_488 = 1.0;
    FUN_140003e00(&dStack_2a8,&dStack_488);
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    FUN_1416d0790(0x40,0x189cb,0x80000000,&dStack_2a8);
    uStack_238 = 0x1c;
    if ((0x46U >> (*(uint *)((longlong)puStack_828 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_828);
    }
    *(undefined4 *)((longlong)puStack_828 + 0xc) = 0;
    *puStack_828 = 0x3ff0000000000000;
    uStack_238 = 0x1d;
    if ((0x46U >> (*(uint *)((longlong)puStack_820 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_820);
    }
    *(undefined4 *)((longlong)puStack_820 + 0xc) = 0;
    *puStack_820 = 0x4000000000000000;
    uStack_238 = 0x1e;
    FUN_140017bd0(&dStack_488,&dStack_4e0,0xb4);
    FUN_1416a8cb0(plRam000000014218ecf8);
    FUN_1400019a0(uVar5,&dStack_488);
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    func_0x0001416a8c00(1);
    uStack_238 = 0x1f;
    if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1c8);
    }
    uStack_1c8 = 0;
    uStack_1c0 = 0x500000000;
    FUN_140002730(&uStack_818,0x1420b4f58);
    puStack_9f8 = &uStack_818;
    ppuVar30 = &puStack_9f8;
    FUN_140087080(plStack_150,plStack_4d0,&uStack_1c8,1,ppuVar30);
    pdStack_188 = (double *)CONCAT44(pdStack_188._4_4_,3);
    do {
      uStack_238 = 0x20;
      if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1c8);
      }
      uStack_1c8 = 0;
      uStack_1c0 = 0x500000000;
      uVar31 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
      uVar27 = (ulonglong)ppuVar30 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_4d0,uRam00000001420d58e8,0x80000000,&uStack_850,uVar27,uVar31);
      uVar27 = uVar27 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_4d0,uRam00000001420d58f8,0x80000000,&uStack_840,uVar27,
                    uVar31 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar27 >> 0x20);
      FUN_1400019a0(&uStack_818,&uStack_850);
      puStack_9f8 = &uStack_818;
      FUN_1400019a0(&uStack_808,&uStack_840);
      puStack_9f0 = &uStack_808;
      FUN_140002730(&uStack_7f8,0x1420b4f68);
      puStack_9e8 = &uStack_7f8;
      FUN_140002730(&uStack_7e8,0x1420b4f78);
      puStack_9e0 = &uStack_7e8;
      ppuVar29 = &puStack_9f8;
      ppuVar30 = (undefined8 **)CONCAT44(uVar4,uRam00000001420da400);
      uVar5 = FUN_1416ab210(plStack_150,plStack_4d0,&uStack_1c8,4,ppuVar30,ppuVar29);
      iVar3 = FUN_1416ab810(&dStack_488,&plStack_150,&plStack_4d0,uVar5);
      if (0 < iVar3) {
        do {
          uStack_238 = 0x22;
          uVar5 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3f);
          FUN_1416ab670(0x40,uRam00000001420d58e8,0x80000000,&dStack_6d8);
          FUN_1416a8cb0(plStack_150);
          FUN_1400019a0(uVar5,&dStack_6d8);
          func_0x0001416a8c00(1);
          uStack_238 = 0x23;
          uVar5 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e4f);
          FUN_1416ab670(0x40,uRam00000001420d58f8,0x80000000,&dStack_6c8);
          FUN_1416a8cb0(plStack_150);
          FUN_1400019a0(uVar5,&dStack_6c8);
          func_0x0001416a8c00(1);
          uStack_238 = 0x24;
          puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x18942);
          if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar7);
          }
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *puVar7 = 0x4050000000000000;
          cVar2 = func_0x0001416abe60(&dStack_488,&plStack_150,&plStack_4d0);
        } while (cVar2 != '\0');
      }
      FUN_1416ab620(&dStack_488,&plStack_150,&plStack_4d0);
      if (dStack_478 != 0.0) {
        func_0x000141695b90();
        dStack_478 = 0.0;
      }
      iVar3 = (int)pdStack_188 + -1;
      pdStack_188 = (double *)CONCAT44(pdStack_188._4_4_,iVar3);
    } while (0 < iVar3);
    uStack_238 = 0x27;
    if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1c8);
    }
    uStack_1c8 = 0;
    uStack_1c0 = 0x500000000;
    if ((0x46U >> (uStack_6b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_6b8);
    }
    uStack_6b8 = 0;
    uStack_6b0 = 0x500000000;
    FUN_140002730(&uStack_818,0x1420b4f88);
    puStack_9f8 = &uStack_818;
    FUN_140002730(&uStack_808,0x1420b4f98);
    puStack_9f0 = &uStack_808;
    FUN_140002730(&uStack_7f8,0x1420b4fa8);
    puStack_9e8 = &uStack_7f8;
    FUN_140002730(&uStack_7e8,0x1420b4fb8);
    puStack_9e0 = &uStack_7e8;
    uVar31 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
    uVar27 = (ulonglong)ppuVar30 & 0xffffffffffffff00;
    FUN_1416cea80(plStack_150,uRam00000001420d58e8,0x80000000,&dStack_678,uVar27,uVar31);
    in_stack_fffffffffffff5f0 = (double **)(uVar31 & 0xffffffffffffff00);
    FUN_1416cea80(plStack_150,uRam00000001420d58f8,0x80000000,&dStack_668,
                  uVar27 & 0xffffffffffffff00,in_stack_fffffffffffff5f0);
    uVar5 = FUN_1416cd660(&uStack_6b8,4,&puStack_9f8);
    FUN_1400019a0(&uStack_7d8,uVar5);
    puStack_9d8 = &uStack_7d8;
    FUN_140002730(&uStack_7c8,0x1420b4fc8);
    puStack_9d0 = &uStack_7c8;
    FUN_140002730(&uStack_7b8,0x142180080);
    puStack_9c8 = &uStack_7b8;
    uVar5 = FUN_1416cdc60((int)_UNK_141983968,_UNK_141983970);
    puStack_9c0 = &uStack_7a8;
    if ((0x46U >> (uStack_79c & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_9c0);
    }
    uStack_79c = 0;
    uStack_7a8 = uVar5;
    FUN_140002730(&uStack_798,0x1420b4fd8);
    puStack_9b8 = &uStack_798;
    FUN_140002730(&uStack_788,0x142180080);
    puStack_9b0 = &uStack_788;
    FUN_1400019a0(&uStack_778,&dStack_678);
    puStack_9a8 = &uStack_778;
    FUN_1400019a0(&uStack_768,&dStack_668);
    ppuVar29 = &puStack_9d8;
    puStack_9a0 = &uStack_768;
    FUN_1400d4470(plStack_150,plStack_4d0,&uStack_1c8,8,ppuVar29);
    uStack_238 = 0x28;
    puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x18768);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x4066800000000000;
  }
code_r0x0001402dcf46:
  uVar5 = (**(code **)(*plStack_150 + 8))(plStack_150,0x188a6);
  uStack_47c = 0;
  dStack_488 = 0.0;
  iVar3 = FUN_1416d9df0(uVar5,&dStack_488,uRam00000001420f6b08,1);
  if (0 < iVar3) {
    uStack_238 = 0x2f;
    if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1c8);
    }
    uStack_1c8 = 0;
    uStack_1c0 = 0x500000000;
    uVar5 = (**(code **)(*plStack_150 + 8))(plStack_150,0x188a6);
    uVar6 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x189cf);
    FUN_1400019a0(&uStack_818,uVar6);
    puStack_9f8 = &uStack_818;
    FUN_140002730(&uStack_808,0x142180080);
    uStack_47c = 0;
    dStack_488 = 0.1;
    puStack_9f0 = &uStack_808;
    FUN_140001fe0(&dStack_488,uVar5);
    FUN_1400019a0(&uStack_7f8,&dStack_488);
    if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_488);
    }
    ppuVar29 = &puStack_9f8;
    puStack_9e8 = &uStack_7f8;
    uVar5 = FUN_14003b450(plStack_150,plStack_4d0,&uStack_1c8,3,ppuVar29);
    FUN_1416a8cb0(plStack_150);
    FUN_1400019a0(uVar6,uVar5);
    func_0x0001416a8c00(1);
  }
  uVar5 = (**(code **)(*plStack_150 + 8))(plStack_150,0x188a7);
  cVar2 = FUN_1416927d0(uVar5);
  if (cVar2 != '\0') {
    uStack_238 = 0x31;
    puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x1898f);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x3ff0000000000000;
  }
  uVar5 = (**(code **)(*plStack_150 + 8))(plStack_150,0x18b8c);
  uStack_47c = 0;
  dStack_488 = 0.0;
  iVar3 = FUN_1416d9df0(uVar5,&dStack_488,uRam00000001420f6b08,0);
  if (iVar3 == 0) {
    uStack_238 = 0x33;
    puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x189cf);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    puVar7 = (undefined8 *)(**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e26);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  uStack_238 = 0x35;
  uVar5 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e3a);
  uVar31 = (ulonglong)in_stack_fffffffffffff5f0 & 0xffffffffffffff00;
  uVar27 = (ulonglong)ppuVar29 & 0xffffffffffffff00;
  FUN_1416cea80(plStack_150,uRam00000001420d58e8,0x80000000,&dStack_678,uVar27,uVar31);
  FUN_1416a8cb0(plStack_150);
  FUN_1400019a0(uVar5,&dStack_678);
  func_0x0001416a8c00(1);
  uStack_238 = 0x37;
  uVar5 = (**(code **)(*plStack_150 + 0x10))(plStack_150,0x18e49);
  FUN_1416cea80(plStack_150,uRam00000001420d58f8,0x80000000,&dStack_668,uVar27 & 0xffffffffffffff00,
                uVar31 & 0xffffffffffffff00);
  FUN_1416a8cb0(plStack_150);
  FUN_1400019a0(uVar5,&dStack_668);
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_8f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_900);
  }
  if ((0x46U >> (uStack_904 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_910);
  }
  if ((0x46U >> (uStack_914 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_920);
  }
  if ((0x46U >> (uStack_924 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_930);
  }
  if ((0x46U >> (uStack_934 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_940);
  }
  if ((0x46U >> (uStack_944 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_950);
  }
  if ((0x46U >> (uStack_954 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_960);
  }
  if ((0x46U >> (uStack_964 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_970);
  }
  if ((0x46U >> (uStack_974 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_980);
  }
  if ((0x46U >> (uStack_984 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_990);
  }
  if ((0x46U >> (uStack_6b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_6b8);
  }
  if ((0x46U >> (uStack_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_834 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_840);
  }
  if ((0x46U >> (uStack_844 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_850);
  }
  if ((0x46U >> (uStack_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_4e0);
  }
  if ((0x46U >> (uStack_6bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_6c8);
  }
  if ((0x46U >> (uStack_6cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_6d8);
  }
  if ((0x46U >> (uStack_65c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_668);
  }
  if ((0x46U >> (uStack_66c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_678);
  }
  if ((0x46U >> (uStack_75c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_768);
  }
  if ((0x46U >> (uStack_76c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_778);
  }
  if ((0x46U >> (uStack_77c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_788);
  }
  if ((0x46U >> (uStack_78c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_798);
  }
  if ((0x46U >> (uStack_79c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7a8);
  }
  if ((0x46U >> (uStack_7ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7b8);
  }
  if ((0x46U >> (uStack_7bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7c8);
  }
  if ((0x46U >> (uStack_7cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7d8);
  }
  if ((0x46U >> (uStack_7dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7e8);
  }
  if ((0x46U >> (uStack_7ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_7f8);
  }
  if ((0x46U >> (uStack_7fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_808);
  }
  if ((0x46U >> (uStack_80c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_818);
  }
  ppuRam0000000142182d78 = (undefined8 **)uStack_248;
  return;
code_r0x0001402d6038:
  dStack_198 = (double)((longlong)dStack_198 + 1);
  goto joined_r0x0001402d5bda;
code_r0x0001402d7408:
  dStack_198 = (double)((longlong)dStack_198 + 1);
  goto joined_r0x0001402d6faa;
}


