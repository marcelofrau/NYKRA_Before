// Function: gml_Script_draw_sprite_glitch @ 0x14010a400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_sprite_glitch
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 in_stack_fffffffffffffd60;
  undefined8 **ppuVar23;
  undefined4 uVar24;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 local_228;
  undefined8 local_220;
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
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  uint local_184;
  double local_180;
  uint local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  uint local_154;
  undefined8 local_150;
  undefined4 local_148;
  uint local_144;
  undefined8 local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_130;
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffd60 >> 0x20);
  local_e0 = 0xfffffffffffffffe;
  local_1a0 = "gml_Script_draw_sprite_glitch";
  local_198 = 0;
  local_1a8 = DAT_142182d78;
  DAT_142182d78 = &local_1a8;
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
  local_184 = 0xffffff;
  local_190 = 0;
  local_168 = (ulonglong)(uint)local_168;
  local_170 = 0;
  local_220 = (ulonglong)(uint)local_220;
  local_228 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd230);
  local_198 = 4;
  if (param_4 < 10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[9];
  }
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(puVar4,&local_f0,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_198 = 0x12;
    puVar4 = &DAT_1420b1000;
    if (8 < param_4) {
      puVar4 = (undefined8 *)param_5[8];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar4;
      uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar9 = (undefined4)uVar5;
      uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (7 < param_4) {
      puVar4 = (undefined8 *)param_5[7];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar4;
      uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar11 = (undefined4)uVar5;
      uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (6 < param_4) {
      puVar4 = (undefined8 *)param_5[6];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar13 = (undefined4)*puVar4;
      uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar13 = (undefined4)uVar5;
      uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (5 < param_4) {
      puVar4 = (undefined8 *)param_5[5];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar15 = (undefined4)*puVar4;
      uVar16 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar15 = (undefined4)uVar5;
      uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (4 < param_4) {
      puVar4 = (undefined8 *)param_5[4];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar17 = (undefined4)*puVar4;
      uVar18 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar17 = (undefined4)uVar5;
      uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (3 < param_4) {
      puVar4 = (undefined8 *)param_5[3];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar19 = (undefined4)*puVar4;
      uVar20 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar19 = (undefined4)uVar5;
      uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (2 < param_4) {
      puVar4 = (undefined8 *)param_5[2];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar21 = (undefined4)*puVar4;
      uVar22 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar21 = (undefined4)uVar5;
      uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    puVar4 = &DAT_1420b1000;
    if (1 < param_4) {
      puVar4 = (undefined8 *)param_5[1];
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar7 = (undefined4)*puVar4;
      uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
      if (param_4 < 1) goto LAB_14010c326;
LAB_14010a743:
      pdVar2 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) != 0) goto LAB_14010a754;
LAB_14010c33a:
      dVar6 = *pdVar2;
    }
    else {
      uVar5 = FUN_1416940c0();
      uVar7 = (undefined4)uVar5;
      uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (0 < param_4) goto LAB_14010a743;
LAB_14010c326:
      pdVar2 = (double *)&DAT_1420b1000;
      if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_14010c33a;
LAB_14010a754:
      dVar6 = (double)FUN_1416940c0();
    }
    FUN_1416b84f0(param_1,(longlong)dVar6,(longlong)(double)CONCAT44(uVar8,uVar7),
                  (float)(double)CONCAT44(uVar22,uVar21),(float)(double)CONCAT44(uVar20,uVar19),
                  CONCAT44(uVar24,(float)(double)CONCAT44(uVar18,uVar17)),
                  (float)(double)CONCAT44(uVar16,uVar15),(float)(double)CONCAT44(uVar14,uVar13),
                  (int)(longlong)(double)CONCAT44(uVar12,uVar11),
                  (float)(double)CONCAT44(uVar10,uVar9));
    goto LAB_14010c395;
  }
  local_198 = 5;
  if (param_4 < 10) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[9];
  }
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  FUN_140003e00(&local_f0,puVar4);
  FUN_1400019a0(&local_190,&local_f0);
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_198 = 6;
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  local_170 = 0;
  local_168 = 0x500000000;
  FUN_140002730(&local_218,&DAT_1420b3280);
  local_268 = &local_218;
  FUN_140002730(&local_208,&DAT_1420b3290);
  local_260 = &local_208;
  FUN_140002730(&local_1f8,&DAT_1420b3280);
  local_258 = &local_1f8;
  FUN_140002730(&local_1e8,&DAT_1420b3280);
  local_250 = &local_1e8;
  ppuVar23 = &local_268;
  FUN_1416ab210(param_1,param_2,&local_170,4,DAT_1420da700,ppuVar23);
  uVar24 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  local_198 = 7;
  puVar3 = &DAT_1420b1000;
  puVar4 = &DAT_1420b1000;
  if (8 < param_4) {
    puVar4 = (undefined8 *)param_5[8];
  }
  if (9 < param_4) {
    puVar3 = (undefined8 *)param_5[9];
  }
  local_e4 = *(uint *)((longlong)puVar3 + 0xc);
  local_e8 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar3;
  }
  else {
    FUN_1401121d0(&local_f0);
  }
  FUN_140001fe0(&local_f0,puVar4);
  if ((local_e4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_f0;
    uVar10 = (undefined4)((ulonglong)local_f0 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_f0);
    uVar9 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (7 < param_4) {
    puVar4 = (undefined8 *)param_5[7];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar11 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (6 < param_4) {
    puVar4 = (undefined8 *)param_5[6];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar13 = (undefined4)uVar5;
    uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_160 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_154 = 0;
  FUN_140001fe0(&local_160,&local_190);
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  local_124 = *(uint *)((longlong)puVar4 + 0xc);
  local_128 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_124 & 0x1f) & 1) == 0) {
    local_130 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_130);
  }
  FUN_140003ca0(&local_130,&local_160);
  if ((local_124 & 0xffffff) == 0) {
    uVar15 = (undefined4)local_130;
    uVar16 = (undefined4)((ulonglong)local_130 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_130);
    uVar15 = (undefined4)uVar5;
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_150 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_144 = 0;
  FUN_140001fe0(&local_150,&local_190);
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  local_114 = *(uint *)((longlong)puVar4 + 0xc);
  local_118 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_120 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_120);
  }
  FUN_140003ca0(&local_120,&local_150);
  if ((local_114 & 0xffffff) == 0) {
    uVar17 = (undefined4)local_120;
    uVar18 = (undefined4)((ulonglong)local_120 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_120);
    uVar17 = (undefined4)uVar5;
    uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_140 = FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_134 = 0;
  FUN_140001fe0(&local_140,&local_190);
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_104 = *(uint *)((longlong)puVar4 + 0xc);
  local_108 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
    local_110 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_110);
  }
  FUN_140003ca0(&local_110,&local_140);
  if ((local_104 & 0xffffff) == 0) {
    uVar19 = (undefined4)local_110;
    uVar20 = (undefined4)((ulonglong)local_110 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_110);
    uVar19 = (undefined4)uVar5;
    uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  dVar6 = (double)FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_180 = (double)FUN_1416cdc30(DAT_141983d78);
  local_180 = dVar6 - local_180;
  local_174 = 0;
  FUN_140001fe0(&local_180,&local_190);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  local_f4 = *(uint *)((longlong)puVar4 + 0xc);
  local_f8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
    local_100 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_100);
  }
  FUN_140003ca0(&local_100,&local_180);
  if ((local_f4 & 0xffffff) == 0) {
    uVar21 = (undefined4)local_100;
    uVar22 = (undefined4)((ulonglong)local_100 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_100);
    uVar21 = (undefined4)uVar5;
    uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    if (param_4 < 1) goto LAB_14010acc4;
LAB_14010ac91:
    pdVar2 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) != 0) goto LAB_14010ac9e;
