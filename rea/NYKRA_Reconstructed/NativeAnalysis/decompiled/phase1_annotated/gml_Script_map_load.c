// Function: gml_Script_map_load @ 0x14004bac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_map_load(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  double *pdVar13;
  double dVar14;
  undefined8 in_stack_fffffffffffff7d8;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 uVar18;
  double **ppdVar17;
  ulonglong uVar19;
  double **ppdVar20;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 *local_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
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
  undefined8 local_738;
  uint local_72c;
  undefined8 local_728;
  uint local_71c;
  undefined8 local_718;
  uint local_70c;
  undefined8 local_708;
  uint local_6fc;
  undefined8 local_6f8;
  uint local_6ec;
  undefined8 local_6e8;
  uint local_6dc;
  undefined8 local_6d8;
  uint local_6cc;
  undefined8 local_6c8;
  uint local_6bc;
  undefined8 local_6b8;
  uint local_6ac;
  undefined8 local_6a8;
  uint local_69c;
  undefined8 local_698;
  uint local_68c;
  undefined8 local_688;
  uint local_67c;
  undefined8 local_678;
  uint local_66c;
  undefined8 local_668;
  uint local_65c;
  undefined8 local_658;
  uint local_64c;
  undefined8 local_648;
  uint local_63c;
  undefined8 local_638;
  uint local_62c;
  undefined8 local_628;
  uint local_61c;
  undefined8 local_618;
  uint local_60c;
  undefined8 local_608;
  uint local_5fc;
  undefined8 local_5f8;
  uint local_5ec;
  undefined8 local_5e8;
  uint local_5dc;
  undefined8 local_5d8;
  uint local_5cc;
  undefined8 local_5c8;
  uint local_5bc;
  undefined8 local_5b8;
  uint local_5ac;
  double local_5a8;
  uint local_59c;
  undefined8 local_598;
  uint local_58c;
  double local_588;
  uint local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
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
  undefined8 local_508;
  uint local_4fc;
  double local_4f8;
  uint local_4ec;
  double local_4e8;
  uint local_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  uint local_4cc;
  undefined8 local_4c8;
  uint local_4bc;
  undefined8 local_4b8;
  uint local_4ac;
  undefined8 local_4a8;
  uint local_49c;
  undefined8 local_498;
  uint local_48c;
  double local_488;
  uint local_47c;
  double local_478;
  uint local_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_440;
  uint local_434;
  undefined8 local_430;
  uint local_424;
  double local_420;
  uint local_414;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined1 *local_3f8;
  undefined8 uStack_3f0;
  undefined1 *local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  uint local_3cc;
  undefined1 *local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  undefined8 local_3a8;
  uint local_39c;
  undefined8 local_398;
  uint local_38c;
  double local_388;
  uint local_37c;
  double local_378;
  uint local_36c;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 *local_348;
  undefined8 uStack_340;
  longlong local_338;
  undefined8 local_328;
  undefined4 local_320;
  uint local_31c;
  undefined8 local_318;
  undefined4 local_310;
  uint local_30c;
  undefined8 *local_308;
  undefined8 *local_300;
  double local_2f8;
  uint local_2ec;
  double local_2e8;
  uint local_2dc;
  double local_2d8;
  uint local_2cc;
  double local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  double local_298;
  uint local_28c;
  double local_288;
  uint local_27c;
  double local_278;
  uint local_26c;
  double local_268;
  uint local_25c;
  double local_258;
  uint local_24c;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  double local_228;
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
  undefined8 local_1c0;
  double local_1b8;
  uint local_1ac;
  double local_1a8;
  uint local_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  uint local_17c;
  longlong local_178;
  double *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffff7d8 >> 0x20);
  local_70 = 0xfffffffffffffffe;
  local_b0 = "gml_Script_map_load";
  local_a8 = 0;
  local_b8 = DAT_142182d78;
  DAT_142182d78 = &local_b8;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
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
  DAT_142182d90 = param_1;
  local_7d0 = param_3;
  local_90 = param_2;
  local_78 = param_1;
  uVar6 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a/*var:CURRENTROOM*/);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1888d/*var:DIALOGUE_OPEN*/);
  local_7ac = 0xffffff;
  local_7b8 = 0;
  local_434 = 0xffffff;
  local_440 = 0;
  local_31c = 0xffffff;
  local_328 = 0;
  local_424 = 0xffffff;
  local_430 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_400 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187c9/*var:cam*/);
  local_3cc = 0xffffff;
  local_3d8 = 0;
  local_4fc = 0xffffff;
  local_508 = 0;
  local_544 = 0xffffff;
  local_550 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uVar8 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18859/*var:CURRENT_PLANET*/);
  local_554 = 0xffffff;
  local_560 = 0;
  local_308 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e/*var:map*/);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_4ec = 0xffffff;
  local_4f8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_510 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18aa0/*var:map_id*/);
  local_414 = 0xffffff;
  local_420 = 0.0;
  local_4dc = 0xffffff;
  local_4e8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_2cc = 0xffffff;
  local_2d8 = 0.0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_37c = 0xffffff;
  local_388 = 0.0;
  local_7d8 = uVar8;
  local_300 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18b2b/*var:obj_list*/);
  local_79c = 0xffffff;
  local_7a8 = 0;
  local_4ac = 0xffffff;
  local_4b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_49c = 0xffffff;
  local_4a8 = 0;
  local_36c = 0xffffff;
  local_378 = 0.0;
  local_39c = 0xffffff;
  local_3a8 = 0;
  local_534 = 0xffffff;
  local_540 = 0;
  local_524 = 0xffffff;
  local_530 = 0;
  local_48c = 0xffffff;
  local_498 = 0;
  local_47c = 0xffffff;
  local_488 = 0.0;
  local_46c = 0xffffff;
  local_478 = 0.0;
  local_78c = 0xffffff;
  local_798 = 0;
  local_77c = 0xffffff;
  local_788 = 0;
  local_514 = 0xffffff;
  local_520 = 0;
  local_76c = 0xffffff;
  local_778 = 0;
  local_75c = 0xffffff;
  local_768 = 0;
  local_74c = 0xffffff;
  local_758 = 0;
  local_73c = 0xffffff;
  local_748 = 0;
  local_72c = 0xffffff;
  local_738 = 0;
  local_71c = 0xffffff;
  local_728 = 0;
  local_70c = 0xffffff;
  local_718 = 0;
  local_6fc = 0xffffff;
  local_708 = 0;
  local_6ec = 0xffffff;
  local_6f8 = 0;
  local_6dc = 0xffffff;
  local_6e8 = 0;
  local_6cc = 0xffffff;
  local_6d8 = 0;
  local_6bc = 0xffffff;
  local_6c8 = 0;
  local_6ac = 0xffffff;
  local_6b8 = 0;
  local_69c = 0xffffff;
  local_6a8 = 0;
  local_68c = 0xffffff;
  local_698 = 0;
  local_67c = 0xffffff;
  local_688 = 0;
  local_66c = 0xffffff;
  local_678 = 0;
  local_65c = 0xffffff;
  local_668 = 0;
  local_64c = 0xffffff;
  local_658 = 0;
  local_63c = 0xffffff;
  local_648 = 0;
  local_62c = 0xffffff;
  local_638 = 0;
  local_61c = 0xffffff;
  local_628 = 0;
  local_60c = 0xffffff;
  local_618 = 0;
  local_5fc = 0xffffff;
  local_608 = 0;
  local_5ec = 0xffffff;
  local_5f8 = 0;
  local_5dc = 0xffffff;
  local_5e8 = 0;
  local_5cc = 0xffffff;
  local_5d8 = 0;
  local_5bc = 0xffffff;
  local_5c8 = 0;
  local_5ac = 0xffffff;
  local_5b8 = 0;
  local_4cc = 0xffffff;
  local_4d8 = 0;
  local_59c = 0xffffff;
  local_5a8 = 0.0;
  local_58c = 0xffffff;
  local_598 = 0;
  local_57c = 0xffffff;
  local_588 = 0.0;
  local_4bc = 0xffffff;
  local_4c8 = 0;
  local_80 = (ulonglong)(uint)local_80;
  local_88 = 0;
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_c0 = (ulonglong)(uint)local_c0;
  local_c8 = 0;
  local_1c0 = (ulonglong)(uint)local_1c0;
  local_1c8 = 0;
  local_360 = (ulonglong)(uint)local_360;
  local_368 = 0;
  *(undefined4 *)((longlong)local_7d0 + 0xc) = 5;
  *local_7d0 = 0;
  FUN_1416ab750(DAT_1420dc880/*gml_Script_map_load*/);
  local_a8 = 0xd9;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar8 = CONCAT44(uVar4,DAT_1420da380/*draw_texture_flush*/);
  FUN_1416ab210(local_78,local_90,&local_88,0,uVar8,0);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_a8 = 0xda;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar8 = CONCAT44(uVar4,DAT_1420da390/*instance_activate_all*/);
  FUN_1416ab210(local_78,local_90,&local_88,0,uVar8,0);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_a8 = 0xdc;
  uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18923/*var:file_current*/);
  if (param_4 < 2) {
    puVar11 = &DAT_1420b1000;
  }
  else {
    puVar11 = (undefined8 *)param_5[1];
  }
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar8,puVar11);
  FUN_1416a8c00(1);
  local_a8 = 0xdd;
  if (param_4 < 2) {
    puVar11 = &DAT_1420b1000;
  }
  else {
    puVar11 = (undefined8 *)param_5[1];
  }
  FUN_1416a8cb0(DAT_14218ecf8);
  FUN_1400019a0(uVar6,puVar11);
  FUN_1416a8c00(1);
  local_a8 = 0xdf;
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_a8 = 0xe1;
  FUN_1400019a0(&local_7b8,uVar8);
  FUN_1416cf780(local_78,DAT_1420d5a38/*keyboard_string*/,0x80000000,&local_7b8);
  cVar2 = FUN_1416f8280(local_78,local_90,0x4e);
  if (cVar2 != '\0') {
    local_a8 = 0xe3;
    (**(code **)(*local_78 + 0x10))(local_78,0x18923/*var:file_current*/);
    cVar2 = FUN_1416f8280(local_78,local_90,0x40);
    if (cVar2 != '\0') {
      local_a8 = 0xe5;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_440);
      FUN_1400019a0(&local_328,&local_440);
      FUN_1416cf840(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_328);
      local_a8 = 0xe6;
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_430);
      FUN_1400019a0(&local_318,&local_430);
      FUN_1416cf840(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_318);
      local_a8 = 0xe7;
      local_2b8 = 0;
      uStack_2b0 = 0;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_440);
      uVar6 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar6);
      FUN_1400019a0(&local_2b8,&local_440);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&local_2b8);
      local_a8 = 0xe8;
      local_348 = (undefined1 *)0x0;
      uStack_340 = 0;
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_430);
      uVar6 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar6);
      FUN_1400019a0(&local_348,&local_430);
      FUN_1416a8c00(1);
      FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&local_348);
      local_a8 = 0xe9;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_328);
      FUN_1400019a0(&local_298,local_400);
      local_168 = &local_298;
      FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_318);
      FUN_1400019a0(&local_288,local_400);
      local_160 = &local_288;
      FUN_1400019a0(&local_278,local_400);
      uVar8 = CONCAT44(uVar4,DAT_1420da3b0/*camera_get_view_width*/);
      local_158 = &local_278;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_168);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_140004520(&local_3c8,uVar6,_DAT_141982c40);
      local_17c = local_31c;
      local_180 = local_320;
      if ((0x46U >> (local_31c & 0x1f) & 1) == 0) {
        local_188 = local_328;
      }
      else {
        FUN_14005b430(&local_188,&local_328);
      }
      FUN_140003e00(&local_188,&local_3c8);
      FUN_1400019a0(&local_268,&local_188);
      if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_188);
      }
      if ((0x46U >> (uStack_3c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3c8);
      }
      uVar8 = CONCAT44(uVar4,DAT_1420da3c0/*camera_get_view_height*/);
      local_150 = &local_268;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar8,&local_160);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_140004520(&local_3c8,uVar6,_DAT_141982c40);
      local_17c = local_30c;
      local_180 = local_310;
      if ((0x46U >> (local_30c & 0x1f) & 1) == 0) {
        local_188 = local_318;
      }
      else {
        FUN_14005b430(&local_188,&local_318);
      }
      FUN_140003e00(&local_188,&local_3c8);
      FUN_1400019a0(&local_258,&local_188);
      if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_188);
      }
      if ((0x46U >> (uStack_3c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3c8);
      }
      uVar6 = CONCAT44(uVar4,DAT_1420da3a0/*camera_set_view_pos*/);
      local_148 = &local_258;
      FUN_1416ab210(local_78,local_90,&local_88,3,uVar6,&local_158);
      local_a8 = 0xea;
      local_3c8 = (undefined1 *)0x0;
      uStack_3c0 = 0;
      FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&local_3c8);
      local_a8 = 0xeb;
      local_578 = 0;
      uStack_570 = 0;
      FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&local_578);
      local_a8 = 0xec;
      DAT_142182d90 = (longlong *)0x8209fa;
      if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_3d8);
      }
      local_3cc = 0;
      local_3d8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      FUN_1416cf840(0x4e,DAT_1420d5a48/*alarm*/,0,&local_3d8);
      local_a8 = 0xed;
      if ((0x46U >> (local_4fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_508);
      }
      local_4fc = 0;
      local_508 = 0;
      FUN_1416cf840(0x40,DAT_1420d5a18/*depth*/,0x80000000,&local_508);
      uStack_460 = (ulonglong)(uint)uStack_460;
      local_468 = 0x4050000000000000/*64 (obj:oPlayer)*/;
      iVar3 = FUN_1416ab810(&local_188,&local_78,&local_90,&local_468);
      if ((0x46U >> (uStack_460._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_468);
      }
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (0 < iVar3) {
        do {
          local_a8 = 0xee;
          if ((0x46U >> (local_544 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_550);
          }
          local_544 = 0;
          local_550 = 0;
          FUN_1416cfae0(local_78,DAT_1420d5a18/*depth*/,0x80000000,&local_550);
          cVar2 = FUN_1416abe60(&local_188,&local_78,&local_90);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        } while (cVar2 != '\0');
      }
      FUN_1416ab620(&local_188,&local_78,&local_90);
      if (local_178 != 0) {
        thunk_FUN_1416c46f0();
        local_178 = 0;
      }
    }
  }
  local_a8 = 0xf2;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  if (param_4 < 1) {
    param_5 = &DAT_1420b1000;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_298,param_5);
  uVar8 = CONCAT44(uVar4,DAT_1420da3d0/*buffer_load*/);
  local_168 = &local_298;
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_f8,uVar6);
  local_a8 = 0xf3;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar6 = (**(code **)(*local_78 + 0x10))(local_78,0x18aa2/*var:map_n*/);
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar9 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar9,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar6,uVar8);
  FUN_1416a8c00(1);
  local_a8 = 0xf4;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar6 = (**(code **)(*local_78 + 0x10))(local_78,0x18b09/*var:mw*/);
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar9 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar9,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar6,uVar8);
  FUN_1416a8c00(1);
  local_a8 = 0xf5;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18abd/*var:mh*/);
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar10 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar8,uVar9);
  FUN_1416a8c00(1);
  local_a8 = 0xf7;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_328);
  FUN_1400019a0(&local_298,&local_328);
  local_168 = &local_298;
  FUN_140001a50(&local_188,uVar6,8);
  FUN_1400019a0(&local_288,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  local_160 = &local_288;
  uVar10 = CONCAT44(uVar4,DAT_1420da0c0/*mean*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&local_328,uVar9);
  FUN_1416cf840(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_328);
  local_a8 = 0xf8;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_318);
  FUN_1400019a0(&local_298,&local_318);
  local_168 = &local_298;
  FUN_140001a50(&local_188,uVar8,8);
  FUN_1400019a0(&local_288,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  local_160 = &local_288;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da0c0/*mean*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
  FUN_1400019a0(&local_318,uVar9);
  FUN_1416cf840(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_318);
  local_a8 = 0xf9;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_578 = 0;
  uStack_570 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4e,0x18e45/*var:xx*/,0x80000000,&local_578,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_578);
  local_168 = &local_298;
  FUN_140001a50(&local_188,uVar6,8);
  FUN_1400019a0(&local_288,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  local_160 = &local_288;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da0c0/*mean*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
  uVar10 = FUN_1416cfcc0(0x4e);
  FUN_1416a8cb0(uVar10);
  FUN_1400019a0(&local_578,uVar9);
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&local_578);
  local_a8 = 0xfa;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_468 = 0;
  uStack_460 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4e,0x18e54/*var:yy*/,0x80000000,&local_468,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_468);
  local_168 = &local_298;
  FUN_140001a50(&local_188,uVar8,8);
  FUN_1400019a0(&local_288,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  local_160 = &local_288;
  uVar10 = CONCAT44(uVar4,DAT_1420da0c0/*mean*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar10 = FUN_1416cfcc0(0x4e);
  FUN_1416a8cb0(uVar10);
  FUN_1400019a0(&local_468,uVar9);
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&local_468);
  local_a8 = 0xfb;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0x500000000;
  FUN_1416ab670(0x4e,DAT_1420d58e8/*x*/,0x80000000,&local_328);
  FUN_1400019a0(&local_298,local_400);
  local_168 = &local_298;
  FUN_1416ab670(0x4e,DAT_1420d58f8/*y*/,0x80000000,&local_318);
  FUN_1400019a0(&local_288,local_400);
  local_160 = &local_288;
  FUN_1400019a0(&local_278,local_400);
  local_158 = &local_278;
  uVar10 = CONCAT44(uVar4,DAT_1420da3b0/*camera_get_view_width*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_140004520(&local_2b8,uVar9,_DAT_141982c40);
  local_17c = local_31c;
  local_180 = local_320;
  if ((0x46U >> (local_31c & 0x1f) & 1) == 0) {
    local_188 = local_328;
  }
  else {
    FUN_14005b430(&local_188,&local_328);
  }
  FUN_140003e00(&local_188,&local_2b8);
  FUN_1400019a0(&local_268,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  local_150 = &local_268;
  uVar10 = CONCAT44(uVar4,DAT_1420da3c0/*camera_get_view_height*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar10,&local_160);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_140004520(&local_2b8,uVar9,_DAT_141982c40);
  local_17c = local_30c;
  local_180 = local_310;
  if ((0x46U >> (local_30c & 0x1f) & 1) == 0) {
    local_188 = local_318;
  }
  else {
    FUN_14005b430(&local_188,&local_318);
  }
  FUN_140003e00(&local_188,&local_2b8);
  FUN_1400019a0(&local_258,&local_188);
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  local_148 = &local_258;
  uVar9 = CONCAT44(uVar4,DAT_1420da3a0/*camera_set_view_pos*/);
  FUN_1416ab210(local_78,local_90,&local_88,3,uVar9,&local_158);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_a8 = 0xfc;
  local_818 = 0;
  uStack_810 = 0;
  FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&local_818);
  local_a8 = 0xfd;
  local_808 = 0;
  uStack_800 = 0;
  FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&local_808);
  local_a8 = 0xfe;
  if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d8);
  }
  local_3cc = 0;
  local_3d8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  FUN_1416cf840(0x4e,DAT_1420d5a48/*alarm*/,0,&local_3d8);
  local_a8 = 0x101;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar9 = (**(code **)(*local_78 + 0x10))(local_78,0x18b9c/*var:planet*/);
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar16 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar10 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar9,uVar10);
  FUN_1416a8c00(1);
  local_a8 = 0x102;
  FUN_1416a8cb0(DAT_14218ecf8);
  FUN_1400019a0(local_7d8,uVar9);
  FUN_1416a8c00(1);
  local_a8 = 0x103;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar9 = (**(code **)(*local_78 + 0x10))(local_78,0x189c9/*var:horizon*/);
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar16 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar10 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar16,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(local_78);
  FUN_1400019a0(uVar9,uVar10);
  FUN_1416a8c00(1);
  local_a8 = 0x104;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar10 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&local_560,uVar9);
  local_a8 = 0x105;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar10 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar10,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&local_560,uVar9);
  local_a8 = 0x106;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b25b8);
  local_160 = &local_288;
  uVar9 = FUN_1416ab210(local_78,local_90,&local_88,2,CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/),&local_168);
  FUN_1400019a0(&local_560,uVar9);
  local_a8 = 0x107;
  if ((0x46U >> (*(uint *)((longlong)local_308 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(local_308);
  }
  *(undefined4 *)((longlong)local_308 + 0xc) = 0;
  *local_308 = &DAT_bff0000000000000;
  local_a8 = 0x108;
  DAT_142182d90 = (longlong *)0x428765;
  FUN_1416a8cb0(DAT_14218ecf8);
  uVar4 = FUN_141693b30(uVar6);
  puVar7 = (undefined8 *)FUN_1416924a0(local_308,uVar4);
  FUN_1416a8cb0(*local_308);
  uVar4 = FUN_141693b30(uVar8);
  puVar11 = (undefined8 *)FUN_1416924a0(puVar7,uVar4);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar11 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = 0;
  FUN_1416a8c00(3);
  local_a8 = 0x10a;
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  dVar1 = _DAT_141981e30;
  local_cc = 0;
  local_d8 = 0.0;
  while( true ) {
    uVar6 = (**(code **)(*local_78 + 0x10))(local_78,0x18b09/*var:mw*/);
    iVar3 = FUN_1416d9df0(&local_d8,uVar6,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (0 < iVar3)) break;
    local_a8 = 0x10b;
    if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2c8);
    }
    local_2bc = 0;
    local_2c8 = 0.0;
    while( true ) {
      uVar6 = (**(code **)(*local_78 + 0x10))(local_78,0x18abd/*var:mh*/);
      iVar3 = FUN_1416d9df0(&local_2c8,uVar6,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (0 < iVar3)) break;
      local_a8 = 0x10c;
      FUN_1416a8cb0(DAT_14218ecf8);
      uVar4 = FUN_141693b30(&local_d8);
      puVar7 = (undefined8 *)FUN_1416924a0(local_308,uVar4);
      FUN_1416a8cb0(*local_308);
      uVar4 = FUN_141693b30(&local_2c8);
      puVar11 = (undefined8 *)FUN_1416924a0(puVar7,uVar4);
      FUN_1416a8cb0(*puVar7);
      if ((0x46U >> (*(uint *)((longlong)puVar11 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar11);
      }
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      *puVar11 = 0;
      FUN_1416a8c00(3);
      local_a8 = 0x10d;
      DAT_142182d90 = (longlong *)0x410000;
      local_17c = 0;
      local_188 = 0;
      if ((local_2bc & 0xffffff) == 0) {
        uVar4 = SUB84(local_2c8,0);
        uVar5 = (undefined4)((ulonglong)local_2c8 >> 0x20);
        dVar14 = local_d8;
      }
      else {
        uVar6 = FUN_1416940c0(&local_2c8);
        uVar4 = (undefined4)uVar6;
        uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
        dVar14 = local_d8;
      }
      local_d8 = dVar14;
      if ((local_cc & 0xffffff) != 0) {
        dVar14 = (double)FUN_1416940c0(&local_d8);
      }
      FUN_1416cd560(local_308,(longlong)dVar14,(longlong)(double)CONCAT44(uVar5,uVar4),&local_188);
      if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_188);
      }
      switch(local_2bc & 0xffffff) {
      case 1:
        local_2c8 = (double)FUN_1416940c0(&local_2c8);
        local_2c8 = local_2c8 + dVar1;
        local_2bc = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_2c8,&local_2c8);
        break;
      case 7:
        local_2c8 = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_ + 1);
        break;
      case 10:
        local_2c8 = (double)((longlong)local_2c8 + 1);
        break;
      case 0xd:
        local_2bc = 0;
      case 0:
        local_2c8 = local_2c8 + dVar1;
      }
    }
    (**(code **)(*local_78 + 0x10))(local_78,0x18b09/*var:mw*/);
    (**(code **)(*local_78 + 0x10))(local_78,0x18abd/*var:mh*/);
    (**(code **)(*local_78 + 0x10))(local_78,0x18b9c/*var:planet*/);
    switch(local_cc & 0xffffff) {
    case 1:
      local_d8 = (double)FUN_1416940c0(&local_d8);
      local_d8 = local_d8 + dVar1;
      local_cc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_d8,&local_d8);
      break;
    case 7:
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      break;
    case 10:
      local_d8 = (double)((longlong)local_d8 + 1);
      break;
    case 0xd:
      local_cc = 0;
    case 0:
      local_d8 = local_d8 + dVar1;
    }
  }
  local_a8 = 0x111;
  if ((0x46U >> (local_4ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4f8);
  }
  local_4ec = 0;
  local_4f8 = 0.0;
  local_a8 = 0x113;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar6 = 0;
  FUN_14005ffa0(local_78,local_90,&local_88,0,0);
  uStack_2b0 = uStack_2b0 & 0xffffffff;
  local_2b8 = 0x4050c00000000000/*67 (obj:oAenox_bound)*/;
  iVar3 = FUN_1416ab810(&local_188,&local_78,&local_90,&local_2b8);
  if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  if (0 < iVar3) {
    do {
      local_a8 = 0x114;
      FUN_1416f8210(local_78,local_90,0,0);
      cVar2 = FUN_1416abe60(&local_188,&local_78);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(&local_188,&local_78,&local_90);
  iVar3 = FUN_1416f82f0(local_78,local_90,0x40);
  if (0 < iVar3) {
    local_a8 = 0x116;
    uStack_340 = uStack_340 & 0xffffffff;
    local_348 = (undefined1 *)0x4050000000000000/*64 (obj:oPlayer)*/;
    iVar3 = FUN_1416ab810(&local_2b8,&local_78,&local_90,&local_348);
    if ((0x46U >> (uStack_340._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_348);
    }
    if (0 < iVar3) {
      do {
        local_a8 = 0x118;
        puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18dff/*var:UI_SMELT*/);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        local_a8 = 0x119;
        puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18de9/*var:UI_CRAFT*/);
        if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        cVar2 = FUN_1416abe60(&local_2b8,&local_78,&local_90);
      } while (cVar2 != '\0');
    }
    FUN_1416ab620(&local_2b8,&local_78,&local_90);
    if (local_2a8 != 0) {
      thunk_FUN_1416c46f0();
      local_2a8 = 0;
    }
  }
  local_a8 = 0x121;
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0.0;
  while( true ) {
    uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18b09/*var:mw*/);
    iVar3 = FUN_1416d9df0(&local_1b8,uVar8,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_a8 = 0x122;
    if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1a8);
    }
    local_19c = 0;
    local_1a8 = 0.0;
    while( true ) {
      uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18abd/*var:mh*/);
      iVar3 = FUN_1416d9df0(&local_1a8,uVar8,DAT_1420f6b08,1);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      local_a8 = 0x123;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_168 = &local_f8;
      FUN_140002730(&local_288,&DAT_1420b2638);
      local_160 = &local_288;
      uVar6 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
      uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_168);
      FUN_1400019a0(&local_4f8,uVar8);
      local_a8 = 0x124;
      uStack_2b0 = uStack_2b0 & 0xffffffff;
      local_2b8 = 0;
      iVar3 = FUN_1416d9df0(&local_4f8,&local_2b8,DAT_1420f6b08,0);
      uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar4 = SUB84(local_1a8,0);
      uVar5 = (undefined4)((ulonglong)local_1a8 >> 0x20);
      if (iVar3 == 0) {
        local_a8 = 300;
        DAT_142182d90 = (longlong *)0x410000;
        uStack_2b0 = uStack_2b0 & 0xffffffff;
        local_2b8 = 0;
        dVar14 = local_1b8;
        if ((local_19c & 0xffffff) != 0) {
          uVar8 = FUN_1416940c0(&local_1a8);
          uVar4 = (undefined4)uVar8;
          uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
          dVar14 = local_1b8;
        }
        local_1b8 = dVar14;
        if ((local_1ac & 0xffffff) != 0) {
          dVar14 = (double)FUN_1416940c0(&local_1b8);
        }
        FUN_1416cd560(local_308,(longlong)dVar14,(longlong)(double)CONCAT44(uVar5,uVar4),&local_2b8)
        ;
        if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_2b8);
        }
      }
      else {
        local_a8 = 0x125;
        DAT_142182d90 = (longlong *)0x410000;
        dVar14 = local_1b8;
        if ((local_19c & 0xffffff) != 0) {
          uVar6 = FUN_1416940c0(&local_1a8);
          uVar4 = (undefined4)uVar6;
          uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
          dVar14 = local_1b8;
        }
        local_1b8 = dVar14;
        if ((local_1ac & 0xffffff) != 0) {
          dVar14 = (double)FUN_1416940c0(&local_1b8);
        }
        FUN_1416cd560(local_308,(longlong)dVar14,(longlong)(double)CONCAT44(uVar5,uVar4),&local_4f8)
        ;
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_88 = 0;
        local_80 = 0x500000000;
        FUN_1400019a0(&local_298,local_510);
        local_168 = &local_298;
        local_160 = &local_4f8;
        FUN_140002730(&local_278,&DAT_1420b2648);
        local_158 = &local_278;
        uVar6 = CONCAT44(uVar18,DAT_1420da240/*array_get_2D*/);
        uVar8 = FUN_1416ab210(local_78,local_90,&local_88,3,uVar6,&local_168);
        uStack_2b0 = uStack_2b0 & 0xffffffff;
        local_2b8 = 0xc010000000000000/*-4*/;
        iVar3 = FUN_1416d9df0(uVar8,&local_2b8,DAT_1420f6b08,0);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar3 != 0) {
          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_a0 = 0;
          local_98 = 0x500000000;
          if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0x500000000;
          FUN_1400019a0(&local_268,local_510);
          local_150 = &local_268;
          local_148 = &local_4f8;
          FUN_140002730(&local_248,&DAT_1420b2648);
          local_140 = &local_248;
          FUN_140001a50(&local_2b8,&local_1b8,0x10);
          FUN_1400019a0(&local_238,&local_2b8);
          if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_2b8);
          }
          local_138 = &local_238;
          FUN_140001a50(&local_2b8,&local_1a8,0x10);
          FUN_1400019a0(&local_228,&local_2b8);
          if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_2b8);
          }
          local_130 = &local_228;
          uVar8 = CONCAT44(uVar4,DAT_1420da240/*array_get_2D*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,3,uVar8,&local_150);
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          FUN_1400019a0(&local_218,uVar6);
          local_128 = &local_218;
          uVar6 = CONCAT44(uVar4,DAT_1420da3f0/*instance_position*/);
          uVar8 = FUN_1416ab210(local_78,local_90,&local_a0,3,uVar6,&local_138);
          uStack_2b0 = uStack_2b0 & 0xffffffff;
          local_2b8 = 0xc010000000000000/*-4*/;
          iVar3 = FUN_1416d9df0(uVar8,&local_2b8,DAT_1420f6b08,0);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (iVar3 == 0) {
            local_a8 = 0x127;
            if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_1c8);
            }
            local_1c8 = 0;
            local_1c0 = 0x500000000;
            FUN_140001a50(&local_2b8,&local_1b8,0x10);
            FUN_1400019a0(&local_208,&local_2b8);
            if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_2b8);
            }
            local_120 = &local_208;
            FUN_140001a50(&local_2b8,&local_1a8,0x10);
            FUN_1400019a0(&local_1f8,&local_2b8);
            if ((0x46U >> (uStack_2b0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_2b8);
            }
            local_118 = &local_1f8;
            uVar5 = FUN_141693b30(&local_4f8);
            plVar12 = (longlong *)FUN_14002e450(local_510,uVar5);
            if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (*plVar12 != 0)) {
              FUN_1416ba910();
              iVar3 = FUN_1416ba8f0(*plVar12);
              if (iVar3 < 6) {
                uVar5 = FUN_1416ba8f0(*plVar12);
                FUN_1416ab080("index out of bounds request %d maximum size is %d",5,uVar5);
                plVar12 = (longlong *)0x0;
              }
              else {
                plVar12 = (longlong *)FUN_1416ba8e0(*plVar12,5);
              }
            }
            else {
              FUN_1416ab080("trying to index variable that is not an array");
            }
            FUN_1400019a0(&local_1e8,plVar12);
            local_110 = &local_1e8;
            uVar5 = FUN_141693b30(&local_4f8);
            plVar12 = (longlong *)FUN_14002e450(local_510,uVar5);
            if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (*plVar12 != 0)) {
              FUN_1416ba910();
              iVar3 = FUN_1416ba8f0(*plVar12);
              if (iVar3 < 5) {
                uVar5 = FUN_1416ba8f0(*plVar12);
                FUN_1416ab080("index out of bounds request %d maximum size is %d",4,uVar5);
                plVar12 = (longlong *)0x0;
              }
              else {
                plVar12 = (longlong *)FUN_1416ba8e0(*plVar12,4);
              }
            }
            else {
              FUN_1416ab080("trying to index variable that is not an array");
            }
            FUN_1400019a0(&local_1d8,plVar12);
            local_108 = &local_1d8;
            uVar6 = CONCAT44(uVar4,DAT_1420da400/*instance_create_depth*/);
            FUN_1416ab210(local_78,local_90,&local_1c8,4,uVar6,&local_120);
          }
        }
      }
      switch(local_19c & 0xffffff) {
      case 1:
        local_1a8 = (double)FUN_1416940c0(&local_1a8);
        local_1a8 = local_1a8 + dVar1;
        local_19c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_1a8,&local_1a8);
        break;
      case 7:
        local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
        break;
      case 10:
        local_1a8 = (double)((longlong)local_1a8 + 1);
        break;
      case 0xd:
        local_19c = 0;
      case 0:
        local_1a8 = local_1a8 + dVar1;
      }
    }
    switch(local_1ac & 0xffffff) {
    case 1:
      local_1b8 = (double)FUN_1416940c0(&local_1b8);
      local_1b8 = local_1b8 + dVar1;
      local_1ac = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_1b8,&local_1b8);
      break;
    case 7:
      local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
      break;
    case 10:
      local_1b8 = (double)((longlong)local_1b8 + 1);
      break;
    case 0xd:
      local_1ac = 0;
    case 0:
      local_1b8 = local_1b8 + dVar1;
    }
  }
  local_a8 = 0x131;
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0.0;
  while( true ) {
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x186b9/*var:_layer*/);
    FUN_1400019a0(&local_298,uVar6);
    local_168 = &local_298;
    ppdVar20 = &local_168;
    uVar15 = CONCAT44(uVar4,DAT_1420da250/*array_length*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,ppdVar20);
    iVar3 = FUN_1416d9df0(&local_d8,uVar6,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_a8 = 0x132;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    uVar5 = (undefined4)(uVar15 >> 0x20);
    local_a0 = 0;
    local_98 = 0x500000000;
    uVar6 = (**(code **)(*local_78 + 8))(local_78,0x186b9/*var:_layer*/);
    uVar4 = FUN_141693b30(&local_d8);
    uVar6 = FUN_14002e450(uVar6,uVar4);
    FUN_1400019a0(&local_288,uVar6);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar5,DAT_1420da260/*layer_get_id*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_160);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_420,uVar6);
    local_a8 = 0x133;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_420;
    uVar8 = CONCAT44(uVar4,DAT_1420da270/*layer_tilemap_get_id*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_4e8,uVar6);
    local_a8 = 0x134;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_4e8;
    FUN_140002730(&local_288,&DAT_14217e850);
    local_160 = &local_288;
    uVar6 = CONCAT44(uVar4,DAT_1420da410/*tilemap_clear*/);
    FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_168);
    local_a8 = 0x135;
    if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1b8);
    }
    local_1ac = 0;
    local_1b8 = 0.0;
    while( true ) {
      uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18b09/*var:mw*/);
      iVar3 = FUN_1416d9df0(&local_1b8,uVar8,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      local_a8 = 0x136;
      if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = 0.0;
      while( true ) {
        uVar8 = (**(code **)(*local_78 + 0x10))(local_78,0x18abd/*var:mh*/);
        iVar3 = FUN_1416d9df0(&local_1a8,uVar8,DAT_1420f6b08,1);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_a8 = 0x137;
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_88 = 0;
        local_80 = 0x500000000;
        local_168 = &local_f8;
        FUN_140002730(&local_288,&DAT_1420b2638);
        local_160 = &local_288;
        uVar6 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
        uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_168);
        FUN_1400019a0(&local_4f8,uVar8);
        uStack_2b0 = uStack_2b0 & 0xffffffff;
        local_2b8 = 0;
        iVar3 = FUN_1416d9df0(&local_4f8,&local_2b8,DAT_1420f6b08,0);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar3 != 0) {
          local_a8 = 0x138;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          local_168 = &local_4e8;
          local_158 = &local_1b8;
          local_150 = &local_1a8;
          uVar6 = CONCAT44(uVar4,DAT_1420da420/*tilemap_set*/);
          local_160 = &local_4f8;
          FUN_1416ab210(local_78,local_90,&local_88,4,uVar6,&local_168);
        }
        switch(local_19c & 0xffffff) {
        case 1:
          local_1a8 = (double)FUN_1416940c0(&local_1a8);
          local_1a8 = local_1a8 + dVar1;
          local_19c = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_1a8,&local_1a8);
          break;
        case 7:
          local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
          break;
        case 10:
          local_1a8 = (double)((longlong)local_1a8 + 1);
          break;
        case 0xd:
          local_19c = 0;
        case 0:
          local_1a8 = local_1a8 + dVar1;
        }
      }
      switch(local_1ac & 0xffffff) {
      case 1:
        local_1b8 = (double)FUN_1416940c0(&local_1b8);
        local_1b8 = local_1b8 + dVar1;
        local_1ac = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_1b8,&local_1b8);
        break;
      case 7:
        local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
        break;
      case 10:
        local_1b8 = (double)((longlong)local_1b8 + 1);
        break;
      case 0xd:
        local_1ac = 0;
      case 0:
        local_1b8 = local_1b8 + dVar1;
      }
    }
    switch(local_cc & 0xffffff) {
    case 1:
      local_d8 = (double)FUN_1416940c0(&local_d8);
      local_d8 = local_d8 + dVar1;
      local_cc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_d8,&local_d8);
      break;
    case 7:
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      break;
    case 10:
      local_d8 = (double)((longlong)local_d8 + 1);
      break;
    case 0xd:
      local_cc = 0;
    case 0:
      local_d8 = local_d8 + dVar1;
    }
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_3f8 = (undefined1 *)0x0;
  uStack_3f0 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_3f8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_3f8);
  local_168 = &local_298;
  FUN_140002730(&local_288,&DAT_1420b2658);
  local_160 = &local_288;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da430/*ds_exists*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
  cVar2 = FUN_1416927d0(uVar6);
  if (cVar2 != '\0') {
    local_a8 = 0x13f;
    if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_198);
    }
    local_18c = 0;
    local_198 = 0.0;
    while( true ) {
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_3f8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_298,&local_3f8);
      ppdVar20 = &local_168;
      uVar15 = CONCAT44(uVar4,DAT_1420d9ec0/*ds_list_size*/);
      local_168 = &local_298;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,ppdVar20);
      iVar3 = FUN_1416d9df0(&local_198,uVar6,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      local_a8 = 0x140;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_3f8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_288,&local_3f8);
      local_160 = &local_288;
      uVar8 = CONCAT44(uVar4,DAT_1420d9ee0/*ds_list_find_value*/);
      local_158 = &local_198;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_160);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_268,uVar6);
      local_150 = &local_268;
      ppdVar20 = &local_150;
      uVar15 = CONCAT44(uVar4,DAT_1420da440/*layer_sprite_destroy*/);
      FUN_1416ab210(local_78,local_90,&local_a0,1,uVar15,ppdVar20);
      switch(local_18c & 0xffffff) {
      case 1:
        local_198 = (double)FUN_1416940c0(&local_198);
        local_198 = local_198 + dVar1;
        local_18c = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_198);
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
    local_a8 = 0x142;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_3f8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar15 >> 0x20);
    FUN_1400019a0(&local_298,&local_3f8);
    uVar15 = CONCAT44(uVar4,DAT_1420d9fd0/*ds_list_destroy*/);
    local_168 = &local_298;
    FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,&local_168);
  }
  uVar4 = (undefined4)(uVar15 >> 0x20);
  local_a8 = 0x144;
  DAT_142182d90 = (longlong *)0x83876b;
  uVar6 = FUN_1416cfcc0(0x4f);
  FUN_1416a8cb0(uVar6);
  if ((0x46U >> (uStack_3f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3f8);
  }
  uStack_3f0 = uStack_3f0 & 0xffffffff;
  local_3f8 = &DAT_bff0000000000000;
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,0,&local_3f8);
  local_a8 = 0x145;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar15 = CONCAT44(uVar4,DAT_1420da020/*ds_list_create*/);
  uVar19 = 0;
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,0,uVar15,0);
  uVar8 = FUN_1416cfcc0(0x4f);
  FUN_1416a8cb0(uVar8);
  FUN_1400019a0(&local_3f8,uVar6);
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,0,&local_3f8);
  local_a8 = 0x146;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_7f8 = 0;
  uStack_7f0 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18761/*var:asset_layer*/,0,&local_7f8,uVar15,uVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_7f8);
  uVar8 = CONCAT44(uVar4,DAT_1420da260/*layer_get_id*/);
  local_168 = &local_298;
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_420,uVar6);
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  local_2ec = 0;
  local_2f8 = 0.0;
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  local_2dc = 0;
  local_2e8 = 0.0;
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  local_2cc = 0;
  local_2d8 = 0.0;
  if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_398);
  }
  local_38c = 0;
  local_398 = 0;
  local_a8 = 0x147;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_420;
  uVar8 = CONCAT44(uVar4,DAT_1420da270/*layer_tilemap_get_id*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_4e8,uVar6);
  local_a8 = 0x148;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b2638);
  local_160 = &local_288;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
  FUN_1400019a0(&local_398,uVar6);
  local_a8 = 0x149;
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0.0;
  while( true ) {
    iVar3 = FUN_1416d9df0(&local_d8,&local_398,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_a8 = 0x14a;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    uVar4 = (undefined4)(uVar15 >> 0x20);
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2638);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2f8,uVar6);
    local_a8 = 0x14b;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2638);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2e8,uVar6);
    local_a8 = 0x14c;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2668);
    local_160 = &local_288;
    ppdVar20 = &local_168;
    uVar15 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
    FUN_1400019a0(&local_2d8,uVar6);
    local_a8 = 0x14d;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0x500000000;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,0,&local_3f8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
    local_168 = &local_2d8;
    local_160 = &local_420;
    local_158 = &local_2f8;
    local_150 = &local_2e8;
    uVar8 = CONCAT44((int)(uVar15 >> 0x20),DAT_1420da460/*asset_get_index*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_258,uVar6);
    local_148 = &local_258;
    FUN_1400019a0(&local_248,&local_3f8);
    local_140 = &local_248;
    uVar8 = CONCAT44(uVar4,DAT_1420da450/*layer_sprite_create*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,4,uVar8,&local_160);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_238,uVar6);
    local_138 = &local_238;
    ppdVar20 = &local_140;
    uVar15 = CONCAT44(uVar4,DAT_1420da1d0/*ds_list_add*/);
    FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
    switch(local_cc & 0xffffff) {
    case 1:
      local_d8 = (double)FUN_1416940c0(&local_d8);
      local_d8 = local_d8 + dVar1;
      local_cc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_d8,&local_d8);
      break;
    case 7:
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      break;
    case 10:
      local_d8 = (double)((longlong)local_d8 + 1);
      break;
    case 0xd:
      local_cc = 0;
    case 0:
      local_d8 = local_d8 + dVar1;
    }
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_3e8 = (undefined1 *)0x0;
  uStack_3e0 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_3e8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_3e8);
  local_168 = &local_298;
  FUN_140002730(&local_288,&DAT_1420b2658);
  local_160 = &local_288;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da430/*ds_exists*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
  cVar2 = FUN_1416927d0(uVar6);
  if (cVar2 != '\0') {
    local_a8 = 0x151;
    if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_198);
    }
    local_18c = 0;
    local_198 = 0.0;
    while( true ) {
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_3e8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_298,&local_3e8);
      ppdVar20 = &local_168;
      uVar15 = CONCAT44(uVar4,DAT_1420d9ec0/*ds_list_size*/);
      local_168 = &local_298;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,ppdVar20);
      iVar3 = FUN_1416d9df0(&local_198,uVar6,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      local_a8 = 0x152;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_3e8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar15 >> 0x20);
      FUN_1400019a0(&local_288,&local_3e8);
      local_160 = &local_288;
      uVar8 = CONCAT44(uVar4,DAT_1420d9ee0/*ds_list_find_value*/);
      local_158 = &local_198;
      uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_160);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_268,uVar6);
      local_150 = &local_268;
      ppdVar20 = &local_150;
      uVar15 = CONCAT44(uVar4,DAT_1420da440/*layer_sprite_destroy*/);
      FUN_1416ab210(local_78,local_90,&local_a0,1,uVar15,ppdVar20);
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
    local_a8 = 0x154;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_3e8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar15 >> 0x20);
    FUN_1400019a0(&local_298,&local_3e8);
    uVar15 = CONCAT44(uVar4,DAT_1420d9fd0/*ds_list_destroy*/);
    local_168 = &local_298;
    FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,&local_168);
  }
  uVar4 = (undefined4)(uVar15 >> 0x20);
  local_a8 = 0x156;
  uVar6 = FUN_1416cfcc0(0x4f);
  FUN_1416a8cb0(uVar6);
  if ((0x46U >> (uStack_3e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3e8);
  }
  uStack_3e0 = uStack_3e0 & 0xffffffff;
  local_3e8 = &DAT_bff0000000000000;
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,1,&local_3e8);
  local_a8 = 0x157;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar15 = CONCAT44(uVar4,DAT_1420da020/*ds_list_create*/);
  uVar19 = 0;
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,0,uVar15,0);
  uVar8 = FUN_1416cfcc0(0x4f);
  FUN_1416a8cb0(uVar8);
  FUN_1400019a0(&local_3e8,uVar6);
  FUN_1416a8c00(1);
  FUN_1416d0790(0x4f,0x18763/*var:asset_list*/,1,&local_3e8);
  local_a8 = 0x158;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_7e8 = 0;
  uStack_7e0 = 0;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18761/*var:asset_layer*/,1,&local_7e8,uVar15,uVar19 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar15 >> 0x20);
  FUN_1400019a0(&local_298,&local_7e8);
  local_168 = &local_298;
  uVar8 = CONCAT44(uVar4,DAT_1420da260/*layer_get_id*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_420,uVar6);
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  local_2ec = 0;
  local_2f8 = 0.0;
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  local_2dc = 0;
  local_2e8 = 0.0;
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  local_2cc = 0;
  local_2d8 = 0.0;
  if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_398);
  }
  local_38c = 0;
  local_398 = 0;
  local_a8 = 0x159;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_420;
  uVar8 = CONCAT44(uVar4,DAT_1420da270/*layer_tilemap_get_id*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_4e8,uVar6);
  local_a8 = 0x15a;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b2638);
  local_160 = &local_288;
  uVar6 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar8 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_168);
  FUN_1400019a0(&local_398,uVar8);
  local_a8 = 0x15b;
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0.0;
  while( true ) {
    iVar3 = FUN_1416d9df0(&local_d8,&local_398,DAT_1420f6b08,1);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_a8 = 0x15c;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2638);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2f8,uVar6);
    local_a8 = 0x15d;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2638);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2e8,uVar6);
    local_a8 = 0x15e;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2668);
    local_160 = &local_288;
    ppdVar20 = &local_168;
    uVar15 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar15,ppdVar20);
    FUN_1400019a0(&local_2d8,uVar6);
    local_a8 = 0x15f;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0x500000000;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18763/*var:asset_list*/,1,&local_3e8,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00);
    local_168 = &local_2d8;
    local_160 = &local_420;
    local_158 = &local_2f8;
    local_150 = &local_2e8;
    uVar8 = CONCAT44((int)(uVar15 >> 0x20),DAT_1420da460/*asset_get_index*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_258,uVar6);
    local_148 = &local_258;
    FUN_1400019a0(&local_248,&local_3e8);
    local_140 = &local_248;
    uVar8 = CONCAT44(uVar4,DAT_1420da450/*layer_sprite_create*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,4,uVar8,&local_160);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_238,uVar6);
    local_138 = &local_238;
    uVar6 = CONCAT44(uVar4,DAT_1420da1d0/*ds_list_add*/);
    FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_140);
    switch(local_cc & 0xffffff) {
    case 1:
      local_d8 = (double)FUN_1416940c0(&local_d8);
      local_d8 = local_d8 + dVar1;
      local_cc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_d8,&local_d8);
      break;
    case 7:
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      break;
    case 10:
      local_d8 = (double)((longlong)local_d8 + 1);
      break;
    case 0xd:
      local_cc = 0;
    case 0:
      local_d8 = local_d8 + dVar1;
    }
  }
  local_a8 = 0x162;
  if ((0x46U >> (local_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f8);
  }
  local_2ec = 0;
  local_2f8 = 0.0;
  if ((0x46U >> (local_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  local_2dc = 0;
  local_2e8 = 0.0;
  if ((0x46U >> (local_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  local_2cc = 0;
  local_2d8 = 0.0;
  if ((0x46U >> (local_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_388);
  }
  local_37c = 0;
  local_388 = 0.0;
  local_a8 = 0x163;
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  while( true ) {
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    FUN_1400019a0(&local_298,local_300);
    local_168 = &local_298;
    uVar8 = CONCAT44(uVar4,DAT_1420d9ec0/*ds_list_size*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
    iVar3 = FUN_1416d9df0(&local_198,uVar6,DAT_1420f6b08,1);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_a8 = 0x163;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    FUN_1400019a0(&local_288,local_300);
    local_160 = &local_288;
    uVar6 = CONCAT44(uVar4,DAT_1420d9ee0/*ds_list_find_value*/);
    local_158 = &local_198;
    pdVar13 = (double *)FUN_1416ab210(local_78,local_90,&local_a0,2,uVar6,&local_160);
    if ((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 0) {
      dVar14 = *pdVar13;
    }
    else {
      dVar14 = (double)FUN_1416940c0(pdVar13);
    }
    cVar2 = FUN_1416f8280(local_78,local_90,(int)dVar14);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (cVar2 != '\0') {
      local_a8 = 0x164;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      FUN_1400019a0(&local_268,local_300);
      uVar5 = DAT_1420d5a58/*persistent*/;
      local_150 = &local_268;
      uVar6 = CONCAT44(uVar4,DAT_1420d9ee0/*ds_list_find_value*/);
      local_148 = &local_198;
      uVar8 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar6,&local_150);
      FUN_1416cfc30(uVar8,uVar5,0x80000000,&local_7a8);
      uStack_2b0 = uStack_2b0 & 0xffffffff;
      local_2b8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(&local_7a8,&local_2b8,DAT_1420f6b08,0);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar3 != 0) {
        local_a8 = 0x166;
        if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0x500000000;
        FUN_1400019a0(&local_248,local_300);
        local_140 = &local_248;
        uVar6 = CONCAT44(uVar4,DAT_1420d9ee0/*ds_list_find_value*/);
        local_138 = &local_198;
        uVar8 = FUN_1416ab210(local_78,local_90,&local_1c8,2,uVar6,&local_140);
        FUN_1400019a0(&local_228,uVar8);
        local_130 = &local_228;
        FUN_1416f8210(local_78,local_90,1,&local_130);
      }
    }
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
  uStack_340 = uStack_340 & 0xffffffff;
  local_348 = (undefined1 *)0x4050c00000000000/*67 (obj:oAenox_bound)*/;
  iVar3 = FUN_1416ab810(&local_2b8,&local_78,&local_90,&local_348);
  if ((0x46U >> (uStack_340._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_348);
  }
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (0 < iVar3) {
    do {
      local_a8 = 0x16a;
      FUN_1416f8210(local_78,local_90,0,0);
      cVar2 = FUN_1416abe60(&local_2b8,&local_78);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(&local_2b8,&local_78,&local_90);
  local_a8 = 0x16b;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_1400019a0(&local_298,local_300);
  local_168 = &local_298;
  uVar6 = CONCAT44(uVar4,DAT_1420d9fd0/*ds_list_destroy*/);
  FUN_1416ab210(local_78,local_90,&local_88,1,uVar6,&local_168);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_a8 = 0x16c;
  if ((0x46U >> (*(uint *)((longlong)local_300 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(local_300);
  }
  *(undefined4 *)((longlong)local_300 + 0xc) = 0;
  *local_300 = 0;
  local_a8 = 0x16d;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar8 = CONCAT44(uVar4,DAT_1420da020/*ds_list_create*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,0,uVar8,0);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1416a8cb0(DAT_14218ecf8);
  FUN_1400019a0(local_300,uVar6);
  FUN_1416a8c00(1);
  local_a8 = 0x16e;
  puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18826/*var:collision_list*/);
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_a8 = 0x16f;
  DAT_142182d90 = (longlong *)0x42879d;
  puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18826/*var:collision_list*/);
  FUN_1416a8cb0(local_78);
  puVar11 = (undefined8 *)FUN_1416924a0(puVar7,0);
  FUN_1416a8cb0(*puVar7);
  if ((0x46U >> (*(uint *)((longlong)puVar11 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = 0xc010000000000000/*-4*/;
  FUN_1416a8c00(2);
  local_a8 = 0x170;
  if ((0x46U >> (local_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b8);
  }
  local_4ac = 0;
  local_4b8 = 0;
  local_a8 = 0x171;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  FUN_140002730(&local_288,&DAT_1420b2638);
  local_160 = &local_288;
  ppdVar20 = &local_168;
  ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,ppdVar17,ppdVar20);
  FUN_1400019a0(&local_398,uVar6);
  local_a8 = 0x178;
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0.0;
  while( true ) {
    iVar3 = FUN_1416d9df0(&local_d8,&local_398,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_140055f24;
    local_a8 = 0x178;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
    local_88 = 0;
    local_80 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    local_168 = &local_f8;
    uVar8 = CONCAT44(uVar4,DAT_1420da480/*buffer_get_size*/);
    local_160 = local_168;
    uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_160);
    ppdVar20 = &local_168;
    ppdVar17 = (double **)CONCAT44((int)((ulonglong)uVar8 >> 0x20),DAT_1420da470/*buffer_tell*/);
    uVar8 = FUN_1416ab210(local_78,local_90,&local_88,1,ppdVar17,ppdVar20);
    iVar3 = FUN_1416d9df0(uVar8,uVar6,DAT_1420f6b08,1);
    if (-1 < iVar3) break;
    local_a8 = 0x17c;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2648);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2f8,uVar6);
    local_a8 = 0x17d;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2648);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2e8,uVar6);
    local_a8 = 0x17e;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2648);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2d8,uVar6);
    local_a8 = 0x17f;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_f8;
    FUN_140002730(&local_288,&DAT_1420b2668);
    local_160 = &local_288;
    uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_388,uVar6);
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_168 = &local_388;
    ppdVar20 = &local_168;
    ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
    uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,ppdVar17,ppdVar20);
    uStack_340 = uStack_340 & 0xffffffff;
    local_348 = &DAT_bff0000000000000;
    iVar3 = FUN_1416d9df0(uVar6,&local_348,DAT_1420f6b08,0);
    if (iVar3 != 0) {
      local_a8 = 0x181;
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0x500000000;
      local_160 = &local_388;
      local_158 = &local_2f8;
      local_150 = &local_2e8;
      local_148 = &local_2d8;
      uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
      uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,1,uVar8,&local_160);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_248,uVar6);
      local_140 = &local_248;
      uVar8 = CONCAT44(uVar4,DAT_1420da400/*instance_create_depth*/);
      uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,4,uVar8,&local_158);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1400019a0(&local_e8,uVar6);
      local_a8 = 0x182;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      FUN_1400019a0(&local_298,local_300);
      local_168 = &local_298;
      local_160 = &local_e8;
      uVar6 = CONCAT44(uVar4,DAT_1420da1d0/*ds_list_add*/);
      FUN_1416ab210(local_78,local_90,&local_88,2,uVar6,&local_168);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      FUN_1416cfc30(&local_e8,DAT_1420d5a28/*object_index*/,0x80000000,&local_4a8);
      FUN_1400019a0(&local_298,&local_4a8);
      local_168 = &local_298;
      FUN_140002730(&local_288,&DAT_1420b2678);
      local_160 = &local_288;
      uVar8 = CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      cVar2 = FUN_1416927d0(uVar6);
      if (cVar2 != '\0') {
        local_a8 = 0x183;
        puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18826/*var:collision_list*/);
        FUN_1416a8cb0(local_78);
        uVar5 = FUN_141693b30(&local_4b8);
        uVar6 = FUN_1416924a0(puVar7,uVar5);
        FUN_1416a8cb0(*puVar7);
        FUN_1400019a0(uVar6,&local_e8);
        FUN_1416a8c00(2);
        FUN_140001c50(&local_4b8,1);
      }
      local_a8 = 0x185;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      local_168 = &local_388;
      uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
      uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_340 = uStack_340 & 0xffffffff;
      local_348 = (undefined1 *)0x4054400000000000/*81 (obj:PATH)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_348,DAT_1420f6b08,0);
      if (iVar3 == 0) {
        local_a8 = 0x186;
        if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        local_a0 = 0;
        local_98 = 0x500000000;
        local_160 = &local_f8;
        FUN_140002730(&local_278,&DAT_1420b25b8);
        local_158 = &local_278;
        uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
        uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_160);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        FUN_1400019a0(&local_378,uVar6);
        if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c8);
        }
        local_c8 = 0;
        local_c0 = 0x500000000;
        local_150 = &local_f8;
        FUN_140002730(&local_258,&DAT_1420b2668);
        local_148 = &local_258;
        ppdVar20 = &local_150;
        ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
        uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,ppdVar17,ppdVar20);
        FUN_1400019a0(&local_3a8,uVar6);
        local_a8 = 0x187;
        FUN_1400019a0(&local_540,&local_378);
        FUN_1416d0720(&local_e8,0x18b0e/*var:n*/,0x80000000,&local_540);
        local_a8 = 0x188;
        FUN_1400019a0(&local_530,&local_3a8);
        FUN_1416d0720(&local_e8,0x18c30/*var:rm*/,0x80000000,&local_530);
      }
      else {
        local_a8 = 0x18b;
        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_88);
        }
        local_88 = 0;
        local_80 = 0x500000000;
        FUN_1416cfc30(&local_e8,DAT_1420d5a28/*object_index*/,0x80000000,&local_4a8);
        FUN_1400019a0(&local_298,&local_4a8);
        local_168 = &local_298;
        FUN_140002730(&local_288,&DAT_1420b2688);
        local_160 = &local_288;
        uVar8 = CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
        uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar2 = FUN_1416927d0(uVar6);
        if (cVar2 == '\0') {
          local_a8 = 0x198;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_a0 = 0;
          local_98 = 0x500000000;
          local_168 = &local_388;
          uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_168);
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          FUN_1400019a0(&local_288,uVar6);
          local_160 = &local_288;
          FUN_140002730(&local_278,&DAT_1420b2698);
          local_158 = &local_278;
          uVar8 = CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_160);
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          cVar2 = FUN_1416927d0(uVar6);
          if (cVar2 == '\0') {
            local_a8 = 0x19d;
            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_88);
            }
            local_88 = 0;
            local_80 = 0x500000000;
            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_a0);
            }
            local_a0 = 0;
            local_98 = 0x500000000;
            local_168 = &local_388;
            uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_168);
            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
            FUN_1400019a0(&local_288,uVar6);
            local_160 = &local_288;
            FUN_140002730(&local_278,&DAT_1420b26a8);
            local_158 = &local_278;
            uVar8 = CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_160);
            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
            cVar2 = FUN_1416927d0(uVar6);
            if (cVar2 == '\0') {
              local_a8 = 0x1a4;
              if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_88);
              }
              local_88 = 0;
              local_80 = 0x500000000;
              local_168 = &local_388;
              uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_88,1,uVar8,&local_168);
              uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
              uStack_340 = uStack_340 & 0xffffffff;
              local_348 = (undefined1 *)0x4066600000000000/*179 (obj:oRoof_angle)*/;
              iVar3 = FUN_1416d9df0(uVar6,&local_348,DAT_1420f6b08,0);
              if (iVar3 == 0) {
                local_a8 = 0x1a5;
                if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a0);
                }
                local_a0 = 0;
                local_98 = 0x500000000;
                local_160 = &local_f8;
                FUN_140002730(&local_278,&DAT_1420b2638);
                local_158 = &local_278;
                uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_160);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                FUN_1400019a0(&local_378,uVar6);
                if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_c8);
                }
                local_c8 = 0;
                local_c0 = 0x500000000;
                local_150 = &local_f8;
                FUN_140002730(&local_258,&DAT_1420b2638);
                local_148 = &local_258;
                uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_150);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                FUN_1400019a0(&local_3a8,uVar6);
                if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_1c8);
                }
                local_1c8 = 0;
                local_1c0 = 0x500000000;
                local_140 = &local_f8;
                FUN_140002730(&local_238,&DAT_1420b25b8);
                local_138 = &local_238;
                uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_1c8,2,uVar8,&local_140);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                FUN_1400019a0(&local_520,uVar6);
                if ((0x46U >> (local_360._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_368);
                }
                local_368 = 0;
                local_360 = 0x500000000;
                local_130 = &local_f8;
                FUN_140002730(&local_218,&DAT_1420b2648);
                local_128 = &local_218;
                ppdVar20 = &local_130;
                ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_368,2,ppdVar17,ppdVar20);
                FUN_1400019a0(&local_778,uVar6);
                local_a8 = 0x1a6;
                FUN_1400019a0(&local_768,&local_378);
                FUN_1416d0720(&local_e8,0x18e33/*var:width*/,0x80000000,&local_768);
                local_a8 = 0x1a7;
                FUN_1400019a0(&local_758,&local_3a8);
                FUN_1416d0720(&local_e8,0x18c27/*var:repeat_t*/,0x80000000,&local_758);
                local_a8 = 0x1a8;
                FUN_1400019a0(&local_748,&local_520);
                FUN_1416d0720(&local_e8,0x18aa8/*var:material*/,0x80000000,&local_748);
                local_a8 = 0x1a9;
                FUN_1400019a0(&local_738,&local_778);
                FUN_1416d0720(&local_e8,0x18890/*var:dir*/,0x80000000,&local_738);
              }
              else {
                local_a8 = 0x1ac;
                if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_88);
                }
                local_88 = 0;
                local_80 = 0x500000000;
                if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_a0);
                }
                local_a0 = 0;
                local_98 = 0x500000000;
                local_168 = &local_388;
                uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_168);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                FUN_1400019a0(&local_288,uVar6);
                local_160 = &local_288;
                FUN_140002730(&local_278,&DAT_1420b26b8);
                local_158 = &local_278;
                uVar8 = CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_160);
                uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                cVar2 = FUN_1416927d0(uVar6);
                if (cVar2 == '\0') {
                  local_a8 = 0x1b2;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_a0);
                  }
                  local_a0 = 0;
                  local_98 = 0x500000000;
                  local_168 = &local_388;
                  uVar8 = CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,1,uVar8,&local_168);
                  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                  FUN_1400019a0(&local_288,uVar6);
                  local_160 = &local_288;
                  FUN_140002730(&local_278,&DAT_1420b26c8);
                  local_158 = &local_278;
                  ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,ppdVar17,&local_160);
                  cVar2 = FUN_1416927d0(uVar6);
                  uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
                  if (cVar2 == '\0') {
                    if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_c8);
                    }
                    local_c8 = 0;
                    local_c0 = 0x500000000;
                    local_150 = &local_388;
                    ppdVar20 = &local_150;
                    ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da460/*asset_get_index*/);
                    uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,1,ppdVar17,ppdVar20);
                    uStack_340 = uStack_340 & 0xffffffff;
                    local_348 = (undefined1 *)0x4084d00000000000/*666 (obj:oBook)*/;
                    iVar3 = FUN_1416d9df0(uVar6,&local_348,DAT_1420f6b08,0);
                    if (iVar3 != 0) {
                      iVar3 = FUN_1416f82f0(local_78,local_90,0x99);
                      if (0 < iVar3) {
                        local_a8 = 0x1b8;
                        if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&local_88);
                        }
                        uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
                        local_88 = 0;
                        local_80 = 0x500000000;
                        FUN_1416cfc30(&local_e8,DAT_1420d5a28/*object_index*/,0x80000000,&local_4a8);
                        FUN_1400019a0(&local_298,&local_4a8);
                        local_168 = &local_298;
                        FUN_140002730(&local_288,&DAT_1420b26d8);
                        local_160 = &local_288;
                        ppdVar20 = &local_168;
                        ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da330/*object_is_ancestor*/);
                        uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,ppdVar17,ppdVar20);
                        cVar2 = FUN_1416927d0(uVar6);
                        if (cVar2 != '\0') {
                          local_a8 = 0x1b9;
                          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_a0);
                          }
                          uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
                          local_a0 = 0;
                          local_98 = 0x500000000;
                          local_158 = &local_e8;
                          if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_268);
                          }
                          FUN_1416ab000(&local_268,s_anim1_1420b256a);
                          local_150 = &local_268;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1ba;
                            if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_c8);
                            }
                            local_c8 = 0;
                            local_c0 = 0x500000000;
                            local_148 = &local_f8;
                            FUN_140002730(&local_248,&DAT_1420b2648);
                            local_140 = &local_248;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_148);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_6e8,uVar6);
                            FUN_1416d0720(&local_e8,0x18730/*var:anim1*/,0x80000000,&local_6e8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim2_1420b2570);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1bb;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_6d8,uVar6);
                            FUN_1416d0720(&local_e8,0x1873b/*var:anim2*/,0x80000000,&local_6d8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim3_1420b2576);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1bc;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_6c8,uVar6);
                            FUN_1416d0720(&local_e8,0x1873e/*var:anim3*/,0x80000000,&local_6c8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim4_1420b257c);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1bd;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_6b8,uVar6);
                            FUN_1416d0720(&local_e8,0x18740/*var:anim4*/,0x80000000,&local_6b8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim5_1420b2582);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1be;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_6a8,uVar6);
                            FUN_1416d0720(&local_e8,0x18741/*var:anim5*/,0x80000000,&local_6a8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim6_1420b2588);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1bf;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_698,uVar6);
                            FUN_1416d0720(&local_e8,0x18742/*var:anim6*/,0x80000000,&local_698);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim7_1420b258e);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c0;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_688,uVar6);
                            FUN_1416d0720(&local_e8,0x18743/*var:anim7*/,0x80000000,&local_688);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim8_1420b2594);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c1;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_678,uVar6);
                            FUN_1416d0720(&local_e8,0x18744/*var:anim8*/,0x80000000,&local_678);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_anim9_1420b259a);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c2;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_668,uVar6);
                            FUN_1416d0720(&local_e8,0x18746/*var:anim9*/,0x80000000,&local_668);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a0);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c4;
                            DAT_142182d90 = (longlong *)0x838783;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_168 = &local_f8;
                            FUN_140002730(&local_288,&DAT_1420b2648);
                            local_160 = &local_288;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_658,uVar6);
                            FUN_1416d0720(&local_e8,0x18860/*var:d*/,0,&local_658);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a0);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c5;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_648,uVar6);
                            FUN_1416d0720(&local_e8,0x18860/*var:d*/,1,&local_648);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a0);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c6;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_638,uVar6);
                            FUN_1416d0720(&local_e8,0x18860/*var:d*/,2,&local_638);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a0);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c7;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_628,uVar6);
                            FUN_1416d0720(&local_e8,0x18860/*var:d*/,3,&local_628);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a2);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1c9;
                            DAT_142182d90 = (longlong *)0x838784;
                            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_88);
                            }
                            local_88 = 0;
                            local_80 = 0x500000000;
                            local_168 = &local_f8;
                            FUN_140002730(&local_288,&DAT_1420b2648);
                            local_160 = &local_288;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_618,uVar6);
                            FUN_1416d0720(&local_e8,0x1870b/*var:an*/,0,&local_618);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a2);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1ca;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_608,uVar6);
                            FUN_1416d0720(&local_e8,0x1870b/*var:an*/,1,&local_608);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a2);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1cb;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_5f8,uVar6);
                            FUN_1416d0720(&local_e8,0x1870b/*var:an*/,2,&local_5f8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a2);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1cc;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_5e8,uVar6);
                            FUN_1416d0720(&local_e8,0x1870b/*var:an*/,3,&local_5e8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25a5);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1ce;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_5d8,uVar6);
                            FUN_1416d0720(&local_e8,0x1871e/*var:anim*/,0x80000000,&local_5d8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,&DAT_1420b25aa);
                          local_160 = &local_288;
                          uVar8 = CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
                          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1cf;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
                            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                            FUN_1400019a0(&local_5c8,uVar6);
                            FUN_1416d0720(&local_e8,0x18b39/*var:on*/,0x80000000,&local_5c8);
                          }
                          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_88);
                          }
                          local_88 = 0;
                          local_80 = 0x500000000;
                          local_168 = &local_e8;
                          if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&local_288);
                          }
                          FUN_1416ab000(&local_288,s_power_on_1420b25ad);
                          local_160 = &local_288;
                          ppdVar20 = &local_168;
                          ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da350/*variable_instance_exists*/);
                          uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,ppdVar17,ppdVar20);
                          cVar2 = FUN_1416927d0(uVar6);
                          if (cVar2 != '\0') {
                            local_a8 = 0x1d0;
                            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&local_a0);
                            }
                            uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
                            local_a0 = 0;
                            local_98 = 0x500000000;
                            local_158 = &local_f8;
                            FUN_140002730(&local_268,&DAT_1420b2648);
                            local_150 = &local_268;
                            ppdVar20 = &local_158;
                            ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                            uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,ppdVar17,ppdVar20);
                            FUN_1400019a0(&local_5b8,uVar6);
                            FUN_1416d0720(&local_e8,0x18bd2/*var:power_on*/,0x80000000,&local_5b8);
                          }
                        }
                      }
                      goto LAB_140051c70;
                    }
                  }
                  uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
                  local_a8 = 0x1b3;
                  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1c8);
                  }
                  local_1c8 = 0;
                  local_1c0 = 0x500000000;
                  local_148 = &local_f8;
                  FUN_140002730(&local_248,&DAT_1420b25b8);
                  local_140 = &local_248;
                  uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_1c8,2,uVar8,&local_148);
                  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                  FUN_1400019a0(&local_378,uVar6);
                  if ((0x46U >> (local_360._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_368);
                  }
                  local_368 = 0;
                  local_360 = 0x500000000;
                  local_138 = &local_f8;
                  FUN_140002730(&local_228,&DAT_1420b25b8);
                  local_130 = &local_228;
                  ppdVar20 = &local_138;
                  ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_368,2,ppdVar17,ppdVar20);
                  FUN_1400019a0(&local_3a8,uVar6);
                  local_a8 = 0x1b4;
                  FUN_1400019a0(&local_708,&local_378);
                  FUN_1416d0720(&local_e8,0x1879b/*var:book*/,0x80000000,&local_708);
                  local_a8 = 0x1b5;
                  FUN_1400019a0(&local_6f8,&local_3a8);
                  FUN_1416d0720(&local_e8,0x1879f/*var:book_text*/,0x80000000,&local_6f8);
                }
                else {
                  local_a8 = 0x1ad;
                  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_c8);
                  }
                  local_c8 = 0;
                  local_c0 = 0x500000000;
                  local_150 = &local_f8;
                  FUN_140002730(&local_258,&DAT_1420b2668);
                  local_148 = &local_258;
                  uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_150);
                  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
                  FUN_1400019a0(&local_378,uVar6);
                  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_1c8);
                  }
                  local_1c8 = 0;
                  local_1c0 = 0x500000000;
                  local_140 = &local_f8;
                  FUN_140002730(&local_238,&DAT_1420b25b8);
                  local_138 = &local_238;
                  ppdVar20 = &local_140;
                  uVar6 = FUN_1416ab210(local_78,local_90,&local_1c8,2,CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/)
                                        ,ppdVar20);
                  FUN_1400019a0(&local_3a8,uVar6);
                  local_a8 = 0x1ae;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  local_168 = &local_378;
                  ppdVar17 = &local_168;
                  uVar6 = FUN_140135c90(local_78,local_90,&local_88,1,ppdVar17);
                  FUN_1400019a0(&local_728,uVar6);
                  FUN_1416d0720(&local_e8,0x18d8b/*var:text*/,0x80000000,&local_728);
                  local_a8 = 0x1af;
                  FUN_1400019a0(&local_718,&local_3a8);
                  FUN_1416d0720(&local_e8,0x18b63/*var:page*/,0x80000000,&local_718);
                }
              }
            }
            else {
              local_a8 = 0x19e;
              if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_c8);
              }
              local_c8 = 0;
              local_c0 = 0x500000000;
              local_150 = &local_f8;
              FUN_140002730(&local_258,&DAT_1420b25b8);
              local_148 = &local_258;
              uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar8,&local_150);
              uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
              FUN_1400019a0(&local_378,uVar6);
              if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1c8);
              }
              local_1c8 = 0;
              local_1c0 = 0x500000000;
              local_140 = &local_f8;
              FUN_140002730(&local_238,&DAT_1420b25b8);
              local_138 = &local_238;
              uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_1c8,2,uVar8,&local_140);
              uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
              FUN_1400019a0(&local_3a8,uVar6);
              if ((0x46U >> (local_360._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_368);
              }
              local_368 = 0;
              local_360 = 0x500000000;
              local_130 = &local_f8;
              FUN_140002730(&local_218,&DAT_1420b2668);
              local_128 = &local_218;
              ppdVar20 = &local_130;
              ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
              uVar6 = FUN_1416ab210(local_78,local_90,&local_368,2,ppdVar17,ppdVar20);
              FUN_1400019a0(&local_520,uVar6);
              local_a8 = 0x19f;
              FUN_1400019a0(&local_498,&local_378);
              FUN_1416d0720(&local_e8,0x18a8f/*var:locked*/,0x80000000,&local_498);
              local_a8 = 0x1a0;
              FUN_1400019a0(&local_540,&local_3a8);
              FUN_1416d0720(&local_e8,0x18b0e/*var:n*/,0x80000000,&local_540);
              local_a8 = 0x1a1;
              FUN_1400019a0(&local_530,&local_520);
              FUN_1416d0720(&local_e8,0x18c30/*var:rm*/,0x80000000,&local_530);
            }
          }
          else {
            local_a8 = 0x199;
            if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_c8);
            }
            local_c8 = 0;
            local_c0 = 0x500000000;
            local_150 = &local_f8;
            FUN_140002730(&local_258,&DAT_1420b25b8);
            local_148 = &local_258;
            ppdVar20 = &local_150;
            ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
            uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,ppdVar17,ppdVar20);
            FUN_1400019a0(&local_378,uVar6);
            local_a8 = 0x19a;
            FUN_1400019a0(&local_498,&local_378);
            FUN_1416d0720(&local_e8,0x18a8f/*var:locked*/,0x80000000,&local_498);
          }
        }
        else {
          local_a8 = 0x18c;
          if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_a0 = 0;
          local_98 = 0x500000000;
          local_158 = &local_f8;
          FUN_140002730(&local_268,&DAT_1420b2638);
          local_150 = &local_268;
          uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_a0,2,uVar8,&local_158);
          uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          FUN_1400019a0(&local_378,uVar6);
          if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0x500000000;
          local_148 = &local_f8;
          FUN_140002730(&local_248,&DAT_1420b2638);
          local_140 = &local_248;
          ppdVar20 = &local_148;
          uVar15 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
          uVar6 = FUN_1416ab210(local_78,local_90,&local_c8,2,uVar15,ppdVar20);
          FUN_1400019a0(&local_3a8,uVar6);
          local_a8 = 0x18d;
          FUN_1400019a0(&local_498,&local_378);
          FUN_1416d0720(&local_e8,0x18a8f/*var:locked*/,0x80000000,&local_498);
          local_a8 = 0x18e;
          if ((0x46U >> (local_47c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_488);
          }
          local_47c = 0;
          local_488 = 0.0;
          if ((0x46U >> (local_46c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_478);
          }
          local_46c = 0;
          local_478 = 0.0;
          local_a8 = 399;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_1416cfeb0(&local_e8,0x18a1a/*var:INV*/,0x80000000,&local_798,uVar15,
                        (ulonglong)ppdVar20 & 0xffffffffffffff00);
          uVar4 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_298,&local_798);
          local_168 = &local_298;
          ppdVar20 = &local_168;
          uVar15 = CONCAT44(uVar4,DAT_1420da010/*ds_list_clear*/);
          FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,ppdVar20);
          local_a8 = 400;
          if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_88);
          }
          local_88 = 0;
          local_80 = 0x500000000;
          uVar15 = uVar15 & 0xffffffffffffff00;
          FUN_1416cfeb0(&local_e8,0x18a23/*var:INV_N*/,0x80000000,&local_788,uVar15,
                        (ulonglong)ppdVar20 & 0xffffffffffffff00);
          uVar4 = (undefined4)(uVar15 >> 0x20);
          FUN_1400019a0(&local_298,&local_788);
          local_168 = &local_298;
          ppdVar20 = &local_168;
          ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da010/*ds_list_clear*/);
          FUN_1416ab210(local_78,local_90,&local_88,1,ppdVar17,ppdVar20);
          local_a8 = 0x191;
          if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_2c8);
          }
          local_2bc = 0;
          local_2c8 = 0.0;
          while ((iVar3 = FUN_1416d9df0(&local_2c8,&local_3a8,DAT_1420f6b08,1), iVar3 != -2 &&
                 (iVar3 < 0))) {
            local_a8 = 0x192;
            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_88);
            }
            uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
            local_88 = 0;
            local_80 = 0x500000000;
            local_168 = &local_f8;
            FUN_140002730(&local_288,&DAT_1420b2638);
            local_160 = &local_288;
            uVar8 = CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/);
            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,uVar8,&local_168);
            uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
            FUN_1400019a0(&local_488,uVar6);
            local_a8 = 0x193;
            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_88);
            }
            local_88 = 0;
            local_80 = 0x500000000;
            local_168 = &local_f8;
            FUN_140002730(&local_288,&DAT_1420b2638);
            local_160 = &local_288;
            ppdVar20 = &local_168;
            uVar6 = FUN_1416ab210(local_78,local_90,&local_88,2,CONCAT44(uVar4,DAT_1420da3e0/*buffer_read*/),
                                  ppdVar20);
            FUN_1400019a0(&local_478,uVar6);
            local_a8 = 0x194;
            if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_88);
            }
            local_88 = 0;
            local_80 = 0x500000000;
            local_168 = &local_488;
            local_160 = &local_478;
            local_158 = &local_e8;
            ppdVar17 = &local_168;
            FUN_1400885b0(local_78,local_90,&local_88,3,ppdVar17);
            switch(local_2bc & 0xffffff) {
            case 1:
              local_2c8 = (double)FUN_1416940c0(&local_2c8);
              local_2c8 = local_2c8 + dVar1;
              local_2bc = 0;
              break;
            default:
              FUN_140001d70(&DAT_141981e6a,&local_2c8,&local_2c8);
              break;
            case 7:
              local_2c8 = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_ + 1);
              break;
            case 10:
              local_2c8 = (double)((longlong)local_2c8 + 1);
              break;
            case 0xd:
              local_2bc = 0;
            case 0:
              local_2c8 = local_2c8 + dVar1;
            }
          }
        }
      }
    }
