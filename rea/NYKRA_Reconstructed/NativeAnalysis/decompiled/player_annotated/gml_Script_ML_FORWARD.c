// Function: gml_Script_ML_FORWARD @ 0x14013c710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_ML_FORWARD(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  uint local_13c;
  undefined8 local_138;
  uint local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  uint local_104;
  ulonglong local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  uint local_c4;
  double local_c0;
  uint local_b4;
  double local_b0;
  uint local_a4;
  double local_a0;
  uint local_94;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_120 = "gml_Script_ML_FORWARD";
  local_118 = 0;
  local_128 = DAT_142182d78;
  DAT_142182d78 = &local_128;
  local_12c = 0xffffff;
  local_138 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_94 = 0xffffff;
  local_a0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_d8 = (ulonglong)(uint)local_d8;
  local_e0 = 0;
  local_e8 = (ulonglong)(uint)local_e8;
  local_f0 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = param_2;
  local_150 = param_3;
  FUN_1416ab750(DAT_1420dd4b0/*gml_Script_ML_FORWARD*/);
  local_118 = 3;
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  uVar2 = DAT_141982e90;
  dVar1 = _DAT_141981e30;
  local_a4 = 0;
  local_b0 = 0.0;
  do {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18acd/*var:ML_outputs*/);
    iVar3 = FUN_1416d9df0(&local_b0,uVar6,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      if ((0x46U >> (local_e8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f0);
      }
      if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e0);
      }
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_148);
      }
      if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_100);
      }
      if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      if ((0x46U >> (local_12c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_138);
      }
      DAT_142182d78 = (undefined8 *)local_128;
      return local_150;
    }
    local_118 = 4;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18784/*var:bias*/);
    uVar4 = FUN_141693b30(&local_b0);
    uVar6 = FUN_14002e450(uVar6,uVar4);
    FUN_1400019a0(&local_100,uVar6);
    local_118 = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18b50/*var:output*/);
    uVar4 = FUN_141693b30(&local_b0);
    plVar7 = (longlong *)FUN_14002e450(uVar6,uVar4);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (*plVar7 != 0)) {
      FUN_1416ba910();
      iVar3 = FUN_1416ba8f0(*plVar7);
      if (iVar3 < 2) {
        uVar4 = FUN_1416ba8f0(*plVar7);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar4);
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)FUN_1416ba8e0(*plVar7,1);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    FUN_1400019a0(&local_148,plVar7);
    local_118 = 6;
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_94 = 0;
    local_a0 = 0.0;
    while( true ) {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18ac7/*var:ML_grid_h*/);
      iVar3 = FUN_1416d9df0(&local_a0,uVar6,DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      local_118 = 7;
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      local_b4 = 0;
      local_c0 = 0.0;
      while( true ) {
        uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18acb/*var:ML_grid_w*/);
        iVar3 = FUN_1416d9df0(&local_c0,uVar6,DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        local_118 = 8;
        if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_e0);
        }
        local_e0 = 0;
        local_d8 = 0x500000000;
        if ((0x46U >> (local_e8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_f0);
        }
        local_f0 = 0;
        local_e8 = 0x500000000;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18ac6/*var:ML_grid*/);
        if ((local_94 & 0xffffff) == 0) {
          uVar4 = SUB84(local_a0,0);
          uVar13 = (undefined4)((ulonglong)local_a0 >> 0x20);
          if ((local_b4 & 0xffffff) == 0) goto LAB_14013cb7e;
LAB_14013cb5a:
          uVar11 = FUN_1416940c0(&local_c0);
          uVar14 = (undefined4)uVar11;
          uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        else {
          uVar11 = FUN_1416940c0(&local_a0);
          uVar4 = (undefined4)uVar11;
          uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
          if ((local_b4 & 0xffffff) != 0) goto LAB_14013cb5a;
LAB_14013cb7e:
          uVar14 = SUB84(local_c0,0);
          uVar15 = (undefined4)((ulonglong)local_c0 >> 0x20);
        }
        uVar5 = FUN_141693b30(uVar6);
        uVar6 = FUN_1416ee9f0(&local_f0,uVar5,(longlong)(double)CONCAT44(uVar15,uVar14),
                              (longlong)(double)CONCAT44(uVar13,uVar4));
        if ((local_94 & 0xffffff) == 0) {
          uVar4 = SUB84(local_a0,0);
          uVar13 = (undefined4)((ulonglong)local_a0 >> 0x20);
          if ((local_b4 & 0xffffff) == 0) goto LAB_14013cbee;
LAB_14013cbc5:
          uVar11 = FUN_1416940c0(&local_c0);
          uVar14 = (undefined4)uVar11;
          uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
        }
        else {
          uVar11 = FUN_1416940c0(&local_a0);
          uVar4 = (undefined4)uVar11;
          uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
          if ((local_b4 & 0xffffff) != 0) goto LAB_14013cbc5;
LAB_14013cbee:
          uVar14 = SUB84(local_c0,0);
          uVar15 = (undefined4)((ulonglong)local_c0 >> 0x20);
        }
        uVar5 = FUN_141693b30(&local_148);
        puVar8 = (ulonglong *)
                 FUN_1416ee9f0(&local_e0,uVar5,(longlong)(double)CONCAT44(uVar15,uVar14),
                               (longlong)(double)CONCAT44(uVar13,uVar4));
        local_c4 = *(uint *)((longlong)puVar8 + 0xc);
        local_c8 = (undefined4)puVar8[1];
        if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
          local_d0 = *puVar8;
        }
        else {
          FUN_14013da90(&local_d0,puVar8);
        }
        FUN_140001fe0(&local_d0,uVar6);
        FUN_140003ca0(&local_100,&local_d0);
        if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d0);
        }
        switch(local_b4 & 0xffffff) {
        case 1:
          local_c0 = (double)FUN_1416940c0(&local_c0);
          local_c0 = local_c0 + dVar1;
          local_b4 = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,&local_c0,&local_c0);
          break;
        case 7:
          local_c0 = (double)CONCAT44(local_c0._4_4_,local_c0._0_4_ + 1);
          break;
        case 10:
          local_c0 = (double)((longlong)local_c0 + 1);
          break;
        case 0xd:
          local_b4 = 0;
        case 0:
          local_c0 = local_c0 + dVar1;
        }
      }
      switch(local_94 & 0xffffff) {
      case 1:
        local_a0 = (double)FUN_1416940c0(&local_a0);
        local_a0 = local_a0 + dVar1;
        local_94 = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_a0,&local_a0);
        break;
      case 7:
        local_a0 = (double)CONCAT44(local_a0._4_4_,local_a0._0_4_ + 1);
        break;
      case 10:
        local_a0 = (double)((longlong)local_a0 + 1);
        break;
      case 0xd:
        local_94 = 0;
      case 0:
        local_a0 = local_a0 + dVar1;
      }
    }
    local_118 = 0xb;
    DAT_142182d90 = (longlong *)0xa58819;
    if ((0x46U >> (local_d8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0x500000000;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b50/*var:output*/);
    uVar12 = local_100;
    if ((local_f4 & 0xffffff) != 0) {
      uVar12 = FUN_1416940c0(&local_100);
    }
    local_d0 = uVar12 ^ uVar2;
    local_c4 = 0;
    FUN_1400019a0(&local_138,&local_d0);
    if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    local_168 = &local_138;
    uVar6 = FUN_1416ab210(param_1,local_158,&local_e0,1,DAT_1420da8a0/*exp*/,&local_168);
    local_104 = 0;
    local_110 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    local_160 = puVar9;
    FUN_140003ca0(&local_110,uVar6);
    local_c4 = 0;
    local_d0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    FUN_140004620(&local_d0,&local_110);
    FUN_1416a8cb0(param_1);
    uVar4 = FUN_141693b30(&local_b0);
    puVar9 = local_160;
    puVar10 = (undefined8 *)FUN_1416924a0(local_160,uVar4);
    FUN_1416a8cb0(*puVar9);
    uVar6 = FUN_1416924a0(puVar10,0);
    FUN_1416a8cb0(*puVar10);
    FUN_1400019a0(uVar6,&local_d0);
    if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_d0);
    }
    if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_110);
    }
    FUN_1416a8c00(3);
    switch(local_a4 & 0xffffff) {
    case 1:
      local_b0 = (double)FUN_1416940c0(&local_b0);
      local_b0 = local_b0 + dVar1;
      local_a4 = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_b0,&local_b0);
      break;
    case 7:
      local_b0 = (double)CONCAT44(local_b0._4_4_,local_b0._0_4_ + 1);
      break;
    case 10:
      local_b0 = (double)((longlong)local_b0 + 1);
      break;
    case 0xd:
      local_a4 = 0;
    case 0:
      local_b0 = local_b0 + dVar1;
    }
  } while( true );
}