LAB_14010acd4:
    dVar6 = *pdVar2;
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar7 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < param_4) goto LAB_14010ac91;
LAB_14010acc4:
    pdVar2 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_14010acd4;
LAB_14010ac9e:
    dVar6 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,(longlong)dVar6,(longlong)(double)CONCAT44(uVar8,uVar7),
                (float)(double)CONCAT44(uVar22,uVar21),(float)(double)CONCAT44(uVar20,uVar19),
                CONCAT44(uVar24,(float)(double)CONCAT44(uVar18,uVar17)),
                (float)(double)CONCAT44(uVar16,uVar15),(float)(double)CONCAT44(uVar14,uVar13),
                (int)(longlong)(double)CONCAT44(uVar12,uVar11),(float)(double)CONCAT44(uVar10,uVar9)
               );
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_198 = 9;
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  local_170 = 0;
  local_168 = 0x500000000;
  if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  local_228 = 0;
  local_220 = 0x500000000;
  uVar5 = FUN_1416cdc30(_DAT_141981c00);
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  local_20c = 0;
  local_268 = &local_218;
  local_218 = uVar5;
  FUN_140002730(&local_208,&DAT_1420b3290);
  local_260 = &local_208;
  FUN_140002730(&local_1f8,&DAT_1420b3290);
  local_258 = &local_1f8;
  FUN_140002730(&local_1e8,&DAT_1420b3280);
  local_250 = &local_1e8;
  uVar5 = FUN_1416ab210(param_1,param_2,&local_228,3,DAT_1420da710,&local_268);
  FUN_1400019a0(&local_1d8,uVar5);
  local_248 = &local_1d8;
  FUN_140002730(&local_1c8,&DAT_1420b3280);
  local_240 = &local_1c8;
  FUN_140002730(&local_1b8,&DAT_1420b3280);
  ppuVar23 = &local_250;
  local_238 = &local_1b8;
  FUN_1416ab210(param_1,param_2,&local_170,4,DAT_1420da700,ppuVar23);
  uVar24 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  local_198 = 10;
  puVar3 = &DAT_1420b1000;
  puVar4 = &DAT_1420b1000;
  if (8 < param_4) {
    puVar4 = (undefined8 *)param_5[8];
  }
  if (9 < param_4) {
    puVar3 = (undefined8 *)param_5[9];
  }
  local_e4 = *(uint *)((longlong)puVar3 + 0xc);
  local_e8 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar3;
  }
  else {
    FUN_1401121d0(&local_f0);
  }
  FUN_140001fe0(&local_f0,puVar4);
  if ((local_e4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_f0;
    uVar10 = (undefined4)((ulonglong)local_f0 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_f0);
    uVar9 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (7 < param_4) {
    puVar4 = (undefined8 *)param_5[7];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar11 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (6 < param_4) {
    puVar4 = (undefined8 *)param_5[6];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar13 = (undefined4)uVar5;
    uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_160 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_154 = 0;
  FUN_140001fe0(&local_160,&local_190);
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  local_124 = *(uint *)((longlong)puVar4 + 0xc);
  local_128 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_124 & 0x1f) & 1) == 0) {
    local_130 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_130);
  }
  FUN_140003ca0(&local_130,&local_160);
  if ((local_124 & 0xffffff) == 0) {
    uVar15 = (undefined4)local_130;
    uVar16 = (undefined4)((ulonglong)local_130 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_130);
    uVar15 = (undefined4)uVar5;
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_150 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_144 = 0;
  FUN_140001fe0(&local_150,&local_190);
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  local_114 = *(uint *)((longlong)puVar4 + 0xc);
  local_118 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_120 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_120);
  }
  FUN_140003ca0(&local_120,&local_150);
  if ((local_114 & 0xffffff) == 0) {
    uVar17 = (undefined4)local_120;
    uVar18 = (undefined4)((ulonglong)local_120 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_120);
    uVar17 = (undefined4)uVar5;
    uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_140 = FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_134 = 0;
  FUN_140001fe0(&local_140,&local_190);
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_104 = *(uint *)((longlong)puVar4 + 0xc);
  local_108 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
    local_110 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_110);
  }
  FUN_140003ca0(&local_110,&local_140);
  if ((local_104 & 0xffffff) == 0) {
    uVar19 = (undefined4)local_110;
    uVar20 = (undefined4)((ulonglong)local_110 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_110);
    uVar19 = (undefined4)uVar5;
    uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_180 = (double)FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_174 = 0;
  FUN_140001fe0(&local_180,&local_190);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  local_f4 = *(uint *)((longlong)puVar4 + 0xc);
  local_f8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
    local_100 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_100);
  }
  FUN_140003ca0(&local_100,&local_180);
  if ((local_f4 & 0xffffff) == 0) {
    uVar21 = (undefined4)local_100;
    uVar22 = (undefined4)((ulonglong)local_100 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_100);
    uVar21 = (undefined4)uVar5;
    uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    if (param_4 < 1) goto LAB_14010b3d6;
LAB_14010b3a3:
    pdVar2 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) != 0) goto LAB_14010b3b0;
