// Function: gml_Object_oDoor_Origin_Draw_0 @ 0x140a63590

void gml_Object_oDoor_Origin_Draw_0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar4;
  float fVar7;
  uint in_stack_fffffffffffffe28;
  uint uVar8;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  uint local_1a4;
  undefined8 local_1a0;
  uint local_194;
  undefined8 local_190;
  uint local_184;
  undefined8 local_180;
  uint local_174;
  undefined8 local_170;
  uint local_164;
  undefined8 local_160;
  uint local_154;
  undefined8 local_150;
  uint local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  uint local_e4;
  undefined8 local_e0;
  uint local_d4;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  uint local_74;
  double local_70;
  uint local_64;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_1c0 = "gml_Object_oDoor_Origin_Draw_0";
  local_1b8 = 0;
  local_1c8 = DAT_142182d78;
  DAT_142182d78 = &local_1c8;
  local_64 = 0xffffff;
  local_70 = 0.0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uVar8 = in_stack_fffffffffffffe28 & 0xffffff00;
  DAT_142182d90 = param_1;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_70,uVar8,0);
  uVar8 = uVar8 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_60,uVar8,0);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_50,uVar8 & 0xffffff00,0);
  if ((local_44 & 0xffffff) == 0) {
    uVar1 = (undefined4)local_50;
    uVar5 = (undefined4)((ulonglong)local_50 >> 0x20);
  }
  else {
    uVar3 = FUN_1416940c0(&local_50);
    uVar1 = (undefined4)uVar3;
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_54 & 0xffffff) == 0) {
    uVar2 = (undefined4)local_60;
    uVar6 = (undefined4)((ulonglong)local_60 >> 0x20);
    dVar4 = local_70;
  }
  else {
    uVar3 = FUN_1416940c0(&local_60);
    uVar2 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    dVar4 = local_70;
  }
  local_70 = dVar4;
  if ((local_64 & 0xffffff) != 0) {
    dVar4 = (double)FUN_1416940c0(&local_70);
  }
  fVar7 = (float)(double)CONCAT44(uVar5,uVar1);
  FUN_1416b8480(param_1,(longlong)dVar4,2,(float)(double)CONCAT44(uVar6,uVar2),fVar7);
  local_1b8 = 2;
  uVar8 = (uint)fVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_70,uVar8,0);
  uVar8 = uVar8 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_60,uVar8,0);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_50,uVar8 & 0xffffff00,0);
  if ((local_44 & 0xffffff) == 0) {
    uVar1 = (undefined4)local_50;
    uVar5 = (undefined4)((ulonglong)local_50 >> 0x20);
  }
  else {
    uVar3 = FUN_1416940c0(&local_50);
    uVar1 = (undefined4)uVar3;
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_54 & 0xffffff) == 0) {
    uVar2 = (undefined4)local_60;
    uVar6 = (undefined4)((ulonglong)local_60 >> 0x20);
    dVar4 = local_70;
  }
  else {
    uVar3 = FUN_1416940c0(&local_60);
    uVar2 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    dVar4 = local_70;
  }
  local_70 = dVar4;
  if ((local_64 & 0xffffff) != 0) {
    dVar4 = (double)FUN_1416940c0(&local_70);
  }
  fVar7 = (float)(double)CONCAT44(uVar5,uVar1);
  FUN_1416b8480(param_1,(longlong)dVar4,1,(float)(double)CONCAT44(uVar6,uVar2),fVar7);
  local_1b8 = 4;
  uVar8 = (uint)fVar7 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_70,uVar8,0);
  uVar8 = uVar8 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d58e8/*x*/,0x80000000,&local_60,uVar8,0);
  FUN_1416cea80(param_1,DAT_1420d58f8/*y*/,0x80000000,&local_50,uVar8 & 0xffffff00,0);
  if ((local_44 & 0xffffff) == 0) {
    uVar1 = (undefined4)local_50;
    uVar5 = (undefined4)((ulonglong)local_50 >> 0x20);
  }
  else {
    uVar3 = FUN_1416940c0(&local_50);
    uVar1 = (undefined4)uVar3;
    uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_54 & 0xffffff) == 0) {
    uVar2 = (undefined4)local_60;
    uVar6 = (undefined4)((ulonglong)local_60 >> 0x20);
    dVar4 = local_70;
  }
  else {
    uVar3 = FUN_1416940c0(&local_60);
    uVar2 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    dVar4 = local_70;
  }
  local_70 = dVar4;
  if ((local_64 & 0xffffff) != 0) {
    dVar4 = (double)FUN_1416940c0(&local_70);
  }
  FUN_1416b8480(param_1,(longlong)dVar4,0,(float)(double)CONCAT44(uVar6,uVar2),
                (float)(double)CONCAT44(uVar5,uVar1));
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
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
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
  }
  if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a0);
  }
  if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b0);
  }
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  DAT_142182d78 = (undefined8 *)local_1c8;
  return;
}


