// Function: gml_Script_ARRAY_COLLIDE @ 0x1416875a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_ARRAY_COLLIDE(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  double dVar10;
  ulonglong in_stack_fffffffffffffc78;
  undefined4 uVar14;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffc80;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_368;
  uint local_35c;
  undefined8 local_358;
  uint local_34c;
  undefined8 local_348;
  uint local_33c;
  undefined8 local_338;
  uint local_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_310;
  uint local_304;
  undefined8 local_300;
  uint local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
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
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 *local_198;
  undefined8 *local_190;
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
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  uint local_104;
  undefined8 local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c0 = "gml_Script_ARRAY_COLLIDE";
  local_b8 = 0;
  local_c8 = DAT_142182d78;
  DAT_142182d78 = &local_c8;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
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
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_2f4 = 0xffffff;
  local_300 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_35c = 0xffffff;
  local_368 = 0;
  local_34c = 0xffffff;
  local_358 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_33c = 0xffffff;
  local_348 = 0;
  local_32c = 0xffffff;
  local_338 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  DAT_142182d90 = param_1;
  local_80 = param_2;
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18a9e/*var:map*/);
  local_304 = 0xffffff;
  local_310 = 0;
  local_70 = (ulonglong)(uint)local_70;
  local_78 = 0;
  local_88 = (ulonglong)(uint)local_88;
  local_90 = 0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  local_98 = (ulonglong)(uint)local_98;
  local_a0 = 0;
  local_d0 = (ulonglong)(uint)local_d0;
  local_d8 = 0;
  local_2d0 = (ulonglong)(uint)local_2d0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dcff0/*gml_Script_ARRAY_COLLIDE*/);
  local_b8 = 6;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  FUN_140002730(&local_2c8,&DAT_1420b2fb0);
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,puVar5);
  local_190 = &local_2b8;
  uVar6 = FUN_1416cd900(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,uVar6);
  FUN_1416a8c00(1);
  local_b8 = 7;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  local_4c = *(uint *)((longlong)puVar5 + 0xc);
  local_50 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_58,puVar5);
  }
  FUN_140003ca0(&local_58,uVar6);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar7,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_b8 = 9;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  local_328 = 0;
  uStack_320 = 0;
  in_stack_fffffffffffffc80 = in_stack_fffffffffffffc80 & 0xffffffffffffff00;
  in_stack_fffffffffffffc78 = in_stack_fffffffffffffc78 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_328,in_stack_fffffffffffffc78,
                in_stack_fffffffffffffc80);
  FUN_140001a50(&local_2e8,&local_328,0x10);
  FUN_140017bd0(&local_58,&local_2e8,2);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (uStack_2e0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2e8);
  }
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,puVar7);
  local_190 = &local_2b8;
  uVar8 = FUN_1416cda40(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar7,uVar8);
  FUN_1416a8c00(1);
  local_b8 = 10;
  local_4c = *(uint *)((longlong)puVar7 + 0xc);
  local_50 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *puVar7;
  }
  else {
    FUN_141670fe0(&local_58,puVar7);
  }
  FUN_140003e00(&local_58,uVar6);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_b8 = 0xf;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  local_2e8 = 0;
  uStack_2e0 = 0;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  in_stack_fffffffffffffc78 = in_stack_fffffffffffffc78 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18abd/*var:mh*/,0x80000000,&local_2e8,in_stack_fffffffffffffc78,
                in_stack_fffffffffffffc80 & 0xffffffffffffff00);
  uVar14 = (undefined4)(in_stack_fffffffffffffc78 >> 0x20);
  FUN_140001a50(&local_68,&local_2e8,0x10);
  FUN_140017bd0(&local_58,&local_68,2);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,puVar9);
  local_190 = &local_2b8;
  uVar6 = FUN_1416cda40(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar9,uVar6);
  FUN_1416a8c00(1);
  local_b8 = 0x10;
  local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
  local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  local_4c = *(uint *)((longlong)puVar9 + 0xc);
  local_50 = *(undefined4 *)(puVar9 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *puVar9;
  }
  else {
    FUN_141670fe0(&local_58,puVar9);
  }
  FUN_140003e00(&local_58,local_f0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_e0,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x12;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,0x189cf/*var:hsp*/);
  local_5c = *(uint *)((longlong)puVar5 + 0xc);
  local_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_68,puVar5);
  }
  FUN_140003ca0(&local_68,uVar6);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar11 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar8 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar11,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1400019a0(&local_1c8,uVar8);
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  local_2f0 = (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  local_5c = *(uint *)((longlong)local_e0 + 0xc);
  local_60 = *(undefined4 *)(local_e0 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *local_e0;
  }
  else {
    FUN_141670fe0(&local_68);
  }
  FUN_140003ca0(&local_68,local_2f0);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2b8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_190 = &local_2b8;
  uVar11 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  uVar8 = FUN_1416ab210(param_1,local_80,&local_90,1,uVar11,&local_190);
  uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1400019a0(&local_1b8,uVar8);
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  local_5c = *(uint *)((longlong)puVar7 + 0xc);
  local_60 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar7;
  }
  else {
    FUN_141670fe0(&local_68,puVar7);
  }
  FUN_140003ca0(&local_68,uVar6);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2a8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_188 = &local_2a8;
  uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  uVar6 = FUN_1416ab210(param_1,local_80,&local_b0,1,uVar8,&local_188);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_300,uVar6);
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0x500000000;
  local_5c = *(uint *)((longlong)puVar9 + 0xc);
  local_60 = *(undefined4 *)(puVar9 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar9;
  }
  else {
    FUN_141670fe0(&local_68,puVar9);
  }
  FUN_140003ca0(&local_68,local_2f0);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_298,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_180 = &local_298;
  uVar6 = FUN_1416ab210(param_1,local_80,&local_a0,1,uVar8,&local_180);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_1a8,uVar6);
  local_b8 = 0x13;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  if ((*(uint *)((longlong)local_e0 + 0xc) & 0xffffff) == 0) {
    uVar6 = *local_e0;
  }
  else {
    uVar6 = FUN_1416940c0(local_e0);
  }
  puVar7 = local_e0;
  dVar10 = (double)FUN_141944a50(uVar6,_DAT_141982ef8);
  bVar1 = (double)(-(ulonglong)(dVar10 < 0.0) & (DAT_141982e90 ^ (ulonglong)dVar10) |
                  ~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10) <= DAT_1420f6b08;
  local_5c = *(uint *)((longlong)puVar7 + 0xc);
  local_60 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar7;
  }
  else {
    FUN_141670fe0(&local_68,puVar7);
  }
  FUN_140001c50(&local_68,bVar1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar8,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_368,uVar6);
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
    uVar6 = *puVar9;
  }
  else {
    uVar6 = FUN_1416940c0(puVar9);
  }
  dVar10 = (double)FUN_141944a50(uVar6,_DAT_141982ef8);
  FUN_140017bd0(&local_68,puVar9,
                (double)(-(ulonglong)(dVar10 < 0.0) & (DAT_141982e90 ^ (ulonglong)dVar10) |
                        ~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10) <= DAT_1420f6b08);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2b8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_190 = &local_2b8;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  uVar6 = FUN_1416ab210(param_1,local_80,&local_90,1,ppuVar13,&local_190);
  FUN_1400019a0(&local_358,uVar6);
  local_b8 = 0x14;
  local_4c = 0;
  local_58 = 0;
  iVar3 = FUN_1416d9df0(puVar5,&local_58,DAT_1420f6b08,1);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  if ((iVar3 != -2) && (iVar3 < 0)) goto LAB_1416885f5;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  local_118 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,0x189cf/*var:hsp*/);
  local_2f0 = (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  local_5c = *(uint *)((longlong)puVar5 + 0xc);
  local_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_68,puVar5);
  }
  FUN_140003e00(&local_68,uVar6);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  ppuVar15 = &local_198;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,ppuVar13,ppuVar15);
  iVar3 = FUN_1416d9df0(uVar6,&local_1c8,DAT_1420f6b08,1);
  if (iVar3 < 1) goto LAB_141688d14;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  ppuVar13 = &local_190;
  local_190 = &local_1c8;
  local_188 = &local_368;
  uVar6 = FUN_14012cc90(param_1,local_80,&local_90,2,ppuVar13);
  local_4c = 0;
  local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_1416885f5:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_b8 = 0x15;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    local_5c = local_1bc;
    local_60 = local_1c0;
    if ((0x46U >> (local_1bc & 0x1f) & 1) == 0) {
      local_68 = local_1c8;
    }
    else {
      FUN_141670fe0(&local_68,&local_1c8);
    }
    FUN_140001c50(&local_68,1);
    FUN_140001a50(&local_58,&local_68,0x10);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar6,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    FUN_1416a8c00(1);
    local_b8 = 0x16;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    local_118 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    local_4c = *(uint *)((longlong)puVar5 + 0xc);
    local_50 = *(undefined4 *)(puVar5 + 1);
    if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
      local_58 = *puVar5;
    }
    else {
      FUN_141670fe0(&local_58,puVar5);
    }
    FUN_140003ca0(&local_58,local_118);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(local_e8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    FUN_1416a8c00(1);
    local_b8 = 0x17;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
    local_b8 = 0x18;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881a/*var:col_l*/);
    if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar7);
    }
