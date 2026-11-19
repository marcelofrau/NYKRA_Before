// Function: gml_Script_easing @ 0x140064100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_easing(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  double dVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dStack_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  double local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined8 local_298;
  uint local_28c;
  undefined8 local_288;
  uint local_27c;
  undefined8 local_278;
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  double dStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *apuStack_228 [4];
  double dStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  uint local_1dc;
  double dStack_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1ac;
  double local_1a8;
  undefined4 uStack_1a0;
  uint local_19c;
  double local_198;
  undefined4 uStack_190;
  uint local_18c;
  double dStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  uint local_15c;
  double dStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  double dStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  double local_128;
  undefined4 uStack_120;
  uint local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined4 uStack_e8;
  uint local_e4;
  double local_e0;
  undefined4 uStack_d8;
  uint local_d4;
  double dStack_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  double local_c0;
  undefined4 local_b8;
  uint local_b4;
  double dStack_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  double dStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  double dStack_90;
  undefined4 uStack_88;
  uint uStack_84;
  double dStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  double local_70;
  undefined4 local_68;
  uint local_64;
  double local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_110 = "gml_Script_easing";
  local_108 = 0;
  local_118 = DAT_142182d78;
  DAT_142182d78 = &local_118;
  local_28c = 0xffffff;
  local_298 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_f8 = (ulonglong)(uint)uStack_f8;
  local_100 = 0;
  uStack_1f0 = (ulonglong)(uint)uStack_1f0;
  local_1f8 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dc9c0/*gml_Script_easing*/);
  local_108 = 0x13;
  if (param_4 < 1) {
    puVar8 = &DAT_1420b1000;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_2a8,puVar8);
  local_108 = 0x14;
  if (param_4 < 2) {
    puVar8 = &DAT_1420b1000;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_178,puVar8);
  local_108 = 0x15;
  if (param_4 < 3) {
    puVar8 = &DAT_1420b1000;
  }
  else {
    puVar8 = (undefined8 *)param_5[2];
  }
  FUN_1400019a0(&local_f0,puVar8);
  local_108 = 0x16;
  if (param_4 < 4) {
    puVar8 = &DAT_1420b1000;
  }
  else {
    puVar8 = (undefined8 *)param_5[3];
  }
  FUN_1400019a0(&local_c0,puVar8);
  local_108 = 0x17;
  if (param_4 < 5) {
    puVar8 = &DAT_1420b1000;
  }
  else {
    puVar8 = (undefined8 *)param_5[4];
  }
  FUN_1400019a0(&local_1c8,puVar8);
  local_108 = 0x18;
  local_54 = local_16c;
  local_58 = local_170;
  if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
    local_60 = local_178;
  }
  else {
    FUN_140085160(&local_60,&local_178);
  }
  FUN_140004620(&local_60,&local_1c8);
  FUN_1400019a0(&local_e0,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  local_108 = 0x19;
  FUN_140004520(&local_148,&local_1c8,_DAT_141982c40);
  local_54 = local_16c;
  local_58 = local_170;
  if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
    local_60 = local_178;
  }
  else {
    FUN_140085160(&local_60,&local_178);
  }
  FUN_140004620(&local_60,&local_148);
  FUN_1400019a0(&local_128,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  local_108 = 0x1a;
  local_13c = local_16c;
  local_140 = local_170;
  if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
    local_148 = local_178;
  }
  else {
    FUN_140085160(&local_148,&local_178);
  }
  FUN_140004620(&local_148,&local_1c8);
  FUN_140017bd0(&local_60,&local_148,1);
  FUN_1400019a0(&local_198,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  local_108 = 0x1c;
  local_13c = local_29c;
  local_140 = local_2a0;
  if ((0x46U >> (local_29c & 0x1f) & 1) == 0) {
    local_148 = local_2a8;
  }
  else {
    FUN_140085160(&local_148,&local_2a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14217f0a8) && (_Init_thread_header(&DAT_14217f0a8), DAT_14217f0a8 == -1)) {
    _DAT_14217ee5c = 0;
    _DAT_14217ee50 = 0;
    _DAT_14217ee70 = 0x100000000;
    _DAT_14217ee64 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
    _DAT_14217ee84 = 0x200000000;
    _DAT_14217ee78 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
    _DAT_14217ee98 = 0x300000000;
    _DAT_14217ee8c = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
    _DAT_14217eeac = 0x400000000;
    _DAT_14217eea0 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
    _DAT_14217eec0 = 0x500000000;
    _DAT_14217eeb4 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
    _DAT_14217eed4 = 0x600000000;
    _DAT_14217eec8 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
    _DAT_14217eee8 = 0x700000000;
    _DAT_14217eedc = 0x401c000000000000/*7 (obj:oKS_Praedim_Enter_Iiem)*/;
    DAT_14217eefc = 0;
    _DAT_14217eef0 = 0x4020000000000000/*8 (obj:oBoldemo_Aenox)*/;
    DAT_14217ef00 = 8;
    _DAT_14217ef10 = 0x900000000;
    _DAT_14217ef04 = 0x4022000000000000/*9 (obj:oDlg_Gatna)*/;
    _DAT_14217ef24 = 0xa00000000;
    _DAT_14217ef18 = 0x4024000000000000/*10 (obj:oSun_Iie)*/;
    _DAT_14217ef38 = 0xb00000000;
    _DAT_14217ef2c = 0x4026000000000000/*11 (obj:oEvokreathe_door)*/;
    _DAT_14217ef4c = 0xc00000000;
    _DAT_14217ef40 = 0x4028000000000000/*12 (obj:oDlg_Pod72)*/;
    _DAT_14217ef60 = 0xd00000000;
    _DAT_14217ef54 = 0x402a000000000000/*13 (obj:oDlg_Irn_Aenic_Library)*/;
    _DAT_14217ef74 = 0xe00000000;
    _DAT_14217ef68 = 0x402c000000000000/*14 (obj:oControls_OLDTELA)*/;
    _DAT_14217ef88 = 0xf00000000;
    _DAT_14217ef7c = 0x402e000000000000/*15 (obj:oKS_Iinenea)*/;
    DAT_14217ef9c = 0;
    _DAT_14217ef90 = 0x4030000000000000/*16 (obj:oDlg_BM_Julaak)*/;
    DAT_14217efa0 = 0x10;
    DAT_14217efb0 = 0;
    _DAT_14217efa4 = 0x4031000000000000/*17 (obj:oMoriiem_KS)*/;
    DAT_14217efb4 = 0x11;
    DAT_14217efc4 = 0;
    _DAT_14217efb8 = 0x4032000000000000/*18 (obj:oSun_Quo)*/;
    DAT_14217efc8 = 0x12;
    DAT_14217efd8 = 0;
    _DAT_14217efcc = 0x4033000000000000/*19 (obj:oDlg_Iie_Prae)*/;
    DAT_14217efdc = 0x13;
    DAT_14217efec = 0;
    _DAT_14217efe0 = 0x4034000000000000/*20 (obj:oDlg_Quo_Radio4)*/;
    DAT_14217eff0 = 0x14;
    DAT_14217f000 = 0;
    _DAT_14217eff4 = 0x4035000000000000/*21 (obj:oGatna)*/;
    DAT_14217f004 = 0x15;
    DAT_14217f014 = 0;
    _DAT_14217f008 = 0x4036000000000000/*22 (obj:oIie_start)*/;
    DAT_14217f018 = 0x16;
    DAT_14217f028 = 0;
    _DAT_14217f01c = 0x4037000000000000/*23 (obj:oDlg_Mex_KELL)*/;
    DAT_14217f02c = 0x17;
    DAT_14217f03c = 0;
    _DAT_14217f030 = 0x4038000000000000/*24 (obj:oDlg_Mex_VenAenox)*/;
    DAT_14217f040 = 0x18;
    DAT_14217f050 = 0;
    _DAT_14217f044 = 0x4039000000000000/*25 (obj:oDOR)*/;
    DAT_14217f054 = 0x19;
    DAT_14217f064 = 0;
    _DAT_14217f058 = 0x403a000000000000/*26 (obj:oDlg_Iinenea_r)*/;
    DAT_14217f068 = 0x1a;
    DAT_14217f078 = 0;
    _DAT_14217f06c = 0x403b000000000000/*27 (obj:oDlg_Irn_Ptalin2)*/;
    DAT_14217f07c = 0x1b;
    DAT_14217f08c = 0;
    _DAT_14217f080 = 0x403c000000000000/*28 (obj:oDlg_Irn_Matriarch)*/;
    DAT_14217f090 = 0x1c;
    DAT_14217f0a0 = 0;
    _DAT_14217f094 = 0x403d000000000000/*29 (obj:oTICK_shake)*/;
    DAT_14217f0a4 = 0x1d;
    atexit(FUN_140084ca0);
    _Init_thread_footer(&DAT_14217f0a8);
  }
  uVar6 = DAT_1420f6b08;
  uVar12 = (undefined4)DAT_1420f6b08;
  uVar13 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
  lVar9 = 0;
  iVar3 = FUN_1416d9df0(&DAT_14217ee50,&local_148,DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_140064a59:
    uVar1 = (&DAT_14217ee60)[lVar9 * 5];
joined_r0x000140064a65:
    uVar11 = (ulonglong)uVar1;
joined_r0x000140064ad0:
    if (uVar11 < 0x1e) {
      uStack_f8._4_4_ = (uint)(uStack_f8 >> 0x20);
      switch(&DAT_140084be8 + *(int *)(&DAT_140084be8 + uVar11 * 4)) {
      case (undefined *)0x140064a77:
        local_108 = 0x1e;
        dVar10 = local_c0;
        uStack_88 = local_b8;
        uStack_84 = local_b4;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_90,&local_c0);
          dVar10 = dStack_90;
        }
        dStack_90 = dVar10;
        FUN_140001fe0(&dStack_90,&local_e0);
        local_64 = uStack_84;
        local_68 = uStack_88;
        if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
          local_70 = dStack_90;
        }
        else {
          FUN_140085160(&local_70,&dStack_90);
        }
        FUN_140001fe0(&local_70,&local_e0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        break;
      case (undefined *)0x140064b68:
        local_108 = 0x90;
        dVar10 = local_1c8;
        local_54 = local_1bc;
        if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
          FUN_140085160(&local_60,&local_1c8);
          dVar10 = local_60;
        }
        local_60 = dVar10;
        FUN_140003e00(&local_60,&local_178);
        FUN_1400019a0(&local_178,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        uVar6 = DAT_1420f6b08;
        local_108 = 0x91;
        local_54 = 0;
        local_60 = 0.36363636363636365;
        iVar3 = FUN_1416d9df0(&local_e0,&local_60,DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x93;
          local_54 = 0;
          local_60 = 0.7272727272727273;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
          if ((iVar3 == -2) || (-1 < iVar3)) {
            local_108 = 0x95;
            local_54 = 0;
            local_60 = 0.9090909090909091;
            iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x98;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e30);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e30);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,_UNK_141982e38);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
            else {
              local_108 = 0x96;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e40);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e40);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,_UNK_141982e48);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
          }
          else {
            local_108 = 0x94;
            FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e50);
            FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e50);
            uStack_94 = 0;
            dStack_a0 = 7.5625;
            FUN_140001fe0(&dStack_a0,&dStack_d0);
            uStack_74 = uStack_94;
            uStack_78 = uStack_98;
            if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
              dStack_80 = dStack_a0;
            }
            else {
              FUN_140085160(&dStack_80,&dStack_a0);
            }
            FUN_140001fe0(&dStack_80,&dStack_b0);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140003f30(&dStack_90,DAT_141982e58);
            local_64 = local_b4;
            local_68 = local_b8;
            if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
              local_70 = local_c0;
            }
            else {
              FUN_140085160(&local_70,&local_c0);
            }
            FUN_140001fe0(&local_70,&dStack_90);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(&local_1e8,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
            if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_a0);
            }
            if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_d0);
            }
            if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_b0);
            }
          }
        }
        else {
          local_108 = 0x92;
          uStack_74 = 0;
          dStack_80 = 7.5625;
          FUN_140001fe0(&dStack_80,&local_e0);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_e0);
          local_64 = local_b4;
          local_68 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_70 = local_c0;
          }
          else {
            FUN_140085160(&local_70,&local_c0);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(&local_1e8,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
        }
        local_108 = 0x9a;
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140003e00(&local_70,&local_1e8);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        break;
      case (undefined *)0x140064bb0:
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x25;
          FUN_140017bd0(&dStack_b0,&local_128,2);
          switch(local_11c & 0xffffff) {
          case 0:
          case 0xd:
            local_128 = local_128 + DAT_141982ea0;
            break;
          case 1:
            local_128 = (double)FUN_1416940c0(&local_128);
            local_128 = local_128 + DAT_141982ea0;
            local_11c = 0;
            break;
          default:
            FUN_140001d70(&DAT_141982eda,&local_128,&local_128);
            break;
          case 7:
            local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + -1);
            break;
          case 10:
            local_128 = (double)((longlong)local_128 + -1);
          }
          uStack_78 = uStack_120;
          uStack_74 = local_11c;
          if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
            dStack_80 = local_128;
          }
          else {
            FUN_140085160(&dStack_80,&local_128);
          }
          FUN_140001fe0(&dStack_80,&dStack_b0);
          FUN_140017bd0(&dStack_90,&dStack_80,1);
          dStack_d0 = local_c0;
          if ((local_b4 & 0xffffff) != 0) {
            dStack_d0 = (double)FUN_1416940c0(&local_c0);
          }
          dStack_d0 = (double)((ulonglong)dStack_d0 ^ DAT_141982e90);
          uStack_c4 = 0;
          FUN_140004520(&dStack_a0,&dStack_d0,_DAT_141982c40);
          local_64 = uStack_94;
          local_68 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            local_70 = dStack_a0;
          }
          else {
            FUN_140085160(&local_70,&dStack_a0);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
        else {
          local_108 = 0x24;
          FUN_140004520(&dStack_80,&local_c0,_DAT_141982c40);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_128);
          local_64 = uStack_84;
          local_68 = uStack_88;
          if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
            local_70 = dStack_90;
          }
          else {
            FUN_140085160(&local_70,&dStack_90);
          }
          FUN_140001fe0(&local_70,&local_128);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
        }
        break;
      case (undefined *)0x140064c59:
        local_108 = 0x2b;
        dVar10 = local_198;
        uStack_a8 = uStack_190;
        uStack_a4 = local_18c;
        if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_b0,&local_198);
          dVar10 = dStack_b0;
        }
        dStack_b0 = dVar10;
        FUN_140001fe0(&dStack_b0,&local_198);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_198);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001c50(&dStack_90,1);
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        break;
      case (undefined *)0x140064ca1:
        local_108 = 0x3c;
        dVar10 = local_c0;
        uStack_98 = local_b8;
        uStack_94 = local_b4;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_a0,&local_c0);
          dVar10 = dStack_a0;
        }
        dStack_a0 = dVar10;
        FUN_140001fe0(&dStack_a0,&local_e0);
        uStack_a4 = uStack_94;
        uStack_a8 = uStack_98;
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          dStack_b0 = dStack_a0;
        }
        else {
          FUN_140085160(&dStack_b0,&dStack_a0);
        }
        FUN_140001fe0(&dStack_b0,&local_e0);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_e0);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001fe0(&dStack_90,&local_e0);
        local_64 = uStack_84;
        local_68 = uStack_88;
        if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
          local_70 = dStack_90;
        }
        else {
          FUN_140085160(&local_70,&dStack_90);
        }
        FUN_140001fe0(&local_70,&local_e0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        break;
      case (undefined *)0x140064ce9:
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x43;
          FUN_140017bd0(&dStack_b0,&local_128,2);
          FUN_140017bd0(&dStack_d0,&local_128,2);
          FUN_140017bd0(&dStack_158,&local_128,2);
          FUN_140017bd0(&dStack_1d8,&local_128,2);
          FUN_140017bd0(&dStack_208,&local_128,2);
          uStack_17c = uStack_1fc;
          uStack_180 = uStack_200;
          if ((0x46U >> (uStack_1fc & 0x1f) & 1) == 0) {
            dStack_188 = dStack_208;
          }
          else {
            FUN_140085160(&dStack_188,&dStack_208);
          }
          FUN_140001fe0(&dStack_188,&dStack_1d8);
          uStack_12c = uStack_17c;
          uStack_130 = uStack_180;
          if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
            dStack_138 = dStack_188;
          }
          else {
            FUN_140085160(&dStack_138,&dStack_188);
          }
          FUN_140001fe0(&dStack_138,&dStack_158);
          uStack_94 = uStack_12c;
          uStack_98 = uStack_130;
          if ((0x46U >> (uStack_12c & 0x1f) & 1) == 0) {
            dStack_a0 = dStack_138;
          }
          else {
            FUN_140085160(&dStack_a0,&dStack_138);
          }
          FUN_140001fe0(&dStack_a0,&dStack_d0);
          uStack_74 = uStack_94;
          uStack_78 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_a0);
          }
          FUN_140001fe0(&dStack_80,&dStack_b0);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001c50(&dStack_90,2);
          FUN_140004520(&dStack_248,&local_c0,_DAT_141982c40);
          local_64 = uStack_23c;
          local_68 = uStack_240;
          if ((0x46U >> (uStack_23c & 0x1f) & 1) == 0) {
            local_70 = dStack_248;
          }
          else {
            FUN_140085160(&local_70,&dStack_248);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_248);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_138);
          }
          if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_188);
          }
          if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_208);
          }
          if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_1d8);
          }
          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_158);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
        else {
          local_108 = 0x42;
          FUN_140004520(&dStack_d0,&local_c0,_DAT_141982c40);
          uStack_94 = uStack_c4;
          uStack_98 = uStack_c8;
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
            dStack_a0 = dStack_d0;
          }
          else {
            FUN_140085160(&dStack_a0,&dStack_d0);
          }
          FUN_140001fe0(&dStack_a0,&local_128);
          uStack_a4 = uStack_94;
          uStack_a8 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_b0 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_b0,&dStack_a0);
          }
          FUN_140001fe0(&dStack_b0,&local_128);
          uStack_74 = uStack_a4;
          uStack_78 = uStack_a8;
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_b0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_b0);
          }
          FUN_140001fe0(&dStack_80,&local_128);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_128);
          local_64 = uStack_84;
          local_68 = uStack_88;
          if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
            local_70 = dStack_90;
          }
          else {
            FUN_140085160(&local_70,&dStack_90);
          }
          FUN_140001fe0(&local_70,&local_128);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
        }
        break;
      case (undefined *)0x140064d92:
        local_108 = 0x46;
        FUN_140009980(&dStack_80,&local_e0,_DAT_141982ea8);
        dVar10 = dStack_80;
        if ((uStack_74 & 0xffffff) != 0) {
          dVar10 = (double)FUN_1416940c0(&dStack_80);
        }
        uVar6 = FUN_1416cd720(dVar10);
        dStack_b0 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dStack_b0 = (double)FUN_1416940c0(&local_c0);
        }
        dStack_b0 = (double)((ulonglong)dStack_b0 ^ DAT_141982e90);
        uStack_a4 = 0;
        FUN_140009980(&dStack_90,&dStack_b0,uVar6);
        local_64 = uStack_84;
        local_68 = uStack_88;
        if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
          local_70 = dStack_90;
        }
        else {
          FUN_140085160(&local_70,&dStack_90);
        }
        FUN_140003ca0(&local_70,&local_c0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        break;
      case (undefined *)0x140064dd8:
        local_108 = 0x4c;
        uStack_74 = 0;
        dStack_80 = 3.141592653589793;
        FUN_140001fe0(&dStack_80,&local_178);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140004620(&dStack_90,&local_1c8);
        dVar10 = dStack_90;
        if ((uStack_84 & 0xffffff) != 0) {
          dVar10 = (double)FUN_1416940c0(&dStack_90);
        }
        dVar10 = (double)FUN_1416cd720(dVar10);
        dStack_a0 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dStack_a0 = (double)FUN_1416940c0(&local_c0);
        }
        dStack_a0 = (double)((ulonglong)dStack_a0 ^ DAT_141982e90);
        uStack_94 = 0;
        FUN_140004520(&dStack_b0,&dStack_a0,_DAT_141982c40);
        FUN_140009980(&local_70,&dStack_b0,dVar10 + DAT_141982ea0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        break;
      case (undefined *)0x140064e4e:
        local_108 = 0x53;
        iVar3 = FUN_1416d9df0(&local_178,&local_1c8,uVar6,0);
        if (iVar3 == 0) {
          local_108 = 0x53;
          local_54 = local_e4;
          local_58 = uStack_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_60 = local_f0;
          }
          else {
            FUN_140085160(&local_60,&local_f0);
          }
          FUN_140003ca0(&local_60,&local_c0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
        }
        else {
          local_108 = 0x54;
          if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_100);
          }
          local_100 = 0;
          uStack_f8 = 0x500000000;
          FUN_140002730(&local_298,0x1420b2848);
          local_54 = 0;
          local_60 = -10.0;
          puStack_238 = &local_298;
          FUN_140001fe0(&local_60,&local_e0);
          FUN_1400019a0(&local_288,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          puStack_230 = &local_288;
          puVar4 = (ulonglong *)
                   FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
          if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
            uVar11 = *puVar4;
          }
          else {
            uVar11 = FUN_1416940c0(puVar4);
          }
          dStack_90 = (double)(uVar11 ^ DAT_141982e90);
          uStack_74 = 0;
          uStack_84 = 0;
          uStack_88 = uStack_78;
          dStack_80 = dStack_90;
          FUN_140001c50(&dStack_90,1);
          local_64 = local_b4;
          local_68 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_70 = local_c0;
          }
          else {
            FUN_140085160(&local_70,&local_c0);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
        }
        break;
      case (undefined *)0x140064f79:
        local_108 = 0x83;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        local_108 = 0x84;
        uStack_a4 = 0;
        uStack_a8 = uStack_160;
        dStack_b0 = 1.70158;
        FUN_140001c50(&dStack_b0,1);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_e0);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140003e00(&dStack_90,&local_168);
        uStack_c4 = local_b4;
        uStack_c8 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          dStack_d0 = local_c0;
        }
        else {
          FUN_140085160(&dStack_d0,&local_c0);
        }
        FUN_140001fe0(&dStack_d0,&local_e0);
        uStack_94 = uStack_c4;
        uStack_98 = uStack_c8;
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
          dStack_a0 = dStack_d0;
        }
        else {
          FUN_140085160(&dStack_a0,&dStack_d0);
        }
        FUN_140001fe0(&dStack_a0,&local_e0);
        local_64 = uStack_94;
        local_68 = uStack_98;
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          local_70 = dStack_a0;
        }
        else {
          FUN_140085160(&local_70,&dStack_a0);
        }
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_d0);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        break;
      case (undefined *)0x140065030:
        local_108 = 0x87;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        local_108 = 0x88;
        uStack_c4 = 0;
        uStack_c8 = uStack_160;
        dStack_d0 = 1.70158;
        FUN_140001c50(&dStack_d0,1);
        uStack_94 = uStack_c4;
        uStack_98 = uStack_c8;
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
          dStack_a0 = dStack_d0;
        }
        else {
          FUN_140085160(&dStack_a0,&dStack_d0);
        }
        FUN_140001fe0(&dStack_a0,&local_198);
        uStack_a4 = uStack_94;
        uStack_a8 = uStack_98;
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          dStack_b0 = dStack_a0;
        }
        else {
          FUN_140085160(&dStack_b0,&dStack_a0);
        }
        FUN_140003ca0(&dStack_b0,&local_168);
        uStack_12c = local_18c;
        uStack_130 = uStack_190;
        if ((0x46U >> (local_18c & 0x1f) & 1) == 0) {
          dStack_138 = local_198;
        }
        else {
          FUN_140085160(&dStack_138,&local_198);
        }
        FUN_140001fe0(&dStack_138,&local_198);
        uStack_74 = uStack_12c;
        uStack_78 = uStack_130;
        if ((0x46U >> (uStack_12c & 0x1f) & 1) == 0) {
          dStack_80 = dStack_138;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_138);
        }
        FUN_140001fe0(&dStack_80,&dStack_b0);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001c50(&dStack_90,1);
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_138);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_d0);
        }
        break;
      case (undefined *)0x1400650e7:
        local_108 = 0x21;
        FUN_140017bd0(&dStack_90,&local_e0,2);
        dStack_b0 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dStack_b0 = (double)FUN_1416940c0(&local_c0);
        }
        dStack_b0 = (double)((ulonglong)dStack_b0 ^ DAT_141982e90);
        uStack_a4 = 0;
        uStack_74 = 0;
        uStack_78 = uStack_a8;
        dStack_80 = dStack_b0;
        FUN_140001fe0(&dStack_80,&local_e0);
        local_64 = uStack_74;
        local_68 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          local_70 = dStack_80;
        }
        else {
          FUN_140085160(&local_70,&dStack_80);
        }
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        break;
      case (undefined *)0x14006512b:
        local_108 = 0x28;
        dVar10 = local_c0;
        uStack_78 = local_b8;
        uStack_74 = local_b4;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_80,&local_c0);
          dVar10 = dStack_80;
        }
        dStack_80 = dVar10;
        FUN_140001fe0(&dStack_80,&local_e0);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001fe0(&dStack_90,&local_e0);
        local_64 = uStack_84;
        local_68 = uStack_88;
        if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
          local_70 = dStack_90;
        }
        else {
          FUN_140085160(&local_70,&dStack_90);
        }
        FUN_140001fe0(&local_70,&local_e0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        break;
      case (undefined *)0x140065173:
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x2f;
          FUN_140017bd0(&dStack_b0,&local_128,2);
          FUN_140017bd0(&dStack_d0,&local_128,2);
          FUN_140017bd0(&dStack_138,&local_128,2);
          uStack_94 = uStack_12c;
          uStack_98 = uStack_130;
          if ((0x46U >> (uStack_12c & 0x1f) & 1) == 0) {
            dStack_a0 = dStack_138;
          }
          else {
            FUN_140085160(&dStack_a0,&dStack_138);
          }
          FUN_140001fe0(&dStack_a0,&dStack_d0);
          uStack_74 = uStack_94;
          uStack_78 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_a0);
          }
          FUN_140001fe0(&dStack_80,&dStack_b0);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001c50(&dStack_90,2);
          FUN_140004520(&dStack_158,&local_c0,_DAT_141982c40);
          local_64 = uStack_14c;
          local_68 = uStack_150;
          if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
            local_70 = dStack_158;
          }
          else {
            FUN_140085160(&local_70,&dStack_158);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_158);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_138);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
        else {
          local_108 = 0x2e;
          FUN_140004520(&dStack_b0,&local_c0,_DAT_141982c40);
          uStack_74 = uStack_a4;
          uStack_78 = uStack_a8;
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_b0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_b0);
          }
          FUN_140001fe0(&dStack_80,&local_128);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_128);
          local_64 = uStack_84;
          local_68 = uStack_88;
          if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
            local_70 = dStack_90;
          }
          else {
            FUN_140085160(&local_70,&dStack_90);
          }
          FUN_140001fe0(&local_70,&local_128);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
        break;
      case (undefined *)0x14006521c:
        local_108 = 0x32;
        dVar10 = local_c0;
        uStack_a8 = local_b8;
        uStack_a4 = local_b4;
        if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_b0,&local_c0);
          dVar10 = dStack_b0;
        }
        dStack_b0 = dVar10;
        FUN_140001fe0(&dStack_b0,&local_e0);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_e0);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001fe0(&dStack_90,&local_e0);
        local_64 = uStack_84;
        local_68 = uStack_88;
        if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
          local_70 = dStack_90;
        }
        else {
          FUN_140085160(&local_70,&dStack_90);
        }
        FUN_140001fe0(&local_70,&local_e0);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        break;
      case (undefined *)0x140065264:
        local_108 = 0x35;
        dVar10 = local_198;
        uStack_98 = uStack_190;
        uStack_94 = local_18c;
        if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_a0,&local_198);
          dVar10 = dStack_a0;
        }
        dStack_a0 = dVar10;
        FUN_140001fe0(&dStack_a0,&local_198);
        uStack_a4 = uStack_94;
        uStack_a8 = uStack_98;
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          dStack_b0 = dStack_a0;
        }
        else {
          FUN_140085160(&dStack_b0,&dStack_a0);
        }
        FUN_140001fe0(&dStack_b0,&local_198);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_198);
        FUN_140017bd0(&dStack_90,&dStack_80,1);
        dStack_d0 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dStack_d0 = (double)FUN_1416940c0(&local_c0);
        }
        dStack_d0 = (double)((ulonglong)dStack_d0 ^ DAT_141982e90);
        uStack_c4 = 0;
        local_64 = 0;
        local_68 = uStack_c8;
        local_70 = dStack_d0;
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_d0);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        break;
      case (undefined *)0x1400652ac:
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x39;
          FUN_140017bd0(&dStack_b0,&local_128,2);
          FUN_140017bd0(&dStack_d0,&local_128,2);
          FUN_140017bd0(&dStack_158,&local_128,2);
          FUN_140017bd0(&dStack_188,&local_128,2);
          uStack_12c = uStack_17c;
          uStack_130 = uStack_180;
          if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
            dStack_138 = dStack_188;
          }
          else {
            FUN_140085160(&dStack_138,&dStack_188);
          }
          FUN_140001fe0(&dStack_138,&dStack_158);
          uStack_94 = uStack_12c;
          uStack_98 = uStack_130;
          if ((0x46U >> (uStack_12c & 0x1f) & 1) == 0) {
            dStack_a0 = dStack_138;
          }
          else {
            FUN_140085160(&dStack_a0,&dStack_138);
          }
          FUN_140001fe0(&dStack_a0,&dStack_d0);
          uStack_74 = uStack_94;
          uStack_78 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_a0);
          }
          FUN_140001fe0(&dStack_80,&dStack_b0);
          FUN_140017bd0(&dStack_90,&dStack_80,2);
          dStack_208 = local_c0;
          if ((local_b4 & 0xffffff) != 0) {
            dStack_208 = (double)FUN_1416940c0(&local_c0);
          }
          dStack_208 = (double)((ulonglong)dStack_208 ^ DAT_141982e90);
          uStack_1fc = 0;
          FUN_140004520(&dStack_1d8,&dStack_208,_DAT_141982c40);
          local_64 = uStack_1cc;
          local_68 = uStack_1d0;
          if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
            local_70 = dStack_1d8;
          }
          else {
            FUN_140085160(&local_70,&dStack_1d8);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_1d8);
          }
          if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_208);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_138);
          }
          if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_188);
          }
          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_158);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
        else {
          local_108 = 0x38;
          FUN_140004520(&dStack_a0,&local_c0,_DAT_141982c40);
          uStack_a4 = uStack_94;
          uStack_a8 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_b0 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_b0,&dStack_a0);
          }
          FUN_140001fe0(&dStack_b0,&local_128);
          uStack_74 = uStack_a4;
          uStack_78 = uStack_a8;
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_b0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_b0);
          }
          FUN_140001fe0(&dStack_80,&local_128);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_128);
          local_64 = uStack_84;
          local_68 = uStack_88;
          if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
            local_70 = dStack_90;
          }
          else {
            FUN_140085160(&local_70,&dStack_90);
          }
          FUN_140001fe0(&local_70,&local_128);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
        }
        break;
      case (undefined *)0x140065355:
        local_108 = 0x3f;
        dVar10 = local_198;
        uStack_c8 = uStack_190;
        uStack_c4 = local_18c;
        if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
          FUN_140085160(&dStack_d0,&local_198);
          dVar10 = dStack_d0;
        }
        dStack_d0 = dVar10;
        FUN_140001fe0(&dStack_d0,&local_198);
        uStack_94 = uStack_c4;
        uStack_98 = uStack_c8;
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
          dStack_a0 = dStack_d0;
        }
        else {
          FUN_140085160(&dStack_a0,&dStack_d0);
        }
        FUN_140001fe0(&dStack_a0,&local_198);
        uStack_a4 = uStack_94;
        uStack_a8 = uStack_98;
        if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
          dStack_b0 = dStack_a0;
        }
        else {
          FUN_140085160(&dStack_b0,&dStack_a0);
        }
        FUN_140001fe0(&dStack_b0,&local_198);
        uStack_74 = uStack_a4;
        uStack_78 = uStack_a8;
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
          dStack_80 = dStack_b0;
        }
        else {
          FUN_140085160(&dStack_80,&dStack_b0);
        }
        FUN_140001fe0(&dStack_80,&local_198);
        uStack_84 = uStack_74;
        uStack_88 = uStack_78;
        if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
          dStack_90 = dStack_80;
        }
        else {
          FUN_140085160(&dStack_90,&dStack_80);
        }
        FUN_140001c50(&dStack_90,1);
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_b0);
        }
        if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a0);
        }
        if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_d0);
        }
        break;
      case (undefined *)0x14006539d:
        local_108 = 0x49;
        if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_100);
        }
        local_100 = 0;
        uStack_f8 = 0x500000000;
        FUN_140009980(&local_60,&local_e0,_DAT_141982ea8);
        FUN_1400019a0(&local_298,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        puStack_238 = &local_298;
        uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,DAT_1420da4f0/*sin*/,&puStack_238);
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140001fe0(&local_70,uVar6);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        break;
      case (undefined *)0x140065499:
        local_108 = 0x4f;
        local_54 = 0;
        local_60 = 0.0;
        iVar3 = FUN_1416d9df0(&local_178,&local_60,uVar6,0);
        if (iVar3 == 0) {
          local_108 = 0x4f;
          FUN_1400019a0(param_3,&local_f0);
        }
        else {
          local_108 = 0x50;
          if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_100);
          }
          local_100 = 0;
          uStack_f8 = 0x500000000;
          FUN_140002730(&local_298,0x1420b2848);
          uStack_84 = local_16c;
          uStack_88 = local_170;
          puStack_238 = &local_298;
          if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
            dStack_90 = local_178;
          }
          else {
            FUN_140085160(&dStack_90,&local_178);
          }
          FUN_140004620(&dStack_90,&local_1c8);
          FUN_140017bd0(&local_70,&dStack_90,1);
          local_54 = 0;
          local_60 = 10.0;
          FUN_140001fe0(&local_60,&local_70);
          FUN_1400019a0(&local_288,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          puStack_230 = &local_288;
          uVar6 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
          local_64 = local_b4;
          local_68 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_70 = local_c0;
          }
          else {
            FUN_140085160(&local_70,&local_c0);
          }
          FUN_140001fe0(&local_70,uVar6);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
        }
        break;
      case (undefined *)0x140065571:
        local_54 = 0;
        local_60 = 0.0;
        iVar3 = FUN_1416d9df0(&local_178,&local_60,uVar6,0);
        if (iVar3 == 0) {
          local_108 = 0x57;
          FUN_1400019a0(param_3,&local_f0);
        }
        else {
          iVar3 = FUN_1416d9df0(&local_178,&local_1c8,uVar6,0);
          if (iVar3 == 0) {
            local_108 = 0x58;
            local_54 = local_e4;
            local_58 = uStack_e8;
            if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
              local_60 = local_f0;
            }
            else {
              FUN_140085160(&local_60,&local_f0);
            }
            FUN_140003ca0(&local_60,&local_c0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
          }
          else {
            local_54 = 0;
            local_60 = 1.0;
            iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x5a;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              FUN_140002730(&local_298,0x1420b2848);
              puStack_238 = &local_298;
              FUN_140017bd0(&local_70,&local_128,1);
              local_54 = 0;
              local_60 = -10.0;
              FUN_140001fe0(&local_60,&local_70);
              FUN_1400019a0(&local_288,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              puStack_230 = &local_288;
              puVar4 = (ulonglong *)
                       FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
              if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
                uVar11 = *puVar4;
              }
              else {
                uVar11 = FUN_1416940c0(puVar4);
              }
              dStack_90 = (double)(uVar11 ^ DAT_141982e90);
              uStack_74 = 0;
              uStack_84 = 0;
              uStack_88 = uStack_78;
              dStack_80 = dStack_90;
              FUN_140001c50(&dStack_90,2);
              FUN_140004520(&dStack_b0,&local_c0,_DAT_141982c40);
              local_64 = uStack_a4;
              local_68 = uStack_a8;
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
                local_70 = dStack_b0;
              }
              else {
                FUN_140085160(&local_70,&dStack_b0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(param_3,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
            }
            else {
              local_108 = 0x59;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              FUN_140002730(&local_298,0x1420b2848);
              puStack_238 = &local_298;
              FUN_140017bd0(&local_70,&local_128,1);
              local_54 = 0;
              local_60 = 10.0;
              FUN_140001fe0(&local_60,&local_70);
              FUN_1400019a0(&local_288,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              puStack_230 = &local_288;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
              FUN_140004520(&dStack_90,&local_c0,_DAT_141982c40);
              local_64 = uStack_84;
              local_68 = uStack_88;
              if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
                local_70 = dStack_90;
              }
              else {
                FUN_140085160(&local_70,&dStack_90);
              }
              FUN_140001fe0(&local_70,uVar6);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(param_3,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
            }
          }
        }
        break;
      case (undefined *)0x140065781:
        local_108 = 0x5d;
        if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_100);
        }
        local_100 = 0;
        uStack_f8 = 0x500000000;
        local_64 = local_d4;
        local_68 = uStack_d8;
        if ((0x46U >> (local_d4 & 0x1f) & 1) == 0) {
          local_70 = local_e0;
        }
        else {
          FUN_140085160(&local_70,&local_e0);
        }
        FUN_140001fe0(&local_70,&local_e0);
        local_54 = 0;
        local_60 = 1.0;
        FUN_140003e00(&local_60,&local_70);
        FUN_1400019a0(&local_298,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        puStack_238 = &local_298;
        uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,DAT_1420d9fe0/*sqrt*/,&puStack_238);
        FUN_140017bd0(&dStack_90,uVar6,1);
        dStack_80 = local_c0;
        if ((local_b4 & 0xffffff) != 0) {
          dStack_80 = (double)FUN_1416940c0(&local_c0);
        }
        dStack_80 = (double)((ulonglong)dStack_80 ^ DAT_141982e90);
        uStack_74 = 0;
        local_64 = 0;
        local_68 = uStack_78;
        local_70 = dStack_80;
        FUN_140001fe0(&local_70,&dStack_90);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_80);
        }
        if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_90);
        }
        break;
      case (undefined *)0x1400657fc:
        local_108 = 0x60;
        if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_100);
        }
        local_100 = 0;
        uStack_f8 = 0x500000000;
        local_64 = local_18c;
        local_68 = uStack_190;
        if ((0x46U >> (local_18c & 0x1f) & 1) == 0) {
          local_70 = local_198;
        }
        else {
          FUN_140085160(&local_70,&local_198);
        }
        FUN_140001fe0(&local_70,&local_198);
        local_54 = 0;
        local_60 = 1.0;
        FUN_140003e00(&local_60,&local_70);
        FUN_1400019a0(&local_298,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        puStack_238 = &local_298;
        uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,DAT_1420d9fe0/*sqrt*/,&puStack_238);
        local_64 = local_b4;
        local_68 = local_b8;
        if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
          local_70 = local_c0;
        }
        else {
          FUN_140085160(&local_70,&local_c0);
        }
        FUN_140001fe0(&local_70,uVar6);
        local_54 = local_64;
        local_58 = local_68;
        if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
          local_60 = local_70;
        }
        else {
          FUN_140085160(&local_60,&local_70);
        }
        FUN_140003ca0(&local_60,&local_f0);
        FUN_1400019a0(param_3,&local_60);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_70);
        }
        break;
      case (undefined *)0x140065877:
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 100;
          if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_100);
          }
          local_100 = 0;
          uStack_f8 = 0x500000000;
          FUN_140017bd0(&dStack_90,&local_128,2);
          FUN_140017bd0(&dStack_80,&local_128,2);
          local_64 = uStack_74;
          local_68 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            local_70 = dStack_80;
          }
          else {
            FUN_140085160(&local_70,&dStack_80);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = 0;
          local_60 = 1.0;
          FUN_140003e00(&local_60,&local_70);
          FUN_1400019a0(&local_298,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          puStack_238 = &local_298;
          pdVar5 = (double *)FUN_1416ab210(param_1,param_2,&local_100,1,DAT_1420d9fe0/*sqrt*/,&puStack_238);
          uStack_84 = *(uint *)((longlong)pdVar5 + 0xc);
          uStack_88 = *(undefined4 *)(pdVar5 + 1);
          if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
            dStack_90 = *pdVar5;
          }
          else {
            FUN_140085160(&dStack_90,pdVar5);
          }
          FUN_140001c50(&dStack_90,1);
          FUN_140004520(&dStack_80,&local_c0,_DAT_141982c40);
          local_64 = uStack_74;
          local_68 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            local_70 = dStack_80;
          }
          else {
            FUN_140085160(&local_70,&dStack_80);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
        }
        else {
          local_108 = 99;
          if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_100);
          }
          local_100 = 0;
          uStack_f8 = 0x500000000;
          local_64 = local_11c;
          local_68 = uStack_120;
          if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
            local_70 = local_128;
          }
          else {
            FUN_140085160(&local_70,&local_128);
          }
          FUN_140001fe0(&local_70,&local_128);
          local_54 = 0;
          local_60 = 1.0;
          FUN_140003e00(&local_60,&local_70);
          FUN_1400019a0(&local_298,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          puStack_238 = &local_298;
          uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,DAT_1420d9fe0/*sqrt*/,&puStack_238);
          FUN_140017bd0(&dStack_90,uVar6,1);
          dStack_b0 = local_c0;
          if ((local_b4 & 0xffffff) != 0) {
            dStack_b0 = (double)FUN_1416940c0(&local_c0);
          }
          dStack_b0 = (double)((ulonglong)dStack_b0 ^ DAT_141982e90);
          uStack_a4 = 0;
          FUN_140004520(&dStack_80,&dStack_b0,_DAT_141982c40);
          local_64 = uStack_74;
          local_68 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            local_70 = dStack_80;
          }
          else {
            FUN_140085160(&local_70,&dStack_80);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
        }
        break;
      case (undefined *)0x140065938:
        local_108 = 0x67;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = 0;
        FUN_1400019a0(&local_1a8,&local_c0);
        uVar6 = DAT_1420f6b08;
        local_54 = 0;
        local_60 = 0.0;
        iVar3 = FUN_1416d9df0(&local_178,&local_60,DAT_1420f6b08,0);
        if (iVar3 == 0) {
          local_108 = 0x68;
          FUN_1400019a0(param_3,&local_f0);
        }
        else {
          local_54 = 0;
          local_60 = 1.0;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,0);
          if (iVar3 == 0) {
            local_108 = 0x69;
            local_54 = local_e4;
            local_58 = uStack_e8;
            if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
              local_60 = local_f0;
            }
            else {
              FUN_140085160(&local_60,&local_f0);
            }
            FUN_140003ca0(&local_60,&local_c0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
          }
          else {
            cVar2 = FUN_1416927d0(&local_1b8);
            if (cVar2 == '\0') {
              local_108 = 0x6a;
              FUN_140009980(&local_60,&local_1c8,DAT_141982e80);
              FUN_1400019a0(&local_1b8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_108 = 0x6b;
            dVar10 = local_c0;
            if ((local_b4 & 0xffffff) != 0) {
              dVar10 = (double)FUN_1416940c0(&local_c0);
            }
            local_60 = (double)FUN_1416cd450(dVar10);
            local_54 = 0;
            iVar3 = FUN_1416d9df0(&local_1a8,&local_60,DAT_1420f6b08,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x6c;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              local_54 = local_b4;
              local_58 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_60 = local_c0;
              }
              else {
                FUN_140085160(&local_60,&local_c0);
              }
              FUN_140004620(&local_60,&local_1a8);
              FUN_1400019a0(&local_298,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              puStack_238 = &local_298;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,uRam00000001420da510,&puStack_238);
              FUN_140004520(&local_70,&local_1b8,_UNK_141982e70);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140001fe0(&local_60,uVar6);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
            }
            else {
              local_108 = 0x6b;
              FUN_1400019a0(&local_1a8,&local_c0);
              FUN_140004520(&local_60,&local_1b8,DAT_141982e78);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_108 = 0x6d;
            if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_100);
            }
            local_100 = 0;
            uStack_f8 = 0x500000000;
            if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_1f8);
            }
            local_1f8 = 0;
            uStack_1f0 = 0x500000000;
            FUN_140002730(&local_298,0x1420b2848);
            puStack_238 = &local_298;
            FUN_140017bd0(&local_70,&local_e0,1);
            local_54 = 0;
            local_60 = 10.0;
            FUN_140001fe0(&local_60,&local_70);
            FUN_1400019a0(&local_288,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            puStack_230 = &local_288;
            FUN_140017bd0(&dStack_b0,&local_e0,1);
            uStack_74 = uStack_a4;
            uStack_78 = uStack_a8;
            if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
              dStack_80 = dStack_b0;
            }
            else {
              FUN_140085160(&dStack_80,&dStack_b0);
            }
            FUN_140001fe0(&dStack_80,&local_1c8);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140003e00(&dStack_90,&local_168);
            FUN_140009980(&local_70,&dStack_90,_UNK_141982e70);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140004620(&local_60,&local_1b8);
            FUN_1400019a0(&local_278,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
            if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_b0);
            }
            apuStack_228[0] = &local_278;
            uVar6 = FUN_1416ab210(param_1,param_2,&local_1f8,1,DAT_1420da4f0/*sin*/,apuStack_228);
            uVar7 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
            uStack_74 = local_19c;
            uStack_78 = uStack_1a0;
            if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
              dStack_80 = local_1a8;
            }
            else {
              FUN_140085160(&dStack_80,&local_1a8);
            }
            FUN_140001fe0(&dStack_80,uVar7);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140001fe0(&dStack_90,uVar6);
            local_70 = dStack_90;
            if ((uStack_84 & 0xffffff) != 0) {
              local_70 = (double)FUN_1416940c0(&dStack_90);
            }
            local_70 = (double)((ulonglong)local_70 ^ DAT_141982e90);
            local_64 = 0;
            local_54 = 0;
            local_58 = local_68;
            local_60 = local_70;
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
          }
        }
        break;
      case (undefined *)0x140065ac3:
        local_108 = 0x70;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = 0;
        FUN_1400019a0(&local_1a8,&local_c0);
        uVar6 = DAT_1420f6b08;
        local_54 = 0;
        local_60 = 0.0;
        iVar3 = FUN_1416d9df0(&local_178,&local_60,DAT_1420f6b08,0);
        if (iVar3 == 0) {
          local_108 = 0x71;
          FUN_1400019a0(param_3,&local_f0);
        }
        else {
          local_54 = 0;
          local_60 = 1.0;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,0);
          if (iVar3 == 0) {
            local_108 = 0x72;
            local_54 = local_e4;
            local_58 = uStack_e8;
            if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
              local_60 = local_f0;
            }
            else {
              FUN_140085160(&local_60,&local_f0);
            }
            FUN_140003ca0(&local_60,&local_c0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
          }
          else {
            cVar2 = FUN_1416927d0(&local_1b8);
            if (cVar2 == '\0') {
              local_108 = 0x73;
              FUN_140009980(&local_60,&local_1c8,DAT_141982e80);
              FUN_1400019a0(&local_1b8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_108 = 0x74;
            dVar10 = local_c0;
            if ((local_b4 & 0xffffff) != 0) {
              dVar10 = (double)FUN_1416940c0(&local_c0);
            }
            local_60 = (double)FUN_1416cd450(dVar10);
            local_54 = 0;
            iVar3 = FUN_1416d9df0(&local_1a8,&local_60,DAT_1420f6b08,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x75;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              local_54 = local_b4;
              local_58 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_60 = local_c0;
              }
              else {
                FUN_140085160(&local_60,&local_c0);
              }
              FUN_140004620(&local_60,&local_1a8);
              FUN_1400019a0(&local_298,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              puStack_238 = &local_298;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,uRam00000001420da510,&puStack_238);
              FUN_140004520(&local_70,&local_1b8,_UNK_141982e70);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140001fe0(&local_60,uVar6);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
            }
            else {
              local_108 = 0x74;
              FUN_1400019a0(&local_1a8,&local_c0);
              FUN_140004520(&local_60,&local_1b8,DAT_141982e78);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_108 = 0x76;
            if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_100);
            }
            local_100 = 0;
            uStack_f8 = 0x500000000;
            if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_1f8);
            }
            local_1f8 = 0;
            uStack_1f0 = 0x500000000;
            FUN_140002730(&local_298,0x1420b2848);
            local_54 = 0;
            local_60 = -10.0;
            puStack_238 = &local_298;
            FUN_140001fe0(&local_60,&local_e0);
            FUN_1400019a0(&local_288,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            uStack_74 = local_d4;
            uStack_78 = uStack_d8;
            puStack_230 = &local_288;
            if ((0x46U >> (local_d4 & 0x1f) & 1) == 0) {
              dStack_80 = local_e0;
            }
            else {
              FUN_140085160(&dStack_80,&local_e0);
            }
            FUN_140001fe0(&dStack_80,&local_1c8);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140003e00(&dStack_90,&local_168);
            FUN_140009980(&local_70,&dStack_90,_UNK_141982e70);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140004620(&local_60,&local_1b8);
            FUN_1400019a0(&local_278,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
            apuStack_228[0] = &local_278;
            uVar6 = FUN_1416ab210(param_1,param_2,&local_1f8,1,DAT_1420da4f0/*sin*/,apuStack_228);
            uVar7 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
            uStack_74 = local_19c;
            uStack_78 = uStack_1a0;
            if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
              dStack_80 = local_1a8;
            }
            else {
              FUN_140085160(&dStack_80,&local_1a8);
            }
            FUN_140001fe0(&dStack_80,uVar7);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140001fe0(&dStack_90,uVar6);
            local_64 = uStack_84;
            local_68 = uStack_88;
            if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
              local_70 = dStack_90;
            }
            else {
              FUN_140085160(&local_70,&dStack_90);
            }
            FUN_140003ca0(&local_70,&local_c0);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
          }
        }
        break;
      case (undefined *)0x140065c4e:
        local_108 = 0x79;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = 0;
        FUN_1400019a0(&local_1a8,&local_c0);
        uVar6 = DAT_1420f6b08;
        local_54 = 0;
        local_60 = 0.0;
        iVar3 = FUN_1416d9df0(&local_178,&local_60,DAT_1420f6b08,0);
        if (iVar3 == 0) {
          local_108 = 0x7a;
          FUN_1400019a0(param_3,&local_f0);
        }
        else {
          local_54 = 0;
          local_60 = 2.0;
          iVar3 = FUN_1416d9df0(&local_128,&local_60,uVar6,0);
          if (iVar3 == 0) {
            local_108 = 0x7b;
            local_54 = local_e4;
            local_58 = uStack_e8;
            if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
              local_60 = local_f0;
            }
            else {
              FUN_140085160(&local_60,&local_f0);
            }
            FUN_140003ca0(&local_60,&local_c0);
            FUN_1400019a0(param_3,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
          }
          else {
            cVar2 = FUN_1416927d0(&local_1b8);
            if (cVar2 == '\0') {
              local_108 = 0x7c;
              FUN_140009980(&local_60,&local_1c8,_UNK_141982e68);
              FUN_1400019a0(&local_1b8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_108 = 0x7d;
            dVar10 = local_c0;
            if ((local_b4 & 0xffffff) != 0) {
              dVar10 = (double)FUN_1416940c0(&local_c0);
            }
            local_60 = (double)FUN_1416cd450(dVar10);
            local_54 = 0;
            iVar3 = FUN_1416d9df0(&local_1a8,&local_60,DAT_1420f6b08,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x7e;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              local_54 = local_b4;
              local_58 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_60 = local_c0;
              }
              else {
                FUN_140085160(&local_60,&local_c0);
              }
              FUN_140004620(&local_60,&local_1a8);
              FUN_1400019a0(&local_298,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              puStack_238 = &local_298;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_100,1,uRam00000001420da510,&puStack_238);
              FUN_140004520(&local_70,&local_1b8,_UNK_141982e70);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140001fe0(&local_60,uVar6);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
            }
            else {
              local_108 = 0x7d;
              FUN_1400019a0(&local_1a8,&local_c0);
              FUN_140004520(&local_60,&local_1b8,DAT_141982e78);
              FUN_1400019a0(&local_168,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
            }
            local_54 = 0;
            local_60 = 1.0;
            iVar3 = FUN_1416d9df0(&local_128,&local_60,DAT_1420f6b08,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0x80;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1f8);
              }
              local_1f8 = 0;
              uStack_1f0 = 0x500000000;
              FUN_140002730(&local_298,0x1420b2848);
              puStack_238 = &local_298;
              FUN_140017bd0(&local_70,&local_128,1);
              local_54 = 0;
              local_60 = -10.0;
              FUN_140001fe0(&local_60,&local_70);
              FUN_1400019a0(&local_288,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              puStack_230 = &local_288;
              FUN_140017bd0(&dStack_b0,&local_128,1);
              uStack_74 = uStack_a4;
              uStack_78 = uStack_a8;
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_b0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_b0);
              }
              FUN_140001fe0(&dStack_80,&local_1c8);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003e00(&dStack_90,&local_168);
              FUN_140009980(&local_70,&dStack_90,_UNK_141982e70);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140004620(&local_60,&local_1b8);
              FUN_1400019a0(&local_278,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
              apuStack_228[0] = &local_278;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_1f8,1,DAT_1420da4f0/*sin*/,apuStack_228);
              uVar7 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
              uStack_a4 = local_19c;
              uStack_a8 = uStack_1a0;
              if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
                dStack_b0 = local_1a8;
              }
              else {
                FUN_140085160(&dStack_b0,&local_1a8);
              }
              FUN_140001fe0(&dStack_b0,uVar7);
              uStack_74 = uStack_a4;
              uStack_78 = uStack_a8;
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_b0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_b0);
              }
              FUN_140001fe0(&dStack_80,uVar6);
              FUN_140009980(&dStack_90,&dStack_80,_DAT_141981ea8);
              local_64 = uStack_84;
              local_68 = uStack_88;
              if ((0x46U >> (uStack_84 & 0x1f) & 1) == 0) {
                local_70 = dStack_90;
              }
              else {
                FUN_140085160(&local_70,&dStack_90);
              }
              FUN_140003ca0(&local_70,&local_c0);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(param_3,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
            else {
              local_108 = 0x7f;
              if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_100);
              }
              local_100 = 0;
              uStack_f8 = 0x500000000;
              if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_1f8);
              }
              local_1f8 = 0;
              uStack_1f0 = 0x500000000;
              FUN_140002730(&local_298,0x1420b2848);
              puStack_238 = &local_298;
              FUN_140017bd0(&local_70,&local_128,1);
              local_54 = 0;
              local_60 = 10.0;
              FUN_140001fe0(&local_60,&local_70);
              FUN_1400019a0(&local_288,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              puStack_230 = &local_288;
              FUN_140017bd0(&dStack_b0,&local_128,1);
              uStack_74 = uStack_a4;
              uStack_78 = uStack_a8;
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_b0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_b0);
              }
              FUN_140001fe0(&dStack_80,&local_1c8);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003e00(&dStack_90,&local_168);
              FUN_140009980(&local_70,&dStack_90,_UNK_141982e70);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140004620(&local_60,&local_1b8);
              FUN_1400019a0(&local_278,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
              apuStack_228[0] = &local_278;
              uVar6 = FUN_1416ab210(param_1,param_2,&local_1f8,1,DAT_1420da4f0/*sin*/,apuStack_228);
              uVar7 = FUN_1416ab210(param_1,param_2,&local_100,2,DAT_1420da500/*power*/,&puStack_238);
              uStack_74 = local_19c;
              uStack_78 = uStack_1a0;
              if ((0x46U >> (local_19c & 0x1f) & 1) == 0) {
                dStack_80 = local_1a8;
              }
              else {
                FUN_140085160(&dStack_80,&local_1a8);
              }
              FUN_140001fe0(&dStack_80,uVar7);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140001fe0(&dStack_90,uVar6);
              local_64 = 0;
              local_70 = -0.5;
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(param_3,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
            }
          }
        }
        break;
      case (undefined *)0x140065dd9:
        local_108 = 0x9d;
        local_54 = 0;
        local_60 = 0.36363636363636365;
        iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x9f;
          local_54 = 0;
          local_60 = 0.7272727272727273;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
          if ((iVar3 == -2) || (-1 < iVar3)) {
            local_108 = 0xa1;
            local_54 = 0;
            local_60 = 0.9090909090909091;
            iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0xa4;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e30);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e30);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,_UNK_141982e38);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
            else {
              local_108 = 0xa2;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e40);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e40);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,_UNK_141982e48);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
          }
          else {
            local_108 = 0xa0;
            FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e50);
            FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e50);
            uStack_94 = 0;
            dStack_a0 = 7.5625;
            FUN_140001fe0(&dStack_a0,&dStack_d0);
            uStack_74 = uStack_94;
            uStack_78 = uStack_98;
            if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
              dStack_80 = dStack_a0;
            }
            else {
              FUN_140085160(&dStack_80,&dStack_a0);
            }
            FUN_140001fe0(&dStack_80,&dStack_b0);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140003f30(&dStack_90,DAT_141982e58);
            local_64 = local_b4;
            local_68 = local_b8;
            if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
              local_70 = local_c0;
            }
            else {
              FUN_140085160(&local_70,&local_c0);
            }
            FUN_140001fe0(&local_70,&dStack_90);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(&local_1e8,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
            if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_a0);
            }
            if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_d0);
            }
            if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_b0);
            }
          }
        }
        else {
          local_108 = 0x9e;
          uStack_74 = 0;
          dStack_80 = 7.5625;
          FUN_140001fe0(&dStack_80,&local_e0);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001fe0(&dStack_90,&local_e0);
          local_64 = local_b4;
          local_68 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_70 = local_c0;
          }
          else {
            FUN_140085160(&local_70,&local_c0);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(&local_1e8,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
        }
        local_108 = 0xa6;
        FUN_1400019a0(param_3,&local_1e8);
        break;
      case (undefined *)0x140065e9f:
        local_108 = 0xa9;
        FUN_140004520(&local_60,&local_1c8,_DAT_141982c40);
        iVar3 = FUN_1416d9df0(&local_178,&local_60,DAT_1420f6b08,1);
        if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_60);
        }
        if (iVar3 == -2 || -1 < iVar3) {
          local_108 = 0xba;
          FUN_140001a50(&local_70,&local_178,2);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003e00(&local_60,&local_1c8);
          FUN_1400019a0(&local_178,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          local_108 = 0xbb;
          local_54 = local_16c;
          local_58 = local_170;
          if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
            local_60 = local_178;
          }
          else {
            FUN_140085160(&local_60,&local_178);
          }
          FUN_140004620(&local_60,&local_1c8);
          FUN_1400019a0(&local_e0,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          uVar6 = DAT_1420f6b08;
          local_108 = 0xbc;
          local_54 = 0;
          local_60 = 0.36363636363636365;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,DAT_1420f6b08,1);
          if ((iVar3 == -2) || (-1 < iVar3)) {
            local_108 = 0xbe;
            local_54 = 0;
            local_60 = 0.7272727272727273;
            iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0xc0;
              local_54 = 0;
              local_60 = 0.9090909090909091;
              iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
              if ((iVar3 == -2) || (-1 < iVar3)) {
                local_108 = 0xc3;
                FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e30);
                FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e30);
                uStack_94 = 0;
                dStack_a0 = 7.5625;
                FUN_140001fe0(&dStack_a0,&dStack_d0);
                uStack_74 = uStack_94;
                uStack_78 = uStack_98;
                if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                  dStack_80 = dStack_a0;
                }
                else {
                  FUN_140085160(&dStack_80,&dStack_a0);
                }
                FUN_140001fe0(&dStack_80,&dStack_b0);
                uStack_84 = uStack_74;
                uStack_88 = uStack_78;
                if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                  dStack_90 = dStack_80;
                }
                else {
                  FUN_140085160(&dStack_90,&dStack_80);
                }
                FUN_140003f30(&dStack_90,_UNK_141982e38);
                local_64 = local_b4;
                local_68 = local_b8;
                if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                  local_70 = local_c0;
                }
                else {
                  FUN_140085160(&local_70,&local_c0);
                }
                FUN_140001fe0(&local_70,&dStack_90);
                local_54 = local_64;
                local_58 = local_68;
                if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                  local_60 = local_70;
                }
                else {
                  FUN_140085160(&local_60,&local_70);
                }
                FUN_140003ca0(&local_60,&local_f0);
                FUN_1400019a0(&local_1e8,&local_60);
                if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_60);
                }
                if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_70);
                }
                if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_90);
                }
                if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_80);
                }
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
                if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_d0);
                }
                if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_b0);
                }
              }
              else {
                local_108 = 0xc1;
                FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e40);
                FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e40);
                uStack_94 = 0;
                dStack_a0 = 7.5625;
                FUN_140001fe0(&dStack_a0,&dStack_d0);
                uStack_74 = uStack_94;
                uStack_78 = uStack_98;
                if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                  dStack_80 = dStack_a0;
                }
                else {
                  FUN_140085160(&dStack_80,&dStack_a0);
                }
                FUN_140001fe0(&dStack_80,&dStack_b0);
                uStack_84 = uStack_74;
                uStack_88 = uStack_78;
                if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                  dStack_90 = dStack_80;
                }
                else {
                  FUN_140085160(&dStack_90,&dStack_80);
                }
                FUN_140003f30(&dStack_90,_UNK_141982e48);
                local_64 = local_b4;
                local_68 = local_b8;
                if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                  local_70 = local_c0;
                }
                else {
                  FUN_140085160(&local_70,&local_c0);
                }
                FUN_140001fe0(&local_70,&dStack_90);
                local_54 = local_64;
                local_58 = local_68;
                if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                  local_60 = local_70;
                }
                else {
                  FUN_140085160(&local_60,&local_70);
                }
                FUN_140003ca0(&local_60,&local_f0);
                FUN_1400019a0(&local_1e8,&local_60);
                if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_60);
                }
                if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_70);
                }
                if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_90);
                }
                if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_80);
                }
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
                if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_d0);
                }
                if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_b0);
                }
              }
            }
            else {
              local_108 = 0xbf;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e50);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e50);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,DAT_141982e58);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
          }
          else {
            local_108 = 0xbd;
            uStack_74 = 0;
            dStack_80 = 7.5625;
            FUN_140001fe0(&dStack_80,&local_e0);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140001fe0(&dStack_90,&local_e0);
            local_64 = local_b4;
            local_68 = local_b8;
            if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
              local_70 = local_c0;
            }
            else {
              FUN_140085160(&local_70,&local_c0);
            }
            FUN_140001fe0(&local_70,&dStack_90);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(&local_1e8,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
          }
          local_108 = 0xc5;
          FUN_140009980(&dStack_90,&local_c0,_DAT_141981ea8);
          FUN_140009980(&dStack_80,&local_1e8,_DAT_141981ea8);
          local_64 = uStack_74;
          local_68 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            local_70 = dStack_80;
          }
          else {
            FUN_140085160(&local_70,&dStack_80);
          }
          FUN_140003ca0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
        }
        else {
          local_108 = 0xaa;
          local_54 = 0;
          local_60 = 2.0;
          FUN_140001fe0(&local_178,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          local_108 = 0xab;
          local_54 = local_1bc;
          local_58 = uStack_1c0;
          if ((0x46U >> (local_1bc & 0x1f) & 1) == 0) {
            local_60 = local_1c8;
          }
          else {
            FUN_140085160(&local_60,&local_1c8);
          }
          FUN_140003e00(&local_60,&local_178);
          FUN_1400019a0(&local_178,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          local_108 = 0xac;
          local_54 = local_16c;
          local_58 = local_170;
          if ((0x46U >> (local_16c & 0x1f) & 1) == 0) {
            local_60 = local_178;
          }
          else {
            FUN_140085160(&local_60,&local_178);
          }
          FUN_140004620(&local_60,&local_1c8);
          FUN_1400019a0(&local_e0,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          uVar6 = DAT_1420f6b08;
          local_108 = 0xad;
          local_54 = 0;
          local_60 = 0.36363636363636365;
          iVar3 = FUN_1416d9df0(&local_e0,&local_60,DAT_1420f6b08,1);
          if ((iVar3 == -2) || (-1 < iVar3)) {
            local_108 = 0xaf;
            local_54 = 0;
            local_60 = 0.7272727272727273;
            iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
            if ((iVar3 == -2) || (-1 < iVar3)) {
              local_108 = 0xb1;
              local_54 = 0;
              local_60 = 0.9090909090909091;
              iVar3 = FUN_1416d9df0(&local_e0,&local_60,uVar6,1);
              if ((iVar3 == -2) || (-1 < iVar3)) {
                local_108 = 0xb4;
                FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e30);
                FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e30);
                uStack_94 = 0;
                dStack_a0 = 7.5625;
                FUN_140001fe0(&dStack_a0,&dStack_d0);
                uStack_74 = uStack_94;
                uStack_78 = uStack_98;
                if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                  dStack_80 = dStack_a0;
                }
                else {
                  FUN_140085160(&dStack_80,&dStack_a0);
                }
                FUN_140001fe0(&dStack_80,&dStack_b0);
                uStack_84 = uStack_74;
                uStack_88 = uStack_78;
                if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                  dStack_90 = dStack_80;
                }
                else {
                  FUN_140085160(&dStack_90,&dStack_80);
                }
                FUN_140003f30(&dStack_90,_UNK_141982e38);
                local_64 = local_b4;
                local_68 = local_b8;
                if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                  local_70 = local_c0;
                }
                else {
                  FUN_140085160(&local_70,&local_c0);
                }
                FUN_140001fe0(&local_70,&dStack_90);
                local_54 = local_64;
                local_58 = local_68;
                if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                  local_60 = local_70;
                }
                else {
                  FUN_140085160(&local_60,&local_70);
                }
                FUN_140003ca0(&local_60,&local_f0);
                FUN_1400019a0(&local_1e8,&local_60);
                if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_60);
                }
                if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_70);
                }
                if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_90);
                }
                if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_80);
                }
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
                if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_d0);
                }
                if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_b0);
                }
              }
              else {
                local_108 = 0xb2;
                FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e40);
                FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e40);
                uStack_94 = 0;
                dStack_a0 = 7.5625;
                FUN_140001fe0(&dStack_a0,&dStack_d0);
                uStack_74 = uStack_94;
                uStack_78 = uStack_98;
                if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                  dStack_80 = dStack_a0;
                }
                else {
                  FUN_140085160(&dStack_80,&dStack_a0);
                }
                FUN_140001fe0(&dStack_80,&dStack_b0);
                uStack_84 = uStack_74;
                uStack_88 = uStack_78;
                if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                  dStack_90 = dStack_80;
                }
                else {
                  FUN_140085160(&dStack_90,&dStack_80);
                }
                FUN_140003f30(&dStack_90,_UNK_141982e48);
                local_64 = local_b4;
                local_68 = local_b8;
                if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                  local_70 = local_c0;
                }
                else {
                  FUN_140085160(&local_70,&local_c0);
                }
                FUN_140001fe0(&local_70,&dStack_90);
                local_54 = local_64;
                local_58 = local_68;
                if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                  local_60 = local_70;
                }
                else {
                  FUN_140085160(&local_60,&local_70);
                }
                FUN_140003ca0(&local_60,&local_f0);
                FUN_1400019a0(&local_1e8,&local_60);
                if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_60);
                }
                if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&local_70);
                }
                if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_90);
                }
                if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_80);
                }
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
                if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_d0);
                }
                if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_b0);
                }
              }
            }
            else {
              local_108 = 0xb0;
              FUN_140003ba0(&dStack_b0,&local_e0,_UNK_141982e50);
              FUN_140003ba0(&dStack_d0,&local_e0,_UNK_141982e50);
              uStack_94 = 0;
              dStack_a0 = 7.5625;
              FUN_140001fe0(&dStack_a0,&dStack_d0);
              uStack_74 = uStack_94;
              uStack_78 = uStack_98;
              if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
                dStack_80 = dStack_a0;
              }
              else {
                FUN_140085160(&dStack_80,&dStack_a0);
              }
              FUN_140001fe0(&dStack_80,&dStack_b0);
              uStack_84 = uStack_74;
              uStack_88 = uStack_78;
              if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
                dStack_90 = dStack_80;
              }
              else {
                FUN_140085160(&dStack_90,&dStack_80);
              }
              FUN_140003f30(&dStack_90,DAT_141982e58);
              local_64 = local_b4;
              local_68 = local_b8;
              if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
                local_70 = local_c0;
              }
              else {
                FUN_140085160(&local_70,&local_c0);
              }
              FUN_140001fe0(&local_70,&dStack_90);
              local_54 = local_64;
              local_58 = local_68;
              if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
                local_60 = local_70;
              }
              else {
                FUN_140085160(&local_60,&local_70);
              }
              FUN_140003ca0(&local_60,&local_f0);
              FUN_1400019a0(&local_1e8,&local_60);
              if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_60);
              }
              if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
                FUN_140001b50(&local_70);
              }
              if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_90);
              }
              if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_80);
              }
              if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_a0);
              }
              if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_d0);
              }
              if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_b0);
              }
            }
          }
          else {
            local_108 = 0xae;
            uStack_74 = 0;
            dStack_80 = 7.5625;
            FUN_140001fe0(&dStack_80,&local_e0);
            uStack_84 = uStack_74;
            uStack_88 = uStack_78;
            if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
              dStack_90 = dStack_80;
            }
            else {
              FUN_140085160(&dStack_90,&dStack_80);
            }
            FUN_140001fe0(&dStack_90,&local_e0);
            local_64 = local_b4;
            local_68 = local_b8;
            if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
              local_70 = local_c0;
            }
            else {
              FUN_140085160(&local_70,&local_c0);
            }
            FUN_140001fe0(&local_70,&dStack_90);
            local_54 = local_64;
            local_58 = local_68;
            if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
              local_60 = local_70;
            }
            else {
              FUN_140085160(&local_60,&local_70);
            }
            FUN_140003ca0(&local_60,&local_f0);
            FUN_1400019a0(&local_1e8,&local_60);
            if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_60);
            }
            if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_70);
            }
            if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_90);
            }
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&dStack_80);
            }
          }
          local_108 = 0xb6;
          local_64 = local_b4;
          local_68 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_70 = local_c0;
          }
          else {
            FUN_140085160(&local_70,&local_c0);
          }
          FUN_140003e00(&local_70,&local_1e8);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(&local_1e8,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          local_108 = 0xb7;
          FUN_140009980(&local_70,&local_1e8,_DAT_141981ea8);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
        }
        break;
      case (undefined *)0x140065faa:
        local_108 = 0x8b;
        if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_168);
          uVar12 = (undefined4)DAT_1420f6b08;
          uVar13 = (undefined4)((ulonglong)DAT_1420f6b08 >> 0x20);
        }
        local_15c = 0;
        local_168 = 0x3ffb39abf3387161/*1.70158*/;
        local_54 = 0;
        local_60 = 1.0;
        iVar3 = FUN_1416d9df0(&local_128,&local_60,CONCAT44(uVar13,uVar12),1);
        if ((iVar3 == -2) || (-1 < iVar3)) {
          local_108 = 0x8d;
          FUN_140009980(&dStack_a0,&local_168,_UNK_141982e60);
          FUN_140017bd0(&dStack_138,&local_128,2);
          FUN_140009980(&dStack_188,&local_168,_UNK_141982e60);
          uStack_14c = uStack_17c;
          uStack_150 = uStack_180;
          if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
            dStack_158 = dStack_188;
          }
          else {
            FUN_140085160(&dStack_158,&dStack_188);
          }
          FUN_140001c50(&dStack_158,1);
          uStack_c4 = uStack_14c;
          uStack_c8 = uStack_150;
          if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
            dStack_d0 = dStack_158;
          }
          else {
            FUN_140085160(&dStack_d0,&dStack_158);
          }
          FUN_140001fe0(&dStack_d0,&dStack_138);
          uStack_a4 = uStack_c4;
          uStack_a8 = uStack_c8;
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
            dStack_b0 = dStack_d0;
          }
          else {
            FUN_140085160(&dStack_b0,&dStack_d0);
          }
          FUN_140003ca0(&dStack_b0,&dStack_a0);
          FUN_140017bd0(&dStack_208,&local_128,2);
          FUN_140017bd0(&dStack_248,&local_128,2);
          uStack_1cc = uStack_23c;
          uStack_1d0 = uStack_240;
          if ((0x46U >> (uStack_23c & 0x1f) & 1) == 0) {
            dStack_1d8 = dStack_248;
          }
          else {
            FUN_140085160(&dStack_1d8,&dStack_248);
          }
          FUN_140001fe0(&dStack_1d8,&dStack_208);
          uStack_74 = uStack_1cc;
          uStack_78 = uStack_1d0;
          if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
            dStack_80 = dStack_1d8;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_1d8);
          }
          FUN_140001fe0(&dStack_80,&dStack_b0);
          uStack_84 = uStack_74;
          uStack_88 = uStack_78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            dStack_90 = dStack_80;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_80);
          }
          FUN_140001c50(&dStack_90,2);
          FUN_140004520(&dStack_2b8,&local_c0,_DAT_141982c40);
          local_64 = uStack_2ac;
          local_68 = uStack_2b0;
          if ((0x46U >> (uStack_2ac & 0x1f) & 1) == 0) {
            local_70 = dStack_2b8;
          }
          else {
            FUN_140085160(&local_70,&dStack_2b8);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_2b8);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_1d8);
          }
          if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_248);
          }
          if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_208);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_158);
          }
          if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_188);
          }
          if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_138);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
        }
        else {
          local_108 = 0x8c;
          FUN_140009980(&dStack_b0,&local_168,_UNK_141982e60);
          FUN_140009980(&dStack_138,&local_168,_UNK_141982e60);
          uStack_c4 = uStack_12c;
          uStack_c8 = uStack_130;
          if ((0x46U >> (uStack_12c & 0x1f) & 1) == 0) {
            dStack_d0 = dStack_138;
          }
          else {
            FUN_140085160(&dStack_d0,&dStack_138);
          }
          FUN_140001c50(&dStack_d0,1);
          uStack_94 = uStack_c4;
          uStack_98 = uStack_c8;
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) == 0) {
            dStack_a0 = dStack_d0;
          }
          else {
            FUN_140085160(&dStack_a0,&dStack_d0);
          }
          FUN_140001fe0(&dStack_a0,&local_128);
          uStack_74 = uStack_94;
          uStack_78 = uStack_98;
          if ((0x46U >> (uStack_94 & 0x1f) & 1) == 0) {
            dStack_80 = dStack_a0;
          }
          else {
            FUN_140085160(&dStack_80,&dStack_a0);
          }
          FUN_140003e00(&dStack_80,&dStack_b0);
          uStack_14c = local_11c;
          uStack_150 = uStack_120;
          if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
            dStack_158 = local_128;
          }
          else {
            FUN_140085160(&dStack_158,&local_128);
          }
          FUN_140001fe0(&dStack_158,&local_128);
          uStack_84 = uStack_14c;
          uStack_88 = uStack_150;
          if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
            dStack_90 = dStack_158;
          }
          else {
            FUN_140085160(&dStack_90,&dStack_158);
          }
          FUN_140001fe0(&dStack_90,&dStack_80);
          FUN_140004520(&dStack_188,&local_c0,_DAT_141982c40);
          local_64 = uStack_17c;
          local_68 = uStack_180;
          if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
            local_70 = dStack_188;
          }
          else {
            FUN_140085160(&local_70,&dStack_188);
          }
          FUN_140001fe0(&local_70,&dStack_90);
          local_54 = local_64;
          local_58 = local_68;
          if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
            local_60 = local_70;
          }
          else {
            FUN_140085160(&local_60,&local_70);
          }
          FUN_140003ca0(&local_60,&local_f0);
          FUN_1400019a0(param_3,&local_60);
          if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_60);
          }
          if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_70);
          }
          if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_188);
          }
          if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_90);
          }
          if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_158);
          }
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_80);
          }
          if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_a0);
          }
          if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_d0);
          }
          if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_138);
          }
          if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_b0);
          }
        }
      }
      goto LAB_14006ff3d;
    }
  }
  else {
    iVar3 = FUN_1416d9df0(&DAT_14217ee64,&local_148,uVar6,0);
    if (iVar3 == 0) {
      lVar9 = 1;
      goto LAB_140064a59;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ee78,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ee84 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ee8c,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ee98 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eea0,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217eeac >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eeb4,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217eec0 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eec8,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217eed4 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eedc,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217eee8 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eef0,&local_148,uVar6,0);
    uVar1 = DAT_14217ef00;
    if (iVar3 == 0) {
joined_r0x0001400689a3:
      uVar11 = (ulonglong)uVar1;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef04,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef10 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef18,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef24 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef2c,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef38 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef40,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef4c >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef54,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef60 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef68,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef74 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef7c,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = _DAT_14217ef88 >> 0x20;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217ef90,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217efa0;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217efa4,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217efb4;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217efb8,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217efc8;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217efcc,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217efdc;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217efe0,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217eff0;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217eff4,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f004;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f008,&local_148,uVar6,0);
    uVar1 = DAT_14217f018;
    if (iVar3 == 0) goto joined_r0x0001400689a3;
    iVar3 = FUN_1416d9df0(&DAT_14217f01c,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f02c;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f030,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f040;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f044,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f054;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f058,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f068;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f06c,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f07c;
      goto joined_r0x000140064ad0;
    }
    iVar3 = FUN_1416d9df0(&DAT_14217f080,&local_148,uVar6,0);
    uVar1 = DAT_14217f090;
    if (iVar3 == 0) goto joined_r0x000140064a65;
    iVar3 = FUN_1416d9df0(&DAT_14217f094,&local_148,uVar6,0);
    if (iVar3 == 0) {
      uVar11 = (ulonglong)DAT_14217f0a4;
      goto joined_r0x000140064ad0;
    }
  }
  local_108 = 0xc9;
  local_64 = local_b4;
  local_68 = local_b8;
  if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
    local_70 = local_c0;
  }
  else {
    FUN_140085160(&local_70,&local_c0);
  }
  FUN_140001fe0(&local_70,&local_e0);
  local_54 = local_64;
  local_58 = local_68;
  if ((0x46U >> (local_64 & 0x1f) & 1) == 0) {
    local_60 = local_70;
  }
  else {
    FUN_140085160(&local_60,&local_70);
  }
  FUN_140003ca0(&local_60,&local_f0);
  FUN_1400019a0(param_3,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
LAB_14006ff3d:
  if ((0x46U >> (local_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_148);
  }
  if ((0x46U >> (uStack_1f0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1f8);
  }
  if ((0x46U >> (uStack_f8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1e8);
  }
  if ((0x46U >> (local_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a8);
  }
  if ((0x46U >> (local_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b8);
  }
  if ((0x46U >> (local_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_168);
  }
  if ((0x46U >> (local_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_198);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c8);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_178);
  }
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  if ((0x46U >> (local_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_258);
  }
  if ((0x46U >> (local_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_268);
  }
  if ((0x46U >> (local_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_278);
  }
  if ((0x46U >> (local_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_288);
  }
  if ((0x46U >> (local_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_298);
  }
  DAT_142182d78 = (undefined8 *)local_118;
  return param_3;
}


