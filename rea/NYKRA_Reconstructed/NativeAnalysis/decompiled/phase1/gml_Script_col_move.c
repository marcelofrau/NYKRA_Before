// Function: gml_Script_col_move @ 0x140061cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_col_move(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 **in_stack_fffffffffffffd78;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 *local_258;
  double *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
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
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_190;
  uint local_184;
  undefined8 local_180;
  uint local_174;
  undefined8 local_170;
  undefined4 local_168;
  uint local_164;
  undefined8 local_160;
  undefined4 local_158;
  uint local_154;
  undefined8 local_150;
  undefined4 local_148;
  uint local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  double local_88;
  uint local_7c;
  byte local_71;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_118 = "gml_Script_col_move";
  local_110 = 0;
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  DAT_142182d90 = param_1;
  uVar4 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18b2c);
  uVar5 = (**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18b2b);
  local_184 = 0xffffff;
  local_190 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_a0 = (ulonglong)(uint)local_a0;
  local_a8 = 0;
  local_128 = (ulonglong)(uint)local_128;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc980);
  local_110 = 2;
  if (param_4 < 1) {
    puVar7 = &DAT_1420b1000;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_e8,puVar7);
  if (param_4 < 2) {
    puVar7 = &DAT_1420b1000;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_1e8,puVar7);
  local_110 = 3;
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  local_7c = 0;
  local_88 = -4.0;
  local_110 = 4;
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  dVar1 = _DAT_141981e30;
  local_ac = 0;
  local_b8 = 0.0;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
    iVar3 = FUN_1416d9df0(&local_b8,uVar4,DAT_1420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_110 = 5;
    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0x500000000;
    FUN_1400019a0(&local_1d8,uVar5);
    local_258 = &local_1d8;
    in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,DAT_1420d9ee0);
    local_250 = &local_b8;
    uVar6 = FUN_1416ab210(param_1,param_2,&local_a8,2,in_stack_fffffffffffffd78,&local_258);
    FUN_1400019a0(&local_88,uVar6);
    iVar3 = FUN_1416d9df0(&local_88,&local_e8,DAT_1420f6b08,0);
    if (iVar3 != 0) {
      dVar8 = local_88;
      if ((local_7c & 0xffffff) != 0) {
        dVar8 = (double)FUN_1416940c0(&local_88);
      }
      cVar2 = FUN_1416f8280(param_1,param_2,(longlong)dVar8);
      uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar2 != '\0') {
        if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a8);
        }
        local_a8 = 0;
        local_a0 = 0x500000000;
        FUN_1416cfc30(&local_88,DAT_1420d5a28,0x80000000,&local_190);
        FUN_1400019a0(&local_1d8,&local_190);
        local_258 = &local_1d8;
        FUN_140002730(&local_1c8,&DAT_1420b2838);
        local_250 = &local_1c8;
        ppuVar11 = &local_258;
        in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,DAT_1420da330);
        uVar6 = FUN_1416ab210(param_1,param_2,&local_a8,2,in_stack_fffffffffffffd78,ppuVar11);
        local_64 = 0;
        local_70 = 0x3ff0000000000000;
        iVar3 = FUN_1416d9df0(uVar6,&local_70,DAT_1420f6b08,0);
        if (iVar3 == 0) {
          local_110 = 6;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
          FUN_1416cfeb0(&local_88,0x18e3d,0x80000000,&local_238,uVar9,uVar12);
          uVar12 = uVar12 & 0xffffffffffffff00;
          in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
          FUN_1416cfeb0(&local_e8,0x18e3b,0x80000000,&local_160,in_stack_fffffffffffffd78,uVar12);
          local_64 = local_154;
          local_68 = local_158;
          if ((0x46U >> (local_154 & 0x1f) & 1) == 0) {
            local_70 = local_160;
          }
          else {
            FUN_140063df0(&local_70,&local_160);
          }
          FUN_140001c50(&local_70,1);
          iVar3 = FUN_1416d9df0(&local_238,&local_70,DAT_1420f6b08,1);
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if (0 < iVar3) {
            uVar12 = uVar12 & 0xffffffffffffff00;
            uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
            FUN_1416cfeb0(&local_88,0x18e3b,0x80000000,&local_228,uVar9,uVar12);
            uVar12 = uVar12 & 0xffffffffffffff00;
            in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
            FUN_1416cfeb0(&local_e8,0x18e3d,0x80000000,&local_218,in_stack_fffffffffffffd78,uVar12);
            FUN_140017bd0(&local_70,&local_218,1);
            iVar3 = FUN_1416d9df0(&local_228,&local_70,DAT_1420f6b08,1);
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if (iVar3 != -2 && iVar3 < 0) {
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
              FUN_1416cfeb0(&local_88,0x18e4d,0x80000000,&local_d8,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_1416cfeb0(&local_88,0x18e26,0x80000000,&local_108,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_1416cfeb0(&local_e8,0x18e4b,0x80000000,&local_c8,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
              FUN_1416cfeb0(&local_e8,0x18e26,0x80000000,&local_180,in_stack_fffffffffffffd78,uVar12
                           );
              local_64 = local_bc;
              local_68 = local_c0;
              if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                local_70 = local_c8;
              }
              else {
                FUN_140063df0(&local_70,&local_c8);
              }
              FUN_140003ca0(&local_70,&local_180);
              local_8c = local_cc;
              local_90 = local_d0;
              if ((0x46U >> (local_cc & 0x1f) & 1) == 0) {
                local_98 = local_d8;
              }
              else {
                FUN_140063df0(&local_98,&local_d8);
              }
              FUN_140003ca0(&local_98,&local_108);
              local_164 = local_8c;
              local_168 = local_90;
              if ((0x46U >> (local_8c & 0x1f) & 1) == 0) {
                local_170 = local_98;
              }
              else {
                FUN_140063df0(&local_170,&local_98);
              }
              FUN_140001c50(&local_170,1);
              iVar3 = FUN_1416d9df0(&local_170,&local_70,DAT_1420f6b08,1);
              if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_170);
              }
              if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_98);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if (-1 < iVar3) {
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                FUN_1416cfeb0(&local_88,0x18e4b,0x80000000,&local_f8,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = uVar9 & 0xffffffffffffff00;
                FUN_1416cfeb0(&local_88,0x18e26,0x80000000,&local_108,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = uVar9 & 0xffffffffffffff00;
                FUN_1416cfeb0(&local_e8,0x18e4d,0x80000000,&local_150,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
                FUN_1416cfeb0(&local_e8,0x18e26,0x80000000,&local_180,in_stack_fffffffffffffd78,
                              uVar12);
                local_64 = local_144;
                local_68 = local_148;
                if ((0x46U >> (local_144 & 0x1f) & 1) == 0) {
                  local_70 = local_150;
                }
                else {
                  FUN_140063df0(&local_70,&local_150);
                }
                FUN_140003ca0(&local_70,&local_180);
                local_8c = local_ec;
                local_90 = local_f0;
                if ((0x46U >> (local_ec & 0x1f) & 1) == 0) {
                  local_98 = local_f8;
                }
                else {
                  FUN_140063df0(&local_98,&local_f8);
                }
                FUN_140003ca0(&local_98,&local_108);
                FUN_140017bd0(&local_170,&local_98,1);
                iVar3 = FUN_1416d9df0(&local_170,&local_70,DAT_1420f6b08,1);
                local_71 = iVar3 < 1;
                if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_170);
                }
                if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_98);
                }
                if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_70);
                }
                if ((iVar3 != -2 & local_71) != 0) {
                  local_110 = 7;
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                  FUN_1416cfeb0(&local_88,0x18e4b,0x80000000,&local_f8,uVar9,uVar12);
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
                  FUN_1416cfeb0(&local_e8,0x18e4b,0x80000000,&local_c8,in_stack_fffffffffffffd78,
                                uVar12);
                  iVar3 = FUN_1416d9df0(&local_f8,&local_c8,DAT_1420f6b08,1);
                  if ((iVar3 != -2) && (iVar3 < 0)) {
                    local_110 = 9;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_e8,0x18e4b,0x80000000,&local_c8,uVar9,uVar12);
                    local_64 = local_bc;
                    local_68 = local_c0;
                    if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
                      local_70 = local_c8;
                    }
                    else {
                      FUN_140063df0(&local_70,&local_c8);
                    }
                    FUN_1400019a0(&local_d8,&local_70);
                    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_70);
                    }
                    FUN_1416d0720(&local_88,0x18e4d,0x80000000,&local_d8);
                    local_110 = 10;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    uVar9 = uVar9 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_88,0x18e4d,0x80000000,&local_d8,uVar9,uVar12);
                    uVar9 = uVar9 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&local_88,0x1877f,0x80000000,&local_208,uVar9,
                                  uVar12 & 0xffffffffffffff00);
                    uVar10 = (undefined4)(uVar9 >> 0x20);
                    local_64 = local_cc;
                    local_68 = local_d0;
                    if ((0x46U >> (local_cc & 0x1f) & 1) == 0) {
                      local_70 = local_d8;
                    }
                    else {
                      FUN_140063df0(&local_70,&local_d8);
                    }
                    FUN_140003e00(&local_70,&local_208);
                    FUN_1400019a0(&local_f8,&local_70);
                    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_70);
                    }
                    FUN_1416d0720(&local_88,0x18e4b,0x80000000,&local_f8);
                    local_110 = 0xb;
                    FUN_1400019a0(&local_108,&local_1e8);
                    FUN_1416d0720(&local_88,0x18e26,0x80000000,&local_108);
                    local_110 = 0xc;
                    if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_140);
                    }
                    local_134 = 0;
                    local_140 = 0x3ff0000000000000;
                    FUN_1416d0720(&local_88,0x18b43,0x80000000,&local_140);
                    if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_a8);
                    }
                    local_a8 = 0;
                    local_a0 = 0x500000000;
                    FUN_1416cfc30(&local_88,DAT_1420d5a28,0x80000000,&local_190);
                    FUN_1400019a0(&local_1d8,&local_190);
                    local_258 = &local_1d8;
                    FUN_140002730(&local_1c8,&DAT_1420b2838);
                    local_250 = &local_1c8;
                    in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,DAT_1420da330);
                    uVar6 = FUN_1416ab210(param_1,param_2,&local_a8,2,in_stack_fffffffffffffd78,
                                          &local_258);
                    local_64 = 0;
                    local_70 = 0x3ff0000000000000;
                    iVar3 = FUN_1416d9df0(uVar6,&local_70,DAT_1420f6b08,0);
                    if (iVar3 == 0) {
                      local_110 = 0xd;
                      if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&local_130);
                      }
                      local_130 = 0;
                      local_128 = 0x500000000;
                      FUN_1416cfc30(&local_88,DAT_1420d59e8,0x80000000,&local_1f8);
                      FUN_1400019a0(&local_1b8,&local_1f8);
                      local_248 = &local_1b8;
                      local_240 = &local_1e8;
                      in_stack_fffffffffffffd78 = &local_248;
                      gml_Script_col_move(param_1,param_2,&local_130,2,in_stack_fffffffffffffd78);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    switch(local_ac & 0xffffff) {
    case 1:
      local_b8 = (double)FUN_1416940c0(&local_b8);
      local_b8 = local_b8 + dVar1;
      local_ac = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_b8,&local_b8);
      break;
    case 7:
      local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
      break;
    case 10:
      local_b8 = (double)((longlong)local_b8 + 1);
      break;
    case 0xd:
      local_ac = 0;
    case 0:
      local_b8 = local_b8 + dVar1;
    }
  }
  if ((0x46U >> (local_128._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a8);
  }
  if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_208);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d8);
  }
  if ((0x46U >> (local_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_218);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
  }
  if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b8);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e8);
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
  DAT_142182d78 = (undefined8 *)local_120;
  return param_3;
}


