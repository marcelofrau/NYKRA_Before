// Function: gml_Script_draw_ui_arrow @ 0x1400d9120

undefined8 *
gml_Script_draw_ui_arrow
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar12;
  undefined4 uVar18;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  uint local_94;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_128 = "gml_Script_draw_ui_arrow";
  local_120 = 0;
  local_130 = DAT_142182d78;
  DAT_142182d78 = &local_130;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dce70);
  local_120 = 7;
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0x500000000;
  uVar18 = 0;
  puVar4 = (undefined8 *)FUN_1416ab210(param_1,param_2,&local_b0,0,DAT_1420da6e0,0);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar4;
    uVar13 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar11 = FUN_1416940c0(puVar4);
    uVar6 = (undefined4)uVar11;
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (4 < param_4) {
    puVar4 = (undefined8 *)param_5[4];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar11 = FUN_1416940c0();
    uVar7 = (undefined4)uVar11;
    uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if (param_4 < 4) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)param_5[3];
  }
  local_b4 = 0;
  local_c0 = 0x4056800000000000;
  FUN_140001fe0(&local_c0,puVar4);
  if (param_4 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  local_94 = 0;
  local_a0 = 0.0;
  iVar2 = FUN_1416d9df0(puVar4,&local_a0,DAT_1420f6b08,0);
  iVar3 = -0x2d;
  if (iVar2 != 0) {
    iVar3 = 0;
  }
  local_94 = 0;
  local_a0 = (double)iVar3;
  FUN_140003e00(&local_a0,&local_c0);
  if ((local_94 & 0xffffff) == 0) {
    uVar8 = SUB84(local_a0,0);
    uVar15 = (undefined4)((ulonglong)local_a0 >> 0x20);
  }
  else {
    uVar11 = FUN_1416940c0(&local_a0);
    uVar8 = (undefined4)uVar11;
    uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (2 < param_4) {
    puVar4 = (undefined8 *)param_5[2];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar4;
    uVar16 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar11 = FUN_1416940c0();
    uVar9 = (undefined4)uVar11;
    uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  puVar4 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar4;
    uVar17 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar11 = FUN_1416940c0();
    uVar10 = (undefined4)uVar11;
    uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1420b1000;
    uVar1 = DAT_1420b100c;
  }
  else {
    pdVar5 = (double *)*param_5;
    uVar1 = *(uint *)((longlong)pdVar5 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
    dVar12 = *pdVar5;
  }
  else {
    dVar12 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,0xd2,(longlong)dVar12,(float)(double)CONCAT44(uVar17,uVar10),
                (float)(double)CONCAT44(uVar16,uVar9),CONCAT44(uVar18,0x3f800000),0x3f800000,
                (float)(double)CONCAT44(uVar15,uVar8),(int)(longlong)(double)CONCAT44(uVar14,uVar7),
                (float)(double)CONCAT44(uVar13,uVar6));
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  DAT_142182d78 = (undefined8 *)local_130;
  return param_3;
}


