// Function: gml_Script_string_wordbreak @ 0x140133cf0

undefined8 *
gml_Script_string_wordbreak
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4,
          longlong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_238 [12];
  uint local_22c;
  ulonglong local_228;
  undefined8 local_220;
  uint local_214;
  undefined8 *local_210;
  undefined8 local_208;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
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
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined1 **local_140;
  undefined8 *local_138 [2];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  uint local_c4;
  undefined1 *local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_e0 = "gml_Script_string_wordbreak";
  local_d8 = 0;
  local_e8 = DAT_142182d78;
  DAT_142182d78 = &local_e8;
  uVar9 = 4;
  if (3 < (int)param_4) {
    uVar9 = param_4 & 0xffffffff;
  }
  uVar7 = (uint)uVar9;
  DAT_142182d90 = param_1;
  local_228 = param_4;
  local_210 = param_3;
  local_90 = param_2;
  local_88 = param_1;
  puVar4 = (undefined8 *)FUN_1416959b0(uVar7 * 0x18);
  local_a0 = uVar9;
  local_98 = puVar4;
  if ((int)local_228 < 1) {
    uVar12 = 0;
    uVar11 = 0;
    if ((int)uVar7 < 1) goto LAB_140133f2a;
  }
  else {
    uVar11 = local_228 & 0xffffffff;
    uVar12 = 0;
    do {
      puVar1 = *(undefined8 **)(param_5 + uVar12 * 8);
      puVar8 = puVar4 + uVar9 + uVar12 * 2;
      uVar7 = *(uint *)((longlong)puVar1 + 0xc);
      *(uint *)((longlong)puVar4 + uVar12 * 0x10 + uVar9 * 8 + 0xc) = uVar7;
      *(undefined4 *)(puVar4 + uVar9 + uVar12 * 2 + 1) = *(undefined4 *)(puVar1 + 1);
      if ((0x46U >> (uVar7 & 0x1f) & 1) == 0) {
        *puVar8 = *puVar1;
      }
      else {
        FUN_140135c10(puVar8);
      }
      local_98[uVar12] = puVar8;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar11);
    uVar7 = (int)local_a0 - (int)local_228;
    uVar12 = local_228;
    if (uVar7 == 0 || (int)local_a0 < (int)local_228) goto LAB_140133f2a;
  }
  puVar4 = puVar4 + uVar9 + uVar11 * 2;
  uVar9 = uVar12 & 0xffffffff;
  if ((uVar7 & 3) != 0) {
    lVar10 = 0;
    do {
      *puVar4 = 0;
      puVar4[1] = 0x500000000;
      local_98[uVar9 + lVar10] = puVar4;
      puVar4 = puVar4 + 2;
      lVar10 = lVar10 + 1;
    } while (((byte)((char)local_a0 - (char)uVar12) & 3) != (uint)lVar10);
    uVar9 = uVar9 + lVar10;
  }
  if (2 < ~(uint)uVar12 + (int)local_a0) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0x500000000;
      local_98[uVar9] = puVar4;
      puVar4[2] = 0;
      puVar4[3] = 0x500000000;
      local_98[uVar9 + 1] = puVar4 + 2;
      puVar4[4] = 0;
      puVar4[5] = 0x500000000;
      local_98[uVar9 + 2] = puVar4 + 4;
      puVar4[6] = 0;
      puVar4[7] = 0x500000000;
      local_98[uVar9 + 3] = puVar4 + 6;
      uVar9 = uVar9 + 4;
      puVar4 = puVar4 + 8;
    } while ((int)uVar9 < (int)local_a0);
  }
