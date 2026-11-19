// Function: gml_Script_open_book @ 0x140112250

/* WARNING: Removing unreachable block (ram,0x0001401141c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_open_book
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  double dVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double *pdVar14;
  double *pdVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar26 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 **ppuVar30;
  ulonglong uVar31;
  double **ppdVar32;
  double **in_stack_fffffffffffffc30;
  undefined1 local_3a8 [12];
  uint local_39c;
  undefined *local_398;
  double *local_390;
  undefined8 *local_388;
  undefined1 local_380 [16];
  longlong local_370;
  undefined8 local_360;
  uint local_354;
  undefined8 local_350;
  uint local_344;
  double local_340;
  uint local_334;
  undefined8 local_330;
  uint local_324;
  undefined8 local_320;
  uint local_314;
  double local_310;
  undefined4 local_308;
  uint local_304;
  double local_300;
  undefined4 local_2f8;
  uint local_2f4;
  undefined8 local_2f0;
  uint local_2e4;
  double local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  int local_2cc;
  double local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  double local_298;
  uint local_28c;
  double local_288;
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
  double *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  double *local_1c8;
  double *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  undefined4 local_150;
  uint local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  double local_130;
  undefined4 local_128;
  uint local_124;
  double local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 local_110;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined4 local_e0;
  uint local_dc;
  longlong *local_d8;
  undefined8 local_d0;
  
  local_d0 = 0xfffffffffffffffe;
  local_140 = "gml_Script_open_book";
  local_138 = 0;
  local_148 = DAT_142182d78;
  DAT_142182d78 = &local_148;
  local_28c = 0xffffff;
  local_298 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
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
  DAT_142182d90 = param_1;
  local_388 = param_3;
  local_2cc = param_4;
  local_110 = param_2;
  local_d8 = param_1;
  uVar12 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18816);
  uVar13 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18817);
  local_354 = 0xffffff;
  local_360 = 0;
  local_344 = 0xffffff;
  local_350 = 0;
  local_2e4 = 0xffffff;
  local_2f0 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_314 = 0xffffff;
  local_320 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_324 = 0xffffff;
  local_330 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_390 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18943);
  local_f0 = (ulonglong)(uint)local_f0;
  local_f8 = 0;
  local_160 = (ulonglong)(uint)local_160;
  local_168 = 0;
  local_1f0 = (ulonglong)(uint)local_1f0;
  local_1f8 = 0;
  local_1e0 = (ulonglong)(uint)local_1e0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)local_388 + 0xc) = 5;
  *local_388 = 0;
  FUN_1416ab750(DAT_1420dd250);
  iVar8 = FUN_1416f82f0(local_d8,local_110,0x299);
  if (0 < iVar8) {
    local_dc = 0;
    local_e8 = 665.0;
    iVar8 = FUN_1416ab810(local_380,&local_d8,&local_110,&local_e8);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if (0 < iVar8) {
      do {
        FUN_1416f8210(local_d8,local_110,0,0);
        cVar6 = FUN_1416abe60(local_380,&local_d8);
      } while (cVar6 != '\0');
    }
    FUN_1416ab620(local_380,&local_d8,&local_110);
    if (local_370 != 0) {
      thunk_FUN_1416c46f0();
      local_370 = 0;
    }
  }
  local_138 = 3;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  FUN_1400019a0(&local_298,uVar12);
  local_1c8 = &local_298;
  FUN_1400019a0(&local_288,uVar13);
  local_1c0 = &local_288;
  FUN_140002730(&local_278,&DAT_1420b32d8);
  local_1b8 = &local_278;
  FUN_140002730(&local_268,&DAT_1420b32e8);
  local_1b0 = &local_268;
  ppdVar32 = &local_1c8;
  uVar12 = gml_Script_instance_create_one(local_d8,local_110,&local_f8,4,ppdVar32);
  FUN_1400019a0(&local_360,uVar12);
  iVar8 = FUN_1416ab810(local_380,&local_d8,&local_110,&local_360);
  uVar5 = DAT_141983ddc;
  uVar4 = DAT_141982e90;
  uVar3 = _DAT_141981f80;
  dVar2 = _DAT_141981e30;
  if (iVar8 < 1) {
LAB_140117a4b:
    FUN_1416ab620(local_380,&local_d8,&local_110);
    if (local_370 != 0) {
      thunk_FUN_1416c46f0();
      local_370 = 0;
    }
    if ((0x46U >> (local_1e0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1e8);
    }
    if ((0x46U >> (local_1f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1f8);
    }
    if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2c8);
    }
    if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_130);
    }
    if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2a8);
    }
    if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2b8);
    }
    if ((0x46U >> (local_324 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_330);
    }
    if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_178);
    }
    if ((0x46U >> (local_314 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_320);
    }
    if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1d8);
    }
    if ((0x46U >> (local_2e4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2f0);
    }
    if ((0x46U >> (local_344 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_350);
    }
    if ((0x46U >> (local_354 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_360);
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
    DAT_142182d78 = (undefined8 *)local_148;
    return local_388;
  }
LAB_1401127f0:
  local_138 = 6;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18a3a);
  puVar20 = &DAT_1420b1000;
  if (1 < local_2cc) {
    puVar20 = (undefined8 *)param_5[1];
  }
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,puVar20);
  FUN_1416a8c00(1);
  puVar20 = &DAT_1420b1000;
  if (1 < local_2cc) {
    puVar20 = (undefined8 *)param_5[1];
  }
  local_dc = 0;
  local_e8 = 1.0;
  iVar8 = FUN_1416d9df0(puVar20,&local_e8,DAT_1420f6b08,0);
  if (iVar8 == 0) {
    local_138 = 7;
    puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x1879d);
    if ((0x46U >> (*(uint *)((longlong)puVar20 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar20);
    }
    *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
    *puVar20 = 0xc010000000000000;
    puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b45);
    if ((0x46U >> (*(uint *)((longlong)puVar20 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar20);
    }
    *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
    *puVar20 = 0x3ff0000000000000;
  }
  else {
    uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x1879d);
    FUN_1416cea80(local_110,DAT_1420d59e8,0x80000000,&local_350,
                  (ulonglong)ppdVar32 & 0xffffffffffffff00,
                  (ulonglong)in_stack_fffffffffffffc30 & 0xffffffffffffff00);
    FUN_1416a8cb0(local_d8);
    FUN_1400019a0(uVar12,&local_350);
    FUN_1416a8c00(1);
  }
  local_138 = 8;
  local_200 = (double *)(**(code **)(*local_d8 + 0x10))(local_d8,0x1879e);
  puVar20 = &DAT_1420b1000;
  if (0 < local_2cc) {
    puVar20 = (undefined8 *)*param_5;
  }
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(local_200,puVar20);
  FUN_1416a8c00(1);
  local_138 = 9;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  uVar11 = 0;
  gml_Script_ini_language(local_d8,local_110,&local_f8,0,0);
  local_138 = 10;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  local_168 = 0;
  local_160 = 0x500000000;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
  FUN_1400019a0(&local_298,local_200);
  local_1c8 = &local_298;
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  FUN_1416ab000(&local_288,s_BOOKS_1420b32b0);
  local_1c0 = &local_288;
  FUN_1416ac010(&local_108,&DAT_1420b32bc);
  uVar16 = CONCAT44(uVar11,DAT_1420da2b0);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_168,1,uVar16,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416ac010(&local_158,s_book__1420b32b6);
  local_114 = local_14c;
  local_118 = local_150;
  if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
    local_120 = local_158;
  }
  else {
    FUN_14011f9f0(&local_120,&local_158);
  }
  FUN_140003ca0(&local_120,uVar13);
  local_dc = local_114;
  local_e0 = local_118;
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_e8 = local_120;
  }
  else {
    FUN_14011f9f0(&local_e8,&local_120);
  }
  FUN_140003ca0(&local_e8,&local_108);
  FUN_1400019a0(&local_278,&local_e8);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_1b8 = &local_278;
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  FUN_1416ab000(&local_268,&DAT_14217f480);
  local_1b0 = &local_268;
  uVar16 = CONCAT44(uVar11,DAT_1420da540);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_f8,3,uVar16,&local_1c0);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,uVar13);
  FUN_1416a8c00(1);
  local_138 = 0xb;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  local_168 = 0;
  local_160 = 0x500000000;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b10);
  FUN_1400019a0(&local_298,local_200);
  local_1c8 = &local_298;
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  FUN_1416ab000(&local_288,s_BOOKS_1420b32b0);
  local_1c0 = &local_288;
  FUN_1416ac010(&local_108,&DAT_1420b32c0);
  uVar16 = CONCAT44(uVar11,DAT_1420da2b0);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_168,1,uVar16,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416ac010(&local_158,s_book__1420b32b6);
  local_114 = local_14c;
  local_118 = local_150;
  if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
    local_120 = local_158;
  }
  else {
    FUN_14011f9f0(&local_120,&local_158);
  }
  FUN_140003ca0(&local_120,uVar13);
  local_dc = local_114;
  local_e0 = local_118;
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_e8 = local_120;
  }
  else {
    FUN_14011f9f0(&local_e8,&local_120);
  }
  FUN_140003ca0(&local_e8,&local_108);
  FUN_1400019a0(&local_278,&local_e8);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_1b8 = &local_278;
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  FUN_1416ab000(&local_268,&DAT_14217f480);
  local_1b0 = &local_268;
  uVar16 = CONCAT44(uVar11,DAT_1420da540);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_f8,3,uVar16,&local_1c0);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,uVar13);
  FUN_1416a8c00(1);
  local_138 = 0xc;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  local_168 = 0;
  local_160 = 0x500000000;
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
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18de2);
  FUN_1400019a0(&local_298,local_200);
  local_1c8 = &local_298;
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  FUN_1416ab000(&local_288,s_BOOKS_1420b32b0);
  local_1c0 = &local_288;
  FUN_1416ac010(&local_108,&DAT_1420b32c4);
  uVar16 = CONCAT44(uVar11,DAT_1420da2b0);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_1e8,1,uVar16,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416ac010(&local_158,s_book__1420b32b6);
  local_114 = local_14c;
  local_118 = local_150;
  if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
    local_120 = local_158;
  }
  else {
    FUN_14011f9f0(&local_120,&local_158);
  }
  FUN_140003ca0(&local_120,uVar13);
  local_dc = local_114;
  local_e0 = local_118;
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_e8 = local_120;
  }
  else {
    FUN_14011f9f0(&local_e8,&local_120);
  }
  FUN_140003ca0(&local_e8,&local_108);
  FUN_1400019a0(&local_278,&local_e8);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_1b8 = &local_278;
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  FUN_1416ab000(&local_268,&DAT_14217f480);
  local_1b0 = &local_268;
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_1f8,3,CONCAT44(uVar11,DAT_1420da540),&local_1c0);
  FUN_1400019a0(&local_258,uVar13);
  local_1a8 = &local_258;
  ppuVar30 = &local_1a8;
  uVar13 = FUN_140135c90(local_d8,local_110,&local_168,1,ppuVar30);
  uVar11 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
  FUN_1400019a0(&local_248,uVar13);
  local_1a0 = &local_248;
  uVar16 = CONCAT44(uVar11,DAT_1420da230);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar16,&local_1a0);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,uVar13);
  FUN_1416a8c00(1);
  local_138 = 0xd;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  uVar12 = CONCAT44(uVar11,DAT_1420da550);
  FUN_1416ab210(local_d8,local_110,&local_f8,0,uVar12,0);
  local_138 = 0xf;
  if ((0x46U >> (local_2e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2f0);
  }
  FUN_1416ab000(&local_2f0,&DAT_14217f480);
  if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d8);
  }
  FUN_1416ab000(&local_1d8,&DAT_14217f480);
  if ((0x46U >> (local_314 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_320);
  }
  FUN_1416ab000(&local_320,&DAT_14217f480);
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  local_16c = 0;
  local_178 = 0.0;
  if ((0x46U >> (local_324 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_330);
  }
  local_324 = 0;
  local_330 = 0;
  if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  FUN_1416ab000(&local_2b8,&DAT_14217f480);
  local_138 = 0x10;
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  local_29c = 0;
  local_2a8 = 0;
LAB_1401135a0:
  uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
  local_138 = 0x12;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  (**(code **)(*local_d8 + 0x10))(local_d8,0x1879e);
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
  uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x18de0);
  FUN_1400019a0(&local_298,uVar12);
  uVar16 = CONCAT44(uVar11,DAT_1420da1f0);
  local_1c8 = &local_298;
  uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar16,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = DAT_1420f6b08;
  iVar8 = FUN_1416d9df0(uVar13,uVar12,DAT_1420f6b08,1);
  if ((iVar8 != -2) && (iVar8 < 1)) {
    local_138 = 0x13;
    if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    local_168 = 0;
    local_160 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18de0);
    uVar13 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
    FUN_1400019a0(&local_288,uVar13);
    local_1c0 = &local_288;
    FUN_1400019a0(&local_278,uVar12);
    local_1b8 = &local_278;
    uVar13 = CONCAT44(uVar11,DAT_1420da520);
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_168,2,uVar13,&local_1c0);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_1400019a0(&local_2f0,uVar12);
    local_138 = 0x14;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18de0);
    uVar13 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
    FUN_1400019a0(&local_298,uVar13);
    local_1c8 = &local_298;
    FUN_140017bd0(&local_e8,uVar12,1);
    FUN_1400019a0(&local_288,&local_e8);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_1c0 = &local_288;
    uVar13 = CONCAT44(uVar11,DAT_1420da520);
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
    FUN_1400019a0(&local_320,uVar12);
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
    local_dc = 0;
    local_e8 = 1.0;
    iVar8 = FUN_1416d9df0(pdVar14,&local_e8,DAT_1420f6b08,0);
    if (iVar8 == 0) {
LAB_140113a69:
      local_138 = 0x16;
      FUN_1400019a0(&local_1d8,&local_2f0);
      local_138 = 0x17;
      if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_130);
      }
      local_124 = 0;
      local_130 = 1.0;
      bVar7 = true;
      do {
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (!bVar7) {
          if ((local_124 & 0xffffff) < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000140113af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar20 = (undefined8 *)
                      (*(code *)(&DAT_14011f758 +
                                *(int *)(&DAT_14011f758 + (ulonglong)(local_124 & 0xffffff) * 4)))()
            ;
            return puVar20;
          }
          FUN_140001d70(&DAT_141981e6a,&local_130,&local_130);
        }
        local_dc = 0;
        local_e8 = 100.0;
        iVar8 = FUN_1416d9df0(&local_130,&local_e8,DAT_1420f6b08,1);
        if ((iVar8 == -2) || (-1 < iVar8)) goto LAB_1401155d0;
        local_138 = 0x18;
        if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0x500000000;
        pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
        uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
        FUN_1400019a0(&local_298,uVar12);
        local_dc = *(uint *)((longlong)pdVar14 + 0xc);
        local_e0 = *(undefined4 *)(pdVar14 + 1);
        if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
          local_e8 = *pdVar14;
          local_1c8 = &local_298;
        }
        else {
          local_1c8 = &local_298;
          FUN_14011f9f0(&local_e8,pdVar14);
        }
        FUN_140003ca0(&local_e8,&local_130);
        FUN_1400019a0(&local_288,&local_e8);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        local_1c0 = &local_288;
        uVar13 = CONCAT44(uVar11,DAT_1420da520);
        uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
        FUN_1400019a0(&local_2b8,uVar12);
        local_138 = 0x19;
        FUN_1416ac010(&local_e8,&DAT_1420b32ca);
        iVar8 = FUN_1416d9df0(&local_2b8,&local_e8,DAT_1420f6b08,0);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (iVar8 == 0) {
          local_138 = 0x1a;
          if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_2a8);
          }
          local_29c = 0;
          local_2a8 = 0;
          iVar8 = 100;
          goto LAB_140114520;
        }
        local_138 = 0x3c;
        FUN_140003ca0(&local_1d8,&local_2b8);
        local_138 = 0x3d;
        if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0x500000000;
        uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
        pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
        uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x187b2);
        uVar9 = FUN_141693b30(&local_178);
        pdVar15 = (double *)FUN_14002e450(uVar12,uVar9);
        local_dc = *(uint *)((longlong)pdVar15 + 0xc);
        local_e0 = *(undefined4 *)(pdVar15 + 1);
        if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
          local_e8 = *pdVar15;
        }
        else {
          FUN_14011f9f0(&local_e8,pdVar15);
        }
        FUN_140003ca0(&local_e8,&local_1d8);
        FUN_1400019a0(&local_298,&local_e8);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        local_1c8 = &local_298;
        FUN_140001a50(&local_108,uVar13,2);
        local_dc = *(uint *)((longlong)pdVar14 + 0xc);
        local_e0 = *(undefined4 *)(pdVar14 + 1);
        if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
          local_e8 = *pdVar14;
        }
        else {
          FUN_14011f9f0(&local_e8,pdVar14);
        }
        FUN_140003e00(&local_e8,&local_108);
        uVar13 = CONCAT44(uVar11,DAT_1420da7c0);
        uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1c8);
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iVar8 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,1);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_108);
        }
        if (0 < iVar8) {
          local_138 = 0x3e;
          DAT_142182d90 = (longlong *)0x9288d4;
          puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
          FUN_1416a8cb0(local_d8);
          uVar9 = FUN_141693b30(&local_178);
          uVar12 = FUN_1416924a0(puVar20,uVar9);
          FUN_1416a8cb0(*puVar20);
          FUN_14011fa70(uVar12,&DAT_1420b32d0);
          FUN_1416a8c00(2);
          if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0x500000000;
          uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
          uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x187b2);
          pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b68);
          uVar9 = FUN_141693b30(&local_178);
          uVar12 = FUN_14002e450(uVar12,uVar9);
          FUN_1400019a0(&local_298,uVar12);
          local_1c8 = &local_298;
          FUN_140001a50(&local_108,uVar13,2);
          local_dc = *(uint *)((longlong)pdVar14 + 0xc);
          local_e0 = *(undefined4 *)(pdVar14 + 1);
          if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
            local_e8 = *pdVar14;
          }
          else {
            FUN_14011f9f0(&local_e8,pdVar14);
          }
          FUN_140003e00(&local_e8,&local_108);
          uVar13 = CONCAT44(uVar11,DAT_1420d9ed0);
          uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1c8);
          uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
          iVar8 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,1);
          if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_e8);
          }
          if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_108);
          }
          if (-1 < iVar8) {
            local_138 = 0x3f;
            FUN_140001c50(&local_178,1);
            puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
            FUN_1416a8cb0(local_d8);
            uVar9 = FUN_141693b30(&local_178);
            lVar18 = FUN_1416924a0(puVar20,uVar9);
            FUN_1416a8cb0(*puVar20);
            if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(lVar18);
            }
            FUN_1416ab000(lVar18,&DAT_14217f480);
            FUN_1416a8c00(2);
          }
          local_138 = 0x40;
          pdVar14 = (double *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18de0);
          local_dc = 0;
          local_e8 = 1.0;
          FUN_140003e00(pdVar14,&local_e8);
          if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_e8);
          }
          goto LAB_1401155d0;
        }
        local_138 = 0x42;
        FUN_1416ac010(&local_e8,&DAT_1420b32c8);
        iVar8 = FUN_1416d9df0(&local_2b8,&local_e8,DAT_1420f6b08,0);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        if (iVar8 == 0) break;
        if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0x500000000;
        pdVar14 = (double *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18de0);
        uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
        FUN_1400019a0(&local_298,uVar12);
        uVar13 = CONCAT44(uVar11,DAT_1420da1f0);
        local_1c8 = &local_298;
        uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1c8);
        local_dc = *(uint *)((longlong)pdVar14 + 0xc);
        local_e0 = *(undefined4 *)(pdVar14 + 1);
        if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
          local_e8 = *pdVar14;
        }
        else {
          FUN_14011f9f0(&local_e8,pdVar14);
        }
        FUN_140003ca0(&local_e8,&local_130);
        iVar8 = FUN_1416d9df0(&local_e8,uVar12,DAT_1420f6b08,1);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        bVar7 = false;
      } while (iVar8 < 0);
      local_138 = 0x44;
      DAT_142182d90 = (longlong *)0x9288d4;
      puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
      FUN_1416a8cb0(local_d8);
      uVar9 = FUN_141693b30(&local_178);
      uVar12 = FUN_1416924a0(puVar20,uVar9);
      FUN_1416a8cb0(*puVar20);
      FUN_140003ca0(uVar12,&local_1d8);
      FUN_1416a8c00(2);
      local_138 = 0x45;
      pdVar14 = (double *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18de0);
      FUN_140017bd0(&local_e8,&local_130,1);
      FUN_140003ca0(pdVar14,&local_e8);
      if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
    }
    else {
      FUN_1416ac010(&local_e8,&DAT_1420b32c8);
      iVar8 = FUN_1416d9df0(&local_320,&local_e8,DAT_1420f6b08,0);
      if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (iVar8 == 0) {
LAB_140113a22:
        FUN_1416ac010(&local_e8,&DAT_1420b32c8);
        iVar8 = FUN_1416d9df0(&local_2f0,&local_e8,DAT_1420f6b08,0);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (iVar8 != 0) goto LAB_140113a69;
      }
      else {
        if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0x500000000;
        pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
        uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
        FUN_1400019a0(&local_298,uVar12);
        local_1c8 = &local_298;
        FUN_140017bd0(&local_e8,pdVar14,2);
        FUN_1400019a0(&local_288,&local_e8);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        local_1c0 = &local_288;
        FUN_1416ac010(&local_e8,&DAT_1420b32ca);
        uVar13 = CONCAT44(uVar11,DAT_1420da520);
        uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
        iVar8 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,0);
        if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e8);
        }
        uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (iVar8 == 0) goto LAB_140113a22;
      }
    }
    goto LAB_1401155d0;
  }
  goto LAB_1401156ba;
LAB_140114520:
  do {
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_138 = 0x1c;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
    uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
    FUN_1400019a0(&local_298,uVar12);
    local_fc = *(uint *)((longlong)pdVar14 + 0xc);
    local_100 = *(undefined4 *)(pdVar14 + 1);
    if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
      local_108 = *pdVar14;
      local_1c8 = &local_298;
    }
    else {
      local_1c8 = &local_298;
      FUN_14011f9f0(&local_108,pdVar14);
    }
    FUN_140003ca0(&local_108,&local_130);
    local_dc = local_fc;
    local_e0 = local_100;
    if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
      local_e8 = local_108;
    }
    else {
      FUN_14011f9f0(&local_e8,&local_108);
    }
    FUN_140003ca0(&local_e8,&local_2a8);
    FUN_1400019a0(&local_288,&local_e8);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    local_1c0 = &local_288;
    FUN_1416ac010(&local_e8,&DAT_1420b32ca);
    uVar13 = CONCAT44(uVar11,DAT_1420da520);
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    iVar10 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,0);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if (iVar10 != 0) break;
    local_138 = 0x1d;
    if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    local_168 = 0;
    local_160 = 0x500000000;
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
    uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
    FUN_1400019a0(&local_278,uVar12);
    local_1b8 = &local_278;
    local_114 = *(uint *)((longlong)pdVar14 + 0xc);
    local_118 = *(undefined4 *)(pdVar14 + 1);
    if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
      local_120 = *pdVar14;
    }
    else {
      FUN_14011f9f0(&local_120,pdVar14);
    }
    FUN_140003ca0(&local_120,&local_130);
    local_fc = local_114;
    local_100 = local_118;
    if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
      local_108 = local_120;
    }
    else {
      FUN_14011f9f0(&local_108,&local_120);
    }
    FUN_140001c50(&local_108,1);
    local_dc = local_fc;
    local_e0 = local_100;
    if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
      local_e8 = local_108;
    }
    else {
      FUN_14011f9f0(&local_e8,&local_108);
    }
    FUN_140003ca0(&local_e8,&local_2a8);
    FUN_1400019a0(&local_268,&local_e8);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_120);
    }
    local_1b0 = &local_268;
    uVar13 = CONCAT44(uVar11,DAT_1420da520);
    pdVar14 = (double *)FUN_1416ab210(local_d8,local_110,&local_168,2,uVar13,&local_1b8);
    local_dc = *(uint *)((longlong)pdVar14 + 0xc);
    local_e0 = *(undefined4 *)(pdVar14 + 1);
    if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
      local_e8 = *pdVar14;
    }
    else {
      FUN_14011f9f0(&local_e8,pdVar14);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_14217f4c8) && (_Init_thread_header(&DAT_14217f4c8), DAT_14217f4c8 == -1)) {
      local_398 = &DAT_14217f4a0;
      FUN_1416ac010(&DAT_14217f4a0,&DAT_1420b32cc);
      DAT_14217f4b0 = 0;
      local_398 = &DAT_14217f4b4;
      FUN_1416ac010(&DAT_14217f4b4,&DAT_1420b32ce);
      DAT_14217f4c4 = 1;
      atexit(FUN_14011f800);
      _Init_thread_footer(&DAT_14217f4c8);
    }
    dVar21 = DAT_1420f6b08;
    iVar10 = FUN_1416d9df0(&DAT_14217f4a0,&local_e8,DAT_1420f6b08,0);
    if (iVar10 == 0) {
      lVar18 = 0;
LAB_1401149c2:
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((&DAT_14217f4b0)[lVar18 * 5] == 1) {
        local_138 = 0x25;
        DAT_142182d90 = (longlong *)0x9288d4;
        puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
        FUN_1416a8cb0(local_d8);
        uVar11 = FUN_141693b30(&local_178);
        uVar12 = FUN_1416924a0(puVar20,uVar11);
        FUN_1416a8cb0(*puVar20);
        FUN_140003ca0(uVar12,&local_1d8);
        FUN_1416a8c00(2);
        local_138 = 0x26;
        FUN_140001c50(&local_178,1);
        local_138 = 0x27;
        FUN_1416a8cb0(local_d8);
        uVar11 = FUN_141693b30(&local_178);
        lVar18 = FUN_1416924a0(puVar20,uVar11);
        FUN_1416a8cb0(*puVar20);
        if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(lVar18);
        }
        FUN_1416ab000(lVar18,&DAT_14217f480);
        FUN_1416a8c00(2);
        local_138 = 0x28;
        if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_2b8);
        }
        FUN_1416ab000(&local_2b8,&DAT_14217f480);
      }
      else {
        if ((&DAT_14217f4b0)[lVar18 * 5] != 0) goto LAB_140114a60;
        local_138 = 0x1f;
        DAT_142182d90 = (longlong *)0x9288d4;
        puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
        FUN_1416ac010(&local_120,&DAT_1420b32d0);
        local_fc = local_1cc;
        local_100 = local_1d0;
        if ((0x46U >> (local_1cc & 0x1f) & 1) == 0) {
          local_108 = local_1d8;
        }
        else {
          FUN_14011f9f0(&local_108,&local_1d8);
        }
        FUN_140003ca0(&local_108,&local_120);
        FUN_1416a8cb0(local_d8);
        uVar9 = FUN_141693b30(&local_178);
        uVar12 = FUN_1416924a0(puVar20,uVar9);
        FUN_1416a8cb0(*puVar20);
        FUN_140003ca0(uVar12,&local_108);
        if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_108);
        }
        if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_120);
        }
        FUN_1416a8c00(2);
        if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0x500000000;
        pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b68);
        uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x187b2);
        uVar9 = FUN_141693b30(&local_178);
        uVar13 = FUN_14002e450(puVar20,uVar9);
        FUN_1400019a0(&local_298,uVar13);
        local_1c8 = &local_298;
        FUN_140001a50(&local_120,uVar12,2);
        local_fc = *(uint *)((longlong)pdVar14 + 0xc);
        local_100 = *(undefined4 *)(pdVar14 + 1);
        if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
          local_108 = *pdVar14;
        }
        else {
          FUN_14011f9f0(&local_108,pdVar14);
        }
        FUN_140003e00(&local_108,&local_120);
        uVar13 = CONCAT44(uVar11,DAT_1420d9ed0);
        uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1c8);
        iVar10 = FUN_1416d9df0(uVar12,&local_108,DAT_1420f6b08,1);
        if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_108);
        }
        if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_120);
        }
        if (-1 < iVar10) {
          local_138 = 0x20;
          (**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
          FUN_140001c50(&local_178,1);
          puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
          FUN_1416a8cb0(local_d8);
          uVar11 = FUN_141693b30(&local_178);
          lVar18 = FUN_1416924a0(puVar20,uVar11);
          FUN_1416a8cb0(*puVar20);
          if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(lVar18);
          }
          FUN_1416ab000(lVar18,&DAT_14217f480);
          FUN_1416a8c00(2);
        }
        local_138 = 0x21;
        if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_2b8);
        }
        FUN_1416ab000(&local_2b8,&DAT_14217f480);
      }
    }
    else {
      iVar10 = FUN_1416d9df0(&DAT_14217f4b4,&local_e8,dVar21,0);
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (iVar10 == 0) {
        lVar18 = 1;
        goto LAB_1401149c2;
      }
LAB_140114a60:
      local_138 = 0x2c;
      if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1d8);
      }
      FUN_1416ab000(&local_1d8,&DAT_14217f480);
      local_138 = 0x2d;
      DAT_142182d90 = (longlong *)0x9288d4;
      puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
      FUN_1416a8cb0(local_d8);
      uVar9 = FUN_141693b30(&local_178);
      lVar18 = FUN_1416924a0(puVar20,uVar9);
      FUN_1416a8cb0(*puVar20);
      if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(lVar18);
      }
      FUN_1416ab000(lVar18,&DAT_14217f480);
      FUN_1416a8c00(2);
      local_138 = 0x2e;
      if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0x500000000;
      if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_168);
      }
      local_168 = 0;
      local_160 = 0x500000000;
      pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
      uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
      FUN_1400019a0(&local_298,uVar12);
      local_14c = *(uint *)((longlong)pdVar14 + 0xc);
      local_150 = *(undefined4 *)(pdVar14 + 1);
      if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
        local_158 = *pdVar14;
        local_1c8 = &local_298;
      }
      else {
        local_1c8 = &local_298;
        FUN_14011f9f0(&local_158,pdVar14);
      }
      FUN_140003ca0(&local_158,&local_130);
      local_114 = local_14c;
      local_118 = local_150;
      if ((0x46U >> (local_14c & 0x1f) & 1) == 0) {
        local_120 = local_158;
      }
      else {
        FUN_14011f9f0(&local_120,&local_158);
      }
      FUN_140001c50(&local_120,1);
      local_fc = local_114;
      local_100 = local_118;
      if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
        local_108 = local_120;
      }
      else {
        FUN_14011f9f0(&local_108,&local_120);
      }
      FUN_140003ca0(&local_108,&local_2a8);
      FUN_1400019a0(&local_288,&local_108);
      if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_120);
      }
      if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_158);
      }
      local_1c0 = &local_288;
      uVar13 = CONCAT44(uVar11,DAT_1420da520);
      uVar12 = FUN_1416ab210(local_d8,local_110,&local_168,2,uVar13,&local_1c8);
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      FUN_1400019a0(&local_278,uVar12);
      local_1b8 = &local_278;
      uVar13 = CONCAT44(uVar11,DAT_1420da2b0);
      uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1b8);
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      FUN_1416ac010(&local_120,&DAT_1420b32d2);
      local_fc = local_114;
      local_100 = local_118;
      if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
        local_108 = local_120;
      }
      else {
        FUN_14011f9f0(&local_108,&local_120);
      }
      FUN_140003ca0(&local_108,uVar12);
      FUN_1416a8cb0(local_d8);
      uVar9 = FUN_141693b30(&local_178);
      uVar12 = FUN_1416924a0(puVar20,uVar9);
      FUN_1416a8cb0(*puVar20);
      FUN_1400019a0(uVar12,&local_108);
      if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_120);
      }
      FUN_1416a8c00(2);
      if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0x500000000;
      pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18de0);
      uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
      FUN_1400019a0(&local_298,uVar12);
      uVar13 = CONCAT44(uVar11,DAT_1420da1f0);
      local_1c8 = &local_298;
      uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar13,&local_1c8);
      local_fc = *(uint *)((longlong)pdVar14 + 0xc);
      local_100 = *(undefined4 *)(pdVar14 + 1);
      if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
        local_108 = *pdVar14;
      }
      else {
        FUN_14011f9f0(&local_108,pdVar14);
      }
      FUN_140001c50(&local_108,2);
      iVar10 = FUN_1416d9df0(&local_108,uVar12,DAT_1420f6b08,1);
      if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if (iVar10 != -2 && iVar10 < 1) {
        local_138 = 0x31;
        (**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
        FUN_140001c50(&local_178,1);
        local_138 = 0x32;
        puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
        FUN_1416a8cb0(local_d8);
        uVar11 = FUN_141693b30(&local_178);
        lVar18 = FUN_1416924a0(puVar20,uVar11);
        FUN_1416a8cb0(*puVar20);
        if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(lVar18);
        }
        FUN_1416ab000(lVar18,&DAT_14217f480);
        FUN_1416a8c00(2);
      }
    }
    local_138 = 0x35;
    FUN_140001c50(&local_2a8,2);
    local_138 = 0x36;
    if ((0x46U >> (local_1cc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_1d8);
    }
    FUN_1416ab000(&local_1d8,&DAT_14217f480);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    iVar8 = iVar8 + -1;
  } while (0 < iVar8);
  local_138 = 0x39;
  pdVar14 = (double *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18de0);
  FUN_140017bd0(&local_108,&local_130,1);
  local_dc = local_fc;
  local_e0 = local_100;
  if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
    local_e8 = local_108;
  }
  else {
    FUN_14011f9f0(&local_e8,&local_108);
  }
  FUN_140003ca0(&local_e8,&local_2a8);
  FUN_140003ca0(pdVar14,&local_e8);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
LAB_1401155d0:
  local_138 = 0x4e;
  FUN_140001c50(pdVar14,1);
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18dde);
  uVar13 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18de0);
  FUN_1400019a0(&local_298,uVar12);
  uVar12 = CONCAT44(uVar11,DAT_1420da1f0);
  local_1c8 = &local_298;
  uVar16 = FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar12,&local_1c8);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = DAT_1420f6b08;
  iVar8 = FUN_1416d9df0(uVar13,uVar16,DAT_1420f6b08,1);
  uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (0 < iVar8) goto LAB_1401156ba;
  goto LAB_1401135a0;
LAB_1401156ba:
  local_138 = 0x51;
  thunk_FUN_14176d130(0);
  local_138 = 0x52;
  thunk_FUN_14176d160(0);
  local_138 = 0x53;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  FUN_140002730(&local_298,&DAT_1420b32f8);
  uVar12 = CONCAT44(uVar11,DAT_1420da030);
  local_1c8 = &local_298;
  FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar12,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
  local_138 = 0x54;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  FUN_140002730(&local_298,&DAT_14217f488);
  uVar12 = CONCAT44(uVar11,DAT_1420da090);
  local_1c8 = &local_298;
  FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar12,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
  local_138 = 0x56;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
  local_200 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b68);
  FUN_1400019a0(&local_298,pdVar14);
  local_1c8 = &local_298;
  FUN_1400019a0(&local_288,local_200);
  local_1c0 = &local_288;
  uVar13 = CONCAT44(uVar11,DAT_1420d9ef0);
  uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_1400019a0(&local_2c8,uVar12);
  local_138 = 0x57;
  dVar21 = local_2c8;
  if ((local_2bc & 0xffffff) != 0) {
    dVar21 = (double)FUN_1416940c0(&local_2c8);
  }
  FUN_1416b86c0((longlong)dVar21);
  local_138 = 0x58;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  FUN_140002730(&local_298,&DAT_14217f488);
  local_1c8 = &local_298;
  FUN_140002730(&local_288,&DAT_14217f488);
  local_1c0 = &local_288;
  ppdVar32 = &local_1c8;
  uVar31 = CONCAT44(uVar11,DAT_1420da040);
  FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar31,ppdVar32);
  uVar11 = (undefined4)((ulonglong)ppdVar32 >> 0x20);
  local_138 = 0x59;
  FUN_1416f15a0(0xffffff);
  local_138 = 0x5a;
  local_dc = *(uint *)((longlong)local_200 + 0xc);
  local_e0 = *(undefined4 *)(local_200 + 1);
  if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
    local_e8 = *local_200;
  }
  else {
    FUN_14011f9f0(&local_e8);
  }
  FUN_140001c50(&local_e8,1);
  if ((local_dc & 0xffffff) == 0) {
    uVar9 = SUB84(local_e8,0);
    uVar27 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar12 = FUN_1416940c0(&local_e8);
    uVar9 = (undefined4)uVar12;
    uVar27 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  local_fc = *(uint *)((longlong)pdVar14 + 0xc);
  local_100 = *(undefined4 *)(pdVar14 + 1);
  if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
    local_108 = *pdVar14;
  }
  else {
    FUN_14011f9f0(&local_108,pdVar14);
  }
  FUN_140001c50(&local_108,1);
  auVar26 = auVar22._4_12_;
  dVar21 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar21 = (double)FUN_1416940c0(&local_108);
    auVar26 = auVar22._4_12_;
  }
  auVar23._0_4_ = (float)dVar21;
  auVar23._4_12_ = auVar26;
  uVar31 = uVar31 & 0xffffffffffffff00;
  FUN_1416f1520(uVar5,uVar5,auVar23._0_8_,(float)(double)CONCAT44(uVar27,uVar9),uVar31);
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  local_138 = 0x5b;
  pdVar15 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18bf7);
  uVar1 = *(uint *)((longlong)pdVar15 + 0xc);
  if ((uVar1 & 0xffffff) == 0) {
    uVar9 = SUB84(*pdVar15,0);
    uVar27 = (undefined4)((ulonglong)*pdVar15 >> 0x20);
  }
  else {
    uVar12 = FUN_1416940c0(pdVar15);
    uVar9 = (undefined4)uVar12;
    uVar27 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar1 = *(uint *)((longlong)pdVar15 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
    dVar21 = *pdVar15;
  }
  else {
    dVar21 = (double)FUN_1416940c0(pdVar15);
  }
  uVar31 = uVar31 & 0xffffffff00000000;
  FUN_1416b84f0(local_d8,0x101,0,0,uVar31,CONCAT44(uVar11,(float)dVar21),
                (float)(double)CONCAT44(uVar27,uVar9),0,0xffffff,0x3f800000);
  uVar11 = (undefined4)(uVar31 >> 0x20);
  local_138 = 0x5c;
  pdVar15 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18a05);
  if ((*(uint *)((longlong)pdVar15 + 0xc) & 0xffffff) == 0) {
    dVar21 = *pdVar15;
  }
  else {
    dVar21 = (double)FUN_1416940c0(pdVar15);
  }
  FUN_1416f15a0((longlong)dVar21);
  local_138 = 0x5d;
  FUN_1416f1550(uVar3);
  local_138 = 0x5e;
  if ((*(uint *)((longlong)local_390 + 0xc) & 0xffffff) == 0) {
    dVar21 = *local_390;
  }
  else {
    dVar21 = (double)FUN_1416940c0();
  }
  thunk_FUN_14176d0f0((longlong)dVar21);
  local_138 = 0x5f;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  plVar17 = (longlong *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
  if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (*plVar17 != 0)) {
    FUN_1416ba910();
    iVar8 = FUN_1416ba8f0(*plVar17);
    if (iVar8 < 1) {
      uVar9 = FUN_1416ba8f0(*plVar17);
      FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar9);
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = (longlong *)FUN_1416ba8e0(*plVar17,0);
    }
  }
  else {
    FUN_1416ab080("trying to index variable that is not an array");
  }
  FUN_1400019a0(&local_298,plVar17);
  local_1c8 = &local_298;
  FUN_140002730(&local_288,&DAT_1420b32f8);
  local_1c0 = &local_288;
  FUN_1416ac010(&local_e8,&DAT_1420b32d2);
  uVar13 = CONCAT44(uVar11,DAT_1420da520);
  uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
  uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
  iVar8 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,0);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if (iVar8 == 0) {
    local_138 = 0x60;
    if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_168);
    }
    local_168 = 0;
    local_160 = 0x500000000;
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
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
    local_200 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b68);
    plVar17 = (longlong *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
    if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (*plVar17 != 0)) {
      FUN_1416ba910();
      iVar8 = FUN_1416ba8f0(*plVar17);
      if (iVar8 < 1) {
        uVar9 = FUN_1416ba8f0(*plVar17);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar9);
        plVar17 = (longlong *)0x0;
      }
      else {
        plVar17 = (longlong *)FUN_1416ba8e0(*plVar17,0);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    FUN_1400019a0(&local_278,plVar17);
    local_1b8 = &local_278;
    FUN_140002730(&local_268,&DAT_1420b3308);
    local_1b0 = &local_268;
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_1e8,2,CONCAT44(uVar11,DAT_1420da520),&local_1b8
                          );
    FUN_1400019a0(&local_258,uVar12);
    local_1a8 = &local_258;
    ppuVar30 = &local_1a8;
    uVar12 = FUN_140135c90(local_d8,local_110,&local_1f8,1,ppuVar30);
    uVar11 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
    FUN_1400019a0(&local_248,uVar12);
    local_1a0 = &local_248;
    ppuVar30 = &local_1a0;
    uVar31 = CONCAT44(uVar11,DAT_1420da230);
    pdVar15 = (double *)FUN_1416ab210(local_d8,local_110,&local_168,1,uVar31,ppuVar30);
    uVar11 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
    if ((*(uint *)((longlong)pdVar15 + 0xc) & 0xffffff) == 0) {
      dVar21 = *pdVar15;
    }
    else {
      dVar21 = (double)FUN_1416940c0(pdVar15);
    }
    uVar31 = uVar31 & 0xffffffff00000000;
    FUN_1416b84f0(local_d8,0x105,(int)dVar21,0,uVar31,CONCAT44(uVar11,0x3f800000),0x3f800000,0,
                  0xffffff,0x3f800000);
    uVar11 = (undefined4)(uVar31 >> 0x20);
  }
  else {
    local_138 = 0x61;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    plVar17 = (longlong *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x187b2);
    FUN_1400019a0(&local_298,uVar12);
    local_1c8 = &local_298;
    FUN_140017bd0(&local_e8,uVar12,2);
    FUN_1400019a0(&local_288,&local_e8);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_1c0 = &local_288;
    if (((*(uint *)((longlong)plVar17 + 0xc) & 0xffffff) == 2) && (*plVar17 != 0)) {
      FUN_1416ba910();
      iVar8 = FUN_1416ba8f0(*plVar17);
      if (iVar8 < 1) {
        uVar9 = FUN_1416ba8f0(*plVar17);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar9);
        plVar17 = (longlong *)0x0;
      }
      else {
        plVar17 = (longlong *)FUN_1416ba8e0(*plVar17,0);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    FUN_1400019a0(&local_278,plVar17);
    local_1b8 = &local_278;
    uVar12 = CONCAT44(uVar11,DAT_1420d9eb0);
    FUN_1416ab210(local_d8,local_110,&local_f8,3,uVar12,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
  }
  local_138 = 0x62;
  FUN_1416f1550(uVar3);
  local_138 = 99;
  FUN_1416f15a0(0xffffff);
  local_138 = 100;
  FUN_1416e34b0();
  local_138 = 0x66;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18cf6);
  local_1c8 = &local_2c8;
  FUN_140002730(&local_288,&DAT_14217f488);
  local_1c0 = &local_288;
  FUN_140002730(&local_278,&DAT_14217f488);
  local_1b8 = &local_278;
  FUN_1400019a0(&local_268,pdVar14);
  local_1b0 = &local_268;
  FUN_1400019a0(&local_258,local_200);
  local_1a8 = &local_258;
  FUN_140002730(&local_248,&DAT_14217f488);
  local_1a0 = &local_248;
  FUN_140002730(&local_238,&DAT_14217f488);
  local_198 = &local_238;
  FUN_140002730(&local_228,&DAT_14217f488);
  local_190 = &local_228;
  FUN_140002730(&local_218,&DAT_14217f488);
  local_188 = &local_218;
  uVar16 = CONCAT44(uVar11,DAT_1420da7d0);
  uVar13 = FUN_1416ab210(local_d8,local_110,&local_f8,9,uVar16,&local_1c8);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,uVar13);
  FUN_1416a8c00(1);
  local_dc = 0;
  local_e8 = 0.0;
  iVar8 = FUN_1416d9df0(&local_178,&local_e8,DAT_1420f6b08,1);
  if (0 < iVar8) {
    (**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
    (**(code **)(*local_d8 + 8))(local_d8,0x18b68);
    dVar21 = local_178;
    if ((local_16c & 0xffffff) != 0) {
      dVar21 = (double)FUN_1416940c0(&local_178);
    }
    dVar21 = (double)FUN_141944a50(dVar21);
    if ((double)(-(ulonglong)(dVar21 < 0.0) & ((ulonglong)dVar21 ^ uVar4) |
                ~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21) <= DAT_1420f6b08) {
      local_138 = 0x67;
      FUN_140001c50(&local_178,1);
      DAT_142182d90 = (longlong *)0x9288d4;
      puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
      FUN_1416a8cb0(local_d8);
      uVar11 = FUN_141693b30(&local_178);
      lVar18 = FUN_1416924a0(puVar20,uVar11);
      FUN_1416a8cb0(*puVar20);
      if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(lVar18);
      }
      FUN_1416ab000(lVar18,&DAT_14217f480);
      FUN_1416a8c00(2);
    }
  }
  local_138 = 0x69;
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  local_124 = 0;
  local_130 = 1.0;
  while( true ) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = DAT_1420f6b08;
    iVar8 = FUN_1416d9df0(&local_130,&local_178,DAT_1420f6b08,1);
    uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((iVar8 == -2) || (0 < iVar8)) break;
    local_138 = 0x6a;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    FUN_140002730(&local_298,&DAT_1420b32f8);
    uVar12 = CONCAT44(uVar11,DAT_1420da030);
    local_1c8 = &local_298;
    FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar12,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_138 = 0x6b;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    FUN_140002730(&local_298,&DAT_14217f488);
    uVar12 = CONCAT44(uVar11,DAT_1420da090);
    local_1c8 = &local_298;
    FUN_1416ab210(local_d8,local_110,&local_f8,1,uVar12,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_138 = 0x6d;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
    uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x18b68);
    FUN_1400019a0(&local_298,uVar12);
    local_1c8 = &local_298;
    FUN_1400019a0(&local_288,uVar13);
    local_1c0 = &local_288;
    uVar13 = CONCAT44(uVar11,DAT_1420d9ef0);
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_1400019a0(&local_2c8,uVar12);
    local_138 = 0x6e;
    dVar21 = local_2c8;
    if ((local_2bc & 0xffffff) != 0) {
      dVar21 = (double)FUN_1416940c0(&local_2c8);
    }
    FUN_1416b86c0((longlong)dVar21);
    local_138 = 0x6f;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    FUN_140002730(&local_298,&DAT_14217f488);
    local_1c8 = &local_298;
    FUN_140002730(&local_288,&DAT_14217f488);
    local_1c0 = &local_288;
    ppdVar32 = &local_1c8;
    uVar31 = CONCAT44(uVar11,DAT_1420da040);
    FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar31,ppdVar32);
    uVar11 = (undefined4)((ulonglong)ppdVar32 >> 0x20);
    local_138 = 0x70;
    FUN_1416f15a0(0xffffff);
    local_138 = 0x71;
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
    pdVar15 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b68);
    local_dc = *(uint *)((longlong)pdVar15 + 0xc);
    local_e0 = *(undefined4 *)(pdVar15 + 1);
    if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
      local_e8 = *pdVar15;
    }
    else {
      FUN_14011f9f0(&local_e8,pdVar15);
    }
    FUN_140001c50(&local_e8,1);
    if ((local_dc & 0xffffff) == 0) {
      uVar9 = SUB84(local_e8,0);
      uVar27 = (undefined4)((ulonglong)local_e8 >> 0x20);
    }
    else {
      uVar12 = FUN_1416940c0(&local_e8);
      uVar9 = (undefined4)uVar12;
      uVar27 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    local_fc = *(uint *)((longlong)pdVar14 + 0xc);
    local_100 = *(undefined4 *)(pdVar14 + 1);
    if ((0x46U >> (local_fc & 0x1f) & 1) == 0) {
      local_108 = *pdVar14;
    }
    else {
      FUN_14011f9f0(&local_108,pdVar14);
    }
    FUN_140001c50(&local_108,1);
    auVar26 = auVar24._4_12_;
    dVar21 = local_108;
    if ((local_fc & 0xffffff) != 0) {
      dVar21 = (double)FUN_1416940c0(&local_108);
      auVar26 = auVar24._4_12_;
    }
    auVar25._0_4_ = (float)dVar21;
    auVar25._4_12_ = auVar26;
    uVar31 = uVar31 & 0xffffffffffffff00;
    FUN_1416f1520(uVar5,uVar5,auVar25._0_8_,(float)(double)CONCAT44(uVar27,uVar9),uVar31);
    if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    local_138 = 0x72;
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18bf7);
    if ((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 0) {
      uVar9 = SUB84(*pdVar14,0);
      uVar27 = (undefined4)((ulonglong)*pdVar14 >> 0x20);
    }
    else {
      uVar12 = FUN_1416940c0(pdVar14);
      uVar9 = (undefined4)uVar12;
      uVar27 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    local_304 = local_124;
    local_308 = local_128;
    if ((0x46U >> (local_124 & 0x1f) & 1) == 0) {
      local_310 = local_130;
    }
    else {
      FUN_14011f9f0(&local_310,&local_130);
    }
    FUN_140001c50(&local_310,1);
    FUN_14011fbe0(&local_158,&local_310,2);
    FUN_140017bd0(&local_120,&local_158,0);
    dVar21 = local_120;
    if ((local_114 & 0xffffff) != 0) {
      dVar21 = (double)FUN_1416940c0(&local_120);
    }
    local_fc = 0;
    local_108 = *(double *)
                 (&DAT_141983de0 +
                 (ulonglong)
                 (DAT_1420f6b08 <
                 (double)(-(ulonglong)(dVar21 < 0.0) & ((ulonglong)dVar21 ^ uVar4) |
                         ~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21)) * 8);
    local_dc = *(uint *)((longlong)pdVar14 + 0xc);
    local_e0 = *(undefined4 *)(pdVar14 + 1);
    if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
      local_e8 = *pdVar14;
    }
    else {
      FUN_14011f9f0(&local_e8,pdVar14);
    }
    FUN_140001fe0(&local_e8,&local_108);
    if ((local_dc & 0xffffff) == 0) {
      uVar28 = SUB84(local_e8,0);
      uVar29 = (undefined4)((ulonglong)local_e8 >> 0x20);
    }
    else {
      uVar12 = FUN_1416940c0(&local_e8);
      uVar28 = (undefined4)uVar12;
      uVar29 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    local_2f4 = local_124;
    local_2f8 = local_128;
    if ((0x46U >> (local_124 & 0x1f) & 1) == 0) {
      local_300 = local_130;
    }
    else {
      FUN_14011f9f0(&local_300,&local_130);
    }
    FUN_140001c50(&local_300,1);
    FUN_14011fbe0(local_3a8,&local_300,2);
    FUN_140017bd0(&local_340,local_3a8,0);
    dVar21 = local_340;
    if ((local_334 & 0xffffff) != 0) {
      dVar21 = (double)FUN_1416940c0(&local_340);
    }
    if ((double)(-(ulonglong)(dVar21 < 0.0) & ((ulonglong)dVar21 ^ uVar4) |
                ~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21) <= DAT_1420f6b08) {
      pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
      local_2d4 = *(uint *)((longlong)pdVar14 + 0xc);
      local_2d8 = *(undefined4 *)(pdVar14 + 1);
      if ((0x46U >> (local_2d4 & 0x1f) & 1) == 0) {
        dVar21 = *pdVar14;
      }
      else {
        FUN_14011f9f0(&local_2e0,pdVar14);
        dVar21 = local_2e0;
      }
      local_2e0 = dVar21;
      if ((local_2d4 & 0xffffff) != 0) {
        dVar21 = (double)FUN_1416940c0(&local_2e0);
      }
    }
    else {
      local_2d4 = 0;
      local_2e0 = 0.0;
      dVar21 = local_2e0;
    }
    uVar31 = uVar31 & 0xffffffff00000000;
    FUN_1416b84f0(local_d8,0x101,0,(float)dVar21,uVar31,
                  CONCAT44(uVar11,(float)(double)CONCAT44(uVar29,uVar28)),
                  (float)(double)CONCAT44(uVar27,uVar9),0,0xffffff,0x3f800000);
    uVar11 = (undefined4)(uVar31 >> 0x20);
    if ((0x46U >> (local_2d4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_2e0);
    }
    if ((0x46U >> (local_334 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_340);
    }
    if ((0x46U >> (local_39c & 0x1f) & 1) != 0) {
      FUN_140001b50(local_3a8);
    }
    if ((0x46U >> (local_2f4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_300);
    }
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_108);
    }
    if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_120);
    }
    if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_158);
    }
    if ((0x46U >> (local_304 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_310);
    }
    local_138 = 0x73;
    pdVar14 = (double *)(**(code **)(*local_d8 + 8))(local_d8,0x18a05);
    if ((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 0) {
      dVar21 = *pdVar14;
    }
    else {
      dVar21 = (double)FUN_1416940c0(pdVar14);
    }
    FUN_1416f15a0((longlong)dVar21);
    local_138 = 0x74;
    FUN_1416f1550(uVar3);
    local_138 = 0x75;
    if ((*(uint *)((longlong)local_390 + 0xc) & 0xffffff) == 0) {
      dVar21 = *local_390;
    }
    else {
      dVar21 = (double)FUN_1416940c0();
    }
    thunk_FUN_14176d0f0((longlong)dVar21);
    local_138 = 0x76;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
    uVar9 = FUN_141693b30(&local_130);
    uVar12 = FUN_14002e450(uVar12,uVar9);
    FUN_1400019a0(&local_298,uVar12);
    local_1c8 = &local_298;
    FUN_140002730(&local_288,&DAT_1420b32f8);
    local_1c0 = &local_288;
    FUN_1416ac010(&local_e8,&DAT_1420b32d2);
    uVar13 = CONCAT44(uVar11,DAT_1420da520);
    uVar12 = FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar13,&local_1c8);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    iVar8 = FUN_1416d9df0(uVar12,&local_e8,DAT_1420f6b08,0);
    if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e8);
    }
    if (iVar8 == 0) {
      local_138 = 0x77;
      if ((0x46U >> (local_160._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_168);
      }
      local_168 = 0;
      local_160 = 0x500000000;
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
      uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
      uVar9 = FUN_141693b30(&local_130);
      uVar12 = FUN_14002e450(uVar12,uVar9);
      FUN_1400019a0(&local_278,uVar12);
      local_1b8 = &local_278;
      FUN_140002730(&local_268,&DAT_1420b3308);
      local_1b0 = &local_268;
      uVar12 = FUN_1416ab210(local_d8,local_110,&local_1e8,2,CONCAT44(uVar11,DAT_1420da520),
                             &local_1b8);
      FUN_1400019a0(&local_258,uVar12);
      local_1a8 = &local_258;
      ppuVar30 = &local_1a8;
      uVar12 = FUN_140135c90(local_d8,local_110,&local_1f8,1,ppuVar30);
      uVar11 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
      FUN_1400019a0(&local_248,uVar12);
      local_1a0 = &local_248;
      ppuVar30 = &local_1a0;
      uVar31 = CONCAT44(uVar11,DAT_1420da230);
      pdVar14 = (double *)FUN_1416ab210(local_d8,local_110,&local_168,1,uVar31,ppuVar30);
      uVar11 = (undefined4)((ulonglong)ppuVar30 >> 0x20);
      if ((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 0) {
        dVar21 = *pdVar14;
      }
      else {
        dVar21 = (double)FUN_1416940c0(pdVar14);
      }
      uVar31 = uVar31 & 0xffffffff00000000;
      FUN_1416b84f0(local_d8,0x105,(int)dVar21,0,uVar31,CONCAT44(uVar11,0x3f800000),0x3f800000,0,
                    0xffffff,0x3f800000);
      uVar11 = (undefined4)(uVar31 >> 0x20);
    }
    else {
      local_138 = 0x78;
      if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0x500000000;
      uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b6d);
      uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x187b2);
      FUN_1400019a0(&local_298,uVar13);
      local_1c8 = &local_298;
      FUN_140017bd0(&local_e8,uVar13,2);
      FUN_1400019a0(&local_288,&local_e8);
      if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      local_1c0 = &local_288;
      uVar9 = FUN_141693b30(&local_130);
      uVar12 = FUN_14002e450(uVar12,uVar9);
      FUN_1400019a0(&local_278,uVar12);
      local_1b8 = &local_278;
      uVar12 = CONCAT44(uVar11,DAT_1420d9eb0);
      FUN_1416ab210(local_d8,local_110,&local_f8,3,uVar12,&local_1c8);
      uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    local_138 = 0x79;
    FUN_1416f1550(uVar3);
    local_138 = 0x7a;
    FUN_1416f15a0(0xffffff);
    local_138 = 0x7b;
    FUN_1416e34b0();
    local_138 = 0x7d;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b6e);
    uVar13 = (**(code **)(*local_d8 + 8))(local_d8,0x18b68);
    uVar16 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18cf6);
    FUN_1400019a0(&local_298,uVar16);
    local_1c0 = &local_2c8;
    local_1c8 = &local_298;
    FUN_140002730(&local_278,&DAT_14217f488);
    local_1b8 = &local_278;
    FUN_140002730(&local_268,&DAT_14217f488);
    local_1b0 = &local_268;
    FUN_1400019a0(&local_258,uVar12);
    local_1a8 = &local_258;
    FUN_1400019a0(&local_248,uVar13);
    local_1a0 = &local_248;
    FUN_140002730(&local_238,&DAT_14217f488);
    local_198 = &local_238;
    FUN_140002730(&local_228,&DAT_14217f488);
    local_190 = &local_228;
    uVar16 = CONCAT44(uVar11,DAT_1420da7e0);
    FUN_1416ab210(local_d8,local_110,&local_f8,8,uVar16,&local_1c8);
    switch(local_124 & 0xffffff) {
    case 1:
      local_130 = (double)FUN_1416940c0(&local_130);
      local_130 = local_130 + dVar2;
      local_124 = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_130,&local_130);
      break;
    case 7:
      local_130 = (double)CONCAT44(local_130._4_4_,local_130._0_4_ + 1);
      break;
    case 10:
      local_130 = (double)((longlong)local_130 + 1);
      break;
    case 0xd:
      local_124 = 0;
    case 0:
      local_130 = local_130 + dVar2;
    }
  }
  local_138 = 0x80;
  uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b71);
  local_dc = local_16c;
  local_e0 = local_170;
  if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
    local_e8 = local_178;
  }
  else {
    FUN_14011f9f0(&local_e8,&local_178);
  }
  FUN_140001c50(&local_e8,1);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar12,&local_e8);
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  FUN_1416a8c00(1);
  local_138 = 0x82;
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  local_124 = 0;
  local_130 = 0.0;
  while( true ) {
    uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar12 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b71);
    iVar8 = FUN_1416d9df0(&local_130,uVar12,DAT_1420f6b08,1);
    if ((iVar8 == -2) || (-1 < iVar8)) break;
    local_138 = 0x83;
    if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0x500000000;
    uVar12 = (**(code **)(*local_d8 + 8))(local_d8,0x18b70);
    FUN_1400019a0(&local_298,uVar12);
    local_1c0 = &local_130;
    uVar16 = CONCAT44(uVar11,DAT_1420da1d0);
    local_1c8 = &local_298;
    FUN_1416ab210(local_d8,local_110,&local_f8,2,uVar16,&local_1c8);
    local_138 = 0x84;
    DAT_142182d90 = (longlong *)0x9288de;
    puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b64);
    FUN_1416a8cb0(local_d8);
    uVar11 = FUN_141693b30(&local_130);
    puVar19 = (undefined8 *)FUN_1416924a0(puVar20,uVar11);
    FUN_1416a8cb0(*puVar20);
    if ((0x46U >> (*(uint *)((longlong)puVar19 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar19);
    }
    *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
    *puVar19 = 0;
    FUN_1416a8c00(2);
    local_138 = 0x85;
    DAT_142182d90 = (longlong *)0x9288d4;
    puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b6d);
    FUN_1416a8cb0(local_d8);
    uVar11 = FUN_141693b30(&local_130);
    lVar18 = FUN_1416924a0(puVar20,uVar11);
    FUN_1416a8cb0(*puVar20);
    if ((0x46U >> (*(uint *)(lVar18 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(lVar18);
    }
    FUN_1416ab000(lVar18,&DAT_14217f480);
    FUN_1416a8c00(2);
    switch(local_124 & 0xffffff) {
    case 1:
      local_130 = (double)FUN_1416940c0(&local_130);
      local_130 = local_130 + dVar2;
      local_124 = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_130,&local_130);
      break;
    case 7:
      local_130 = (double)CONCAT44(local_130._4_4_,local_130._0_4_ + 1);
      break;
    case 10:
      local_130 = (double)((longlong)local_130 + 1);
      break;
    case 0xd:
      local_124 = 0;
    case 0:
      local_130 = local_130 + dVar2;
    }
  }
  local_138 = 0x88;
  uVar13 = (**(code **)(*local_d8 + 0x10))(local_d8,0x18b91);
  FUN_1416a8cb0(local_d8);
  FUN_1400019a0(uVar13,uVar12);
  FUN_1416a8c00(1);
  local_138 = 0x89;
  puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b8f);
  if ((0x46U >> (*(uint *)((longlong)puVar20 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar20);
  }
  *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
  *puVar20 = 0;
  local_138 = 0x8a;
  puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b92);
  if ((0x46U >> (*(uint *)((longlong)puVar20 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar20);
  }
  *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
  *puVar20 = 0;
  local_138 = 0x8b;
  puVar20 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,0x18b90);
  if ((0x46U >> (*(uint *)((longlong)puVar20 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar20);
  }
  *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
  *puVar20 = 0;
  local_138 = 0x8d;
  if ((0x46U >> (local_f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0x500000000;
  local_1c8 = &local_2c8;
  in_stack_fffffffffffffc30 = &local_1c8;
  ppdVar32 = (double **)CONCAT44(uVar11,DAT_1420da7f0);
  FUN_1416ab210(local_d8,local_110,&local_f8,1,ppdVar32,in_stack_fffffffffffffc30);
  cVar6 = FUN_1416abe60(local_380,&local_d8,&local_110);
  if (cVar6 == '\0') goto LAB_140117a4b;
  goto LAB_1401127f0;
}