LAB_140051c70:
    switch(local_cc & 0xffffff) {
    case 1:
      local_d8 = (double)FUN_1416940c0(&local_d8);
      local_d8 = local_d8 + dVar1;
      local_cc = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_d8,&local_d8);
      break;
    case 7:
      local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
      break;
    case 10:
      local_d8 = (double)((longlong)local_d8 + 1);
      break;
    case 0xd:
      local_cc = 0;
    case 0:
      local_d8 = local_d8 + dVar1;
    }
  }
  local_a8 = 0x17a;
LAB_140055f24:
  iVar3 = FUN_1416f82f0(local_78,local_90,0x40);
  if (0 < iVar3) {
    local_a8 = 0x1dd;
    uStack_3c0 = uStack_3c0 & 0xffffffff;
    local_3c8 = (undefined1 *)0x4050000000000000/*64 (obj:oPlayer)*/;
    iVar3 = FUN_1416ab810(&local_348,&local_78,&local_90,&local_3c8);
    if ((0x46U >> (uStack_3c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_3c8);
    }
    if (0 < iVar3) {
      do {
        local_a8 = 0x1de;
        uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b7b/*var:path_side*/);
        uStack_3c0 = uStack_3c0 & 0xffffffff;
        local_3c8 = (undefined1 *)0x0;
        iVar3 = FUN_1416d9df0(uVar6,&local_3c8,DAT_1420f6b08,0);
        if (iVar3 != 0) {
          uVar6 = (**(code **)(*local_78 + 8))(local_78,0x1899c/*var:has_path*/);
          uStack_3c0 = uStack_3c0 & 0xffffffff;
          local_3c8 = &DAT_bff0000000000000;
          iVar3 = FUN_1416d9df0(uVar6,&local_3c8,DAT_1420f6b08,0);
          if (iVar3 != 0) {
            local_a8 = 0x1e0;
            puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x18836/*var:control*/);
            if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0;
            uStack_450 = uStack_450 & 0xffffffff;
            local_458 = 0x4054400000000000/*81 (obj:PATH)*/;
            iVar3 = FUN_1416ab810(&local_3c8,&local_78,&local_90,&local_458);
            if ((0x46U >> (uStack_450._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_458);
            }
            if (0 < iVar3) {
              do {
                local_a8 = 0x1e1;
                uVar6 = (**(code **)(*local_78 + 8))(local_78,0x18b0e/*var:n*/);
                local_458 = 0;
                uStack_450 = 0;
                ppdVar20 = (double **)((ulonglong)ppdVar20 & 0xffffffffffffff00);
                ppdVar17 = (double **)((ulonglong)ppdVar17 & 0xffffffffffffff00);
                FUN_1416d0010(0x40,0x1899c/*var:has_path*/,0x80000000,&local_458,ppdVar17,ppdVar20);
                iVar3 = FUN_1416d9df0(uVar6,&local_458,DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  local_a8 = 0x1e3;
                  local_7c8 = 0;
                  uStack_7c0 = 0;
                  uVar19 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
                  uVar15 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
                  FUN_1416cea80(local_78,DAT_1420d58e8/*x*/,0x80000000,&local_4d8,uVar15,uVar19);
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffffffffff00;
                  FUN_1416d0010(0x40,0x18b7b/*var:path_side*/,0x80000000,&local_7c8,uVar15,uVar19);
                  local_408 = local_408 & 0xffffffff;
                  local_410 = 0xc000000000000000/*-2*/;
                  FUN_140001fe0(&local_410,&local_7c8);
                  local_350 = CONCAT44(local_4cc,local_4d0);
                  if ((0x46U >> (local_4cc & 0x1f) & 1) == 0) {
                    local_358 = local_4d8;
                  }
                  else {
                    FUN_14005b430(&local_358,&local_4d8);
                  }
                  FUN_140003ca0(&local_358,&local_410);
                  FUN_1400019a0(&local_5a8,&local_358);
                  if ((0x46U >> (local_350._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_358);
                  }
                  if ((0x46U >> (local_408._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_410);
                  }
                  ppdVar20 = (double **)(uVar19 & 0xffffffffffffff00);
                  FUN_1416cea80(local_78,DAT_1420d58f8/*y*/,0x80000000,&local_598,
                                uVar15 & 0xffffffffffffff00,ppdVar20);
                  FUN_140017bd0(&local_358,&local_598,8);
                  FUN_1400019a0(&local_588,&local_358);
                  if ((0x46U >> (local_350._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_358);
                  }
                  local_a8 = 0x1e4;
                  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&local_88);
                  }
                  local_88 = 0;
                  local_80 = 0x500000000;
                  FUN_140002730(&local_298,&DAT_1420b26e8);
                  local_168 = &local_298;
                  local_160 = &local_5a8;
                  local_158 = &local_588;
                  ppdVar17 = &local_168;
                  FUN_140060650(local_78,local_90,&local_88,3,ppdVar17);
                  local_a8 = 0x1e5;
                  break;
                }
                cVar2 = FUN_1416abe60(&local_3c8,&local_78,&local_90);
              } while (cVar2 != '\0');
            }
            FUN_1416ab620(&local_3c8,&local_78,&local_90);
            local_a8 = 0x1e8;
            puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x10))(local_78,0x1899c/*var:has_path*/);
            if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = &DAT_bff0000000000000;
            local_a8 = 0x1ea;
            DAT_142182d90 = (longlong *)0x4109fa;
            if ((0x46U >> (local_4bc & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_4c8);
            }
            local_4bc = 0;
            local_4c8 = 0x403e000000000000/*30 (obj:oDlg_Quo_Radio1)*/;
            FUN_1416cfae0(local_78,DAT_1420d5a48/*alarm*/,0);
            if (local_3b8 != 0) {
              thunk_FUN_1416c46f0();
              local_3b8 = 0;
            }
          }
        }
        cVar2 = FUN_1416abe60(&local_348,&local_78,&local_90);
      } while (cVar2 != '\0');
    }
    FUN_1416ab620(&local_348,&local_78,&local_90);
    iVar3 = FUN_1416f82f0(local_78,local_90,0x41);
    if (0 < iVar3) {
      local_a8 = 0x1ee;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_440);
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_430);
      FUN_140002730(&local_298,&DAT_1420b26f8);
      local_168 = &local_298;
      FUN_1400019a0(&local_288,&local_440);
      local_160 = &local_288;
      FUN_1400019a0(&local_278,&local_430);
      local_158 = &local_278;
      ppdVar17 = &local_168;
      FUN_140060650(local_78,local_90,&local_88,3,ppdVar17);
    }
    if (local_338 != 0) {
      thunk_FUN_1416c46f0();
      local_338 = 0;
    }
  }
  uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
  local_a8 = 0x1f1;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  local_168 = &local_f8;
  ppdVar20 = &local_168;
  uVar15 = CONCAT44(uVar4,DAT_1420da370/*buffer_delete*/);
  FUN_1416ab210(local_78,local_90,&local_88,1,uVar15,ppdVar20);
  local_3c8 = (undefined1 *)0x0;
  uStack_3c0 = 0;
  FUN_1416d0010(0x4f,0x18d24/*var:START_GAME*/,0x80000000,&local_3c8,uVar15 & 0xffffffffffffff00,
                (ulonglong)ppdVar20 & 0xffffffffffffff00);
  cVar2 = FUN_1416927d0(&local_3c8);
  if (cVar2 != '\0') {
    local_a8 = 499;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    FUN_1400c5e00(local_78,local_90,&local_88,0,0);
  }
  local_a8 = 0x1f7;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  uVar4 = 0;
  gml_Script_reset_files(local_78,local_90,&local_88,0,0);
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_140002730(&local_298,&DAT_1420b2628);
  local_168 = &local_298;
  FUN_140002730(&local_288,&DAT_1420b2628);
  local_160 = &local_288;
  FUN_140002730(&local_278,&DAT_1420b2708);
  local_158 = &local_278;
  FUN_140002730(&local_268,&DAT_1420b2718);
  local_150 = &local_268;
  ppdVar20 = &local_168;
  ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da400/*instance_create_depth*/);
  uVar6 = FUN_1416ab210(local_78,local_90,&local_88,4,ppdVar17,ppdVar20);
  iVar3 = FUN_1416ab810(&local_348,&local_78,&local_90,uVar6);
  if (0 < iVar3) {
    do {
      local_a8 = 0x1f9;
      local_458 = 0;
      uStack_450 = 0;
      uVar6 = (**(code **)(*local_78 + 0x10))(local_78,0x18828/*var:colour*/);
      ppdVar20 = (double **)((ulonglong)ppdVar20 & 0xffffffffffffff00);
      ppdVar17 = (double **)((ulonglong)ppdVar17 & 0xffffffffffffff00);
      FUN_1416d0010(0x4f,0x1890f/*var:FADE_COLOUR*/,0x80000000,&local_458,ppdVar17,ppdVar20);
      FUN_1416a8cb0(local_78);
      FUN_1400019a0(uVar6,&local_458);
      FUN_1416a8c00(1);
      cVar2 = FUN_1416abe60(&local_348,&local_78,&local_90);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(&local_348,&local_78,&local_90);
  local_a8 = 0x1fa;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  gml_Script__SET_SCENE(local_78,local_90,&local_88);
  iVar3 = FUN_1416f82f0(local_78,local_90,0x41);
  if (0 < iVar3) {
    local_a8 = 0x1fc;
    iVar3 = FUN_1416f82f0(local_78,local_90,0x41);
    if (0 < iVar3) {
      local_a8 = 0x1fe;
      if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_88);
      }
      local_88 = 0;
      local_80 = 0x500000000;
      FUN_1416ab670(0x40,DAT_1420d58e8/*x*/,0x80000000,&local_440);
      FUN_1416ab670(0x40,DAT_1420d58f8/*y*/,0x80000000,&local_430);
      FUN_140002730(&local_298,&DAT_1420b26f8);
      local_168 = &local_298;
      FUN_1400019a0(&local_288,&local_440);
      local_160 = &local_288;
      FUN_1400019a0(&local_278,&local_430);
      local_158 = &local_278;
      ppdVar17 = &local_168;
      FUN_140060650(local_78,local_90,&local_88,3,ppdVar17);
    }
    local_a8 = 0x200;
    if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_88);
    }
    local_88 = 0;
    local_80 = 0x500000000;
    local_458 = 0;
    uStack_450 = 0;
    uVar15 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
    FUN_1416d0010(0x41,0x18df6/*var:ui_pos_mem*/,0x80000000,&local_458,uVar15,(ulonglong)ppdVar20 & 0xffffffffffffff00
                 );
    uVar4 = (undefined4)(uVar15 >> 0x20);
    FUN_1400019a0(&local_298,&local_458);
    ppdVar17 = (double **)CONCAT44(uVar4,DAT_1420da010/*ds_list_clear*/);
    local_168 = &local_298;
    FUN_1416ab210(local_78,local_90,&local_88,1,ppdVar17,&local_168);
    local_a8 = 0x201;
    uStack_7c0 = 0;
    local_7c8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    FUN_1416d0790(0x41,0x187da/*var:can_see*/,0x80000000,&local_7c8);
    local_a8 = 0x202;
    local_350 = 0;
    local_358 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    FUN_1416d0790(0x41,0x189ff/*var:in_radius*/,0x80000000,&local_358);
    local_a8 = 0x203;
    local_408 = 0;
    local_410 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    FUN_1416d0790(0x41,0x18c2f/*var:ring_fade*/,0x80000000,&local_410);
  }
  uVar4 = (undefined4)((ulonglong)ppdVar17 >> 0x20);
  local_a8 = 0x206;
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_88 = 0;
  local_80 = 0x500000000;
  FUN_1416ab210(local_78,local_90,&local_88,0,CONCAT44(uVar4,DAT_1420da390/*instance_activate_all*/),0);
  if (local_338 != 0) {
    thunk_FUN_1416c46f0();
    local_338 = 0;
  }
  if (local_2a8 != 0) {
    thunk_FUN_1416c46f0();
    local_2a8 = 0;
  }
  if (local_178 != 0) {
    thunk_FUN_1416c46f0();
    local_178 = 0;
  }
  if ((0x46U >> (local_360._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_368);
  }
  if ((0x46U >> (local_1c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_4bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4c8);
  }
  if ((0x46U >> (local_57c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_588);
  }
  if ((0x46U >> (local_58c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_598);
  }
  if ((0x46U >> (local_59c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5a8);
  }
  if ((0x46U >> (local_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4d8);
  }
  if ((0x46U >> (local_5ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5b8);
  }
  if ((0x46U >> (local_5bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5c8);
  }
  if ((0x46U >> (local_5cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5d8);
  }
  if ((0x46U >> (local_5dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5e8);
  }
  if ((0x46U >> (local_5ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_5f8);
  }
  if ((0x46U >> (local_5fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_608);
  }
  if ((0x46U >> (local_60c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_618);
  }
  if ((0x46U >> (local_61c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_628);
  }
  if ((0x46U >> (local_62c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_638);
  }
  if ((0x46U >> (local_63c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_648);
  }
  if ((0x46U >> (local_64c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_658);
  }
  if ((0x46U >> (local_65c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_668);
  }
  if ((0x46U >> (local_66c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_678);
  }
  if ((0x46U >> (local_67c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_688);
  }
  if ((0x46U >> (local_68c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_698);
  }
  if ((0x46U >> (local_69c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6a8);
  }
  if ((0x46U >> (local_6ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6b8);
  }
  if ((0x46U >> (local_6bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6c8);
  }
  if ((0x46U >> (local_6cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6d8);
  }
  if ((0x46U >> (local_6dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6e8);
  }
  if ((0x46U >> (local_6ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_6f8);
  }
  if ((0x46U >> (local_6fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_708);
  }
  if ((0x46U >> (local_70c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_718);
  }
  if ((0x46U >> (local_71c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_728);
  }
  if ((0x46U >> (local_72c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_738);
  }
  if ((0x46U >> (local_73c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_748);
  }
  if ((0x46U >> (local_74c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_758);
  }
  if ((0x46U >> (local_75c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_768);
  }
  if ((0x46U >> (local_76c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_778);
  }
  if ((0x46U >> (local_514 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_520);
  }
  if ((0x46U >> (local_77c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_788);
  }
  if ((0x46U >> (local_78c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_798);
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
  if ((0x46U >> (local_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_530);
  }
  if ((0x46U >> (local_534 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_540);
  }
  if ((0x46U >> (local_39c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3a8);
  }
  if ((0x46U >> (local_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_378);
  }
  if ((0x46U >> (local_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4a8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4b8);
  }
  if ((0x46U >> (local_79c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7a8);
  }
  if ((0x46U >> (local_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_388);
  }
  if ((0x46U >> (local_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_398);
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
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4e8);
  }
  if ((0x46U >> (local_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_420);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_4ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_4f8);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_554 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_560);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_550);
  }
  if ((0x46U >> (local_4fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_508);
  }
  if ((0x46U >> (local_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_3d8);
  }
  if ((0x46U >> (local_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_318);
  }
  if ((0x46U >> (local_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_430);
  }
  if ((0x46U >> (local_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_328);
  }
  if ((0x46U >> (local_434 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_440);
  }
  if ((0x46U >> (local_7ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_7b8);
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
  DAT_142182d78 = (undefined8 *)local_b8;
  return local_7d0;
}


