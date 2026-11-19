// Function: gml_Object_oWire_Draw_77 @ 0x141128dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oWire_Draw_77(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  ulonglong in_stack_fffffffffffffd58;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  double *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 local_250;
  uint local_244;
  undefined8 local_240;
  uint local_234;
  undefined8 local_230;
  uint local_224;
  undefined8 local_220;
  uint local_214;
  undefined8 local_210;
  uint local_204;
  undefined8 local_200;
  uint local_1f4;
  undefined8 local_1f0;
  uint local_1e4;
  undefined8 local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c4;
  undefined8 local_1c0;
  uint local_1b4;
  undefined8 local_1b0;
  uint local_1a4;
  undefined8 local_1a0;
  uint local_194;
  undefined8 local_190;
  uint local_184;
  undefined8 local_180;
  uint local_174;
  undefined8 local_170;
  uint local_164;
  undefined8 local_160;
  uint local_154;
  undefined8 local_150;
  uint local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  char *local_118;
  undefined4 local_110;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_118 = "gml_Object_oWire_Draw_77";
  local_120 = DAT_142182d78;
  DAT_142182d78 = &local_120;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  uStack_54 = 0xffffff;
  local_60 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_110 = 1;
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b39);
  local_44 = 0;
  local_50 = 0x3ff0000000000000;
  iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
    local_44 = 0;
    local_50 = 0x3fe3333333333333;
    iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,1);
    if (-1 < iVar1) {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18c79);
      local_44 = 0;
      local_50 = 0;
      iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,0);
      if (iVar1 == 0) {
        local_110 = 2;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        local_60 = 0;
        local_58 = 0;
        uStack_54 = 5;
        in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_80,in_stack_fffffffffffffd58,0);
        FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_70,
                      in_stack_fffffffffffffd58 & 0xffffffffffffff00,0);
        FUN_140002730(&local_108,&DAT_1420c7450);
        local_298 = &local_108;
        FUN_140002730(&local_f8,&DAT_1420c7460);
        local_290 = &local_f8;
        FUN_140002730(&local_e8,&DAT_142182198);
        local_288 = &local_e8;
        dVar4 = (double)FUN_1416cdc60(DAT_141983d80,DAT_141983d88);
        local_280 = &local_d8;
        if ((0x46U >> (local_cc & 0x1f) & 1) != 0) {
          FUN_140001b50(local_280);
        }
        local_d8 = dVar4 + _DAT_141981e30;
        local_cc = 0;
        FUN_140002730(&local_c8,&DAT_1420c7470);
        local_278 = &local_c8;
        uVar2 = FUN_1416cd770(0x32);
        local_270 = &local_b8;
        if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
          FUN_140001b50(local_270);
        }
        local_ac = 0;
        local_b8 = uVar2;
        FUN_1400019a0(&local_a8,&local_80);
        local_268 = &local_a8;
        FUN_1400019a0(&local_98,&local_70);
        local_260 = &local_98;
        FUN_1400d4470(param_1,param_2,&local_60,8,&local_298);
        local_110 = 3;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c79);
        if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x3ff0000000000000;
        goto joined_r0x00014112994c;
      }
    }
  }
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18b39);
  local_44 = 0;
  local_50 = 0;
  iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
    local_44 = 0;
    local_50 = 0x3fd999999999999a;
    iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,1);
    if ((iVar1 != -2) && (iVar1 < 1)) {
      uVar2 = (**(code **)(*param_1 + 0x10))(param_1,0x18c79);
      local_44 = 0;
      local_50 = 0x3ff0000000000000;
      iVar1 = FUN_1416d9df0(uVar2,&local_50,DAT_1420f6b08,0);
      if (iVar1 == 0) {
        local_110 = 7;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        local_60 = 0;
        local_58 = 0;
        uStack_54 = 5;
        in_stack_fffffffffffffd58 = in_stack_fffffffffffffd58 & 0xffffffffffffff00;
        FUN_1416cea80(param_1,DAT_1420d58e8,0x80000000,&local_80,in_stack_fffffffffffffd58,0);
        FUN_1416cea80(param_1,DAT_1420d58f8,0x80000000,&local_70,
                      in_stack_fffffffffffffd58 & 0xffffffffffffff00,0);
        FUN_140002730(&local_108,&DAT_1420c7450);
        local_298 = &local_108;
        FUN_140002730(&local_f8,&DAT_1420c7460);
        local_290 = &local_f8;
        FUN_140002730(&local_e8,&DAT_142182198);
        local_288 = &local_e8;
        FUN_140002730(&local_d8,&DAT_1420c7480);
        local_280 = &local_d8;
        FUN_140002730(&local_c8,&DAT_1420c7470);
        local_278 = &local_c8;
        uVar2 = FUN_1416cd770(0x32);
        local_270 = &local_b8;
        if ((0x46U >> (local_ac & 0x1f) & 1) != 0) {
          FUN_140001b50(local_270);
        }
        local_ac = 0;
        local_b8 = uVar2;
        FUN_1400019a0(&local_a8,&local_80);
        local_268 = &local_a8;
        FUN_1400019a0(&local_98,&local_70);
        local_260 = &local_98;
        FUN_1400d4470(param_1,param_2,&local_60,8,&local_298);
        local_110 = 8;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c79);
        if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0;
      }
    }
  }
joined_r0x00014112994c:
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_190);
  }
  if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a0);
  }
  if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b0);
  }
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  if ((0x46U >> (local_1c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1d0);
  }
  if ((0x46U >> (local_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e0);
  }
  if ((0x46U >> (local_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f0);
  }
  if ((0x46U >> (local_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_200);
  }
  if ((0x46U >> (local_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_210);
  }
  if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_220);
  }
  if ((0x46U >> (local_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_230);
  }
  if ((0x46U >> (local_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_240);
  }
  if ((0x46U >> (local_244 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_250);
  }
  if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_98);
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
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  if ((0x46U >> (local_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_108);
  }
  DAT_142182d78 = (undefined8 *)local_120;
  return;
}


