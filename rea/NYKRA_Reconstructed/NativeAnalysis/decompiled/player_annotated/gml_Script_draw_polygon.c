// Function: gml_Script_draw_polygon @ 0x14008d490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_polygon
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar11;
  double dVar9;
  double dVar10;
  double in_XMM1_Qa;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  undefined8 local_298;
  uint local_28c;
  double local_288;
  uint local_27c;
  undefined8 local_278;
  uint local_26c;
  undefined8 local_268;
  uint local_25c;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  uint local_23c;
  undefined8 local_238;
  uint local_22c;
  undefined8 local_228;
  uint local_21c;
  undefined8 *local_218;
  undefined8 *local_210;
  double *local_208;
  double *local_200;
  undefined8 *local_1f8;
  double *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  double *local_1d8;
  double *local_1d0;
  undefined8 local_1c0;
  uint local_1b4;
  double local_1b0;
  uint local_1a4;
  undefined8 local_1a0;
  uint local_194;
  double local_190;
  undefined4 local_188;
  uint local_184;
  double local_180;
  uint local_174;
  double local_170;
  uint local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  double local_128;
  undefined4 local_120;
  uint local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  double local_100;
  undefined4 local_f8;
  uint local_f4;
  double local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong *local_e0;
  int local_d4;
  double local_d0;
  undefined4 local_c8;
  uint local_c4;
  double local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined4 local_98;
  uint local_94;
  double local_90;
  undefined4 local_88;
  uint local_84;
  double local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_138 = "gml_Script_draw_polygon";
  local_130 = 0;
  local_140 = DAT_142182d78;
  DAT_142182d78 = &local_140;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0.0;
  local_1a4 = 0xffffff;
  local_1b0 = 0.0;
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  local_158 = (ulonglong)(uint)local_158;
  local_160 = 0;
  local_148 = (ulonglong)(uint)local_148;
  local_150 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = param_2;
  local_e0 = param_1;
  local_d4 = param_4;
  FUN_1416ab750(DAT_1420dcb40/*gml_Script_draw_polygon*/);
  local_130 = 4;
  if (local_d4 < 1) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  FUN_1400019a0(&local_100,puVar2);
  if (local_d4 < 2) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  FUN_1400019a0(&local_f0,puVar2);
  if (local_d4 < 3) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  FUN_1400019a0(&local_128,puVar2);
  if (local_d4 < 4) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  FUN_1400019a0(&local_2c8,puVar2);
  if (local_d4 < 5) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  FUN_1400019a0(&local_d0,puVar2);
  if (local_d4 < 6) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[5];
  }
  FUN_1400019a0(&local_180,puVar2);
  if (local_d4 < 7) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[6];
  }
  FUN_1400019a0(&local_170,puVar2);
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  local_1b4 = 0;
  local_1c0 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
  if (local_d4 < 9) {
    puVar2 = &DAT_1420b1000;
  }
  else {
    puVar2 = (undefined8 *)param_5[8];
  }
  FUN_1400019a0(&local_1a0,puVar2);
  uVar4 = DAT_1420f6b08;
  local_74 = 0;
  local_80 = 0.0;
  iVar1 = FUN_1416d9df0(&local_d0,&local_80,DAT_1420f6b08,1);
  if (0 < iVar1) {
    local_130 = 8;
    if (local_d4 < 8) {
      puVar2 = &DAT_1420b1000;
    }
    else {
      puVar2 = (undefined8 *)param_5[7];
    }
    local_74 = 0;
    local_80 = 1.0;
    iVar1 = FUN_1416d9df0(puVar2,&local_80,uVar4,0);
    if (iVar1 == 0) {
      local_130 = 10;
      if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c0);
      }
      local_b4 = 0;
      local_c0 = 0.0;
      local_130 = 0xb;
      dVar10 = local_170;
      if ((local_164 & 0xffffff) != 0) {
        dVar10 = (double)FUN_1416940c0(&local_170);
      }
      FUN_1416f1550((float)dVar10);
      local_130 = 0xc;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      FUN_140002730(&local_2b8,&DAT_1420b2870);
      local_218 = &local_2b8;
      FUN_1416ab210(local_e0,local_108,&local_b0,1,DAT_1420da570/*draw_primitive_begin*/,&local_218);
      local_130 = 0xd;
      dVar10 = local_180;
      if ((local_174 & 0xffffff) != 0) {
        dVar10 = (double)FUN_1416940c0(&local_180);
      }
      FUN_1416f15a0((longlong)dVar10);
      local_130 = 0xe;
      puVar2 = (undefined8 *)(**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
      if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar2);
      }
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      *puVar2 = 0;
      dVar10 = _DAT_141981e30;
      while( true ) {
        uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
        if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_b0);
        }
        local_b0 = 0;
        local_a8 = 0x500000000;
        uVar4 = (**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
        puVar2 = &DAT_1420b1000;
        if (9 < local_d4) {
          puVar2 = (undefined8 *)param_5[9];
        }
        local_74 = local_11c;
        local_78 = local_120;
        if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
          local_80 = local_128;
        }
        else {
          FUN_140093500(&local_80,&local_128);
        }
        FUN_140001fe0(&local_80,puVar2);
        FUN_1400019a0(&local_2b8,&local_80);
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        local_218 = &local_2b8;
        uVar5 = FUN_1416ab210(local_e0,local_108,&local_b0,1,DAT_1420da140/*ceil*/,&local_218);
        iVar1 = FUN_1416d9df0(uVar4,uVar5,DAT_1420f6b08,1);
        if ((iVar1 == -2) || (0 < iVar1)) break;
        local_130 = 0xf;
        uVar4 = (**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
        local_84 = 0;
        local_90 = 360.0;
        FUN_140004620(&local_90,&local_128);
        local_184 = 0;
        local_190 = 360.0;
        FUN_140004620(&local_190,&local_128);
        local_10c = local_184;
        local_110 = local_188;
        if ((0x46U >> (local_184 & 0x1f) & 1) == 0) {
          local_118 = local_190;
        }
        else {
          FUN_140093500(&local_118,&local_190);
        }
        FUN_140001fe0(&local_118,uVar4);
        local_94 = local_10c;
        local_98 = local_110;
        if ((0x46U >> (local_10c & 0x1f) & 1) == 0) {
          local_a0 = local_118;
        }
        else {
          FUN_140093500(&local_a0,&local_118);
        }
        FUN_140003ca0(&local_a0,&local_2c8);
        local_74 = local_94;
        local_78 = local_98;
        if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
          local_80 = local_a0;
        }
        else {
          FUN_140093500(&local_80,&local_a0);
        }
        FUN_140003e00(&local_80,&local_90);
        FUN_1400019a0(&local_c0,&local_80);
        if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_80);
        }
        if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_a0);
        }
        if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_118);
        }
        if ((0x46U >> (local_184 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_190);
        }
        if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
          FUN_140001b50(&local_90);
        }
        local_130 = 0x11;
        puVar2 = &DAT_1420b1000;
        if (9 < local_d4) {
          puVar2 = (undefined8 *)param_5[9];
        }
        local_74 = 0;
        local_80 = 1.0;
        iVar1 = FUN_1416d9df0(puVar2,&local_80,DAT_1420f6b08,0);
        if (iVar1 == 0) {
          local_130 = 0x12;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          if ((local_b4 & 0xffffff) == 0) {
            uVar6 = SUB84(local_c0,0);
            uVar11 = (undefined4)((ulonglong)local_c0 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar6 = (undefined4)uVar4;
            uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_84 = local_c4;
          local_88 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_90 = local_d0;
          }
          else {
            FUN_140093500(&local_90,&local_d0);
          }
          FUN_140003e00(&local_90,&local_1a0);
          dVar9 = local_90;
          if ((local_84 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_90);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,
                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar11,uVar6)));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2b8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_218 = &local_2b8;
          if ((local_b4 & 0xffffff) == 0) {
            uVar8 = SUB84(local_c0,0);
            uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_84 = local_c4;
          local_88 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_90 = local_d0;
          }
          else {
            FUN_140093500(&local_90,&local_d0);
          }
          FUN_140003e00(&local_90,&local_1a0);
          dVar9 = local_90;
          if ((local_84 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_90);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2a8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_210 = &local_2a8;
          local_208 = &local_180;
          local_200 = &local_170;
          FUN_1416ab210(local_e0,local_108,&local_b0,4,DAT_1420da580/*draw_vertex_colour*/,&local_218);
          local_130 = 0x13;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          if ((local_b4 & 0xffffff) == 0) {
            uVar8 = SUB84(local_c0,0);
            uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2b8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_218 = &local_2b8;
          if ((local_b4 & 0xffffff) == 0) {
            uVar8 = SUB84(local_c0,0);
            uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          in_XMM1_Qa = (double)fVar7;
          FUN_140003f30(&local_80,in_XMM1_Qa);
          FUN_1400019a0(&local_2a8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_210 = &local_2a8;
          local_208 = &local_180;
          local_200 = &local_170;
          FUN_1416ab210(local_e0,local_108,&local_b0,4,DAT_1420da580/*draw_vertex_colour*/,&local_218);
        }
        else {
          local_130 = 0x17;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          uVar4 = (**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
          FUN_140017bd0(&local_90,uVar4,1);
          pdVar3 = (double *)&DAT_1420b1000;
          if (9 < local_d4) {
            pdVar3 = (double *)param_5[9];
          }
          local_94 = *(uint *)((longlong)pdVar3 + 0xc);
          local_98 = *(undefined4 *)(pdVar3 + 1);
          if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
            local_a0 = *pdVar3;
          }
          else {
            FUN_140093500(&local_a0);
          }
          FUN_140001fe0(&local_a0,&local_128);
          local_74 = local_94;
          local_78 = local_98;
          if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
            local_80 = local_a0;
          }
          else {
            FUN_140093500(&local_80,&local_a0);
          }
          FUN_140003e00(&local_80,&local_90);
          FUN_1400019a0(&local_2b8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_218 = &local_2b8;
          FUN_140002730(&local_2a8,&DAT_14217f0d8);
          local_210 = &local_2a8;
          FUN_140002730(&local_298,&DAT_1420b2880);
          local_208 = (double *)&local_298;
          uVar4 = FUN_1416ab210(local_e0,local_108,&local_b0,3,DAT_1420da130/*clamp*/,&local_218);
          FUN_1400019a0(&local_1b0,uVar4);
          local_130 = 0x18;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          if ((0x46U >> (local_158._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_160);
          }
          local_160 = 0;
          local_158 = 0x500000000;
          if ((0x46U >> (local_148._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_150);
          }
          local_150 = 0;
          local_148 = 0x500000000;
          if ((local_b4 & 0xffffff) == 0) {
            uVar6 = SUB84(local_c0,0);
            uVar11 = (undefined4)((ulonglong)local_c0 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar6 = (undefined4)uVar4;
            uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_84 = local_c4;
          local_88 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_90 = local_d0;
          }
          else {
            FUN_140093500(&local_90,&local_d0);
          }
          FUN_140003e00(&local_90,&local_1a0);
          dVar9 = local_90;
          if ((local_84 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_90);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,
                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar11,uVar6)));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2b8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_218 = &local_2b8;
          local_94 = 0;
          local_a0 = 360.0;
          FUN_140004620(&local_a0,&local_128);
          local_84 = local_b4;
          local_88 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_90 = local_c0;
          }
          else {
            FUN_140093500(&local_90,&local_c0);
          }
          FUN_140003ca0(&local_90,&local_a0);
          if ((local_84 & 0xffffff) == 0) {
            uVar8 = SUB84(local_90,0);
            uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_90);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_10c = local_c4;
          local_110 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_118 = local_d0;
          }
          else {
            FUN_140093500(&local_118,&local_d0);
          }
          FUN_140003e00(&local_118,&local_1a0);
          dVar9 = local_118;
          if ((local_10c & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_118);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2a8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_118);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_210 = &local_2a8;
          local_208 = &local_1b0;
          if ((local_b4 & 0xffffff) == 0) {
            uVar8 = SUB84(local_c0,0);
            uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_84 = local_c4;
          local_88 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_90 = local_d0;
          }
          else {
            FUN_140093500(&local_90,&local_d0);
          }
          FUN_140003e00(&local_90,&local_1a0);
          dVar9 = local_90;
          if ((local_84 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_90);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_288,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          local_94 = 0;
          local_a0 = 360.0;
          local_200 = &local_288;
          FUN_140004620(&local_a0,&local_128);
          local_84 = local_b4;
          local_88 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_90 = local_c0;
          }
          else {
            FUN_140093500(&local_90,&local_c0);
          }
          FUN_140003ca0(&local_90,&local_a0);
          if ((local_84 & 0xffffff) == 0) {
            uVar8 = SUB84(local_90,0);
            uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
          }
          else {
            uVar4 = FUN_1416940c0(&local_90);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
          }
          local_10c = local_c4;
          local_110 = local_c8;
          if ((0x46U >> (local_c4 & 0x1f) & 1) == 0) {
            local_118 = local_d0;
          }
          else {
            FUN_140093500(&local_118,&local_d0);
          }
          FUN_140003e00(&local_118,&local_1a0);
          dVar9 = local_118;
          if ((local_10c & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_118);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          dVar9 = (double)fVar7;
          FUN_140003f30(&local_80,dVar9);
          uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
          FUN_1400019a0(&local_278,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_10c & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_118);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_1f8 = &local_278;
          local_1f0 = &local_1b0;
          uVar4 = FUN_1416ab210(local_e0,local_108,&local_160,3,DAT_1420da590/*lerp*/,&local_218);
          FUN_1400019a0(&local_258,uVar4);
          local_1e8 = &local_258;
          uVar4 = FUN_1416ab210(local_e0,local_108,&local_150,3,DAT_1420da590/*lerp*/,&local_200);
          FUN_1400019a0(&local_248,uVar4);
          local_1e0 = &local_248;
          local_1d8 = &local_180;
          local_1d0 = &local_170;
          FUN_1416ab210(local_e0,local_108,&local_b0,4,DAT_1420da580/*draw_vertex_colour*/,&local_1e8);
          local_130 = 0x1a;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          if ((0x46U >> (local_158._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_160);
          }
          local_160 = 0;
          local_158 = 0x500000000;
          if ((0x46U >> (local_148._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_150);
          }
          local_150 = 0;
          local_148 = 0x500000000;
          if ((local_b4 & 0xffffff) == 0) {
            uVar6 = SUB84(local_c0,0);
            uVar11 = (undefined4)((ulonglong)local_c0 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar6 = (undefined4)uVar4;
            uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,
                                       CONCAT44(uVar8,(float)(double)CONCAT44(uVar11,uVar6)));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2b8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_218 = &local_2b8;
          local_94 = 0;
          local_a0 = 360.0;
          FUN_140004620(&local_a0,&local_128);
          local_84 = local_b4;
          local_88 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_90 = local_c0;
          }
          else {
            FUN_140093500(&local_90,&local_c0);
          }
          FUN_140003ca0(&local_90,&local_a0);
          if ((local_84 & 0xffffff) == 0) {
            uVar8 = SUB84(local_90,0);
            uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_90);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd800((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_f4;
          local_78 = local_f8;
          if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
            local_80 = local_100;
          }
          else {
            FUN_140093500(&local_80,&local_100);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_2a8,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_210 = &local_2a8;
          local_208 = &local_1b0;
          if ((local_b4 & 0xffffff) == 0) {
            uVar8 = SUB84(local_c0,0);
            uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_c0);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          FUN_140003f30(&local_80,(double)fVar7);
          FUN_1400019a0(&local_288,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          local_94 = 0;
          local_a0 = 360.0;
          local_200 = &local_288;
          FUN_140004620(&local_a0,&local_128);
          local_84 = local_b4;
          local_88 = local_b8;
          if ((0x46U >> (local_b4 & 0x1f) & 1) == 0) {
            local_90 = local_c0;
          }
          else {
            FUN_140093500(&local_90,&local_c0);
          }
          FUN_140003ca0(&local_90,&local_a0);
          if ((local_84 & 0xffffff) == 0) {
            uVar8 = SUB84(local_90,0);
            uVar6 = (undefined4)((ulonglong)local_90 >> 0x20);
            dVar9 = local_d0;
          }
          else {
            uVar4 = FUN_1416940c0(&local_90);
            uVar8 = (undefined4)uVar4;
            uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
            dVar9 = local_d0;
          }
          local_d0 = dVar9;
          if ((local_c4 & 0xffffff) != 0) {
            dVar9 = (double)FUN_1416940c0(&local_d0);
          }
          fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
          local_74 = local_e4;
          local_78 = local_e8;
          if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
            local_80 = local_f0;
          }
          else {
            FUN_140093500(&local_80,&local_f0);
          }
          in_XMM1_Qa = (double)fVar7;
          FUN_140003f30(&local_80,in_XMM1_Qa);
          FUN_1400019a0(&local_278,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_90);
          }
          if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_a0);
          }
          local_1f8 = &local_278;
          local_1f0 = &local_1b0;
          uVar4 = FUN_1416ab210(local_e0,local_108,&local_160,3,DAT_1420da590/*lerp*/,&local_218);
          FUN_1400019a0(&local_258,uVar4);
          local_1e8 = &local_258;
          uVar4 = FUN_1416ab210(local_e0,local_108,&local_150,3,DAT_1420da590/*lerp*/,&local_200);
          FUN_1400019a0(&local_248,uVar4);
          local_1e0 = &local_248;
          local_1d8 = &local_180;
          local_1d0 = &local_170;
          FUN_1416ab210(local_e0,local_108,&local_b0,4,DAT_1420da580/*draw_vertex_colour*/,&local_1e8);
        }
        pdVar3 = (double *)(**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
        switch(*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) {
        case 1:
          dVar9 = (double)FUN_1416940c0(pdVar3);
          *pdVar3 = dVar9 + dVar10;
          *(int *)((longlong)pdVar3 + 0xc) = 0;
          break;
        default:
          FUN_140001d70(&DAT_141981e6a,pdVar3,pdVar3);
          break;
        case 7:
          *(int *)pdVar3 = *(int *)pdVar3 + 1;
          break;
        case 10:
          *pdVar3 = (double)((longlong)*pdVar3 + 1);
          break;
        case 0xd:
          *(int *)((longlong)pdVar3 + 0xc) = 0;
        case 0:
          *pdVar3 = *pdVar3 + dVar10;
        }
      }
      local_130 = 0x1e;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      FUN_1416ab210(local_e0,local_108,&local_b0,0,DAT_1420da5a0/*draw_primitive_end*/,0);
      local_130 = 0x1f;
      goto joined_r0x00014008ff31;
    }
    local_130 = 0x22;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    local_218 = &local_1c0;
    FUN_1416ab210(local_e0,local_108,&local_b0,1,DAT_1420da570/*draw_primitive_begin*/,&local_218);
    local_130 = 0x23;
    if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_c0);
    }
    local_b4 = 0;
    local_c0 = 0.0;
    local_130 = 0x24;
    puVar2 = (undefined8 *)(**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
    if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0;
    dVar10 = _DAT_141981e30;
    while( true ) {
      uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      uVar4 = (**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
      puVar2 = &DAT_1420b1000;
      if (9 < local_d4) {
        puVar2 = (undefined8 *)param_5[9];
      }
      local_74 = local_11c;
      local_78 = local_120;
      if ((0x46U >> (local_11c & 0x1f) & 1) == 0) {
        local_80 = local_128;
      }
      else {
        FUN_140093500(&local_80,&local_128);
      }
      FUN_140001fe0(&local_80,puVar2);
      FUN_1400019a0(&local_2b8,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_218 = &local_2b8;
      uVar5 = FUN_1416ab210(local_e0,local_108,&local_b0,1,DAT_1420da230/*round*/,&local_218);
      iVar1 = FUN_1416d9df0(uVar4,uVar5,DAT_1420f6b08,1);
      if ((iVar1 == -2) || (-1 < iVar1)) break;
      local_130 = 0x25;
      uVar4 = (**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
      local_94 = 0;
      local_a0 = 360.0;
      FUN_140004620(&local_a0,&local_128);
      local_84 = local_94;
      local_88 = local_98;
      if ((0x46U >> (local_94 & 0x1f) & 1) == 0) {
        local_90 = local_a0;
      }
      else {
        FUN_140093500(&local_90,&local_a0);
      }
      FUN_140001fe0(&local_90,uVar4);
      local_74 = local_84;
      local_78 = local_88;
      if ((0x46U >> (local_84 & 0x1f) & 1) == 0) {
        local_80 = local_90;
      }
      else {
        FUN_140093500(&local_80,&local_90);
      }
      FUN_140003ca0(&local_80,&local_2c8);
      FUN_1400019a0(&local_c0,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_90);
      }
      if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_a0);
      }
      local_130 = 0x27;
      if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_b0);
      }
      local_b0 = 0;
      local_a8 = 0x500000000;
      if ((local_b4 & 0xffffff) == 0) {
        uVar6 = SUB84(local_c0,0);
        uVar11 = (undefined4)((ulonglong)local_c0 >> 0x20);
        dVar9 = local_d0;
      }
      else {
        uVar4 = FUN_1416940c0(&local_c0);
        uVar6 = (undefined4)uVar4;
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        dVar9 = local_d0;
      }
      local_d0 = dVar9;
      if ((local_c4 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_d0);
      }
      fVar7 = (float)FUN_1416cd800((float)dVar9,
                                   CONCAT44(uVar8,(float)(double)CONCAT44(uVar11,uVar6)));
      local_74 = local_f4;
      local_78 = local_f8;
      if ((0x46U >> (local_f4 & 0x1f) & 1) == 0) {
        local_80 = local_100;
      }
      else {
        FUN_140093500(&local_80,&local_100);
      }
      FUN_140003f30(&local_80,(double)fVar7);
      FUN_1400019a0(&local_2b8,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      if ((local_b4 & 0xffffff) == 0) {
        uVar8 = SUB84(local_c0,0);
        uVar6 = (undefined4)((ulonglong)local_c0 >> 0x20);
        local_218 = &local_2b8;
        dVar9 = local_d0;
      }
      else {
        local_218 = &local_2b8;
        uVar4 = FUN_1416940c0(&local_c0);
        uVar8 = (undefined4)uVar4;
        uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
        dVar9 = local_d0;
      }
      local_d0 = dVar9;
      if ((local_c4 & 0xffffff) != 0) {
        dVar9 = (double)FUN_1416940c0(&local_d0);
      }
      fVar7 = (float)FUN_1416cd880((float)dVar9,(float)(double)CONCAT44(uVar6,uVar8));
      local_74 = local_e4;
      local_78 = local_e8;
      if ((0x46U >> (local_e4 & 0x1f) & 1) == 0) {
        local_80 = local_f0;
      }
      else {
        FUN_140093500(&local_80,&local_f0);
      }
      in_XMM1_Qa = (double)fVar7;
      FUN_140003f30(&local_80,in_XMM1_Qa);
      FUN_1400019a0(&local_2a8,&local_80);
      if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_80);
      }
      local_210 = &local_2a8;
      local_208 = &local_180;
      local_200 = &local_170;
      FUN_1416ab210(local_e0,local_108,&local_b0,4,DAT_1420da580/*draw_vertex_colour*/,&local_218);
      pdVar3 = (double *)(**(code **)(*local_e0 + 0x10))(local_e0,0x186a7/*var:__tsid*/);
      switch(*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) {
      case 1:
        dVar9 = (double)FUN_1416940c0(pdVar3);
        *pdVar3 = dVar9 + dVar10;
        *(int *)((longlong)pdVar3 + 0xc) = 0;
        break;
      default:
        FUN_140001d70(&DAT_141981e6a,pdVar3,pdVar3);
        break;
      case 7:
        *(int *)pdVar3 = *(int *)pdVar3 + 1;
        break;
      case 10:
        *pdVar3 = (double)((longlong)*pdVar3 + 1);
        break;
      case 0xd:
        *(int *)((longlong)pdVar3 + 0xc) = 0;
      case 0:
        *pdVar3 = *pdVar3 + dVar10;
      }
    }
    local_130 = 0x29;
    if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0x500000000;
    FUN_1416ab210(local_e0,local_108,&local_b0,0,DAT_1420da5a0/*draw_primitive_end*/,0);
    local_130 = 0x2a;
    FUN_1416f1550(_DAT_141981f80);
  }
joined_r0x00014008ff31:
  if ((0x46U >> (local_148._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_158._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1a0);
  }
  if ((0x46U >> (local_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_1c0);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  if ((0x46U >> (local_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_180);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2c8);
  }
  if ((0x46U >> (local_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_128);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_228);
  }
  if ((0x46U >> (local_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_238);
  }
  if ((0x46U >> (local_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_248);
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
  if ((0x46U >> (local_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2a8);
  }
  if ((0x46U >> (local_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_2b8);
  }
  DAT_142182d78 = (undefined8 *)local_140;
  return param_3;
}