LAB_140133f2a:
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
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
  local_b4 = 0xffffff;
  local_c0 = (undefined1 *)0x0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_78 = (ulonglong)(uint)local_78;
  local_80 = 0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  local_120 = (ulonglong)(uint)local_120;
  local_128 = 0;
  local_110 = (ulonglong)(uint)local_110;
  local_118 = 0;
  local_100 = (ulonglong)(uint)local_100;
  local_108 = 0;
  *(undefined4 *)((longlong)local_210 + 0xc) = 5;
  *local_210 = 0;
  FUN_1416ab750(DAT_1420dd410/*gml_Script_string_wordbreak*/);
  local_d8 = 0x10;
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = &DAT_bff0000000000000;
  local_d8 = 0x11;
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  local_d8 = 0x12;
  if ((int)local_a0 < 1) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)*local_98;
  }
  FUN_1400019a0(&local_220,puVar4);
  if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_80 = 0;
  local_78 = 0x500000000;
  if ((int)local_a0 < 3) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined8 *)local_98[2];
  }
  FUN_1400019a0(&local_208,puVar4);
  local_178 = &local_208;
  uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da850/*is_real*/,&local_178);
  cVar2 = FUN_1416927d0(uVar5);
  if (cVar2 != '\0') {
    local_d8 = 0x13;
    if ((int)local_a0 < 3) {
      puVar4 = &DAT_1420b1000;
      uVar7 = DAT_1420b100c;
    }
    else {
      puVar4 = (undefined8 *)local_98[2];
      uVar7 = *(uint *)((longlong)puVar4 + 0xc);
    }
    if ((0x46U >> (uVar7 & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar4);
    }
    FUN_1416ab000(puVar4,&DAT_1420b3418);
  }
  local_d8 = 0x14;
  if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f8);
  }
  FUN_1416ab000(&local_f8,&DAT_14217f510);
  do {
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_178 = &local_220;
    uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da1f0/*string_length*/,&local_178);
    iVar3 = FUN_1416d9df0(uVar5,&local_d0,DAT_1420f6b08,1);
    if (iVar3 < 0) {
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_80 = 0;
      local_78 = 0x500000000;
      local_178 = &local_220;
      uVar5 = FUN_1416ab210(local_88,local_90,&local_80,1,DAT_1420da1f0/*string_length*/,&local_178);
      local_64 = 0;
      local_70 = (undefined1 *)0x0;
      iVar3 = FUN_1416d9df0(uVar5,&local_70,DAT_1420f6b08,1);
      if (0 < iVar3) {
        local_d8 = 0x2a;
        FUN_140003ca0(&local_f8,&local_220);
      }
      local_d8 = 0x2b;
      FUN_1400019a0(local_210,&local_f8);
      if ((0x46U >> (local_100._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_108);
      }
      if ((0x46U >> (local_110._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_118);
      }
      if ((0x46U >> (local_120._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_128);
      }
      puVar4 = local_98;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      if ((0x46U >> (local_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_f8);
      }
      if ((0x46U >> (local_214 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_220);
      }
      if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_d0);
      }
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
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
      if ((0x46U >> (local_1ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_1f8);
      }
      if ((0x46U >> (local_1fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_208);
      }
      uVar7 = 0;
      if (0 < (int)local_a0) {
        do {
          puVar8 = (undefined8 *)puVar4[uVar7];
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *puVar8 = 0;
          puVar8[1] = 0x500000000;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)local_a0);
      }
      thunk_FUN_1416c46f0(puVar4);
      DAT_142182d78 = (undefined8 *)local_e8;
      return local_210;
    }
    local_d8 = 0x15;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    if ((0x46U >> (local_120._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_128);
    }
    local_128 = 0;
    local_120 = 0x500000000;
    local_170 = &local_220;
    FUN_140002730(&local_1e8,&DAT_1420b3420);
    local_168 = &local_1e8;
    local_160 = &local_d0;
    uVar5 = FUN_1416ab210(local_88,local_90,&local_128,3,DAT_1420da860/*string_copy*/,&local_170);
    FUN_1400019a0(&local_1c8,uVar5);
    local_158 = &local_1c8;
    puVar4 = &DAT_1420b1000;
    if (1 < (int)local_a0) {
      puVar4 = (undefined8 *)local_98[1];
    }
    uVar6 = FUN_1416ab210(local_88,local_90,&local_b0,1,DAT_1420da7c0/*string_width*/,&local_158);
    uVar5 = DAT_1420f6b08;
    iVar3 = FUN_1416d9df0(uVar6,puVar4,DAT_1420f6b08,1);
    if (0 < iVar3) {
      local_d8 = 0x18;
      local_64 = 0;
      local_70 = &DAT_bff0000000000000;
      iVar3 = FUN_1416d9df0(&local_c0,&local_70,uVar5,0);
      if (iVar3 == 0) {
        puVar4 = &DAT_1420b1000;
        if (3 < (int)local_a0) {
          puVar4 = (undefined8 *)local_98[3];
        }
        cVar2 = FUN_1416927d0(puVar4);
        if (cVar2 == '\0') goto LAB_140134bfb;
        local_d8 = 0x20;
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_178 = &local_220;
        FUN_140002730(&local_1f8,&DAT_1420b3420);
        local_170 = &local_1f8;
        FUN_140017bd0(&local_70,&local_d0,1);
        FUN_1400019a0(&local_1e8,&local_70);
        puVar4 = local_98;
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        puVar8 = &DAT_1420b1000;
        if (2 < (int)local_a0) {
          puVar8 = (undefined8 *)puVar4[2];
        }
        local_168 = &local_1e8;
        FUN_1400019a0(&local_1d8,puVar8);
        local_160 = &local_1d8;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_b0,1,DAT_1420da2b0/*string*/,&local_160);
        puVar4 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da860/*string_copy*/,&local_178)
        ;
        local_64 = *(uint *)((longlong)puVar4 + 0xc);
        local_68 = *(undefined4 *)(puVar4 + 1);
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_70 = (undefined1 *)*puVar4;
        }
        else {
          FUN_140135c10(&local_70,puVar4);
        }
        FUN_140003ca0(&local_70,uVar5);
        FUN_140003ca0(&local_f8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_d8 = 0x22;
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_178 = &local_220;
        local_170 = &local_220;
        local_168 = &local_d0;
        FUN_140017bd0(local_238,&local_d0,1);
        puVar4 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_b0,1,DAT_1420da1f0/*string_length*/,&local_178)
        ;
        local_64 = *(uint *)((longlong)puVar4 + 0xc);
        local_68 = *(undefined4 *)(puVar4 + 1);
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_70 = (undefined1 *)*puVar4;
        }
        else {
          FUN_140135c10(&local_70,puVar4);
        }
        FUN_140003e00(&local_70,local_238);
        FUN_1400019a0(&local_1d8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
          FUN_140001b50(local_238);
        }
        local_160 = &local_1d8;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da860/*string_copy*/,&local_170);
        FUN_1400019a0(&local_220,uVar5);
        local_d8 = 0x23;
        if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d0);
        }
        local_c4 = 0;
        local_d0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
        local_d8 = 0x24;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c0);
        }
      }
      else {
        local_d8 = 0x19;
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
        local_150 = &local_220;
        FUN_140002730(&local_1a8,&DAT_1420b3420);
        local_148 = &local_1a8;
        local_140 = &local_c0;
        puVar4 = &DAT_1420b1000;
        if (2 < (int)local_a0) {
          puVar4 = (undefined8 *)local_98[2];
        }
        FUN_1400019a0(&local_188,puVar4);
        local_138[0] = &local_188;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_108,1,DAT_1420da2b0/*string*/,local_138);
        puVar4 = (undefined8 *)
                 FUN_1416ab210(local_88,local_90,&local_118,3,DAT_1420da860/*string_copy*/,&local_150);
        local_64 = *(uint *)((longlong)puVar4 + 0xc);
        local_68 = *(undefined4 *)(puVar4 + 1);
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_70 = (undefined1 *)*puVar4;
        }
        else {
          FUN_140135c10(&local_70,puVar4);
        }
        FUN_140003ca0(&local_70,uVar5);
        FUN_140003ca0(&local_f8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_d8 = 0x1b;
        if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_80 = 0;
        local_78 = 0x500000000;
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
          local_178 = &local_220;
          local_170 = &local_220;
        }
        else {
          local_178 = &local_220;
          local_170 = &local_220;
          FUN_140135c10(&local_70,&local_c0);
        }
        FUN_140001c50(&local_70,1);
        FUN_1400019a0(&local_1e8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_168 = &local_1e8;
        puVar4 = (undefined8 *)FUN_1416ab210(local_88,local_90,&local_b0,1,DAT_1420da1f0/*string_length*/,&local_178)
        ;
        local_64 = *(uint *)((longlong)puVar4 + 0xc);
        local_68 = *(undefined4 *)(puVar4 + 1);
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_70 = (undefined1 *)*puVar4;
        }
        else {
          FUN_140135c10(&local_70,puVar4);
        }
        FUN_140003e00(&local_70,&local_c0);
        FUN_1400019a0(&local_1d8,&local_70);
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        local_160 = &local_1d8;
        uVar5 = FUN_1416ab210(local_88,local_90,&local_80,3,DAT_1420da860/*string_copy*/,&local_170);
        FUN_1400019a0(&local_220,uVar5);
        local_d8 = 0x1c;
        if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_d0);
        }
        local_c4 = 0;
        local_d0 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
        local_d8 = 0x1d;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_c0);
        }
      }
      local_b4 = 0;
      local_c0 = &DAT_bff0000000000000;
    }
LAB_140134bfb:
    if ((0x46U >> (local_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_80);
    }
    local_80 = 0;
    local_78 = 0x500000000;
    local_178 = &local_220;
    local_170 = &local_d0;
    FUN_1416ac010(&local_70,&DAT_1420b341a);
    uVar5 = FUN_1416ab210(local_88,local_90,&local_80,2,DAT_1420da520/*string_char_at*/,&local_178);
    iVar3 = FUN_1416d9df0(uVar5,&local_70,DAT_1420f6b08,0);
    if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_70);
    }
    if (iVar3 == 0) {
      local_d8 = 0x27;
      FUN_1400019a0(&local_c0,&local_d0);
    }
    local_d8 = 0x28;
    FUN_140001c50(&local_d0,1);
  } while( true );
}