LAB_14010b3e6:
    dVar6 = *pdVar2;
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar7 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < param_4) goto LAB_14010b3a3;
LAB_14010b3d6:
    pdVar2 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_14010b3e6;
LAB_14010b3b0:
    dVar6 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,(longlong)dVar6,(longlong)(double)CONCAT44(uVar8,uVar7),
                (float)(double)CONCAT44(uVar22,uVar21),(float)(double)CONCAT44(uVar20,uVar19),
                CONCAT44(uVar24,(float)(double)CONCAT44(uVar18,uVar17)),
                (float)(double)CONCAT44(uVar16,uVar15),(float)(double)CONCAT44(uVar14,uVar13),
                (int)(longlong)(double)CONCAT44(uVar12,uVar11),(float)(double)CONCAT44(uVar10,uVar9)
               );
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_198 = 0xc;
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  local_170 = 0;
  local_168 = 0x500000000;
  FUN_140002730(&local_218,&DAT_1420b3280);
  local_268 = &local_218;
  FUN_140002730(&local_208,&DAT_1420b32a0);
  local_260 = &local_208;
  FUN_140002730(&local_1f8,&DAT_1420b3280);
  local_258 = &local_1f8;
  FUN_140002730(&local_1e8,&DAT_1420b3280);
  local_250 = &local_1e8;
  ppuVar23 = &local_268;
  FUN_1416ab210(param_1,param_2,&local_170,4,DAT_1420da700,ppuVar23);
  uVar24 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  local_198 = 0xd;
  puVar3 = &DAT_1420b1000;
  puVar4 = &DAT_1420b1000;
  if (8 < param_4) {
    puVar4 = (undefined8 *)param_5[8];
  }
  if (9 < param_4) {
    puVar3 = (undefined8 *)param_5[9];
  }
  local_e4 = *(uint *)((longlong)puVar3 + 0xc);
  local_e8 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar3;
  }
  else {
    FUN_1401121d0(&local_f0);
  }
  FUN_140001fe0(&local_f0,puVar4);
  if ((local_e4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_f0;
    uVar10 = (undefined4)((ulonglong)local_f0 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_f0);
    uVar9 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (7 < param_4) {
    puVar4 = (undefined8 *)param_5[7];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar11 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (6 < param_4) {
    puVar4 = (undefined8 *)param_5[6];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar13 = (undefined4)uVar5;
    uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_160 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_154 = 0;
  FUN_140001fe0(&local_160,&local_190);
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  local_124 = *(uint *)((longlong)puVar4 + 0xc);
  local_128 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_124 & 0x1f) & 1) == 0) {
    local_130 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_130);
  }
  FUN_140003ca0(&local_130,&local_160);
  if ((local_124 & 0xffffff) == 0) {
    uVar15 = (undefined4)local_130;
    uVar16 = (undefined4)((ulonglong)local_130 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_130);
    uVar15 = (undefined4)uVar5;
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_150 = FUN_1416cdc60(DAT_141983d68,_DAT_141983800);
  local_144 = 0;
  FUN_140001fe0(&local_150,&local_190);
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  local_114 = *(uint *)((longlong)puVar4 + 0xc);
  local_118 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_114 & 0x1f) & 1) == 0) {
    local_120 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_120);
  }
  FUN_140003ca0(&local_120,&local_150);
  if ((local_114 & 0xffffff) == 0) {
    uVar17 = (undefined4)local_120;
    uVar18 = (undefined4)((ulonglong)local_120 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_120);
    uVar17 = (undefined4)uVar5;
    uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_140 = FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_134 = 0;
  FUN_140001fe0(&local_140,&local_190);
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_104 = *(uint *)((longlong)puVar4 + 0xc);
  local_108 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
    local_110 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_110);
  }
  FUN_140003ca0(&local_110,&local_140);
  if ((local_104 & 0xffffff) == 0) {
    uVar19 = (undefined4)local_110;
    uVar20 = (undefined4)((ulonglong)local_110 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_110);
    uVar19 = (undefined4)uVar5;
    uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  dVar6 = (double)FUN_1416cdc60(DAT_141983d70,DAT_141982e78);
  local_180 = (double)FUN_1416cdc30(DAT_141983d78);
  local_180 = dVar6 + local_180;
  local_174 = 0;
  FUN_140001fe0(&local_180,&local_190);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  local_f4 = *(uint *)((longlong)puVar4 + 0xc);
  local_f8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
    local_100 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_100);
  }
  FUN_140003ca0(&local_100,&local_180);
  if ((local_f4 & 0xffffff) == 0) {
    uVar21 = (undefined4)local_100;
    uVar22 = (undefined4)((ulonglong)local_100 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_100);
    uVar21 = (undefined4)uVar5;
    uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    if (param_4 < 1) goto LAB_14010ba3f;
LAB_14010ba0c:
    pdVar2 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) != 0) goto LAB_14010ba19;
