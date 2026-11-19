// Function: gml_Object_oMal_bg_leaves_bg_Step_0 @ 0x140a38a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMal_bg_leaves_bg_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 uVar9;
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
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
  undefined8 local_188;
  uint local_17c;
  undefined8 local_178;
  uint local_16c;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  uint local_14c;
  undefined1 local_148 [12];
  uint local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  double local_120;
  uint local_114;
  double local_110;
  uint local_104;
  double local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  uint local_e4;
  double local_e0;
  undefined4 local_d8;
  uint local_d4;
  double local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  double local_a0;
  undefined4 local_98;
  uint local_94;
  double local_90;
  undefined4 local_88;
  uint local_84;
  double local_80;
  undefined4 local_78;
  uint local_74;
  double local_70;
  undefined4 local_68;
  uint local_64;
  double local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_50 = 0xfffffffffffffffe;
  local_130 = "gml_Object_oMal_bg_leaves_bg_Step_0";
  local_128 = 0;
  local_138 = DAT_142182d78;
  DAT_142182d78 = &local_138;
  local_b4 = 0xffffff;
  local_c0 = 0;
  DAT_142182d90 = param_1;
  puVar1 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18816);
  puVar2 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98);
  local_a4 = 0xffffff;
  local_b0 = 0;
  pdVar3 = (double *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18817);
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
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
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_128 = 4;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,0x18e45);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x186d1);
  FUN_1416cea80(param_1,DAT_1420d59f8,0x80000000,&local_c0,0,0);
  FUN_1416cea80(param_1,DAT_1420d5a08,0x80000000,&local_b0,0,0);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar7 = *puVar2;
  }
  else {
    uVar7 = FUN_1416940c0(puVar2);
  }
  local_a0 = (double)CONCAT44((uint)((ulonglong)uVar7 >> 0x20) ^ DAT_141982e90._4_4_,
                              (uint)uVar7 ^ (uint)DAT_141982e90);
  local_94 = 0;
  FUN_140001a50(&local_90,&local_a0,0x1e);
  local_74 = local_84;
  local_78 = local_88;
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_80 = local_90;
  }
  else {
    FUN_140a3b860(&local_80,&local_90);
  }
  FUN_140003ca0(&local_80,&local_c0);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_140a3b860(&local_60,&local_80);
  }
  FUN_140003ca0(&local_60,&local_b0);
  dVar8 = local_60;
  if ((local_54 & 0xffffff) != 0) {
    dVar8 = (double)FUN_1416940c0(&local_60);
  }
  fVar6 = (float)FUN_1416cd800(_DAT_14198a3e8,CONCAT44(uVar9,(float)dVar8));
  local_e4 = *(uint *)((longlong)puVar1 + 0xc);
  local_e8 = *(undefined4 *)(puVar1 + 1);
  if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
    local_f0 = *puVar1;
  }
  else {
    FUN_140a3b860(&local_f0,puVar1);
  }
  FUN_140003e00(&local_f0,&local_c0);
  FUN_140004520(local_148,&local_f0,DAT_1419843b8);
  local_c4 = *(uint *)((longlong)pdVar4 + 0xc);
  local_c8 = *(undefined4 *)(pdVar4 + 1);
  if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
    local_d0 = *pdVar4;
  }
  else {
    FUN_140a3b860(&local_d0,pdVar4);
  }
  FUN_140003ca0(&local_d0,&local_c0);
  local_d4 = local_c4;
  local_d8 = local_c8;
  if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
    local_e0 = local_d0;
  }
  else {
    FUN_140a3b860(&local_e0,&local_d0);
  }
  FUN_140003ca0(&local_e0,local_148);
  local_64 = local_d4;
  local_68 = local_d8;
  if ((0x46U >> (local_d4 & 0x1f) & 1) == 0) {
    local_70 = local_e0;
  }
  else {
    FUN_140a3b860(&local_70,&local_e0);
  }
  dVar8 = (double)fVar6;
  FUN_140003f30(&local_70,dVar8);
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(local_148);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  FUN_1416a8c00(1);
  local_128 = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,0x18e54);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x186d2);
  FUN_1416cea80(param_1,DAT_1420d5a08,0x80000000,&local_b0,0,0);
  local_84 = *(uint *)((longlong)pdVar3 + 0xc);
  local_88 = *(undefined4 *)(pdVar3 + 1);
  if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
    local_90 = *pdVar3;
  }
  else {
    FUN_140a3b860(&local_90,pdVar3);
  }
  FUN_140003e00(&local_90,&local_b0);
  FUN_140004520(&local_80,&local_90,DAT_1419843b8);
  local_94 = *(uint *)((longlong)pdVar4 + 0xc);
  local_98 = *(undefined4 *)(pdVar4 + 1);
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_a0 = *pdVar4;
  }
  else {
    FUN_140a3b860(&local_a0,pdVar4);
  }
  FUN_140003ca0(&local_a0,&local_b0);
  local_54 = local_94;
  local_58 = local_98;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_60 = local_a0;
  }
  else {
    FUN_140a3b860(&local_60,&local_a0);
  }
  FUN_140003ca0(&local_60,&local_80);
  local_64 = local_54;
  local_68 = local_58;
  if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
    local_70 = local_60;
  }
  else {
    FUN_140a3b860(&local_70,&local_60);
  }
  FUN_140001c50(&local_70,0x20);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&local_70);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  FUN_1416a8c00(1);
  local_128 = 7;
  FUN_1416cea80(param_1,DAT_1420d59f8,0x80000000,&local_c0,0,0);
  FUN_1416cea80(param_1,DAT_1420d5a08,0x80000000,&local_b0,0,0);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = *puVar2;
  }
  else {
    uVar5 = FUN_1416940c0(puVar2);
  }
  local_90 = (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ DAT_141982e90._4_4_,
                              (uint)uVar5 ^ (uint)DAT_141982e90);
  local_84 = 0;
  FUN_140001a50(&local_80,&local_90,0x1b);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_140a3b860(&local_60,&local_80);
  }
  FUN_140003ca0(&local_60,&local_c0);
  local_64 = local_54;
  local_68 = local_58;
  if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
    local_70 = local_60;
  }
  else {
    FUN_140a3b860(&local_70,&local_60);
  }
  FUN_140003ca0(&local_70,&local_b0);
  dVar8 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    dVar8 = (double)FUN_1416940c0(&local_70);
  }
  uVar5 = CONCAT44(uVar9,(float)dVar8);
  fVar6 = (float)FUN_1416cd800(_DAT_141983928,uVar5);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  local_114 = 0;
  local_120 = (double)fVar6;
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  FUN_1416cfae0(param_1,DAT_1420d5cf8,0x80000000,&local_120);
  local_128 = 9;
  FUN_1416cea80(param_1,DAT_1420d59f8,0x80000000,&local_c0,0,0);
  FUN_1416cea80(param_1,DAT_1420d5a08,0x80000000,&local_b0,0,0);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = *puVar2;
  }
  else {
    uVar5 = FUN_1416940c0(puVar2);
  }
  local_90 = (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ DAT_141982e90._4_4_,
                              (uint)uVar5 ^ (uint)DAT_141982e90);
  local_84 = 0;
  FUN_140001a50(&local_80,&local_90,0x1b);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_140a3b860(&local_60,&local_80);
  }
  FUN_140003ca0(&local_60,&local_c0);
  local_64 = local_54;
  local_68 = local_58;
  if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
    local_70 = local_60;
  }
  else {
    FUN_140a3b860(&local_70,&local_60);
  }
  FUN_140003ca0(&local_70,&local_b0);
  dVar8 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    dVar8 = (double)FUN_1416940c0(&local_70);
  }
  uVar5 = CONCAT44(uVar9,(float)dVar8);
  fVar6 = (float)FUN_1416cd800(_DAT_14198a994,uVar5);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  local_104 = 0;
  local_110 = (double)(fVar6 + _DAT_141981f80);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  FUN_1416cfae0(param_1,DAT_1420d5d08,0x80000000,&local_110);
  local_128 = 0xb;
  FUN_1416cea80(param_1,DAT_1420d59f8,0x80000000,&local_c0,0,0);
  FUN_1416cea80(param_1,DAT_1420d5a08,0x80000000,&local_b0,0,0);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = *puVar2;
  }
  else {
    uVar5 = FUN_1416940c0(puVar2);
  }
  local_90 = (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ DAT_141982e90._4_4_,
                              (uint)uVar5 ^ (uint)DAT_141982e90);
  local_84 = 0;
  FUN_140001a50(&local_80,&local_90,0x1b);
  local_54 = local_74;
  local_58 = local_78;
  if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
    local_60 = local_80;
  }
  else {
    FUN_140a3b860(&local_60,&local_80);
  }
  FUN_140003ca0(&local_60,&local_c0);
  local_64 = local_54;
  local_68 = local_58;
  if ((0x46U >> (local_54 & 0x1f) & 1) == 0) {
    local_70 = local_60;
  }
  else {
    FUN_140a3b860(&local_70,&local_60);
  }
  FUN_140003ca0(&local_70,&local_b0);
  dVar8 = local_70;
  if ((local_64 & 0xffffff) != 0) {
    dVar8 = (double)FUN_1416940c0(&local_70);
  }
  fVar6 = (float)FUN_1416cd880(_DAT_14198a994,CONCAT44(uVar9,(float)dVar8));
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  local_f4 = 0;
  local_100 = (double)(fVar6 + _DAT_141981f80);
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  FUN_1416cfae0(param_1,DAT_1420d5d18,0x80000000,&local_100);
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
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
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  DAT_142182d78 = (undefined8 *)local_138;
  return;
}


