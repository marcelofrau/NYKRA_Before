// Function: gml_Object_parEntity_Step_0 @ 0x1402c9f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_parEntity_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  ulonglong in_stack_fffffffffffffba8;
  undefined4 uVar14;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffbb0;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 uStack_440;
  uint uStack_434;
  undefined8 uStack_430;
  uint uStack_424;
  undefined8 uStack_420;
  uint uStack_414;
  undefined8 uStack_410;
  uint uStack_404;
  undefined8 uStack_400;
  uint uStack_3f4;
  undefined8 uStack_3f0;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  uint uStack_3c4;
  undefined8 uStack_3c0;
  uint uStack_3b4;
  undefined8 uStack_3b0;
  uint uStack_3a4;
  undefined8 uStack_3a0;
  uint uStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  uint uStack_37c;
  undefined8 uStack_378;
  uint uStack_36c;
  undefined8 uStack_368;
  uint uStack_35c;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined4 uStack_338;
  undefined8 uStack_330;
  uint uStack_324;
  undefined8 uStack_320;
  uint uStack_314;
  undefined8 uStack_310;
  uint uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  uint uStack_29c;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_340 = &UNK_1419864b5;
  uStack_348 = ppuRam0000000142182d78;
  ppuRam0000000142182d78 = (undefined8 **)&uStack_348;
  uStack_1a0._4_4_ = 0xffffff;
  uStack_1a8 = 0;
  uStack_434 = 0xffffff;
  uStack_440 = 0;
  uStack_424 = 0xffffff;
  uStack_430 = 0;
  uStack_414 = 0xffffff;
  uStack_420 = 0;
  uStack_404 = 0xffffff;
  uStack_410 = 0;
  uStack_3f4 = 0xffffff;
  uStack_400 = 0;
  uStack_3e4 = 0xffffff;
  uStack_3f0 = 0;
  uStack_3d4 = 0xffffff;
  uStack_3e0 = 0;
  uStack_3c4 = 0xffffff;
  uStack_3d0 = 0;
  uStack_3b4 = 0xffffff;
  uStack_3c0 = 0;
  uStack_3a4 = 0xffffff;
  uStack_3b0 = 0;
  uStack_394 = 0xffffff;
  uStack_3a0 = 0;
  uStack_338 = 9;
  plRam0000000142182d90 = param_1;
  uStack_80 = param_2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18b8c/*var:physics*/);
  uStack_29c = 0;
  uStack_2a8 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar4,&uStack_2a8,dRam00000001420f6b08,0);
  if (iVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18b8c/*var:physics*/);
    uStack_29c = 0;
    uStack_2a8 = 0;
    FUN_1416d9df0(uVar4,&uStack_2a8,dRam00000001420f6b08,0);
    goto code_r0x0001402cf816;
  }
  uStack_338 = 10;
  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0x500000000;
  puStack_c0 = &UNK_1419864d1;
  uStack_b8 = 0;
  puStack_c8 = ppuRam0000000142182d78;
  ppuRam0000000142182d78 = &puStack_c8;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_2cc = 0xffffff;
  uStack_2d8 = 0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  uStack_304 = 0xffffff;
  uStack_310 = 0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_314 = 0xffffff;
  uStack_320 = 0;
  uStack_37c = 0xffffff;
  uStack_388 = 0;
  uStack_104 = 0xffffff;
  uStack_110 = 0;
  uStack_36c = 0xffffff;
  uStack_378 = 0;
  uStack_35c = 0xffffff;
  uStack_368 = 0;
  uStack_f4 = 0xffffff;
  uStack_100 = 0;
  plRam0000000142182d90 = param_1;
  uStack_390 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18a9e/*var:map*/);
  uStack_324 = 0xffffff;
  uStack_330 = 0;
  uStack_70 = (ulonglong)(uint)uStack_70;
  uStack_78 = 0;
  uStack_88 = (ulonglong)(uint)uStack_88;
  uStack_90 = 0;
  uStack_a8 = (ulonglong)(uint)uStack_a8;
  uStack_b0 = 0;
  uStack_98 = (ulonglong)(uint)uStack_98;
  uStack_a0 = 0;
  uStack_d0 = (ulonglong)(uint)uStack_d0;
  uStack_d8 = 0;
  uStack_2e0 = (ulonglong)(uint)uStack_2e0;
  uStack_2e8 = 0;
  uStack_1a0._4_4_ = 5;
  uStack_1a8 = 0;
  FUN_1416ab750(uRam00000001420dcff0);
  uStack_b8 = 6;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  FUN_140002730(&uStack_2a8,0x1420b2fb0);
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puVar5);
  uStack_190 = &uStack_298;
  uVar4 = FUN_1416cd900(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,uVar4);
  func_0x0001416a8c00(1);
  uStack_b8 = 7;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  uStack_4c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_50 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_58,puVar5);
  }
  FUN_140003ca0(&uStack_58,uVar4);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar6,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_b8 = 9;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uStack_358 = 0;
  uStack_350 = 0;
  in_stack_fffffffffffffbb0 = in_stack_fffffffffffffbb0 & 0xffffffffffffff00;
  in_stack_fffffffffffffba8 = in_stack_fffffffffffffba8 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&uStack_358,in_stack_fffffffffffffba8,
                in_stack_fffffffffffffbb0);
  FUN_140001a50(&uStack_2f8,&uStack_358,0x10);
  FUN_140017bd0(&uStack_58,&uStack_2f8,2);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_2f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puVar6);
  uStack_190 = &uStack_298;
  uVar9 = FUN_1416cda40(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar6,uVar9);
  func_0x0001416a8c00(1);
  uStack_b8 = 10;
  uStack_4c = *(uint *)((longlong)puVar6 + 0xc);
  uStack_50 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar6;
  }
  else {
    FUN_1402d3f30(&uStack_58,puVar6);
  }
  FUN_140003e00(&uStack_58,uVar4);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_b8 = 0xf;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  in_stack_fffffffffffffba8 = in_stack_fffffffffffffba8 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&uStack_2f8,in_stack_fffffffffffffba8,
                in_stack_fffffffffffffbb0 & 0xffffffffffffff00);
  uVar14 = (undefined4)(in_stack_fffffffffffffba8 >> 0x20);
  FUN_140001a50(&uStack_68,&uStack_2f8,0x10);
  FUN_140017bd0(&uStack_58,&uStack_68,2);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puVar7);
  uStack_190 = &uStack_298;
  uVar4 = FUN_1416cda40(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar7,uVar4);
  func_0x0001416a8c00(1);
  uStack_b8 = 0x10;
  uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
  puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  uStack_4c = *(uint *)((longlong)puVar7 + 0xc);
  uStack_50 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar7;
  }
  else {
    FUN_1402d3f30(&uStack_58,puVar7);
  }
  FUN_140003e00(&uStack_58,uStack_f0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puStack_e0,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_b8 = 0x12;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x189cf/*var:hsp*/);
  uStack_5c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar5);
  }
  FUN_140003ca0(&uStack_68,uVar4);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar10,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&uStack_2d8,uVar9);
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  uStack_300 = (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  uStack_5c = *(uint *)((longlong)puStack_e0 + 0xc);
  uStack_60 = *(undefined4 *)(puStack_e0 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puStack_e0;
  }
  else {
    FUN_1402d3f30(&uStack_68);
  }
  FUN_140003ca0(&uStack_68,uStack_300);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_298,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_190 = &uStack_298;
  uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
  uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_90,1,uVar10,&uStack_190);
  uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&uStack_2c8,uVar9);
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
  uStack_60 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar6;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar6);
  }
  FUN_140003ca0(&uStack_68,uVar4);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_288,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  puStack_188 = &uStack_288;
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_b0,1,uVar9,&puStack_188);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_310,uVar4);
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  uStack_5c = *(uint *)((longlong)puVar7 + 0xc);
  uStack_60 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar7;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar7);
  }
  FUN_140003ca0(&uStack_68,uStack_300);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_278,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_180 = &uStack_278;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_a0,1,uVar9,&puStack_180);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_2b8,uVar4);
  uStack_b8 = 0x13;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  if ((*(uint *)((longlong)puStack_e0 + 0xc) & 0xffffff) == 0) {
    uVar4 = *puStack_e0;
  }
  else {
    uVar4 = FUN_1416940c0();
  }
  puVar6 = puStack_e0;
  dVar11 = (double)FUN_141944a50(uVar4,_UNK_141982ef8);
  bVar1 = (double)(-(ulonglong)(dVar11 < 0.0) & (_UNK_141982e90 ^ (ulonglong)dVar11) |
                  ~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11) <= dRam00000001420f6b08;
  uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
  uStack_60 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar6;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar6);
  }
  FUN_140001c50(&uStack_68,bVar1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar9,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_320,uVar4);
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar4 = *puVar7;
  }
  else {
    uVar4 = FUN_1416940c0(puVar7);
  }
  dVar11 = (double)FUN_141944a50(uVar4,_UNK_141982ef8);
  FUN_140017bd0(&uStack_68,puVar7,
                (double)(-(ulonglong)(dVar11 < 0.0) & (_UNK_141982e90 ^ (ulonglong)dVar11) |
                        ~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11) <= dRam00000001420f6b08);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_298,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_190 = &uStack_298;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_90,1,ppuVar13,&uStack_190);
  FUN_1400019a0(&uStack_388,uVar4);
  uStack_b8 = 0x14;
  uStack_4c = 0;
  uStack_58 = 0;
  iVar3 = FUN_1416d9df0(puVar5,&uStack_58,dRam00000001420f6b08,1);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  if ((iVar3 != -2) && (iVar3 < 0)) goto code_r0x0001402cb1b8;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x189cf/*var:hsp*/);
  uStack_300 = (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  uStack_5c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar5);
  }
  FUN_140003e00(&uStack_68,uVar4);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  ppuVar15 = &puStack_198;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,ppuVar13,ppuVar15);
  iVar3 = FUN_1416d9df0(uVar4,&uStack_2d8,dRam00000001420f6b08,1);
  if (iVar3 < 1) goto code_r0x0001402cb8f4;
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  puStack_188 = &uStack_320;
  ppuVar13 = (undefined8 **)&uStack_190;
  uStack_190 = &uStack_2d8;
  uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,ppuVar13);
  uStack_4c = 0;
  uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
  if (iVar3 == 0) {
code_r0x0001402cb1b8:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    uStack_b8 = 0x15;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uStack_5c = uStack_2cc;
    uStack_60 = uStack_2d0;
    if ((0x46U >> (uStack_2cc & 0x1f) & 1) == 0) {
      uStack_68 = uStack_2d8;
    }
    else {
      FUN_1402d3f30(&uStack_68,&uStack_2d8);
    }
    FUN_140001c50(&uStack_68,1);
    FUN_140001a50(&uStack_58,&uStack_68,0x10);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    func_0x0001416a8c00(1);
    uStack_b8 = 0x16;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uStack_4c = *(uint *)((longlong)puVar5 + 0xc);
    uStack_50 = *(undefined4 *)(puVar5 + 1);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
      uStack_58 = *puVar5;
    }
    else {
      FUN_1402d3f30(&uStack_58,puVar5);
    }
    FUN_140003ca0(&uStack_58,uVar9);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(puStack_e8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    func_0x0001416a8c00(1);
    uStack_b8 = 0x17;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    uStack_b8 = 0x18;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881a/*var:col_l*/);
    if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar6);
    }
