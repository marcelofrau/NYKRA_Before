// Function: gml_Object_oMal_bg_leaves_fg_Draw_0 @ 0x140a41c60

void gml_Object_oMal_bg_leaves_fg_Draw_0(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar11;
  uint in_stack_fffffffffffffd98;
  uint in_stack_fffffffffffffda0;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  uint local_1f4;
  undefined8 local_1f0;
  uint local_1e4;
  undefined8 local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c4;
  undefined8 local_1c0;
  uint local_1b4;
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
  double local_e0;
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
  
  local_90 = 0xfffffffffffffffe;
  local_230 = "gml_Object_oMal_bg_leaves_fg_Draw_0";
  local_238 = DAT_142182d78;
  DAT_142182d78 = &local_238;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
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
  local_228 = 2;
  DAT_142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x186d1/*var:_x*/);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x186d2/*var:_y*/);
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffff00;
  in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ad8/*sprite_index*/,0x80000000,&local_e0,in_stack_fffffffffffffd98,
                in_stack_fffffffffffffda0);
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffff00;
  in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5ae8/*image_index*/,0x80000000,&local_d0,in_stack_fffffffffffffd98,
                in_stack_fffffffffffffda0);
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffff00;
  in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5d08/*image_xscale*/,0x80000000,&local_c0,in_stack_fffffffffffffd98,
                in_stack_fffffffffffffda0);
  in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffff00;
  in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffff00;
  FUN_1416cea80(param_1,DAT_1420d5d18/*image_yscale*/,0x80000000,&local_b0,in_stack_fffffffffffffd98,
                in_stack_fffffffffffffda0);
  FUN_1416cea80(param_1,DAT_1420d5cf8/*image_angle*/,0x80000000,&local_a0,in_stack_fffffffffffffd98 & 0xffffff00,
                in_stack_fffffffffffffda0 & 0xffffff00);
  if ((local_94 & 0xffffff) == 0) {
    uVar4 = (undefined4)local_a0;
    uVar12 = (undefined4)((ulonglong)local_a0 >> 0x20);
  }
  else {
    uVar10 = FUN_1416940c0(&local_a0);
    uVar4 = (undefined4)uVar10;
    uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  if ((local_a4 & 0xffffff) == 0) {
    uVar5 = (undefined4)local_b0;
    uVar13 = (undefined4)((ulonglong)local_b0 >> 0x20);
  }
  else {
    uVar10 = FUN_1416940c0(&local_b0);
    uVar5 = (undefined4)uVar10;
    uVar13 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  if ((local_b4 & 0xffffff) == 0) {
    uVar6 = (undefined4)local_c0;
    uVar14 = (undefined4)((ulonglong)local_c0 >> 0x20);
    uVar1 = *(uint *)((longlong)puVar3 + 0xc);
  }
  else {
    uVar10 = FUN_1416940c0(&local_c0);
    uVar6 = (undefined4)uVar10;
    uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = *(uint *)((longlong)puVar3 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar3;
    uVar15 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
  }
  else {
    uVar10 = FUN_1416940c0(puVar3);
    uVar7 = (undefined4)uVar10;
    uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar2;
    uVar16 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar10 = FUN_1416940c0(puVar2);
    uVar8 = (undefined4)uVar10;
    uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  if ((local_c4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_d0;
    uVar17 = (undefined4)((ulonglong)local_d0 >> 0x20);
    dVar11 = local_e0;
  }
  else {
    uVar10 = FUN_1416940c0(&local_d0);
    uVar9 = (undefined4)uVar10;
    uVar17 = (undefined4)((ulonglong)uVar10 >> 0x20);
    dVar11 = local_e0;
  }
  local_e0 = dVar11;
  if ((local_d4 & 0xffffff) != 0) {
    dVar11 = (double)FUN_1416940c0(&local_e0);
  }
  FUN_1416b84f0(param_1,(longlong)dVar11,(longlong)(double)CONCAT44(uVar17,uVar9),
                (float)(double)CONCAT44(uVar16,uVar8),(float)(double)CONCAT44(uVar15,uVar7),
                (float)(double)CONCAT44(uVar14,uVar6),(float)(double)CONCAT44(uVar13,uVar5),
                (float)(double)CONCAT44(uVar12,uVar4),0xffffff,0x3f800000);
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
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  if ((0x46U >> (local_1c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d0);
  }
  if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e0);
  }
  if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f0);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
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
  DAT_142182d78 = (undefined8 *)local_238;
  return;
}


