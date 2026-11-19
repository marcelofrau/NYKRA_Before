// Function: gml_Script_mask_set @ 0x1401028c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_mask_set(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar9;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108 [2];
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_90 = "gml_Script_mask_set";
  local_88 = 0;
  local_98 = DAT_142182d78;
  DAT_142182d78 = &local_98;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_78 = (ulonglong)(uint)local_78;
  local_80 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd0d0);
  local_88 = 3;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  FUN_140002730(&local_a8,&DAT_1420b1020);
  local_108[0] = &local_a8;
  FUN_1416ab210(param_1,param_2,&local_80,1,DAT_1420da030,local_108);
  local_88 = 4;
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  FUN_140002730(&local_e8,&DAT_1420b1020);
  local_128 = &local_e8;
  FUN_140002730(&local_d8,&DAT_1420b1020);
  local_120 = &local_d8;
  FUN_140002730(&local_c8,&DAT_1420b1020);
  local_118 = &local_c8;
  FUN_140002730(&local_b8,&DAT_1420b1010);
  local_110 = &local_b8;
  FUN_1416ab210(param_1,param_2,&local_80,4,DAT_1420da790,&local_128);
  local_88 = 5;
  FUN_1416f1550(0);
  local_88 = 6;
  local_ec = 0xd;
  local_f8 = 0;
  uVar2 = FUN_1416927d0(&local_f8);
  puVar3 = &DAT_1420b1000;
  if (3 < param_4) {
    puVar3 = (undefined8 *)param_5[3];
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
    uVar10 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar8 = FUN_1416940c0();
    uVar5 = (undefined4)uVar8;
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  puVar3 = &DAT_1420b1000;
  if (2 < param_4) {
    puVar3 = (undefined8 *)param_5[2];
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar3;
    uVar11 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar8 = FUN_1416940c0();
    uVar6 = (undefined4)uVar8;
    uVar11 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  puVar3 = &DAT_1420b1000;
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar3;
    uVar12 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar8 = FUN_1416940c0();
    uVar7 = (undefined4)uVar8;
    uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1420b1000;
    uVar1 = DAT_1420b100c;
  }
  else {
    pdVar4 = (double *)*param_5;
    uVar1 = *(uint *)((longlong)pdVar4 + 0xc);
  }
  if ((uVar1 & 0xffffff) == 0) {
    dVar9 = *pdVar4;
  }
  else {
    dVar9 = (double)FUN_1416940c0();
  }
  FUN_1416f1520((float)dVar9,(float)(double)CONCAT44(uVar12,uVar7),
                (float)(double)CONCAT44(uVar11,uVar6),(float)(double)CONCAT44(uVar10,uVar5),uVar2);
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_88 = 7;
  FUN_1416f1550(_DAT_141981f80);
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
  }
  DAT_142182d78 = (undefined8 *)local_98;
  return param_3;
}