code_r0x0001402cbbca:
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  else {
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    ppuVar13 = &puStack_180;
    puStack_180 = &uStack_2d8;
    puStack_178 = &uStack_388;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_b0,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cb1b8;
    uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    uStack_4c = 0;
    uStack_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(uStack_f0,&uStack_58,dRam00000001420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&uStack_58,&uStack_110,_UNK_141982ef8);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      ppuVar15 = &puStack_170;
      puStack_170 = &uStack_258;
      puStack_168 = &uStack_2d8;
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_d8,1,CONCAT44(uVar14,uRam00000001420da4b0),
                            ppuVar15);
      FUN_1400019a0(&uStack_238,uVar4);
      ppuVar13 = &puStack_168;
      puStack_160 = &uStack_238;
      uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_a0,2,ppuVar13);
      uStack_4c = 0;
      uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 == 0) goto code_r0x0001402cb1b8;
    }
code_r0x0001402cb8f4:
    uStack_b8 = 0x1a;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
    FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&uStack_358,ppuVar13,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00);
    FUN_140001a50(&uStack_58,&uStack_358,0x10);
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,1);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    if (0 < iVar3) goto code_r0x0001402cb98e;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    uStack_5c = *(uint *)((longlong)puVar5 + 0xc);
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
      uStack_68 = *puVar5;
    }
    else {
      FUN_1402d3f30(&uStack_68,puVar5);
    }
    FUN_140003e00(&uStack_68,uVar4);
    FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
    FUN_1400019a0(&uStack_2a8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    ppuVar15 = &puStack_198;
    ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
    puStack_198 = &uStack_2a8;
    uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,ppuVar13,ppuVar15);
    iVar3 = FUN_1416d9df0(uVar4,&uStack_310,dRam00000001420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto code_r0x0001402ce6fc;
    if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    uStack_90 = 0;
    uStack_88 = 0x500000000;
    puStack_188 = &uStack_320;
    ppuVar13 = (undefined8 **)&uStack_190;
    uStack_190 = &uStack_310;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) {
code_r0x0001402cb98e:
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      uStack_b8 = 0x1b;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
      FUN_140001a50(&uStack_58,&uStack_310,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar4,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x1c;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
      uVar9 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
      puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
      uStack_4c = *(uint *)((longlong)puStack_e8 + 0xc);
      uStack_50 = *(undefined4 *)(puStack_e8 + 1);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
        uStack_58 = *puStack_e8;
      }
      else {
        FUN_1402d3f30(&uStack_58);
      }
      FUN_140003e00(&uStack_58,uVar9);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(puVar5,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x1d;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
      uStack_b8 = 0x1e;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881d/*var:col_r*/);
      if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar6);
      }
      goto code_r0x0001402cbbca;
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    ppuVar13 = &puStack_180;
    puStack_180 = &uStack_310;
    puStack_178 = &uStack_388;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_b0,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cb98e;
    uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    uStack_4c = 0;
    uStack_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(uStack_f0,&uStack_58,dRam00000001420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&uStack_58,&uStack_110,_UNK_141982ef8);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      puStack_170 = &uStack_258;
      puStack_168 = &uStack_310;
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_d8,1,CONCAT44(uVar14,uRam00000001420da4b0),
                            &puStack_170);
      FUN_1400019a0(&uStack_238,uVar4);
      ppuVar13 = &puStack_168;
      puStack_160 = &uStack_238;
      uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_a0,2,ppuVar13);
      uStack_4c = 0;
      uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 == 0) goto code_r0x0001402cb98e;
    }
