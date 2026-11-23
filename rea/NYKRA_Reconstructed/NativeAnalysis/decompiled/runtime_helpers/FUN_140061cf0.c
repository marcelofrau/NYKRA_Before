// Function: FUN_140061cf0 @ 0x140061cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140061cf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
             undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 **in_stack_fffffffffffffd78;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 *puStack_258;
  double *pdStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  double dStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_190;
  uint uStack_184;
  undefined8 uStack_180;
  uint uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  uint uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  uint uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined8 uStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  double dStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  double dStack_88;
  uint uStack_7c;
  byte bStack_71;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_118 = &UNK_141982dc6;
  uStack_110 = 0;
  uStack_120 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_120;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  dStack_1c8 = 0.0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_7c = 0xffffff;
  dStack_88 = 0.0;
  uStack_ac = 0xffffff;
  dStack_b8 = 0.0;
  uRam0000000142182d90 = param_1;
  uVar4 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18b2c);
  uVar5 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18b2b);
  uStack_184 = 0xffffff;
  uStack_190 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_154 = 0xffffff;
  uStack_160 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_174 = 0xffffff;
  uStack_180 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_144 = 0xffffff;
  uStack_150 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_134 = 0xffffff;
  uStack_140 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_a0 = (ulonglong)(uint)uStack_a0;
  uStack_a8 = 0;
  uStack_128 = (ulonglong)(uint)uStack_128;
  uStack_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(uRam00000001420dc980);
  uStack_110 = 2;
  if (param_4 < 1) {
    puVar7 = &DAT_1420b1000;
  }
  else {
    puVar7 = (undefined *)*param_5;
  }
  FUN_1400019a0(&uStack_e8,puVar7);
  if (param_4 < 2) {
    puVar7 = &DAT_1420b1000;
  }
  else {
    puVar7 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_1e8,puVar7);
  uStack_110 = 3;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  uStack_7c = 0;
  dStack_88 = -4.0;
  uStack_110 = 4;
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_b8);
  }
  dVar1 = _UNK_141981e30;
  uStack_ac = 0;
  dStack_b8 = 0.0;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
    iVar3 = FUN_1416d9df0(&dStack_b8,uVar4,uRam00000001420f6b08,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    uStack_110 = 5;
    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0x500000000;
    FUN_1400019a0(&uStack_1d8,uVar5);
    puStack_258 = &uStack_1d8;
    in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,uRam00000001420d9ee0);
    pdStack_250 = &dStack_b8;
    uVar6 = FUN_1416ab210(param_1,param_2,&uStack_a8,2,in_stack_fffffffffffffd78,&puStack_258);
    FUN_1400019a0(&dStack_88,uVar6);
    iVar3 = FUN_1416d9df0(&dStack_88,&uStack_e8,uRam00000001420f6b08,0);
    if (iVar3 != 0) {
      if ((uStack_7c & 0xffffff) == 0) {
        dVar8 = dStack_88;
      }
      else {
        dVar8 = (double)FUN_1416940c0(&dStack_88);
      }
      cVar2 = FUN_1416f8280(param_1,param_2,(longlong)dVar8);
      uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
      if (cVar2 != '\0') {
        if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a8);
        }
        uStack_a8 = 0;
        uStack_a0 = 0x500000000;
        FUN_1416cfc30(&dStack_88,uRam00000001420d5a28,0x80000000,&uStack_190);
        FUN_1400019a0(&uStack_1d8,&uStack_190);
        puStack_258 = &uStack_1d8;
        FUN_140002730(&dStack_1c8,0x1420b2838);
        pdStack_250 = &dStack_1c8;
        ppuVar11 = &puStack_258;
        in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,uRam00000001420da330);
        uVar6 = FUN_1416ab210(param_1,param_2,&uStack_a8,2,in_stack_fffffffffffffd78,ppuVar11);
        uStack_64 = 0;
        uStack_70 = 0x3ff0000000000000;
        iVar3 = FUN_1416d9df0(uVar6,&uStack_70,uRam00000001420f6b08,0);
        if (iVar3 == 0) {
          uStack_110 = 6;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
          FUN_1416cfeb0(&dStack_88,0x18e3d,0x80000000,&uStack_238,uVar9,uVar12);
          uVar12 = uVar12 & 0xffffffffffffff00;
          in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
          FUN_1416cfeb0(&uStack_e8,0x18e3b,0x80000000,&uStack_160,in_stack_fffffffffffffd78,uVar12);
          uStack_64 = uStack_154;
          uStack_68 = uStack_158;
          if ((0x46U >> (uStack_154 & 0x1f) & 1) == 0) {
            uStack_70 = uStack_160;
          }
          else {
            FUN_140063df0(&uStack_70,&uStack_160);
          }
          FUN_140001c50(&uStack_70,1);
          iVar3 = FUN_1416d9df0(&uStack_238,&uStack_70,uRam00000001420f6b08,1);
          if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_70);
          }
          if (0 < iVar3) {
            uVar12 = uVar12 & 0xffffffffffffff00;
            uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
            FUN_1416cfeb0(&dStack_88,0x18e3b,0x80000000,&uStack_228,uVar9,uVar12);
            uVar12 = uVar12 & 0xffffffffffffff00;
            in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
            FUN_1416cfeb0(&uStack_e8,0x18e3d,0x80000000,&uStack_218,in_stack_fffffffffffffd78,uVar12
                         );
            FUN_140017bd0(&uStack_70,&uStack_218,1);
            iVar3 = FUN_1416d9df0(&uStack_228,&uStack_70,uRam00000001420f6b08,1);
            if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_70);
            }
            if (iVar3 != -2 && iVar3 < 0) {
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
              FUN_1416cfeb0(&dStack_88,0x18e4d,0x80000000,&uStack_d8,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_1416cfeb0(&dStack_88,0x18e26,0x80000000,&uStack_108,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xffffffffffffff00;
              FUN_1416cfeb0(&uStack_e8,0x18e4b,0x80000000,&uStack_c8,uVar9,uVar12);
              uVar12 = uVar12 & 0xffffffffffffff00;
              in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
              FUN_1416cfeb0(&uStack_e8,0x18e26,0x80000000,&uStack_180,in_stack_fffffffffffffd78,
                            uVar12);
              uStack_64 = uStack_bc;
              uStack_68 = uStack_c0;
              if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
                uStack_70 = uStack_c8;
              }
              else {
                FUN_140063df0(&uStack_70,&uStack_c8);
              }
              FUN_140003ca0(&uStack_70,&uStack_180);
              uStack_8c = uStack_cc;
              uStack_90 = uStack_d0;
              if ((0x46U >> (uStack_cc & 0x1f) & 1) == 0) {
                uStack_98 = uStack_d8;
              }
              else {
                FUN_140063df0(&uStack_98,&uStack_d8);
              }
              FUN_140003ca0(&uStack_98,&uStack_108);
              uStack_164 = uStack_8c;
              uStack_168 = uStack_90;
              if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
                uStack_170 = uStack_98;
              }
              else {
                FUN_140063df0(&uStack_170,&uStack_98);
              }
              FUN_140001c50(&uStack_170,1);
              iVar3 = FUN_1416d9df0(&uStack_170,&uStack_70,uRam00000001420f6b08,1);
              if ((0x46U >> (uStack_164 & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_170);
              }
              if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_98);
              }
              if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_70);
              }
              if (-1 < iVar3) {
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                FUN_1416cfeb0(&dStack_88,0x18e4b,0x80000000,&uStack_f8,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = uVar9 & 0xffffffffffffff00;
                FUN_1416cfeb0(&dStack_88,0x18e26,0x80000000,&uStack_108,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                uVar9 = uVar9 & 0xffffffffffffff00;
                FUN_1416cfeb0(&uStack_e8,0x18e4d,0x80000000,&uStack_150,uVar9,uVar12);
                uVar12 = uVar12 & 0xffffffffffffff00;
                in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
                FUN_1416cfeb0(&uStack_e8,0x18e26,0x80000000,&uStack_180,in_stack_fffffffffffffd78,
                              uVar12);
                uStack_64 = uStack_144;
                uStack_68 = uStack_148;
                if ((0x46U >> (uStack_144 & 0x1f) & 1) == 0) {
                  uStack_70 = uStack_150;
                }
                else {
                  FUN_140063df0(&uStack_70,&uStack_150);
                }
                FUN_140003ca0(&uStack_70,&uStack_180);
                uStack_8c = uStack_ec;
                uStack_90 = uStack_f0;
                if ((0x46U >> (uStack_ec & 0x1f) & 1) == 0) {
                  uStack_98 = uStack_f8;
                }
                else {
                  FUN_140063df0(&uStack_98,&uStack_f8);
                }
                FUN_140003ca0(&uStack_98,&uStack_108);
                FUN_140017bd0(&uStack_170,&uStack_98,1);
                iVar3 = FUN_1416d9df0(&uStack_170,&uStack_70,uRam00000001420f6b08,1);
                bStack_71 = iVar3 < 1;
                if ((0x46U >> (uStack_164 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_170);
                }
                if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_98);
                }
                if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_70);
                }
                if ((iVar3 != -2 & bStack_71) != 0) {
                  uStack_110 = 7;
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                  FUN_1416cfeb0(&dStack_88,0x18e4b,0x80000000,&uStack_f8,uVar9,uVar12);
                  uVar12 = uVar12 & 0xffffffffffffff00;
                  in_stack_fffffffffffffd78 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
                  FUN_1416cfeb0(&uStack_e8,0x18e4b,0x80000000,&uStack_c8,in_stack_fffffffffffffd78,
                                uVar12);
                  iVar3 = FUN_1416d9df0(&uStack_f8,&uStack_c8,uRam00000001420f6b08,1);
                  if ((iVar3 != -2) && (iVar3 < 0)) {
                    uStack_110 = 9;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    uVar9 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&uStack_e8,0x18e4b,0x80000000,&uStack_c8,uVar9,uVar12);
                    uStack_64 = uStack_bc;
                    uStack_68 = uStack_c0;
                    if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
                      uStack_70 = uStack_c8;
                    }
                    else {
                      FUN_140063df0(&uStack_70,&uStack_c8);
                    }
                    FUN_1400019a0(&uStack_d8,&uStack_70);
                    if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_70);
                    }
                    FUN_1416d0720(&dStack_88,0x18e4d,0x80000000,&uStack_d8);
                    uStack_110 = 10;
                    uVar12 = uVar12 & 0xffffffffffffff00;
                    uVar9 = uVar9 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_88,0x18e4d,0x80000000,&uStack_d8,uVar9,uVar12);
                    uVar9 = uVar9 & 0xffffffffffffff00;
                    FUN_1416cfeb0(&dStack_88,0x1877f,0x80000000,&uStack_208,uVar9,
                                  uVar12 & 0xffffffffffffff00);
                    uVar10 = (undefined4)(uVar9 >> 0x20);
                    uStack_64 = uStack_cc;
                    uStack_68 = uStack_d0;
                    if ((0x46U >> (uStack_cc & 0x1f) & 1) == 0) {
                      uStack_70 = uStack_d8;
                    }
                    else {
                      FUN_140063df0(&uStack_70,&uStack_d8);
                    }
                    FUN_140003e00(&uStack_70,&uStack_208);
                    FUN_1400019a0(&uStack_f8,&uStack_70);
                    if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_70);
                    }
                    FUN_1416d0720(&dStack_88,0x18e4b,0x80000000,&uStack_f8);
                    uStack_110 = 0xb;
                    FUN_1400019a0(&uStack_108,&uStack_1e8);
                    FUN_1416d0720(&dStack_88,0x18e26,0x80000000,&uStack_108);
                    uStack_110 = 0xc;
                    if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_140);
                    }
                    uStack_134 = 0;
                    uStack_140 = 0x3ff0000000000000;
                    FUN_1416d0720(&dStack_88,0x18b43,0x80000000,&uStack_140);
                    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_a8);
                    }
                    uStack_a8 = 0;
                    uStack_a0 = 0x500000000;
                    FUN_1416cfc30(&dStack_88,uRam00000001420d5a28,0x80000000,&uStack_190);
                    FUN_1400019a0(&uStack_1d8,&uStack_190);
                    puStack_258 = &uStack_1d8;
                    FUN_140002730(&dStack_1c8,0x1420b2838);
                    pdStack_250 = &dStack_1c8;
                    in_stack_fffffffffffffd78 = (undefined8 **)CONCAT44(uVar10,uRam00000001420da330)
                    ;
                    uVar6 = FUN_1416ab210(param_1,param_2,&uStack_a8,2,in_stack_fffffffffffffd78,
                                          &puStack_258);
                    uStack_64 = 0;
                    uStack_70 = 0x3ff0000000000000;
                    iVar3 = FUN_1416d9df0(uVar6,&uStack_70,uRam00000001420f6b08,0);
                    if (iVar3 == 0) {
                      uStack_110 = 0xd;
                      if ((0x46U >> (uStack_128._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_130);
                      }
                      uStack_130 = 0;
                      uStack_128 = 0x500000000;
                      FUN_1416cfc30(&dStack_88,uRam00000001420d59e8,0x80000000,&uStack_1f8);
                      FUN_1400019a0(&uStack_1b8,&uStack_1f8);
                      puStack_248 = &uStack_1b8;
                      puStack_240 = &uStack_1e8;
                      in_stack_fffffffffffffd78 = &puStack_248;
                      FUN_140061cf0(param_1,param_2,&uStack_130,2,in_stack_fffffffffffffd78);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    switch(uStack_ac & 0xffffff) {
    case 1:
      dStack_b8 = (double)FUN_1416940c0(&dStack_b8);
      dStack_b8 = dStack_b8 + dVar1;
      uStack_ac = 0;
      break;
    default:
      FUN_140001d70(&UNK_141981e6a,&dStack_b8,&dStack_b8);
      break;
    case 7:
      dStack_b8 = (double)CONCAT44(dStack_b8._4_4_,dStack_b8._0_4_ + 1);
      break;
    case 10:
      dStack_b8 = (double)((longlong)dStack_b8 + 1);
      break;
    case 0xd:
      uStack_ac = 0;
    case 0:
      dStack_b8 = dStack_b8 + dVar1;
    }
  }
  if ((0x46U >> (uStack_128._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_140);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_150);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_180);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_160);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_190);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_b8);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_120;
  return param_3;
}