LAB_141688fe7:
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  else {
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    ppuVar13 = &local_180;
    local_180 = &local_1c8;
    local_178 = &local_358;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_b0,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) goto LAB_1416885f5;
    local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    local_4c = 0;
    local_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(local_f0,&local_58,DAT_1420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&local_58,&local_110,_DAT_141982ef8);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      ppuVar15 = &local_170;
      local_170 = &local_278;
      local_168 = &local_1c8;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_d8,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),ppuVar15);
      FUN_1400019a0(&local_258,uVar6);
      ppuVar13 = &local_168;
      local_160 = &local_258;
      uVar6 = FUN_14012cc90(param_1,local_80,&local_a0,2,ppuVar13);
      local_4c = 0;
      local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
      if (iVar3 == 0) goto LAB_1416885f5;
    }
LAB_141688d14:
    local_b8 = 0x1a;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
    FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_328,ppuVar13,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00);
    FUN_140001a50(&local_58,&local_328,0x10);
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,1);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    if (0 < iVar3) goto LAB_141688da6;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    local_5c = *(uint *)((longlong)puVar5 + 0xc);
    local_60 = *(undefined4 *)(puVar5 + 1);
    if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
      local_68 = *puVar5;
    }
    else {
      FUN_141670fe0(&local_68,puVar5);
    }
    FUN_140003e00(&local_68,uVar6);
    FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
    FUN_1400019a0(&local_2c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    ppuVar15 = &local_198;
    ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
    local_198 = &local_2c8;
    uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,ppuVar13,ppuVar15);
    iVar3 = FUN_1416d9df0(uVar6,&local_300,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_14168ba32;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    ppuVar13 = &local_190;
    local_190 = &local_300;
    local_188 = &local_368;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_90,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) {
LAB_141688da6:
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      local_b8 = 0x1b;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
      FUN_140001a50(&local_58,&local_300,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar6,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x1c;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
      local_118 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
      local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
      local_4c = *(uint *)((longlong)local_e8 + 0xc);
      local_50 = *(undefined4 *)(local_e8 + 1);
      if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
        local_58 = *local_e8;
      }
      else {
        FUN_141670fe0(&local_58);
      }
      FUN_140003e00(&local_58,local_118);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(puVar5,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x1d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
      local_b8 = 0x1e;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881d/*var:col_r*/);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      goto LAB_141688fe7;
    }
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    ppuVar13 = &local_180;
    local_180 = &local_300;
    local_178 = &local_358;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_b0,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) goto LAB_141688da6;
    local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    local_4c = 0;
    local_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(local_f0,&local_58,DAT_1420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&local_58,&local_110,_DAT_141982ef8);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_170 = &local_278;
      local_168 = &local_300;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_d8,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),&local_170);
      FUN_1400019a0(&local_258,uVar6);
      ppuVar13 = &local_168;
      local_160 = &local_258;
      uVar6 = FUN_14012cc90(param_1,local_80,&local_a0,2,ppuVar13);
      local_4c = 0;
      local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
      if (iVar3 == 0) goto LAB_141688da6;
    }