code_r0x0001402ce6fc:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    uStack_b8 = 0x20;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puVar5,uVar4);
    func_0x0001416a8c00(1);
    uStack_b8 = 0x21;
    puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puStack_e8,uVar4);
    func_0x0001416a8c00(1);
  }
  uStack_b8 = 0x23;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar4 = *puVar5;
  }
  else {
    uVar4 = FUN_1416940c0(puVar5);
  }
  dVar11 = (double)FUN_141944a50(uVar4,_UNK_141982ef8);
  bVar1 = (double)(-(ulonglong)(dVar11 < 0.0) & (_UNK_141982e90 ^ (ulonglong)dVar11) |
                  ~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11) <= dRam00000001420f6b08;
  uStack_5c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar5);
  }
  FUN_140001c50(&uStack_68,bVar1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar10,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&uStack_378,uVar4);
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  if ((*(uint *)((longlong)puStack_e8 + 0xc) & 0xffffff) == 0) {
    uVar4 = *puStack_e8;
  }
  else {
    uVar4 = FUN_1416940c0(puStack_e8);
  }
  puVar6 = puStack_e8;
  dVar11 = (double)FUN_141944a50(uVar4,_UNK_141982ef8);
  FUN_140017bd0(&uStack_68,puVar6,
                (double)(-(ulonglong)(dVar11 < 0.0) & (_UNK_141982e90 ^ (ulonglong)dVar11) |
                        ~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11) <= dRam00000001420f6b08);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_298,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_190 = &uStack_298;
  uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_90,1,uVar10,&uStack_190);
  uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&uStack_368,uVar4);
  uStack_b8 = 0x24;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uStack_5c = *(uint *)((longlong)puStack_e0 + 0xc);
  uStack_60 = *(undefined4 *)(puStack_e0 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puStack_e0;
  }
  else {
    FUN_1402d3f30(&uStack_68);
  }
  FUN_140003e00(&uStack_68,uStack_300);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  ppuVar15 = &puStack_198;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,ppuVar13,ppuVar15);
  iVar3 = FUN_1416d9df0(uVar4,&uStack_2c8,dRam00000001420f6b08,1);
  if (iVar3 < 1) goto code_r0x0001402cc3b7;
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  ppuVar13 = (undefined8 **)&uStack_190;
  uStack_190 = &uStack_378;
  puStack_188 = &uStack_2c8;
  uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,ppuVar13);
  uStack_4c = 0;
  uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
  if (iVar3 == 0) {
code_r0x0001402cc448:
    uStack_b8 = 0x25;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uStack_5c = uStack_2bc;
    uStack_60 = uStack_2c0;
    if ((0x46U >> (uStack_2bc & 0x1f) & 1) == 0) {
      uStack_68 = uStack_2c8;
    }
    else {
      FUN_1402d3f30(&uStack_68,&uStack_2c8);
    }
    FUN_140001c50(&uStack_68,1);
    FUN_140001a50(&uStack_58,&uStack_68,0x10);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    func_0x0001416a8c00(1);
    uStack_b8 = 0x26;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uStack_4c = *(uint *)((longlong)puStack_e0 + 0xc);
    uStack_50 = *(undefined4 *)(puStack_e0 + 1);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
      uStack_58 = *puStack_e0;
    }
    else {
      FUN_1402d3f30(&uStack_58);
    }
    FUN_140003ca0(&uStack_58,uStack_f0);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(puVar6,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    func_0x0001416a8c00(1);
    uStack_b8 = 0x27;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    uStack_b8 = 0x28;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881e/*var:col_t*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
code_r0x0001402cce1e:
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  else {
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    ppuVar13 = &puStack_180;
    puStack_180 = &uStack_368;
    puStack_178 = &uStack_2c8;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_b0,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cc448;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    uStack_4c = 0;
    uStack_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(uVar9,&uStack_58,dRam00000001420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&uStack_58,&uStack_100,_UNK_141982ef8);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      ppuVar15 = &puStack_170;
      puStack_170 = &uStack_258;
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_d8,1,CONCAT44(uVar14,uRam00000001420da4b0),
                            ppuVar15);
      FUN_1400019a0(&uStack_248,uVar4);
      ppuVar13 = &puStack_168;
      puStack_168 = &uStack_248;
      puStack_160 = &uStack_2c8;
      uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_a0,2,ppuVar13);
      uStack_4c = 0;
      uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 == 0) goto code_r0x0001402cc448;
    }
code_r0x0001402cc3b7:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    uStack_b8 = 0x2a;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
      uStack_68 = *puVar6;
    }
    else {
      FUN_1402d3f30(&uStack_68,puVar6);
    }
    FUN_140003e00(&uStack_68,uVar4);
    FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
    FUN_1400019a0(&uStack_2a8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    ppuVar15 = &puStack_198;
    ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
    puStack_198 = &uStack_2a8;
    uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,ppuVar13,ppuVar15);
    iVar3 = FUN_1416d9df0(uVar4,&uStack_2b8,dRam00000001420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto code_r0x0001402cc8cc;
    if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    uStack_90 = 0;
    uStack_88 = 0x500000000;
    ppuVar13 = (undefined8 **)&uStack_190;
    uStack_190 = &uStack_378;
    puStack_188 = &uStack_2b8;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) {
code_r0x0001402cc9c0:
      uStack_b8 = 0x2b;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      FUN_140001a50(&uStack_58,&uStack_2b8,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar4,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x2c;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
      puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
      uStack_4c = *(uint *)((longlong)puVar6 + 0xc);
      uStack_50 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
        uStack_58 = *puVar6;
      }
      else {
        FUN_1402d3f30(&uStack_58,puVar6);
      }
      FUN_140003e00(&uStack_58,uStack_f0);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(puStack_e0,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x2d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
      uStack_b8 = 0x2e;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18819/*var:col_b*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      uStack_b8 = 0x2f;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      goto code_r0x0001402cce1e;
    }
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    ppuVar13 = &puStack_180;
    puStack_180 = &uStack_368;
    puStack_178 = &uStack_2b8;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_b0,2,ppuVar13);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cc9c0;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    uStack_4c = 0;
    uStack_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(uVar9,&uStack_58,dRam00000001420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&uStack_58,&uStack_100,_UNK_141982ef8);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      ppuVar15 = &puStack_170;
      puStack_170 = &uStack_258;
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_d8,1,CONCAT44(uVar14,uRam00000001420da4b0),
                            ppuVar15);
      FUN_1400019a0(&uStack_248,uVar4);
      ppuVar13 = &puStack_168;
      puStack_168 = &uStack_248;
      puStack_160 = &uStack_2b8;
      uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_a0,2,ppuVar13);
      uStack_4c = 0;
      uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 == 0) goto code_r0x0001402cc9c0;
    }
code_r0x0001402cc8cc:
    uStack_b8 = 0x31;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18a3e/*var:jt_col*/);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) {
      if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_78);
      }
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      uStack_78 = 0;
      uStack_70 = 0x500000000;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
        uStack_68 = *puVar6;
      }
      else {
        FUN_1402d3f30(&uStack_68,puVar6);
      }
      FUN_140003e00(&uStack_68,uVar4);
      FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
      FUN_1400019a0(&uStack_2a8,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
      ppuVar15 = &puStack_198;
      ppuVar13 = (undefined8 **)CONCAT44(uVar14,uRam00000001420da4b0);
      puStack_198 = &uStack_2a8;
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,ppuVar13,ppuVar15);
      iVar3 = FUN_1416d9df0(uVar4,&uStack_2b8,dRam00000001420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) goto code_r0x0001402cc921;
      if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_90);
      }
      uStack_90 = 0;
      uStack_88 = 0x500000000;
      ppuVar13 = (undefined8 **)&uStack_190;
      uStack_190 = &uStack_378;
      puStack_188 = &uStack_2b8;
      uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,ppuVar13);
      uStack_4c = 0;
      uStack_58 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 != 0) {
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        ppuVar13 = &puStack_180;
        puStack_180 = &uStack_368;
        puStack_178 = &uStack_2b8;
        uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_b0,2,ppuVar13);
        uStack_4c = 0;
        uStack_58 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
        iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
        if (iVar3 != 0) goto code_r0x0001402cc921;
      }
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      FUN_140004520(&uStack_58,puVar6,_UNK_141982ef8);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      puStack_170 = &uStack_258;
      uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
        uStack_68 = *puVar6;
      }
      else {
        FUN_1402d3f30(&uStack_68,puVar6);
      }
      FUN_140003ca0(&uStack_68,uVar4);
      FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
      FUN_1400019a0(&uStack_248,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
      puStack_168 = &uStack_248;
      uVar10 = CONCAT44(uVar14,uRam00000001420da140);
      uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_d8,1,uVar10,&puStack_168);
      ppuVar15 = &puStack_170;
      ppuVar13 = (undefined8 **)CONCAT44((int)((ulonglong)uVar10 >> 0x20),uRam00000001420da140);
      uVar10 = FUN_1416ab210(param_1,uStack_80,&uStack_a0,1,ppuVar13,ppuVar15);
      iVar3 = FUN_1416d9df0(uVar10,uVar4,dRam00000001420f6b08,0);
      if (iVar3 == 0) goto code_r0x0001402cc921;
      uStack_b8 = 0x32;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      FUN_140001a50(&uStack_58,&uStack_2b8,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar4,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x33;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uStack_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
      puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
      uStack_4c = *(uint *)((longlong)puVar6 + 0xc);
      uStack_50 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
        uStack_58 = *puVar6;
      }
      else {
        FUN_1402d3f30(&uStack_58,puVar6);
      }
      FUN_140003e00(&uStack_58,uStack_f0);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(puStack_e0,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      func_0x0001416a8c00(1);
      uStack_b8 = 0x34;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      uStack_b8 = 0x35;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
      uStack_b8 = 0x36;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b41/*var:onJT*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      goto code_r0x0001402cce1e;
    }
code_r0x0001402cc921:
    uStack_b8 = 0x38;
    puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puStack_e0,uVar4);
    func_0x0001416a8c00(1);
    uStack_b8 = 0x39;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puVar6,uVar4);
    func_0x0001416a8c00(1);
  }
  uStack_b8 = 0x3c;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  FUN_140002730(&uStack_2a8,0x1420b2fc0);
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puVar5);
  uStack_190 = &uStack_298;
  uVar4 = FUN_1416cd900(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,uVar4);
  func_0x0001416a8c00(1);
  uStack_b8 = 0x3d;
  uStack_4c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_50 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_58,puVar5);
  }
  FUN_140003ca0(&uStack_58,uVar9);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puStack_e8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_b8 = 0x3f;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&uStack_358,ppuVar13,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  FUN_140001a50(&uStack_68,&uStack_358,0x10);
  FUN_140017bd0(&uStack_58,&uStack_68,4);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puStack_e8);
  uStack_190 = &uStack_298;
  uVar4 = FUN_1416cda40(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puStack_e8,uVar4);
  func_0x0001416a8c00(1);
  uStack_b8 = 0x40;
  uStack_4c = *(uint *)((longlong)puStack_e8 + 0xc);
  uStack_50 = *(undefined4 *)(puStack_e8 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puStack_e8;
  }
  else {
    FUN_1402d3f30(&uStack_58);
  }
  FUN_140003e00(&uStack_58,uVar9);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_b8 = 0x45;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  FUN_140001a50(&uStack_68,&uStack_2f8,0x10);
  FUN_140017bd0(&uStack_58,&uStack_68,4);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  puStack_198 = &uStack_2a8;
  FUN_1400019a0(&uStack_298,puVar6);
  uStack_190 = &uStack_298;
  uVar4 = FUN_1416cda40(&uStack_78,2,&puStack_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar6,uVar4);
  func_0x0001416a8c00(1);
  uStack_b8 = 0x46;
  uStack_4c = *(uint *)((longlong)puVar6 + 0xc);
  uStack_50 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar6;
  }
  else {
    FUN_1402d3f30(&uStack_58,puVar6);
  }
  FUN_140003e00(&uStack_58,uStack_f0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puStack_e0,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
  cVar2 = FUN_1416927d0(uVar4);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  if (cVar2 != '\0') {
    uStack_b8 = 0x49;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    puStack_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uStack_5c = *(uint *)((longlong)puVar6 + 0xc);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
      uStack_68 = *puVar6;
    }
    else {
      FUN_1402d3f30(&uStack_68,puVar6);
    }
    FUN_140001c50(&uStack_68,1);
    FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
    FUN_1400019a0(&uStack_2a8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    ppuVar13 = &puStack_198;
    uVar12 = CONCAT44(uVar14,uRam00000001420da4b0);
    puStack_198 = &uStack_2a8;
    uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar12,ppuVar13);
    FUN_1400019a0(&uStack_2b8,uVar4);
    uStack_b8 = 0x4a;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    uStack_90 = 0;
    uStack_88 = 0x500000000;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189c2/*var:hit_id*/);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140004520(&uStack_58,&uStack_100,_UNK_141982ef8);
    FUN_1400019a0(&uStack_2a8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    puStack_198 = &uStack_2a8;
    FUN_1400019a0(&uStack_298,uStack_390);
    uStack_190 = &uStack_298;
    uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
    uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_90,1,uVar10,&puStack_198);
    uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
    FUN_1400019a0(&uStack_288,uVar9);
    puStack_188 = &uStack_288;
    puVar7 = &uStack_190;
    uVar12 = CONCAT44(uVar14,uRam00000001420da240);
    puStack_180 = &uStack_2b8;
    uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_78,3,uVar12,puVar7);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,uVar9);
    func_0x0001416a8c00(1);
    uStack_b8 = 0x4b;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    uStack_90 = 0;
    uStack_88 = 0x500000000;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b3f/*var:onblock_id*/);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,
                  (ulonglong)puVar7 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140004520(&uStack_58,&uStack_100,_UNK_141982ef8);
    FUN_1400019a0(&uStack_2a8,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    puStack_198 = &uStack_2a8;
    FUN_1400019a0(&uStack_298,uStack_390);
    uStack_190 = &uStack_298;
    uVar10 = CONCAT44(uVar14,uRam00000001420da4b0);
    uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_90,1,uVar10,&puStack_198);
    uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
    FUN_1400019a0(&uStack_288,uVar9);
    puStack_188 = &uStack_288;
    puVar7 = &uStack_190;
    uVar12 = CONCAT44(uVar14,uRam00000001420da240);
    puStack_180 = &uStack_2b8;
    uVar9 = FUN_1416ab210(param_1,uStack_80,&uStack_78,3,uVar12,puVar7);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar4,uVar9);
    func_0x0001416a8c00(1);
    uVar16 = (ulonglong)puVar7 & 0xffffffffffffff00;
    ppuVar13 = (undefined8 **)(uVar12 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,uRam00000001420d5a28,0x80000000,&uStack_330,ppuVar13,uVar16);
    uStack_4c = 0;
    uStack_58 = 0x4050000000000000/*64 (obj:oPlayer)*/;
    iVar3 = FUN_1416d9df0(&uStack_330,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) {
      uStack_b8 = 0x4d;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b3f/*var:onblock_id*/);
      uStack_4c = 0;
      uStack_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
      iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189c2/*var:hit_id*/);
        uStack_4c = 0;
        uStack_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
        iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
        if (iVar3 != 0) {
          if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_78);
          }
          uStack_78 = 0;
          uStack_70 = 0x500000000;
          if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_90);
          }
          uStack_90 = 0;
          uStack_88 = 0x500000000;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
          uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,uVar12,
                        uVar16 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar12 >> 0x20);
          FUN_1400019a0(&uStack_2a8,&uStack_110);
          puStack_198 = &uStack_2a8;
          FUN_1400019a0(&uStack_298,puVar6);
          uStack_190 = &uStack_298;
          FUN_140017bd0(&uStack_58,puVar5,2);
          FUN_1400019a0(&uStack_288,&uStack_58);
          if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_58);
          }
          puStack_188 = &uStack_288;
          ppuVar15 = &puStack_198;
          uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_90,2,CONCAT44(uVar14,uRam00000001420da0c0)
                                ,ppuVar15);
          FUN_1400019a0(&uStack_278,uVar4);
          puStack_180 = &uStack_278;
          ppuVar13 = &puStack_188;
          uVar4 = FUN_14012bed0(param_1,uStack_80,&uStack_78,2,ppuVar13);
          uStack_4c = 0;
          uStack_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
          iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
          if (iVar3 != 0) {
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_a0);
            }
            uStack_a0 = 0;
            uStack_98 = 0x500000000;
            puStack_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
            uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
            FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,uVar12,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00);
            uVar14 = (undefined4)(uVar12 >> 0x20);
            FUN_1400019a0(&uStack_268,&uStack_110);
            puStack_178 = &uStack_268;
            FUN_1400019a0(&uStack_258,puVar6);
            puStack_170 = &uStack_258;
            uStack_4c = *(uint *)((longlong)puStack_e8 + 0xc);
            uStack_50 = *(undefined4 *)(puStack_e8 + 1);
            if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
              uStack_58 = *puStack_e8;
            }
            else {
              FUN_1402d3f30(&uStack_58);
            }
            FUN_140001c50(&uStack_58,2);
            FUN_1400019a0(&uStack_248,&uStack_58);
            if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_58);
            }
            ppuVar15 = &puStack_178;
            puStack_168 = &uStack_248;
            uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_a0,2,
                                  CONCAT44(uVar14,uRam00000001420da0c0),ppuVar15);
            FUN_1400019a0(&uStack_238,uVar4);
            ppuVar13 = &puStack_168;
            puStack_160 = &uStack_238;
            uVar4 = FUN_14012bed0(param_1,uStack_80,&uStack_b0,2,ppuVar13);
            uStack_4c = 0;
            uStack_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
            iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
            if (iVar3 != 0) goto code_r0x0001402ceba3;
          }
          uStack_b8 = 0x50;
          if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_d8);
          }
          uStack_d8 = 0;
          uStack_d0 = 0x500000000;
          if ((0x46U >> (uStack_2e0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_2e8);
          }
          uStack_2e8 = 0;
          uStack_2e0 = 0x500000000;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18908/*var:facing*/);
          uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,uVar16);
          FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,
                        uVar12 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
          FUN_140002730(&uStack_228,0x1420b2fe0);
          puStack_158 = &uStack_228;
          FUN_140002730(&uStack_218,0x1420b2ff0);
          puStack_150 = &uStack_218;
          FUN_140002730(&uStack_208,0x1420b3000);
          puStack_148 = &uStack_208;
          FUN_140002730(&uStack_1f8,0x1420b3010);
          puStack_140 = &uStack_1f8;
          FUN_140002730(&uStack_1e8,0x1420b2fd0);
          puStack_138 = &uStack_1e8;
          FUN_140001a50(&uStack_68,uVar4,0x10);
          uStack_4c = uStack_f4;
          uStack_50 = uStack_f8;
          if ((0x46U >> (uStack_f4 & 0x1f) & 1) == 0) {
            uStack_58 = uStack_100;
          }
          else {
            FUN_1402d3f30(&uStack_58,&uStack_100);
          }
          FUN_140003ca0(&uStack_58,&uStack_68);
          FUN_1400019a0(&uStack_1d8,&uStack_58);
          if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_58);
          }
          if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_68);
          }
          uStack_4c = uStack_104;
          uStack_50 = uStack_108;
          puStack_130 = &uStack_1d8;
          if ((0x46U >> (uStack_104 & 0x1f) & 1) == 0) {
            uStack_58 = uStack_110;
          }
          else {
            FUN_1402d3f30(&uStack_58,&uStack_110);
          }
          FUN_140001c50(&uStack_58,8);
          FUN_1400019a0(&uStack_1c8,&uStack_58);
          if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_58);
          }
          puStack_128 = &uStack_1c8;
          uVar4 = FUN_1416cd660(&uStack_2e8,4,&puStack_158);
          FUN_1400019a0(&uStack_1b8,uVar4);
          ppuVar13 = &puStack_138;
          puStack_120 = &uStack_1b8;
          FUN_1400e28e0(param_1,uStack_80,&uStack_d8,4,ppuVar13);
          goto code_r0x0001402ceba3;
        }
      }
      uStack_b8 = 0x4e;
      if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_78);
      }
      uStack_78 = 0;
      uStack_70 = 0x500000000;
      if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_90);
      }
      uStack_90 = 0;
      uStack_88 = 0x500000000;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18908/*var:facing*/);
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_100,uVar12,uVar16);
      FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_110,uVar12 & 0xffffffffffffff00,
                    uVar16 & 0xffffffffffffff00);
      FUN_140002730(&uStack_2a8,0x1420b2fe0);
      puStack_198 = &uStack_2a8;
      FUN_140002730(&uStack_298,0x1420b2ff0);
      uStack_190 = &uStack_298;
      FUN_140002730(&uStack_288,0x1420b3000);
      puStack_188 = &uStack_288;
      FUN_140002730(&uStack_278,0x1420b3010);
      puStack_180 = &uStack_278;
      FUN_140002730(&uStack_268,0x1420b2fd0);
      puStack_178 = &uStack_268;
      FUN_140001a50(&uStack_68,uVar4,0x10);
      uStack_4c = uStack_f4;
      uStack_50 = uStack_f8;
      if ((0x46U >> (uStack_f4 & 0x1f) & 1) == 0) {
        uStack_58 = uStack_100;
      }
      else {
        FUN_1402d3f30(&uStack_58,&uStack_100);
      }
      FUN_140003ca0(&uStack_58,&uStack_68);
      FUN_1400019a0(&uStack_258,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
      puStack_170 = &uStack_258;
      uStack_4c = uStack_104;
      uStack_50 = uStack_108;
      if ((0x46U >> (uStack_104 & 0x1f) & 1) == 0) {
        uStack_58 = uStack_110;
      }
      else {
        FUN_1402d3f30(&uStack_58,&uStack_110);
      }
      FUN_140001c50(&uStack_58,8);
      FUN_1400019a0(&uStack_248,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      puStack_168 = &uStack_248;
      uVar4 = FUN_1416cd660(&uStack_90,4,&puStack_198);
      FUN_1400019a0(&uStack_238,uVar4);
      ppuVar13 = &puStack_178;
      puStack_160 = &uStack_238;
      FUN_1400e28e0(param_1,uStack_80,&uStack_78,4,ppuVar13);
    }
  }
