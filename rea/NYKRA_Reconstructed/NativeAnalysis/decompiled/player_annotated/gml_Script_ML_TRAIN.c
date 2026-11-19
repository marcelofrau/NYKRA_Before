// Function: gml_Script_ML_TRAIN @ 0x14013db10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_ML_TRAIN(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_150;
  undefined4 local_148;
  uint local_144;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  double local_128;
  uint local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong *local_c8;
  double local_c0;
  uint local_b4;
  double local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  double local_90;
  uint local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_138 = "gml_Script_ML_TRAIN";
  local_130 = 0;
  local_140 = DAT_142182d78;
  DAT_142182d78 = &local_140;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_110 = (ulonglong)(uint)local_110;
  local_118 = 0;
  local_100 = (ulonglong)(uint)local_100;
  local_108 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd4d0/*gml_Script_ML_TRAIN*/);
  local_130 = 2;
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0x3fc999999999999a/*0.2*/;
  local_130 = 4;
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  dVar1 = _DAT_141981e30;
  local_a4 = 0;
  local_b0 = 0.0;
  do {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18acd/*var:ML_outputs*/);
    iVar2 = FUN_1416d9df0(&local_b0,uVar5,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) {
      if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_118);
      }
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_128);
      }
      if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_e8);
      }
      if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      DAT_142182d78 = (undefined8 *)local_140;
      return param_3;
    }
    local_130 = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18ad4/*var:ML_truth_pattern*/);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,0x18ad3/*var:ML_truth*/);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,0x18b50/*var:output*/);
    uVar3 = FUN_141693b30(&local_b0);
    local_c8 = (longlong *)FUN_14002e450(uVar7,uVar3);
    if (((*(uint *)((longlong)local_c8 + 0xc) & 0xffffff) == 2) && (*local_c8 != 0)) {
      FUN_1416ba910();
      iVar2 = FUN_1416ba8f0(*local_c8);
      if (iVar2 < 1) {
        uVar3 = FUN_1416ba8f0(*local_c8);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",0,uVar3);
        local_c8 = (longlong *)0x0;
      }
      else {
        local_c8 = (longlong *)FUN_1416ba8e0(*local_c8,0);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    uVar3 = FUN_141693b30(uVar5);
    uVar5 = FUN_14002e450(uVar6,uVar3);
    uVar3 = FUN_141693b30(&local_b0);
    puVar8 = (undefined8 *)FUN_14002e450(uVar5,uVar3);
    local_94 = *(uint *)((longlong)puVar8 + 0xc);
    local_98 = *(undefined4 *)(puVar8 + 1);
    if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
      local_a0 = *puVar8;
    }
    else {
      FUN_14013f0c0(&local_a0,puVar8);
    }
    FUN_140003e00(&local_a0,local_c8);
    FUN_1400019a0(&local_e8,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    local_130 = 6;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18b50/*var:output*/);
    uVar3 = FUN_141693b30(&local_b0);
    plVar9 = (longlong *)FUN_14002e450(uVar5,uVar3);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (*plVar9 != 0)) {
      FUN_1416ba910();
      iVar2 = FUN_1416ba8f0(*plVar9);
      if (iVar2 < 2) {
        uVar3 = FUN_1416ba8f0(*plVar9);
        FUN_1416ab080("index out of bounds request %d maximum size is %d",1,uVar3);
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)FUN_1416ba8e0(*plVar9,1);
      }
    }
    else {
      FUN_1416ab080("trying to index variable that is not an array");
    }
    FUN_1400019a0(&local_128,plVar9);
    local_130 = 7;
    if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_84 = 0;
    local_90 = 0.0;
    while( true ) {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18ac7/*var:ML_grid_h*/);
      iVar2 = FUN_1416d9df0(&local_90,uVar5,DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      local_130 = 8;
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      local_b4 = 0;
      local_c0 = 0.0;
      while( true ) {
        uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18acb/*var:ML_grid_w*/);
        iVar2 = FUN_1416d9df0(&local_c0,uVar5,DAT_1420f6b08,1);
        if ((iVar2 == -2) || (-1 < iVar2)) break;
        local_130 = 9;
        if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
        local_118 = 0;
        local_110 = 0x500000000;
        if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_108);
        }
        local_108 = 0;
        local_100 = 0x500000000;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,0x18ac6/*var:ML_grid*/);
        if ((local_84 & 0xffffff) == 0) {
          uVar3 = SUB84(local_90,0);
          uVar11 = (undefined4)((ulonglong)local_90 >> 0x20);
          if ((local_b4 & 0xffffff) != 0) goto LAB_14013e07d;
LAB_14013e09e:
          uVar12 = SUB84(local_c0,0);
          uVar13 = (undefined4)((ulonglong)local_c0 >> 0x20);
        }
        else {
          uVar6 = FUN_1416940c0(&local_90);
          uVar3 = (undefined4)uVar6;
          uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((local_b4 & 0xffffff) == 0) goto LAB_14013e09e;
LAB_14013e07d:
          uVar6 = FUN_1416940c0(&local_c0);
          uVar12 = (undefined4)uVar6;
          uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
        }
        uVar4 = FUN_141693b30(uVar5);
        uVar5 = FUN_1416ee9f0(&local_108,uVar4,(longlong)(double)CONCAT44(uVar13,uVar12),
                              (longlong)(double)CONCAT44(uVar11,uVar3));
        local_cc = local_dc;
        local_d0 = local_e0;
        if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
          local_d8 = local_e8;
        }
        else {
          FUN_14013f0c0(&local_d8,&local_e8);
        }
        FUN_140001fe0(&local_d8,uVar5);
        local_144 = local_cc;
        local_148 = local_d0;
        if ((0x46U >> (local_cc & 0x1f) & 1) == 0) {
          local_150 = local_d8;
        }
        else {
          FUN_14013f0c0(&local_150,&local_d8);
        }
        FUN_140001fe0(&local_150,&local_f8);
        if ((local_84 & 0xffffff) == 0) {
          uVar3 = SUB84(local_90,0);
          uVar11 = (undefined4)((ulonglong)local_90 >> 0x20);
          if ((local_b4 & 0xffffff) != 0) goto LAB_14013e166;
LAB_14013e18e:
          uVar12 = SUB84(local_c0,0);
          uVar13 = (undefined4)((ulonglong)local_c0 >> 0x20);
        }
        else {
          uVar5 = FUN_1416940c0(&local_90);
          uVar3 = (undefined4)uVar5;
          uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((local_b4 & 0xffffff) == 0) goto LAB_14013e18e;
LAB_14013e166:
          uVar5 = FUN_1416940c0(&local_c0);
          uVar12 = (undefined4)uVar5;
          uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        uVar4 = FUN_141693b30(&local_128);
        puVar8 = (undefined8 *)
                 FUN_1416ee9f0(&local_118,uVar4,(longlong)(double)CONCAT44(uVar13,uVar12),
                               (longlong)(double)CONCAT44(uVar11,uVar3));
        local_94 = *(uint *)((longlong)puVar8 + 0xc);
        local_98 = *(undefined4 *)(puVar8 + 1);
        if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
          local_a0 = *puVar8;
        }
        else {
          FUN_14013f0c0(&local_a0,puVar8);
        }
        FUN_140003ca0(&local_a0,&local_150);
        if ((local_84 & 0xffffff) == 0) {
          uVar3 = SUB84(local_90,0);
          uVar11 = (undefined4)((ulonglong)local_90 >> 0x20);
          if ((local_b4 & 0xffffff) != 0) goto LAB_14013e204;
LAB_14013e23e:
          uVar12 = SUB84(local_c0,0);
          uVar13 = (undefined4)((ulonglong)local_c0 >> 0x20);
          dVar10 = local_128;
        }
        else {
          uVar5 = FUN_1416940c0(&local_90);
          uVar3 = (undefined4)uVar5;
          uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((local_b4 & 0xffffff) == 0) goto LAB_14013e23e;
LAB_14013e204:
          uVar5 = FUN_1416940c0(&local_c0);
          uVar12 = (undefined4)uVar5;
          uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
          dVar10 = local_128;
        }
        local_128 = dVar10;
        if ((local_11c & 0xffffff) != 0) {
          dVar10 = (double)FUN_1416940c0(&local_128);
        }
        FUN_1416eeb50((longlong)dVar10,(longlong)(double)CONCAT44(uVar13,uVar12),
                      (longlong)(double)CONCAT44(uVar11,uVar3),&local_a0);
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_150);
        }
        if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d8);
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
      switch(local_84 & 0xffffff) {
      case 1:
        local_90 = (double)FUN_1416940c0(&local_90);
        local_90 = local_90 + dVar1;
        local_84 = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,&local_90,&local_90);
        break;
      case 7:
        local_90 = (double)CONCAT44(local_90._4_4_,local_90._0_4_ + 1);
        break;
      case 10:
        local_90 = (double)((longlong)local_90 + 1);
        break;
      case 0xd:
        local_84 = 0;
      case 0:
        local_90 = local_90 + dVar1;
      }
    }
    local_130 = 0xc;
    DAT_142182d90 = (longlong *)0xa68900;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18784/*var:bias*/);
    local_94 = local_dc;
    local_98 = local_e0;
    if ((0x46U >> (local_dc & 0x1f) & 1) == 0) {
      local_a0 = local_e8;
    }
    else {
      FUN_14013f0c0(&local_a0,&local_e8);
    }
    FUN_140001fe0(&local_a0,&local_f8);
    FUN_1416a8cb0(param_1);
    uVar3 = FUN_141693b30(&local_b0);
    uVar5 = FUN_1416924a0(puVar8,uVar3);
    FUN_1416a8cb0(*puVar8);
    FUN_140003ca0(uVar5,&local_a0);
    if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a0);
    }
    FUN_1416a8c00(2);
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


