// Function: gml_Script_draw_rectangle_view @ 0x14003ee60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_rectangle_view
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [12];
  uint local_d4;
  double local_d0;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_f0 = "gml_Script_draw_rectangle_view";
  local_e8 = 0;
  local_f8 = DAT_142182d78;
  DAT_142182d78 = &local_f8;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  DAT_142182d90 = param_1;
  puVar2 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885e);
  uVar3 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885f);
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885d);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x187f1);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc830);
  if (param_4 < 2) {
    puVar6 = &DAT_1420b1000;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  local_84 = 0;
  local_90 = 0;
  uVar15 = DAT_1420f6b08;
  iVar1 = FUN_1416d9df0(puVar6,&local_90,DAT_1420f6b08,1);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (iVar1 < 1) goto LAB_14003f222;
  local_e8 = 4;
  if (param_4 < 1) {
    pdVar7 = (double *)&DAT_1420b1000;
    if ((DAT_1420b100c & 0xffffff) != 0) goto LAB_14003efae;
LAB_14003efc5:
    dVar11 = *pdVar7;
  }
  else {
    pdVar7 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) goto LAB_14003efc5;
LAB_14003efae:
    dVar11 = (double)FUN_1416940c0();
  }
  FUN_1416f15a0((longlong)dVar11);
  local_e8 = 5;
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
  local_e8 = 6;
  local_b4 = 0;
  local_c0 = 0x3ff0000000000000;
  FUN_140003ca0(&local_c0,uVar3);
  local_84 = local_b4;
  local_88 = local_b8;
  if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
    local_90 = local_c0;
  }
  else {
    FUN_14003f9e0(&local_90,&local_c0);
  }
  FUN_140003ca0(&local_90,uVar5);
  if ((local_84 & 0xffffff) == 0) {
    uVar8 = (undefined4)local_90;
    uVar12 = (undefined4)((ulonglong)local_90 >> 0x20);
  }
  else {
    uVar5 = FUN_1416940c0(&local_90);
    uVar8 = (undefined4)uVar5;
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_94 = *(uint *)((longlong)puVar2 + 0xc);
  local_98 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_a0 = *puVar2;
  }
  else {
    FUN_14003f9e0(&local_a0,puVar2);
  }
  FUN_140003ca0(&local_a0,uVar4);
  local_a4 = local_94;
  local_a8 = local_98;
  if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
    local_b0 = local_a0;
  }
  else {
    FUN_14003f9e0(&local_b0,&local_a0);
  }
  FUN_140001c50(&local_b0,1);
  if ((local_a4 & 0xffffff) == 0) {
    uVar9 = (undefined4)local_b0;
    uVar13 = (undefined4)((ulonglong)local_b0 >> 0x20);
  }
  else {
    uVar4 = FUN_1416940c0(&local_b0);
    uVar9 = (undefined4)uVar4;
    uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  FUN_140017bd0(local_e0,uVar3,1);
  if ((local_d4 & 0xffffff) == 0) {
    uVar10 = (undefined4)local_e0._0_8_;
    uVar14 = SUB84(local_e0._0_8_,4);
  }
  else {
    uVar3 = FUN_1416940c0(local_e0);
    uVar10 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  FUN_140017bd0(&local_d0,puVar2,1);
  if ((local_c4 & 0xffffff) != 0) {
    local_d0 = (double)FUN_1416940c0(&local_d0);
  }
  FUN_1416f1520((float)local_d0,(float)(double)CONCAT44(uVar14,uVar10),
                CONCAT44(uVar16,(float)(double)CONCAT44(uVar13,uVar9)),
                (float)(double)CONCAT44(uVar12,uVar8),0);
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(local_e0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_e8 = 7;
  FUN_1416f15a0(0xffffff);
  local_e8 = 8;
  FUN_1416f1550(_DAT_141981f80);
LAB_14003f222:
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_118);
  }
  DAT_142182d78 = (undefined8 *)local_f8;
  return param_3;
}


