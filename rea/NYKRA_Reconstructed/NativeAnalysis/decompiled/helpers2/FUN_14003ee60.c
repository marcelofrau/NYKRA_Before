// Function: FUN_14003ee60 @ 0x14003ee60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14003ee60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [12];
  uint uStack_d4;
  double dStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 uStack_80;

  uStack_80 = 0xfffffffffffffffe;
  puStack_f0 = &UNK_141982b90;
  uStack_e8 = 0;
  uStack_f8 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_f8;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uRam0000000142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885e);
  uVar3 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885f);
  uVar4 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885d);
  uVar5 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187f1);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(uRam00000001420dc830);
  if (param_4 < 2) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined *)param_5[1];
  }
  uStack_84 = 0;
  uStack_90 = 0;
  uVar15 = uRam00000001420f6b08;
  iVar1 = FUN_1416d9df0(puVar6,&uStack_90,uRam00000001420f6b08,1);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (iVar1 < 1) goto code_r0x00014003f222;
  uStack_e8 = 4;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1420b1000;
    if ((uRam00000001420b100c & 0xffffff) != 0) goto code_r0x00014003efae;
code_r0x00014003efc5:
    dVar11 = *pdVar7;
  }
  else {
    pdVar7 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) goto code_r0x00014003efc5;
code_r0x00014003efae:
    dVar11 = (double)FUN_1416940c0();
  }
  func_0x0001416f15a0((longlong)dVar11);
  uStack_e8 = 5;
  pdVar7 = (double *)&DAT_1420b1000;
  if (1 < param_4) {
    pdVar7 = (double *)param_5[1];
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar7;
  }
  else {
    dVar11 = (double)FUN_1416940c0();
  }
  FUN_1416f1550((float)dVar11);
  uStack_e8 = 6;
  uStack_b4 = 0;
  uStack_c0 = 0x3ff0000000000000;
  FUN_140003ca0(&uStack_c0,uVar3);
  uStack_84 = uStack_b4;
  uStack_88 = uStack_b8;
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) == 0) {
    uStack_90 = uStack_c0;
  }
  else {
    FUN_14003f9e0(&uStack_90,&uStack_c0);
  }
  FUN_140003ca0(&uStack_90,uVar5);
  if ((uStack_84 & 0xffffff) == 0) {
    uVar8 = (undefined4)uStack_90;
    uVar12 = (undefined4)((ulonglong)uStack_90 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&uStack_90);
    uVar8 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  uStack_94 = *(uint *)((longlong)puVar2 + 0xc);
  uStack_98 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
    uStack_a0 = *puVar2;
  }
  else {
    FUN_14003f9e0(&uStack_a0,puVar2);
  }
  FUN_140003ca0(&uStack_a0,uVar4);
  uStack_a4 = uStack_94;
  uStack_a8 = uStack_98;
  if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
    uStack_b0 = uStack_a0;
  }
  else {
    FUN_14003f9e0(&uStack_b0,&uStack_a0);
  }
  FUN_140001c50(&uStack_b0,1);
  if ((uStack_a4 & 0xffffff) == 0) {
    uVar9 = (undefined4)uStack_b0;
    uVar13 = (undefined4)((ulonglong)uStack_b0 >> 0x20);
  }
  else {
    uVar4 = FUN_1416940c0(&uStack_b0);
    uVar9 = (undefined4)uVar4;
    uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  FUN_140017bd0(auStack_e0,uVar3,1);
  if ((uStack_d4 & 0xffffff) == 0) {
    uVar10 = auStack_e0._0_4_;
    uVar14 = auStack_e0._4_4_;
  }
  else {
    uVar3 = FUN_1416940c0(auStack_e0);
    uVar10 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  FUN_140017bd0(&dStack_d0,puVar2,1);
  if ((uStack_c4 & 0xffffff) != 0) {
    dStack_d0 = (double)FUN_1416940c0(&dStack_d0);
  }
  FUN_1416f1520((float)dStack_d0,(float)(double)CONCAT44(uVar14,uVar10),
                CONCAT44(uVar16,(float)(double)CONCAT44(uVar13,uVar9)),
                (float)(double)CONCAT44(uVar12,uVar8),0);
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_d0);
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_e0);
  }
  if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
  uStack_e8 = 7;
  func_0x0001416f15a0(0xffffff);
  uStack_e8 = 8;
  FUN_1416f1550(_UNK_141981f80);
code_r0x00014003f222:
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_f8;
  return param_3;
}
