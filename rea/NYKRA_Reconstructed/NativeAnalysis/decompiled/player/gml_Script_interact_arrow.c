// Function: gml_Script_interact_arrow @ 0x1400d6da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_interact_arrow
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 in_XMM1_Qa;
  undefined4 uVar10;
  uint in_stack_fffffffffffffdc8;
  uint uVar11;
  ulonglong in_stack_fffffffffffffdd0;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 *local_208 [4];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a0;
  char *local_198;
  undefined4 local_190;
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
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  
  uVar10 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_70 = 0xfffffffffffffffe;
  local_198 = "gml_Script_interact_arrow";
  local_190 = 0;
  local_1a0 = DAT_142182d78;
  DAT_142182d78 = &local_1a0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
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
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18d98);
  local_88 = (ulonglong)(uint)local_88;
  local_90 = 0;
  local_b0 = (ulonglong)(uint)local_b0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dce10);
  local_1b8 = 0;
  uStack_1b0 = 0;
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  in_stack_fffffffffffffdc8 = in_stack_fffffffffffffdc8 & 0xffffff00;
  FUN_1416d0010(0x40,0x18836,0x80000000,&local_1b8,in_stack_fffffffffffffdc8,
                in_stack_fffffffffffffdd0);
  local_74 = 0;
  local_80 = 1.0;
  iVar1 = FUN_1416d9df0(&local_1b8,&local_80,DAT_1420f6b08,0);
  if (iVar1 != 0) goto LAB_1400d747f;
  local_a8 = 0.0;
  uStack_a0 = 0;
  FUN_1416d0010(0x40,0x18df5,0x80000000,&local_a8,in_stack_fffffffffffffdc8 & 0xffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  local_74 = 0;
  local_80 = 0.0;
  iVar1 = FUN_1416d9df0(&local_a8,&local_80,DAT_1420f6b08,0);
  if (iVar1 != 0) goto LAB_1400d747f;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  FUN_1416ab670(0x40,DAT_1420d58e8,0x80000000,&local_f8);
  FUN_1416ab670(0x40,DAT_1420d58f8,0x80000000,&local_e8);
  if (param_4 < 1) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_148,puVar5);
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  local_1e8 = &local_148;
  FUN_1400019a0(&local_138,puVar5);
  local_1e0 = &local_138;
  FUN_1400019a0(&local_128,&local_f8);
  local_1d8 = &local_128;
  FUN_1400019a0(&local_118,&local_e8);
  if (param_4 < 3) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  local_1d0 = &local_118;
  uVar3 = FUN_1416ab210(param_1,param_2,&local_90,4,DAT_1420da150,&local_1e8);
  iVar1 = FUN_1416d9df0(uVar3,puVar5,DAT_1420f6b08,1);
  if ((iVar1 == -2) || (-1 < iVar1)) goto LAB_1400d747f;
  local_190 = 10;
  if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0x500000000;
  FUN_140002730(&local_108,&DAT_1420b2e00);
  ppuVar12 = local_1c8;
  uVar11 = DAT_1420da090;
  local_1c8[0] = &local_108;
  FUN_1416ab210(param_1,param_2,&local_b8,1,DAT_1420da090,ppuVar12);
  local_190 = 0xb;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_1416cea80(param_1,DAT_1420d5b68,0x80000000,&local_d8,uVar11 & 0xffffff00,uVar13);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  pdVar4 = (double *)&DAT_1420b1000;
  if (3 < param_4) {
    pdVar4 = (double *)param_5[3];
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar4;
  }
  else {
    dVar7 = (double)FUN_1416940c0();
  }
  FUN_140001a50(&local_a8,uVar2,0x309);
  dVar8 = local_a8;
  if ((uStack_a0 & 0xffffff00000000) != 0) {
    dVar8 = (double)FUN_1416940c0(&local_a8);
  }
  fVar6 = (float)FUN_1416cd880(_DAT_1419835ec,CONCAT44(uVar10,(float)dVar8));
  FUN_140017bd0(&local_c8,&local_d8,6);
  local_74 = local_bc;
  local_78 = local_c0;
  if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
    local_80 = local_c8;
  }
  else {
    FUN_1400d7d70(&local_80,&local_c8);
  }
  FUN_140003f30(&local_80,(double)fVar6);
  if ((local_74 & 0xffffff) == 0) {
    dVar8 = local_80;
    if (0 < param_4) goto LAB_1400d7335;
LAB_1400d7356:
    pdVar4 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_1400d7342;
LAB_1400d7366:
    dVar9 = *pdVar4;
  }
  else {
    dVar8 = (double)FUN_1416940c0(&local_80);
    if (param_4 < 1) goto LAB_1400d7356;
LAB_1400d7335:
    pdVar4 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) goto LAB_1400d7366;
LAB_1400d7342:
    dVar9 = (double)FUN_1416940c0();
  }
  FUN_1416b84f0(param_1,0xd2,0,(float)dVar9,(float)dVar8,CONCAT44(uVar14,0x3f800000),0x3f800000,
                0xc2340000,(int)(longlong)dVar7,0x3f800000);
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  local_190 = 0xc;
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  local_90 = 0;
  local_88 = 0x500000000;
  FUN_140002730(&local_188,&DAT_14217f400);
  local_208[0] = &local_188;
  FUN_1416ab210(param_1,param_2,&local_90,1,DAT_1420da090,local_208);
LAB_1400d747f:
  if ((0x46U >> (local_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
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
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_188);
  }
  DAT_142182d78 = (undefined8 *)local_1a0;
  return param_3;
}