LAB_14168ba32:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_b8 = 0x20;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puVar5,uVar6);
    FUN_1416a8c00(1);
    local_b8 = 0x21;
    local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x189cf/*var:hsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(local_e8,uVar6);
    FUN_1416a8c00(1);
  }
  local_b8 = 0x23;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar6 = *puVar5;
  }
  else {
    uVar6 = FUN_1416940c0(puVar5);
  }
  dVar10 = (double)FUN_141944a50(uVar6,_DAT_141982ef8);
  bVar1 = (double)(-(ulonglong)(dVar10 < 0.0) & (DAT_141982e90 ^ (ulonglong)dVar10) |
                  ~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10) <= DAT_1420f6b08;
  local_5c = *(uint *)((longlong)puVar5 + 0xc);
  local_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_68,puVar5);
  }
  FUN_140001c50(&local_68,bVar1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar8,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_348,uVar6);
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  if ((*(uint *)((longlong)local_e8 + 0xc) & 0xffffff) == 0) {
    uVar6 = *local_e8;
  }
  else {
    uVar6 = FUN_1416940c0(local_e8);
  }
  puVar7 = local_e8;
  dVar10 = (double)FUN_141944a50(uVar6,_DAT_141982ef8);
  FUN_140017bd0(&local_68,puVar7,
                (double)(-(ulonglong)(dVar10 < 0.0) & (DAT_141982e90 ^ (ulonglong)dVar10) |
                        ~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10) <= DAT_1420f6b08);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2b8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_190 = &local_2b8;
  uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  uVar6 = FUN_1416ab210(param_1,local_80,&local_90,1,uVar8,&local_190);
  uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_1400019a0(&local_338,uVar6);
  local_b8 = 0x24;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  local_5c = *(uint *)((longlong)local_e0 + 0xc);
  local_60 = *(undefined4 *)(local_e0 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *local_e0;
  }
  else {
    FUN_141670fe0(&local_68);
  }
  FUN_140003e00(&local_68,local_2f0);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  ppuVar15 = &local_198;
  ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,ppuVar13,ppuVar15);
  iVar3 = FUN_1416d9df0(uVar6,&local_1b8,DAT_1420f6b08,1);
  if (iVar3 < 1) goto LAB_1416897ab;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  (**(code **)(*param_1 + 8))(param_1,0x18e26/*var:vsp*/);
  ppuVar13 = &local_190;
  local_190 = &local_348;
  local_188 = &local_1b8;
  uVar6 = FUN_14012cc90(param_1,local_80,&local_90,2,ppuVar13);
  local_4c = 0;
  local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_14168983c:
    local_b8 = 0x25;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    local_5c = local_1ac;
    local_60 = local_1b0;
    if ((0x46U >> (local_1ac & 0x1f) & 1) == 0) {
      local_68 = local_1b8;
    }
    else {
      FUN_141670fe0(&local_68,&local_1b8);
    }
    FUN_140001c50(&local_68,1);
    FUN_140001a50(&local_58,&local_68,0x10);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar6,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    FUN_1416a8c00(1);
    local_b8 = 0x26;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    local_4c = *(uint *)((longlong)local_e0 + 0xc);
    local_50 = *(undefined4 *)(local_e0 + 1);
    if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
      local_58 = *local_e0;
    }
    else {
      FUN_141670fe0(&local_58);
    }
    FUN_140003ca0(&local_58,local_f0);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(puVar7,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    FUN_1416a8c00(1);
    local_b8 = 0x27;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
    local_b8 = 0x28;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1881e/*var:col_t*/);
    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar9);
    }
