// Function: gml_Object_parDoor_Flat_Step_1 @ 0x14035c480

void gml_Object_parDoor_Flat_Step_1(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffda0;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  uint local_18c;
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
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_a0 = "gml_Object_parDoor_Flat_Step_1";
  local_a8 = DAT_142182d78;
  DAT_142182d78 = &local_a8;
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
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_78._4_4_ = 0xffffff;
  local_80 = 0;
  local_88 = CONCAT44(0xffffff,(undefined4)local_88);
  local_90 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_98 = 1;
  DAT_142182d90 = param_1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18b45);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18dbe);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar3);
  FUN_1416a8c00(1);
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  uVar9 = 0;
  uVar3 = FUN_140120860(param_1,param_2,&local_80,0,0);
  cVar1 = FUN_1416927d0(uVar3);
  if ((cVar1 != '\0') && (iVar2 = FUN_1416f82f0(param_1,param_2,0x40), 0 < iVar2)) {
    if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_90);
    }
    local_90 = 0;
    local_88 = 0x500000000;
    in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_e8,uVar9,in_stack_fffffffffffffda0);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_d8,uVar9,
                  in_stack_fffffffffffffda0 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar9 >> 0x20);
    FUN_1416ab670(0x40,DAT_1420d58e8,0x80000000,&local_c8);
    FUN_1416ab670(0x40,DAT_1420d58f8,0x80000000,&local_b8);
    FUN_1400019a0(&local_148,&local_e8);
    local_228 = &local_148;
    FUN_140017bd0(&local_70,&local_d8,8);
    FUN_1400019a0(&local_138,&local_70);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_220 = &local_138;
    FUN_1400019a0(&local_128,&local_c8);
    local_218 = &local_128;
    FUN_1400019a0(&local_118,&local_b8);
    uVar9 = CONCAT44(uVar7,DAT_1420da150);
    ppuVar10 = &local_228;
    local_210 = &local_118;
    uVar3 = FUN_1416ab210(param_1,param_2,&local_90,4,uVar9,&local_228);
    local_64 = 0;
    local_70 = 0x402e000000000000;
    iVar2 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18a8f);
      local_64 = 0;
      local_70 = 0x3ff0000000000000;
      iVar2 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,0);
      if (iVar2 != 0) {
        local_98 = 2;
        local_258 = 0;
        uStack_250 = 0;
        uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_1416d0010(0x40,0x18836,0x80000000,&local_258,uVar9,uVar11);
        cVar1 = FUN_1416927d0(&local_258);
        if (cVar1 != '\0') {
          local_248 = 0;
          uStack_240 = 0;
          uVar11 = uVar11 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_1416d0010(0x40,0x18a56,0x80000000,&local_248,uVar9,uVar11);
          cVar1 = FUN_1416927d0(&local_248);
          if (cVar1 != '\0') {
            uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18b45);
            local_64 = 0;
            local_70 = 0;
            iVar2 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,0);
            if (iVar2 == 0) {
              local_238 = 0;
              uStack_230 = 0;
              FUN_1416d0010(0x40,0x18df5,0x80000000,&local_238,uVar9 & 0xffffffffffffff00,
                            uVar11 & 0xffffffffffffff00);
              local_64 = 0;
              local_70 = 0;
              iVar2 = FUN_1416d9df0(&local_238,&local_70,DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
                local_64 = 0;
                local_70 = 0;
                iVar2 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
                if ((iVar2 != -2) && (iVar2 < 1)) {
                  local_98 = 4;
                  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b45);
                  if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
                    local_1f0 = puVar5;
                    FUN_140001b50(puVar5);
                    puVar5 = local_1f0;
                  }
                  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
                  *puVar5 = 0x3ff0000000000000;
                  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18caa);
                  cVar1 = FUN_1416927d0(uVar3);
                  if (cVar1 != '\0') {
                    local_98 = 5;
                    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&local_80);
                    }
                    local_80 = 0;
                    local_78 = 0x500000000;
                    FUN_140002730(&local_148,&DAT_1420b5608);
                    local_228 = &local_148;
                    FUN_140002730(&local_138,&DAT_1420b5618);
                    local_220 = &local_138;
                    FUN_140002730(&local_128,&DAT_142180158);
                    local_218 = &local_128;
                    FUN_140002730(&local_118,&DAT_1420b5628);
                    local_210 = &local_118;
                    FUN_140002730(&local_108,&DAT_1420b5638);
                    local_208 = &local_108;
                    FUN_140002730(&local_f8,&DAT_142180158);
                    local_200 = &local_f8;
                    FUN_1400d2410(param_1,param_2,&local_80,6,&local_228);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18910);
  local_64 = 0;
  local_70 = 0x4000000000000000;
  uVar7 = (undefined4)DAT_1420f6b08;
  uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
  iVar2 = FUN_1416d9df0(puVar5,&local_70,DAT_1420f6b08,0);
  if (iVar2 == 0) {
    local_98 = 10;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    local_64 = 0;
    local_70 = 0x3fe999999999999a;
    FUN_140001fe0(uVar3,&local_70);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    local_64 = 0;
    local_70 = 0x3f847ae147ae147b;
    uVar7 = (undefined4)DAT_1420f6b08;
    uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
    iVar2 = FUN_1416d9df0(uVar3,&local_70,DAT_1420f6b08,1);
    if ((iVar2 != -2) && (iVar2 < 0)) {
      local_98 = 0xb;
      (**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18910);
      if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1890a);
      if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x3ff0000000000000;
      uVar7 = (undefined4)DAT_1420f6b08;
      uVar8 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
    }
  }
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(puVar5,&local_70,CONCAT44(uVar8,uVar7),0);
  if (iVar2 == 0) {
    local_98 = 0xf;
    (**(code **)(*param_1 + 0x10))(param_1,0x18910);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1890a);
    if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4072c00000000000;
    local_98 = 0x10;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18910);
    if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4000000000000000;
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
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
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
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
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
  DAT_142182d78 = (undefined8 *)local_a8;
  return;
}