code_r0x0001402ceba3:
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  uStack_b8 = 0x55;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uStack_5c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar5;
  }
  else {
    FUN_1402d3f30(&uStack_68,puVar5);
  }
  FUN_140001c50(&uStack_68,1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar9,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_2d8,uVar4);
  uStack_b8 = 0x56;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  uStack_5c = *(uint *)((longlong)puStack_e0 + 0xc);
  uStack_60 = *(undefined4 *)(puStack_e0 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puStack_e0;
  }
  else {
    FUN_1402d3f30(&uStack_68);
  }
  FUN_140001c50(&uStack_68,1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar9,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_2c8,uVar4);
  uStack_b8 = 0x57;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  FUN_140017bd0(&uStack_68,puStack_e8,1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uVar9 = CONCAT44(uVar14,uRam00000001420da4b0);
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,uVar9,&puStack_198);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1400019a0(&uStack_310,uVar4);
  uStack_b8 = 0x58;
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  FUN_140017bd0(&uStack_68,puVar6,1);
  FUN_140004520(&uStack_58,&uStack_68,_UNK_141982ef8);
  FUN_1400019a0(&uStack_2a8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  puStack_198 = &uStack_2a8;
  uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_78,1,CONCAT44(uVar14,uRam00000001420da4b0),
                        &puStack_198);
  FUN_1400019a0(&uStack_2b8,uVar4);
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  uStack_78 = 0;
  uStack_70 = 0x500000000;
  ppuVar13 = &puStack_198;
  puStack_198 = &uStack_2d8;
  uStack_190 = &uStack_2b8;
  uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_78,2,ppuVar13);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  uStack_4c = 0;
  uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
  if (iVar3 == 0) {
code_r0x0001402cf3cc:
    uStack_b8 = 0x5b;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uStack_4c = 0;
    uStack_58 = 0x3fe0000000000000/*0.5*/;
    FUN_140003e00(uVar4,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_b8 = 0x5c;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uStack_4c = 0;
    uStack_58 = 0x3fe0000000000000/*0.5*/;
    FUN_140003e00(uVar4,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_b8 = 0x5d;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0xbfe0000000000000/*-0.5*/;
  }
  else {
    if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_90);
    }
    uStack_90 = 0;
    uStack_88 = 0x500000000;
    if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b0);
    }
    uStack_b0 = 0;
    uStack_a8 = 0x500000000;
    if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    uStack_a0 = 0;
    uStack_98 = 0x500000000;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uVar9 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    FUN_1400019a0(&uStack_288,uVar4);
    puStack_188 = &uStack_288;
    FUN_1400019a0(&uStack_278,uVar9);
    puStack_180 = &uStack_278;
    uVar9 = CONCAT44(uVar14,uRam00000001420da0c0);
    uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_a0,2,uVar9,&puStack_188);
    uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
    FUN_140004520(&uStack_58,uVar4,_UNK_141982ef8);
    FUN_1400019a0(&uStack_268,&uStack_58);
    if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    puStack_178 = &uStack_268;
    uVar4 = FUN_1416ab210(param_1,uStack_80,&uStack_b0,1,CONCAT44(uVar14,uRam00000001420da4b0),
                          &puStack_178);
    FUN_1400019a0(&uStack_258,uVar4);
    puStack_170 = &uStack_258;
    puStack_168 = &uStack_2b8;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_90,2,&puStack_170);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cf3cc;
    if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_d8);
    }
    uStack_d8 = 0;
    uStack_d0 = 0x500000000;
    puStack_160 = &uStack_310;
    puStack_158 = &uStack_2b8;
    uVar4 = FUN_14012cc90(param_1,uStack_80,&uStack_d8,2,&puStack_160);
    uStack_4c = 0;
    uStack_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&uStack_58,dRam00000001420f6b08,0);
    if (iVar3 == 0) goto code_r0x0001402cf3cc;
  }
  if ((0x46U >> (uStack_2e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_324 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_330);
  }
  if ((0x46U >> (uStack_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_100);
  }
  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_368);
  }
  if ((0x46U >> (uStack_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_378);
  }
  if ((0x46U >> (uStack_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  if ((0x46U >> (uStack_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_388);
  }
  if ((0x46U >> (uStack_314 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_320);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b8);
  }
  if ((0x46U >> (uStack_304 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_310);
  }
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c8);
  }
  if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_298);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  ppuRam0000000142182d78 = (undefined8 **)puStack_c8;
code_r0x0001402cf816:
  uStack_338 = 0x13;
  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0x500000000;
  FUN_14003d740(param_1,uStack_80,&uStack_1a8,0,0);
  uStack_338 = 0x1f;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18e3d/*var:x2*/);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18e3b/*var:x1*/);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,0x18d7b/*var:tbwh*/);
  uStack_190 = (undefined8 *)plVar8[1];
  if ((0x46U >> (*(uint *)((longlong)plVar8 + 0xc) & 0x1f) & 1) == 0) {
    puStack_198 = (undefined8 *)*plVar8;
  }
  else {
    FUN_1402d3f30(&puStack_198,plVar8);
  }
  FUN_140003e00(&puStack_198,uVar4);
  FUN_140004520(&uStack_2a8,&puStack_198,_UNK_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar9,&uStack_2a8);
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_198);
  }
  func_0x0001416a8c00(1);
  uStack_338 = 0x20;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x18e4d/*var:y2*/);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18e4b/*var:y1*/);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,0x18d7a/*var:tbhh*/);
  uStack_190 = (undefined8 *)plVar8[1];
  if ((0x46U >> (*(uint *)((longlong)plVar8 + 0xc) & 0x1f) & 1) == 0) {
    puStack_198 = (undefined8 *)*plVar8;
  }
  else {
    FUN_1402d3f30(&puStack_198,plVar8);
  }
  FUN_140003e00(&puStack_198,uVar4);
  FUN_140004520(&uStack_2a8,&puStack_198,_UNK_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar9,&uStack_2a8);
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_190._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&puStack_198);
  }
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3a0);
  }
  if ((0x46U >> (uStack_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b0);
  }
  if ((0x46U >> (uStack_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3c0);
  }
  if ((0x46U >> (uStack_3c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3d0);
  }
  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3e0);
  }
  if ((0x46U >> (uStack_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3f0);
  }
  if ((0x46U >> (uStack_3f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_400);
  }
  if ((0x46U >> (uStack_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_410);
  }
  if ((0x46U >> (uStack_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_420);
  }
  if ((0x46U >> (uStack_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_430);
  }
  if ((0x46U >> (uStack_434 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_440);
  }
  if ((0x46U >> (uStack_1a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  ppuRam0000000142182d78 = (undefined8 **)uStack_348;
  return;
}