LAB_14010ba4f:
    dVar6 = *pdVar2;
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar7 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < param_4) goto LAB_14010ba0c;
LAB_14010ba3f:
    pdVar2 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_14010ba4f;
LAB_14010ba19:
    dVar6 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,(longlong)dVar6,(longlong)(double)CONCAT44(uVar8,uVar7),
                (float)(double)CONCAT44(uVar22,uVar21),(float)(double)CONCAT44(uVar20,uVar19),
                CONCAT44(uVar24,(float)(double)CONCAT44(uVar18,uVar17)),
                (float)(double)CONCAT44(uVar16,uVar15),(float)(double)CONCAT44(uVar14,uVar13),
                (int)(longlong)(double)CONCAT44(uVar12,uVar11),(float)(double)CONCAT44(uVar10,uVar9)
               );
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  local_198 = 0xf;
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  local_170 = 0;
  local_168 = 0x500000000;
  FUN_140002730(&local_218,&DAT_14217f470);
  local_268 = &local_218;
  FUN_140002730(&local_208,&DAT_14217f470);
  local_260 = &local_208;
  FUN_140002730(&local_1f8,&DAT_14217f470);
  local_258 = &local_1f8;
  FUN_140002730(&local_1e8,&DAT_14217f470);
  local_250 = &local_1e8;
  FUN_1416ab210(param_1,param_2,&local_170,4,DAT_1420da700,&local_268);
  local_198 = 0x10;
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  local_170 = 0;
  local_168 = 0x500000000;
  puVar3 = &DAT_1420b1000;
  puVar4 = &DAT_1420b1000;
  if (8 < param_4) {
    puVar4 = (undefined8 *)param_5[8];
  }
  if (9 < param_4) {
    puVar3 = (undefined8 *)param_5[9];
  }
  local_e4 = *(uint *)((longlong)puVar3 + 0xc);
  local_e8 = *(undefined4 *)(puVar3 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar3;
  }
  else {
    FUN_1401121d0(&local_f0);
  }
  FUN_140001fe0(&local_f0,puVar4);
  FUN_1400019a0(&local_218,&local_f0);
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  ppuVar23 = &local_268;
  local_268 = &local_218;
  puVar4 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_170,1,DAT_1420d9ff0,ppuVar23);
  uVar24 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar4;
    uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(puVar4);
    uVar9 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (7 < param_4) {
    puVar4 = (undefined8 *)param_5[7];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar11 = (undefined4)*puVar4;
    uVar12 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar11 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (6 < param_4) {
    puVar4 = (undefined8 *)param_5[6];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar13 = (undefined4)uVar5;
    uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_130 = FUN_1416cdc60(DAT_141983d80,DAT_141983d88);
  local_124 = 0;
  FUN_140001fe0(&local_130,&local_190);
  if (param_4 < 6) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[5];
  }
  local_e4 = *(uint *)((longlong)puVar4 + 0xc);
  local_e8 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_f0);
  }
  FUN_140003ca0(&local_f0,&local_130);
  if ((local_e4 & 0xffffff) == 0) {
    uVar15 = (undefined4)local_f0;
    uVar16 = (undefined4)((ulonglong)local_f0 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_f0);
    uVar15 = (undefined4)uVar5;
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_120 = FUN_1416cdc60(DAT_141983d80,DAT_141983d88);
  local_114 = 0;
  FUN_140001fe0(&local_120,&local_190);
  if (param_4 < 5) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[4];
  }
  local_154 = *(uint *)((longlong)puVar4 + 0xc);
  local_158 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
    local_160 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_160);
  }
  FUN_140003ca0(&local_160,&local_120);
  if ((local_154 & 0xffffff) == 0) {
    uVar17 = (undefined4)local_160;
    uVar18 = (undefined4)((ulonglong)local_160 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_160);
    uVar17 = (undefined4)uVar5;
    uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_110 = FUN_1416cdc60(DAT_141983d90,_DAT_141982c40);
  local_104 = 0;
  FUN_140001fe0(&local_110,&local_190);
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_144 = *(uint *)((longlong)puVar4 + 0xc);
  local_148 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_144 & 0x1f) & 1) == 0) {
    local_150 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_150);
  }
  FUN_140003ca0(&local_150,&local_110);
  if ((local_144 & 0xffffff) == 0) {
    uVar19 = (undefined4)local_150;
    uVar20 = (undefined4)((ulonglong)local_150 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_150);
    uVar19 = (undefined4)uVar5;
    uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_100 = FUN_1416cdc60(DAT_141983d90,_DAT_141982c40);
  local_f4 = 0;
  FUN_140001fe0(&local_100,&local_190);
  if (param_4 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[2];
  }
  local_134 = *(uint *)((longlong)puVar4 + 0xc);
  local_138 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (local_134 & 0x1f) & 1) == 0) {
    local_140 = *puVar4;
  }
  else {
    FUN_1401121d0(&local_140);
  }
  FUN_140003ca0(&local_140,&local_100);
  if ((local_134 & 0xffffff) == 0) {
    uVar21 = (undefined4)local_140;
    uVar22 = (undefined4)((ulonglong)local_140 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_140);
    uVar21 = (undefined4)uVar5;
    uVar22 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar8 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    if (param_4 < 1) goto LAB_14010c121;
LAB_14010c0ee:
    pdVar2 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) != 0) goto LAB_14010c0fb;
LAB_14010c131:
    dVar6 = *pdVar2;
  }
  else {
    uVar5 = FUN_1416940c0();
    uVar7 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0 < param_4) goto LAB_14010c0ee;
LAB_14010c121:
    pdVar2 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) == 0) goto LAB_14010c131;
LAB_14010c0fb:
    dVar6 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,(longlong)dVar6,(longlong)(double)CONCAT44(uVar8,uVar7),
                (float)(double)CONCAT44(uVar22,uVar21),(float)(double)CONCAT44(uVar20,uVar19),
                CONCAT44(uVar24,(float)(double)CONCAT44(uVar18,uVar17)),
                (float)(double)CONCAT44(uVar16,uVar15),(float)(double)CONCAT44(uVar14,uVar13),
                (int)(longlong)(double)CONCAT44(uVar12,uVar11),(float)(double)CONCAT44(uVar10,uVar9)
               );
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
LAB_14010c395:
  if ((0x46U >> (local_220._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_168._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
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
  DAT_142182d78 = (undefined8 *)local_1a8;
  return param_3;
}