LAB_14168a1f1:
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  else {
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    ppuVar13 = &local_180;
    local_180 = &local_338;
    local_178 = &local_1b8;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_b0,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) goto LAB_14168983c;
    local_118 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    local_4c = 0;
    local_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(local_118,&local_58,DAT_1420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&local_58,&local_100,_DAT_141982ef8);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      ppuVar15 = &local_170;
      local_170 = &local_278;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_d8,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),ppuVar15);
      FUN_1400019a0(&local_268,uVar6);
      ppuVar13 = &local_168;
      local_168 = &local_268;
      local_160 = &local_1b8;
      uVar6 = FUN_14012cc90(param_1,local_80,&local_a0,2,ppuVar13);
      local_4c = 0;
      local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
      if (iVar3 == 0) goto LAB_14168983c;
    }
LAB_1416897ab:
    uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_b8 = 0x2a;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    local_5c = *(uint *)((longlong)puVar7 + 0xc);
    local_60 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
      local_68 = *puVar7;
    }
    else {
      FUN_141670fe0(&local_68,puVar7);
    }
    FUN_140003e00(&local_68,uVar6);
    FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
    FUN_1400019a0(&local_2c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    ppuVar15 = &local_198;
    ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
    local_198 = &local_2c8;
    uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,ppuVar13,ppuVar15);
    iVar3 = FUN_1416d9df0(uVar6,&local_1a8,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_141689ca9;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    ppuVar13 = &local_190;
    local_190 = &local_348;
    local_188 = &local_1a8;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_90,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) {
LAB_141689d9d:
      local_b8 = 0x2b;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      FUN_140001a50(&local_58,&local_1a8,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar6,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x2c;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
      local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
      local_4c = *(uint *)((longlong)puVar7 + 0xc);
      local_50 = *(undefined4 *)(puVar7 + 1);
      if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
        local_58 = *puVar7;
      }
      else {
        FUN_141670fe0(&local_58,puVar7);
      }
      FUN_140003e00(&local_58,local_f0);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(local_e0,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x2d;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_b8 = 0x2e;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18819/*var:col_b*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      local_b8 = 0x2f;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      goto LAB_14168a1f1;
    }
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    ppuVar13 = &local_180;
    local_180 = &local_338;
    local_178 = &local_1a8;
    uVar6 = FUN_14012cc90(param_1,local_80,&local_b0,2,ppuVar13);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) goto LAB_141689d9d;
    local_118 = (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    local_4c = 0;
    local_58 = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    iVar3 = FUN_1416d9df0(local_118,&local_58,DAT_1420f6b08,1);
    if (0 < iVar3) {
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar12 >> 0x20);
      FUN_140004520(&local_58,&local_100,_DAT_141982ef8);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      ppuVar15 = &local_170;
      local_170 = &local_278;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_d8,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),ppuVar15);
      FUN_1400019a0(&local_268,uVar6);
      ppuVar13 = &local_168;
      local_168 = &local_268;
      local_160 = &local_1a8;
      uVar6 = FUN_14012cc90(param_1,local_80,&local_a0,2,ppuVar13);
      local_4c = 0;
      local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
      if (iVar3 == 0) goto LAB_141689d9d;
    }
LAB_141689ca9:
    local_b8 = 0x31;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18a3e/*var:jt_col*/);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      local_78 = 0;
      local_70 = 0x500000000;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      local_5c = *(uint *)((longlong)puVar7 + 0xc);
      local_60 = *(undefined4 *)(puVar7 + 1);
      if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
        local_68 = *puVar7;
      }
      else {
        FUN_141670fe0(&local_68,puVar7);
      }
      FUN_140003e00(&local_68,uVar6);
      FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
      FUN_1400019a0(&local_2c8,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      ppuVar15 = &local_198;
      ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
      local_198 = &local_2c8;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,ppuVar13,ppuVar15);
      iVar3 = FUN_1416d9df0(uVar6,&local_1a8,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_141689cfe;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      ppuVar13 = &local_190;
      local_190 = &local_348;
      local_188 = &local_1a8;
      uVar6 = FUN_14012cc90(param_1,local_80,&local_90,2,ppuVar13);
      local_4c = 0;
      local_58 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
      iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        ppuVar13 = &local_180;
        local_180 = &local_338;
        local_178 = &local_1a8;
        uVar6 = FUN_14012cc90(param_1,local_80,&local_b0,2,ppuVar13);
        local_4c = 0;
        local_58 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
        iVar3 = FUN_1416d9df0(uVar6,&local_58,DAT_1420f6b08,0);
        if (iVar3 != 0) goto LAB_141689cfe;
      }
      uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0x500000000;
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      FUN_140004520(&local_58,puVar7,_DAT_141982ef8);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_5c = *(uint *)((longlong)puVar7 + 0xc);
      local_60 = *(undefined4 *)(puVar7 + 1);
      local_170 = &local_278;
      if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
        local_68 = *puVar7;
      }
      else {
        FUN_141670fe0(&local_68,puVar7);
      }
      FUN_140003ca0(&local_68,uVar6);
      FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
      FUN_1400019a0(&local_268,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      uVar8 = CONCAT44(uVar14,DAT_1420da140/*ceil*/);
      local_168 = &local_268;
      uVar6 = FUN_1416ab210(param_1,local_80,&local_d8,1,uVar8,&local_168);
      ppuVar15 = &local_170;
      ppuVar13 = (undefined8 **)CONCAT44((int)((ulonglong)uVar8 >> 0x20),DAT_1420da140/*ceil*/);
      uVar8 = FUN_1416ab210(param_1,local_80,&local_a0,1,ppuVar13,ppuVar15);
      iVar3 = FUN_1416d9df0(uVar8,uVar6,DAT_1420f6b08,0);
      if (iVar3 == 0) goto LAB_141689cfe;
      local_b8 = 0x32;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      FUN_140001a50(&local_58,&local_1a8,0x10);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(uVar6,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x33;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
      local_f0 = (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
      local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
      local_4c = *(uint *)((longlong)puVar7 + 0xc);
      local_50 = *(undefined4 *)(puVar7 + 1);
      if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
        local_58 = *puVar7;
      }
      else {
        FUN_141670fe0(&local_58,puVar7);
      }
      FUN_140003e00(&local_58,local_f0);
      FUN_1416a8cb0(param_1);
      FUN_1400019a0(local_e0,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      FUN_1416a8c00(1);
      local_b8 = 0x34;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      local_b8 = 0x35;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      *puVar9 = 0;
      local_b8 = 0x36;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b41/*var:onJT*/);
      if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar9);
      }
      goto LAB_14168a1f1;
    }
