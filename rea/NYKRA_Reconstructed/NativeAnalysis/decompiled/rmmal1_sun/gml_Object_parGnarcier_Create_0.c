// Function: gml_Object_parGnarcier_Create_0 @ 0x14036aeb0

void gml_Object_parGnarcier_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
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
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined1 local_90 [12];
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_c0 = "gml_Object_parGnarcier_Create_0";
  local_c8 = DAT_142182d78;
  DAT_142182d78 = &local_c8;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_68 = CONCAT44(0xffffff,(undefined4)local_68);
  local_70 = 0;
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
  local_b8 = 4;
  DAT_142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c1);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18730);
  uVar6 = FUN_1416cd7b0(0xf,0x15);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar6;
  iVar1 = FUN_1416f82f0(param_1,param_2,500);
  if (iVar1 < 1) {
    local_b8 = 8;
    if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_70 = 0;
    local_68 = 0x500000000;
    FUN_140002730(&local_158,&DAT_1420b56f0);
    local_f8 = &local_158;
    FUN_140002730(&local_148,&DAT_1420b56f0);
    local_f0 = &local_148;
    FUN_140002730(&local_138,&DAT_1420b5700);
    local_e8 = &local_138;
    FUN_140002730(&local_128,&DAT_1420b5710);
    local_e0 = &local_128;
    FUN_1416ab210(param_1,param_2,&local_70,4,DAT_1420da400,&local_f8);
  }
  local_b8 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188c6);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 0xc;
  DAT_142182d90 = (longlong *)0x109fa;
  uVar6 = FUN_1416cd7b0(0x1e,0x78);
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  local_10c = 0;
  local_118 = uVar6;
  FUN_1416cfae0(param_1,DAT_1420d5a48,0,&local_118);
  local_b8 = 0x1e;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar8 = 0;
  uVar7 = DAT_1420dad60;
  FUN_1416ab210(param_1,param_2,&local_70,0,DAT_1420dad60,0);
  local_b8 = 0x1f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c0b);
  uVar6 = FUN_1416cdc60(0xc076800000000000,0x4076800000000000);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar6;
  local_b8 = 0x20;
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  local_fc = 0;
  local_108 = 0xc059000000000000;
  FUN_1416cfae0(param_1,DAT_1420d5a18,0x80000000,&local_108);
  local_b8 = 0x21;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_b0,uVar7 & 0xffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_b0);
  uVar7 = DAT_1420da230;
  ppuVar9 = &local_f8;
  local_f8 = &local_158;
  uVar6 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da230,&local_f8);
  FUN_1400019a0(&local_b0,uVar6);
  FUN_1416cfae0(param_1,DAT_1420d58e8,0x80000000,&local_b0);
  local_b8 = 0x22;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_a0,uVar7 & 0xffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_a0);
  uVar7 = DAT_1420da230;
  ppuVar9 = &local_f8;
  local_f8 = &local_158;
  uVar6 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da230,&local_f8);
  FUN_1400019a0(&local_a0,uVar6);
  FUN_1416cfae0(param_1,DAT_1420d58f8,0x80000000,&local_a0);
  local_b8 = 0x23;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1899e);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 0x24;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b);
  uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_b0,uVar7,uVar8);
  FUN_1416cea80(param_1,DAT_1420d5d28,0x80000000,&local_d8,uVar7 & 0xffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_d8);
  uVar7 = DAT_1420da490;
  ppuVar9 = &local_f8;
  local_f8 = &local_158;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da490,&local_f8);
  FUN_140004520(local_90,uVar3,0x4000000000000000);
  local_74 = local_a4;
  local_78 = local_a8;
  if ((0x46U >> (local_a4 & 0x1f) & 1) == 0) {
    local_80 = local_b0;
  }
  else {
    FUN_14036ce10(&local_80,&local_b0);
  }
  FUN_140003e00(&local_80,local_90);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_90);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x25;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b);
  uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_a0,uVar7,uVar8);
  FUN_1416cea80(param_1,DAT_1420d5d28,0x80000000,&local_d8,uVar7 & 0xffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_d8);
  uVar7 = DAT_1420da600;
  ppuVar9 = &local_f8;
  local_f8 = &local_158;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da600,&local_f8);
  FUN_140004520(local_90,uVar3,0x4000000000000000);
  local_74 = local_94;
  local_78 = local_98;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_80 = local_a0;
  }
  else {
    FUN_14036ce10(&local_80,&local_a0);
  }
  FUN_140003e00(&local_80,local_90);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_90);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x26;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d);
  uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_b0,uVar7,uVar8);
  FUN_1416cea80(param_1,DAT_1420d5d28,0x80000000,&local_d8,uVar7 & 0xffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_d8);
  uVar7 = DAT_1420da490;
  ppuVar9 = &local_f8;
  local_f8 = &local_158;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da490,&local_f8);
  FUN_140004520(local_90,uVar3,0x4000000000000000);
  local_74 = local_a4;
  local_78 = local_a8;
  if ((0x46U >> (local_a4 & 0x1f) & 1) == 0) {
    local_80 = local_b0;
  }
  else {
    FUN_14036ce10(&local_80,&local_b0);
  }
  FUN_140003ca0(&local_80,local_90);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_90);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x27;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d);
  uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_a0,uVar7,uVar8);
  FUN_1416cea80(param_1,DAT_1420d5d28,0x80000000,&local_d8,uVar7 & 0xffffff00,
                uVar8 & 0xffffffffffffff00);
  FUN_1400019a0(&local_158,&local_d8);
  local_f8 = &local_158;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_70,1,DAT_1420da600,&local_f8);
  FUN_140004520(local_90,uVar3,0x4000000000000000);
  local_74 = local_94;
  local_78 = local_98;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_80 = local_a0;
  }
  else {
    FUN_14036ce10(&local_80,&local_a0);
  }
  FUN_140003ca0(&local_80,local_90);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,&local_80);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_90);
  }
  FUN_1416a8c00(1);
  local_b8 = 0x38;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x18900);
  FUN_140002730(&local_158,&DAT_1420b5720);
  local_f8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b56f0);
  local_f0 = &local_148;
  uVar3 = FUN_1416cd660(&local_70,2,&local_f8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar6,uVar3);
  FUN_1416a8c00(1);
  local_b8 = 0x39;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18901);
  FUN_140002730(&local_158,&DAT_1420b5720);
  local_f8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b56f0);
  local_f0 = &local_148;
  uVar4 = FUN_1416cd660(&local_70,2,&local_f8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar4);
  FUN_1416a8c00(1);
  local_b8 = 0x3a;
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  local_70 = 0;
  local_68 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18c0d);
  FUN_140002730(&local_158,&DAT_142180198);
  local_f8 = &local_158;
  FUN_140002730(&local_148,&DAT_1420b5730);
  local_f0 = &local_148;
  FUN_140002730(&local_138,&DAT_1420b5740);
  local_e8 = &local_138;
  FUN_140002730(&local_128,&DAT_1420b5750);
  local_e0 = &local_128;
  uVar5 = FUN_1416cd660(&local_70,4,&local_f8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  FUN_1416a8c00(1);
  local_b8 = 0x3b;
  FUN_1400019a0(&local_188,uVar6);
  FUN_1416cfae0(param_1,DAT_1420d5d08,0x80000000,&local_188);
  local_b8 = 0x3c;
  FUN_1400019a0(&local_178,uVar3);
  FUN_1416cfae0(param_1,DAT_1420d5d18,0x80000000,&local_178);
  local_b8 = 0x3d;
  FUN_1400019a0(&local_168,uVar4);
  FUN_1416cfae0(param_1,DAT_1420d5cf8,0x80000000,&local_168);
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
  if ((0x46U >> (local_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
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
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_138);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (local_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_158);
  }
  DAT_142182d78 = (undefined8 *)local_c8;
  return;
}