LAB_141689cfe:
    local_b8 = 0x38;
    local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(local_e0,uVar6);
    FUN_1416a8c00(1);
    local_b8 = 0x39;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
    FUN_1416a8cb0(param_1);
    FUN_140003ca0(puVar7,uVar6);
    FUN_1416a8c00(1);
  }
  local_b8 = 0x3c;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  FUN_140002730(&local_2c8,&DAT_1420b2fc0);
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,puVar5);
  local_190 = &local_2b8;
  uVar6 = FUN_1416cd900(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,uVar6);
  FUN_1416a8c00(1);
  local_b8 = 0x3d;
  local_4c = *(uint *)((longlong)puVar5 + 0xc);
  local_50 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_58,puVar5);
  }
  FUN_140003ca0(&local_58,local_118);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_e8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x3f;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
  FUN_1416d0010(0x4f,0x18b09/*var:mw*/,0x80000000,&local_328,ppuVar13,(ulonglong)ppuVar15 & 0xffffffffffffff00
               );
  FUN_140001a50(&local_68,&local_328,0x10);
  FUN_140017bd0(&local_58,&local_68,4);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,local_e8);
  local_190 = &local_2b8;
  uVar6 = FUN_1416cda40(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_e8,uVar6);
  FUN_1416a8c00(1);
  local_b8 = 0x40;
  local_4c = *(uint *)((longlong)local_e8 + 0xc);
  local_50 = *(undefined4 *)(local_e8 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *local_e8;
  }
  else {
    FUN_141670fe0(&local_58);
  }
  FUN_140003e00(&local_58,local_118);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar5,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x45;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  FUN_140001a50(&local_68,&local_2e8,0x10);
  FUN_140017bd0(&local_58,&local_68,4);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_198 = &local_2c8;
  FUN_1400019a0(&local_2b8,puVar7);
  local_190 = &local_2b8;
  uVar6 = FUN_1416cda40(&local_78,2,&local_198);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar7,uVar6);
  FUN_1416a8c00(1);
  local_b8 = 0x46;
  local_4c = *(uint *)((longlong)puVar7 + 0xc);
  local_50 = *(undefined4 *)(puVar7 + 1);
  if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
    local_58 = *puVar7;
  }
  else {
    FUN_141670fe0(&local_58,puVar7);
  }
  FUN_140003e00(&local_58,local_f0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(local_e0,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  FUN_1416a8c00(1);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b43/*var:onsolid*/);
  cVar2 = FUN_1416927d0(uVar6);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  if (cVar2 != '\0') {
    local_b8 = 0x49;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    (**(code **)(*param_1 + 8))(param_1,0x187b4/*var:bw*/);
    local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    (**(code **)(*param_1 + 8))(param_1,0x1877f/*var:bh*/);
    local_e0 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    local_5c = *(uint *)((longlong)puVar7 + 0xc);
    local_60 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
      local_68 = *puVar7;
    }
    else {
      FUN_141670fe0(&local_68,puVar7);
    }
    FUN_140001c50(&local_68,1);
    FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
    FUN_1400019a0(&local_2c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_68);
    }
    ppuVar13 = &local_198;
    uVar12 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
    local_198 = &local_2c8;
    uVar6 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar12,ppuVar13);
    FUN_1400019a0(&local_1a8,uVar6);
    local_b8 = 0x4a;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x189c2/*var:hit_id*/);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140004520(&local_58,&local_100,_DAT_141982ef8);
    FUN_1400019a0(&local_2c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_198 = &local_2c8;
    FUN_1400019a0(&local_2b8,uVar4);
    local_190 = &local_2b8;
    uVar11 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
    uVar8 = FUN_1416ab210(param_1,local_80,&local_90,1,uVar11,&local_198);
    uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
    FUN_1400019a0(&local_2a8,uVar8);
    local_188 = &local_2a8;
    ppuVar13 = &local_190;
    uVar12 = CONCAT44(uVar14,DAT_1420da240/*array_get_2D*/);
    local_180 = &local_1a8;
    uVar8 = FUN_1416ab210(param_1,local_80,&local_78,3,uVar12,ppuVar13);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar6,uVar8);
    FUN_1416a8c00(1);
    local_b8 = 0x4b;
    if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_78);
    }
    local_78 = 0;
    local_70 = 0x500000000;
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18b3f/*var:onblock_id*/);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140004520(&local_58,&local_100,_DAT_141982ef8);
    FUN_1400019a0(&local_2c8,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_198 = &local_2c8;
    FUN_1400019a0(&local_2b8,uVar4);
    local_190 = &local_2b8;
    uVar8 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
    uVar4 = FUN_1416ab210(param_1,local_80,&local_90,1,uVar8,&local_198);
    uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1400019a0(&local_2a8,uVar4);
    local_188 = &local_2a8;
    ppuVar13 = &local_190;
    uVar12 = CONCAT44(uVar14,DAT_1420da240/*array_get_2D*/);
    local_180 = &local_1a8;
    uVar4 = FUN_1416ab210(param_1,local_80,&local_78,3,uVar12,ppuVar13);
    FUN_1416a8cb0(param_1);
    FUN_1400019a0(uVar6,uVar4);
    FUN_1416a8c00(1);
    uVar16 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    ppuVar13 = (undefined8 **)(uVar12 & 0xffffffffffffff00);
    FUN_1416cea80(param_1,DAT_1420d5a28/*object_index*/,0x80000000,&local_310,ppuVar13,uVar16);
    local_4c = 0;
    local_58 = 0x4050000000000000/*64 (obj:oPlayer)*/;
    iVar3 = FUN_1416d9df0(&local_310,&local_58,DAT_1420f6b08,0);
    if (iVar3 == 0) {
      local_b8 = 0x4d;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18b3f/*var:onblock_id*/);
      local_4c = 0;
      local_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
      iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x189c2/*var:hit_id*/);
        local_4c = 0;
        local_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
        iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
        if (iVar3 != 0) {
          if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_78);
          }
          local_78 = 0;
          local_70 = 0x500000000;
          if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_90 = 0;
          local_88 = 0x500000000;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
          puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
          uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12,
                        uVar16 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar12 >> 0x20);
          FUN_1400019a0(&local_2c8,&local_110);
          local_198 = &local_2c8;
          FUN_1400019a0(&local_2b8,puVar7);
          local_190 = &local_2b8;
          FUN_140017bd0(&local_58,puVar5,2);
          FUN_1400019a0(&local_2a8,&local_58);
          if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_58);
          }
          local_188 = &local_2a8;
          ppuVar15 = &local_198;
          uVar4 = FUN_1416ab210(param_1,local_80,&local_90,2,CONCAT44(uVar14,DAT_1420da0c0/*mean*/),ppuVar15
                               );
          FUN_1400019a0(&local_298,uVar4);
          local_180 = &local_298;
          ppuVar13 = &local_188;
          uVar4 = FUN_14012bed0(param_1,local_80,&local_78,2,ppuVar13);
          local_4c = 0;
          local_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
          iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
          if (iVar3 != 0) {
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_a0);
            }
            local_a0 = 0;
            local_98 = 0x500000000;
            local_e8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
            uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
            FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00);
            uVar14 = (undefined4)(uVar12 >> 0x20);
            FUN_1400019a0(&local_288,&local_110);
            local_178 = &local_288;
            FUN_1400019a0(&local_278,puVar7);
            local_4c = *(uint *)((longlong)local_e8 + 0xc);
            local_50 = *(undefined4 *)(local_e8 + 1);
            local_170 = &local_278;
            if ((0x46U >> (local_4c & 0x1f) & 1) == 0) {
              local_58 = *local_e8;
            }
            else {
              FUN_141670fe0(&local_58);
            }
            FUN_140001c50(&local_58,2);
            FUN_1400019a0(&local_268,&local_58);
            if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_58);
            }
            ppuVar15 = &local_178;
            local_168 = &local_268;
            uVar4 = FUN_1416ab210(param_1,local_80,&local_a0,2,CONCAT44(uVar14,DAT_1420da0c0/*mean*/),
                                  ppuVar15);
            FUN_1400019a0(&local_258,uVar4);
            ppuVar13 = &local_168;
            local_160 = &local_258;
            uVar4 = FUN_14012bed0(param_1,local_80,&local_b0,2,ppuVar13);
            local_4c = 0;
            local_58 = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
            iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
            if (iVar3 != 0) goto LAB_14168bec2;
          }
          local_b8 = 0x50;
          if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_d8);
          }
          local_d8 = 0;
          local_d0 = 0x500000000;
          if ((0x46U >> (local_2d0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0x500000000;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18908/*var:facing*/);
          uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,uVar16);
          FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          FUN_140002730(&local_248,&DAT_1420b2fe0);
          local_158 = &local_248;
          FUN_140002730(&local_238,&DAT_1420b2ff0);
          local_150 = &local_238;
          FUN_140002730(&local_228,&DAT_1420b3000);
          local_148 = &local_228;
          FUN_140002730(&local_218,&DAT_1420b3010);
          local_140 = &local_218;
          FUN_140002730(&local_208,&DAT_1420b2fd0);
          local_138 = &local_208;
          FUN_140001a50(&local_68,uVar4,0x10);
          local_4c = local_f4;
          local_50 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_58 = local_100;
          }
          else {
            FUN_141670fe0(&local_58,&local_100);
          }
          FUN_140003ca0(&local_58,&local_68);
          FUN_1400019a0(&local_1f8,&local_58);
          if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_58);
          }
          if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_68);
          }
          local_4c = local_104;
          local_50 = local_108;
          local_130 = &local_1f8;
          if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
            local_58 = local_110;
          }
          else {
            FUN_141670fe0(&local_58,&local_110);
          }
          FUN_140001c50(&local_58,8);
          FUN_1400019a0(&local_1e8,&local_58);
          if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_58);
          }
          local_128 = &local_1e8;
          uVar4 = FUN_1416cd660(&local_2d8,4,&local_158);
          FUN_1400019a0(&local_1d8,uVar4);
          ppuVar13 = &local_138;
          local_120 = &local_1d8;
          FUN_1400e28e0(param_1,local_80,&local_d8,4,ppuVar13);
          goto LAB_14168bec2;
        }
      }
      local_b8 = 0x4e;
      if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_78);
      }
      local_78 = 0;
      local_70 = 0x500000000;
      if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      local_90 = 0;
      local_88 = 0x500000000;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18908/*var:facing*/);
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_100,uVar12,uVar16);
      FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_110,uVar12 & 0xffffffffffffff00,
                    uVar16 & 0xffffffffffffff00);
      FUN_140002730(&local_2c8,&DAT_1420b2fe0);
      local_198 = &local_2c8;
      FUN_140002730(&local_2b8,&DAT_1420b2ff0);
      local_190 = &local_2b8;
      FUN_140002730(&local_2a8,&DAT_1420b3000);
      local_188 = &local_2a8;
      FUN_140002730(&local_298,&DAT_1420b3010);
      local_180 = &local_298;
      FUN_140002730(&local_288,&DAT_1420b2fd0);
      local_178 = &local_288;
      FUN_140001a50(&local_68,uVar4,0x10);
      local_4c = local_f4;
      local_50 = local_f8;
      if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
        local_58 = local_100;
      }
      else {
        FUN_141670fe0(&local_58,&local_100);
      }
      FUN_140003ca0(&local_58,&local_68);
      FUN_1400019a0(&local_278,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_68);
      }
      local_4c = local_104;
      local_50 = local_108;
      local_170 = &local_278;
      if ((0x46U >> (local_104 & 0x1f) & 1) == 0) {
        local_58 = local_110;
      }
      else {
        FUN_141670fe0(&local_58,&local_110);
      }
      FUN_140001c50(&local_58,8);
      FUN_1400019a0(&local_268,&local_58);
      if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_58);
      }
      local_168 = &local_268;
      uVar4 = FUN_1416cd660(&local_90,4,&local_198);
      FUN_1400019a0(&local_258,uVar4);
      ppuVar13 = &local_178;
      local_160 = &local_258;
      FUN_1400e28e0(param_1,local_80,&local_78,4,ppuVar13);
    }
  }
LAB_14168bec2:
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  local_b8 = 0x55;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  local_5c = *(uint *)((longlong)puVar5 + 0xc);
  local_60 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *puVar5;
  }
  else {
    FUN_141670fe0(&local_68,puVar5);
  }
  FUN_140001c50(&local_68,1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar6 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar4 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar6,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_1400019a0(&local_1c8,uVar4);
  local_b8 = 0x56;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  local_5c = *(uint *)((longlong)local_e0 + 0xc);
  local_60 = *(undefined4 *)(local_e0 + 1);
  if ((0x46U >> (local_5c & 0x1f) & 1) == 0) {
    local_68 = *local_e0;
  }
  else {
    FUN_141670fe0(&local_68);
  }
  FUN_140001c50(&local_68,1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar6 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar4 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar6,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_1400019a0(&local_1b8,uVar4);
  local_b8 = 0x57;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  FUN_140017bd0(&local_68,local_e8,1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  uVar6 = CONCAT44(uVar14,DAT_1420da4b0/*floor*/);
  local_198 = &local_2c8;
  uVar4 = FUN_1416ab210(param_1,local_80,&local_78,1,uVar6,&local_198);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_1400019a0(&local_300,uVar4);
  local_b8 = 0x58;
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  FUN_140017bd0(&local_68,puVar7,1);
  FUN_140004520(&local_58,&local_68,_DAT_141982ef8);
  FUN_1400019a0(&local_2c8,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  if ((0x46U >> (local_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_68);
  }
  local_198 = &local_2c8;
  uVar4 = FUN_1416ab210(param_1,local_80,&local_78,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),&local_198);
  FUN_1400019a0(&local_1a8,uVar4);
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  local_78 = 0;
  local_70 = 0x500000000;
  ppuVar13 = &local_198;
  local_198 = &local_1c8;
  local_190 = &local_1a8;
  uVar4 = FUN_14012cc90(param_1,local_80,&local_78,2,ppuVar13);
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  local_4c = 0;
  local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
  if (iVar3 != 0) {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0x500000000;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
    (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
    FUN_1400019a0(&local_2a8,uVar4);
    local_188 = &local_2a8;
    FUN_1400019a0(&local_298,uVar6);
    local_180 = &local_298;
    uVar6 = CONCAT44(uVar14,DAT_1420da0c0/*mean*/);
    uVar4 = FUN_1416ab210(param_1,local_80,&local_a0,2,uVar6,&local_188);
    uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_140004520(&local_58,uVar4,_DAT_141982ef8);
    FUN_1400019a0(&local_288,&local_58);
    if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_58);
    }
    local_178 = &local_288;
    uVar4 = FUN_1416ab210(param_1,local_80,&local_b0,1,CONCAT44(uVar14,DAT_1420da4b0/*floor*/),&local_178);
    FUN_1400019a0(&local_278,uVar4);
    local_170 = &local_278;
    local_168 = &local_1a8;
    uVar4 = FUN_14012cc90(param_1,local_80,&local_90,2,&local_170);
    local_4c = 0;
    local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
    if (iVar3 != 0) {
      if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0x500000000;
      local_160 = &local_300;
      local_158 = &local_1a8;
      uVar4 = FUN_14012cc90(param_1,local_80,&local_d8,2,&local_160);
      local_4c = 0;
      local_58 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar3 = FUN_1416d9df0(uVar4,&local_58,DAT_1420f6b08,0);
      if (iVar3 != 0) {
        goto joined_r0x00014168c7d7;
      }
    }
  }
  local_b8 = 0x5b;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  local_4c = 0;
  local_58 = 0x3fe0000000000000/*0.5*/;
  FUN_140003e00(uVar4,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_b8 = 0x5c;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  local_4c = 0;
  local_58 = 0x3fe0000000000000/*0.5*/;
  FUN_140003e00(uVar4,&local_58);
  if ((0x46U >> (local_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_58);
  }
  local_b8 = 0x5d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0xbfe0000000000000/*-0.5*/;
joined_r0x00014168c7d7:
  if ((0x46U >> (local_2d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2d8);
  }
  if ((0x46U >> (local_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_304 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_310);
  }
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_338);
  }
  if ((0x46U >> (local_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_348);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_358);
  }
  if ((0x46U >> (local_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_368);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_2f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_300);
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
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  DAT_142182d78 = (undefined8 *)local_c8;
  return param_3;
}


