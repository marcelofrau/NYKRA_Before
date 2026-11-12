// Function: gml_Script__SET_SCENE @ 0x140047690

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script__SET_SCENE(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 local_170 [16];
  longlong local_160;
  undefined8 *local_150;
  undefined *local_148;
  undefined8 local_140;
  uint local_134;
  undefined *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined *local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_90 = "gml_Script__SET_SCENE";
  local_88 = 0;
  local_98 = DAT_142182d78;
  DAT_142182d78 = &local_98;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  DAT_142182d90 = param_1;
  local_a0 = param_2;
  local_68 = param_1;
  puVar4 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x1885a/*var:CURRENTROOM*/);
  puVar5 = (undefined8 *)(**(code **)(*DAT_14218ecf8 + 8))(DAT_14218ecf8,0x18998/*var:GRV_SPD*/);
  local_a8 = (ulonglong)(uint)local_a8;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_150 = param_3;
  FUN_1416ab750(DAT_1420dc870/*gml_Script__SET_SCENE*/);
  local_bc = 0;
  local_c8 = 0x4053c00000000000/*79 (obj:oControl)*/;
  iVar2 = FUN_1416ab810(local_170,&local_68,&local_a0,&local_c8);
  if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c8);
  }
  if (0 < iVar2) {
    do {
      local_88 = 0x14;
      puVar6 = (undefined8 *)(**(code **)(*local_68 + 8))(local_68,0x18b9c/*var:planet*/);
      local_bc = *(uint *)((longlong)puVar6 + 0xc);
      local_c0 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (local_bc & 0x1f) & 1) == 0) {
        local_c8 = *puVar6;
      }
      else {
        FUN_14005b430(&local_c8,puVar6);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_14217e8ec) && (_Init_thread_header(&DAT_14217e8ec), DAT_14217e8ec == -1)
         ) {
        _DAT_14217e86c = 0;
        _DAT_14217e860 = 0;
        _DAT_14217e880 = 0x100000000;
        _DAT_14217e874 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
        _DAT_14217e894 = 0x200000000;
        _DAT_14217e888 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
        _DAT_14217e8a8 = 0x300000000;
        _DAT_14217e89c = 0x4008000000000000/*3 (obj:oKS_Reality)*/;
        _DAT_14217e8bc = 0x400000000;
        _DAT_14217e8b0 = 0x4010000000000000/*4 (obj:oKS_Iiedakama)*/;
        _DAT_14217e8d0 = 0x500000000;
        _DAT_14217e8c4 = 0x4014000000000000/*5 (obj:oEvokreathe)*/;
        _DAT_14217e8e4 = 0x600000000;
        _DAT_14217e8d8 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
        atexit(FUN_14004b130);
        _Init_thread_footer(&DAT_14217e8ec);
      }
      uVar7 = DAT_1420f6b08;
      iVar2 = FUN_1416d9df0(&DAT_14217e860,&local_c8,DAT_1420f6b08,0);
      uVar11 = _DAT_14217e86c;
      if ((((((iVar2 == 0) ||
             (iVar2 = FUN_1416d9df0(&DAT_14217e874,&local_c8,uVar7,0), uVar11 = _DAT_14217e880,
             iVar2 == 0)) ||
            (iVar2 = FUN_1416d9df0(&DAT_14217e888,&local_c8,uVar7,0), uVar11 = _DAT_14217e894,
            iVar2 == 0)) ||
           ((iVar2 = FUN_1416d9df0(&DAT_14217e89c,&local_c8,uVar7,0), uVar11 = _DAT_14217e8a8,
            iVar2 == 0 ||
            (iVar2 = FUN_1416d9df0(&DAT_14217e8b0,&local_c8,uVar7,0), uVar11 = _DAT_14217e8bc,
            iVar2 == 0)))) ||
          ((iVar2 = FUN_1416d9df0(&DAT_14217e8c4,&local_c8,uVar7,0), uVar11 = _DAT_14217e8d0,
           iVar2 == 0 ||
           (iVar2 = FUN_1416d9df0(&DAT_14217e8d8,&local_c8,uVar7,0), uVar11 = _DAT_14217e8e4,
           iVar2 == 0)))) && (uVar11 >> 0x20 < 7)) {
        switch(uVar11 >> 0x20) {
        case 0:
          local_88 = 0x17;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          local_74 = 0;
          local_80 = *(undefined8 *)(&DAT_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(local_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          FUN_1416a8c00(2);
          FUN_1416ac010(&local_80,s_rmMal_Origin_1420b2210);
          iVar2 = FUN_1416d9df0(puVar4,&local_80,DAT_1420f6b08,0);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          if (iVar2 == 0) {
            puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = &DAT_bff0000000000000;
          }
          else {
            local_88 = 0x18;
            puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
            local_74 = 0;
            local_80 = *(undefined8 *)(&DAT_141982c30 + (ulonglong)(iVar2 < 1) * 8);
            FUN_1416a8cb0(local_68);
            uVar7 = FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            FUN_1400019a0(uVar7,&local_80);
            if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_80);
            }
          }
          FUN_1416a8c00(2);
          local_88 = 0x1a;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fcbe76c8b439581/*0.218*/;
          local_88 = 0x1b;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217ea30) && (_Init_thread_header(&DAT_14217ea30), DAT_14217ea30 == -1)) {
            local_b8 = &DAT_14217e8f0;
            FUN_1416ac010(&DAT_14217e8f0,s_rmPrae_Comp_1420b221d);
            DAT_14217e900 = 0;
            local_b8 = &DAT_14217e904;
            FUN_1416ac010(&DAT_14217e904,s_rmPrae_elevator_1420b2230);
            DAT_14217e914 = 0;
            local_b8 = &DAT_14217e918;
            FUN_1416ac010(&DAT_14217e918,s_rmPrae_front_1420b2240);
            DAT_14217e928 = 0;
            local_b8 = &DAT_14217e92c;
            FUN_1416ac010(&DAT_14217e92c,s_rmPrae_front2_1420b224d);
            DAT_14217e93c = 0;
            local_b8 = &DAT_14217e940;
            FUN_1416ac010(&DAT_14217e940,s_rmPrae_Keu_Bedroom_1420b2260);
            DAT_14217e950 = 0;
            local_b8 = &DAT_14217e954;
            FUN_1416ac010(&DAT_14217e954,s_rmPrae_Main_1420b2273);
            DAT_14217e964 = 0;
            local_b8 = &DAT_14217e968;
            FUN_1416ac010(&DAT_14217e968,s_rmPrae_Main2_1420b227f);
            DAT_14217e978 = 0;
            local_b8 = &DAT_14217e97c;
            FUN_1416ac010(&DAT_14217e97c,s_rmPrae_t1_1420b228c);
            DAT_14217e98c = 0;
            local_b8 = &DAT_14217e990;
            FUN_1416ac010(&DAT_14217e990,s_rmPrae_t2_1420b2296);
            DAT_14217e9a0 = 0;
            local_b8 = &DAT_14217e9a4;
            FUN_1416ac010(&DAT_14217e9a4,s_rmPrae_t3_1420b22a0);
            DAT_14217e9b4 = 0;
            local_b8 = &DAT_14217e9b8;
            FUN_1416ac010(&DAT_14217e9b8,s_rmPrae_t4_1420b22aa);
            DAT_14217e9c8 = 0;
            local_b8 = &DAT_14217e9cc;
            FUN_1416ac010(&DAT_14217e9cc,s_rmPrae_t5_1420b22b4);
            DAT_14217e9dc = 0;
            local_b8 = &DAT_14217e9e0;
            FUN_1416ac010(&DAT_14217e9e0,s_rmPrae_t6_1420b22be);
            DAT_14217e9f0 = 0;
            local_b8 = &DAT_14217e9f4;
            FUN_1416ac010(&DAT_14217e9f4,s_rmPrae_t7_1420b22c8);
            DAT_14217ea04 = 0;
            local_b8 = &DAT_14217ea08;
            FUN_1416ac010(&DAT_14217ea08,s_rmPrae_escapepod_1420b22e0);
            DAT_14217ea18 = 1;
            local_b8 = &DAT_14217ea1c;
            FUN_1416ac010(&DAT_14217ea1c,s_rmPrae_Keu_1420b22f1);
            DAT_14217ea2c = 1;
            atexit(FUN_14004b240);
            _Init_thread_footer(&DAT_14217ea30);
          }
          uVar7 = DAT_1420f6b08;
          iVar2 = FUN_1416d9df0(&DAT_14217e8f0,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0) {
            lVar9 = 0;
LAB_14004a096:
            if ((&DAT_14217e900)[lVar9 * 5] == 1) {
              local_88 = 0x2f;
              puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
              FUN_1416a8cb0(local_68);
              puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
              FUN_1416a8cb0(*puVar6);
              if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar8);
              }
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              *puVar8 = &DAT_bff0000000000000;
              FUN_1416a8c00(2);
              local_88 = 0x30;
            }
            else if ((&DAT_14217e900)[lVar9 * 5] == 0) {
              local_88 = 0x2a;
              puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
              FUN_1416a8cb0(local_68);
              puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
              FUN_1416a8cb0(*puVar6);
              if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar8);
              }
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              *puVar8 = 0x4082100000000000/*578 (obj:oJulaak_Prae)*/;
              FUN_1416a8c00(2);
              local_88 = 0x2b;
            }
          }
          else {
            iVar2 = FUN_1416d9df0(&DAT_14217e904,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 1;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e918,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 2;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e92c,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 3;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e940,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 4;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e954,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 5;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e968,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 6;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e97c,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 7;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e990,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 8;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e9a4,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 9;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e9b8,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 10;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e9cc,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xb;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e9e0,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xc;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217e9f4,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xd;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217ea08,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xe;
              goto LAB_14004a096;
            }
            iVar2 = FUN_1416d9df0(&DAT_14217ea1c,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xf;
              goto LAB_14004a096;
            }
          }
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          if (iVar2 < 1) {
            local_88 = 0x32;
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            FUN_140002730(&local_108,&DAT_1420b25b8);
            local_128 = &local_108;
            FUN_140002730(&local_f8,&DAT_1420b25b8);
            local_120 = &local_f8;
            FUN_140002730(&local_e8,&DAT_1420b25c8);
            local_118 = &local_e8;
            FUN_140002730(&local_d8,&DAT_1420b25d8);
            local_110 = &local_d8;
            FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          }
          local_88 = 0x33;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 1:
          local_88 = 0x37;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          local_74 = 0;
          local_80 = *(undefined8 *)(&DAT_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(local_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          FUN_1416a8c00(2);
          local_88 = 0x39;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217ed38) && (_Init_thread_header(&DAT_14217ed38), DAT_14217ed38 == -1)) {
            local_70 = &DAT_14217ea40;
            FUN_1416ac010(&DAT_14217ea40,s_rmMex_ServerRoom_1420b2300);
            DAT_14217ea50 = 0;
            local_70 = &DAT_14217ea54;
            FUN_1416ac010(&DAT_14217ea54,s_rmMex_StrongElevator_1420b2320);
            _DAT_14217ea64 = 0;
            local_70 = &DAT_14217ea68;
            FUN_1416ac010(&DAT_14217ea68,s_rmMex_Office_1420b2335);
            _DAT_14217ea78 = 1;
            local_70 = &DAT_14217ea7c;
            FUN_1416ac010(&DAT_14217ea7c,s_rmMex_Office2_1420b2342);
            _DAT_14217ea8c = 1;
            local_70 = &DAT_14217ea90;
            FUN_1416ac010(&DAT_14217ea90,s_rmMex_Office3_1420b2350);
            _DAT_14217eaa0 = 2;
            local_70 = &DAT_14217eaa4;
            FUN_1416ac010(&DAT_14217eaa4,s_rmMex_Strong5_2_1420b2360);
            _DAT_14217eab4 = 2;
            local_70 = &DAT_14217eab8;
            FUN_1416ac010(&DAT_14217eab8,s_rmMex_KS_pod_1420b2370);
            _DAT_14217eac8 = 2;
            local_70 = &DAT_14217eacc;
            FUN_1416ac010(&DAT_14217eacc,s_rmMex_Office4_1420b237d);
            _DAT_14217eadc = 3;
            local_70 = &DAT_14217eae0;
            FUN_1416ac010(&DAT_14217eae0,s_rmMex_Office5_1420b238b);
            _DAT_14217eaf0 = 3;
            local_70 = &DAT_14217eaf4;
            FUN_1416ac010(&DAT_14217eaf4,s_rmMex_VEN_1420b2399);
            _DAT_14217eb04 = 3;
            local_70 = &DAT_14217eb08;
            FUN_1416ac010(&DAT_14217eb08,s_rmMex_Strong1_1420b23a3);
            _DAT_14217eb18 = 4;
            local_70 = &DAT_14217eb1c;
            FUN_1416ac010(&DAT_14217eb1c,s_rmMex_Strong2_1420b23b1);
            _DAT_14217eb2c = 4;
            local_70 = &DAT_14217eb30;
            FUN_1416ac010(&DAT_14217eb30,s_rmMex_Strong3_1420b23bf);
            _DAT_14217eb40 = 4;
            local_70 = &DAT_14217eb44;
            FUN_1416ac010(&DAT_14217eb44,s_rmMex_Strong4_1420b23cd);
            _DAT_14217eb54 = 4;
            local_70 = &DAT_14217eb58;
            FUN_1416ac010(&DAT_14217eb58,s_rmMex_Strong4_2_1420b23e0);
            _DAT_14217eb68 = 4;
            local_70 = &DAT_14217eb6c;
            FUN_1416ac010(&DAT_14217eb6c,s_rmMex_Strong5_1420b23f0);
            _DAT_14217eb7c = 4;
            local_70 = &DAT_14217eb80;
            FUN_1416ac010(&DAT_14217eb80,s_rmMex_Strong5_1_1420b2400);
            _DAT_14217eb90 = 4;
            local_70 = &DAT_14217eb94;
            FUN_1416ac010(&DAT_14217eb94,s_rmMex_Strong5b_1420b2410);
            _DAT_14217eba4 = 4;
            local_70 = &DAT_14217eba8;
            FUN_1416ac010(&DAT_14217eba8,s_rmMex_Strong6_1420b241f);
            _DAT_14217ebb8 = 4;
            local_70 = &DAT_14217ebbc;
            FUN_1416ac010(&DAT_14217ebbc,s_rmMex_StrongM_1420b242d);
            _DAT_14217ebcc = 4;
            local_70 = &DAT_14217ebd0;
            FUN_1416ac010(&DAT_14217ebd0,s_rmMex_StrongM_1_1420b2440);
            _DAT_14217ebe0 = 4;
            local_70 = &DAT_14217ebe4;
            FUN_1416ac010(&DAT_14217ebe4,s_rmMex_StrongM_2_1420b2450);
            _DAT_14217ebf4 = 4;
            local_70 = &DAT_14217ebf8;
            FUN_1416ac010(&DAT_14217ebf8,s_rmEO_1_1420b2460);
            _DAT_14217ec08 = 5;
            local_70 = &DAT_14217ec0c;
            FUN_1416ac010(&DAT_14217ec0c,s_rmEO_2_1420b2467);
            _DAT_14217ec1c = 5;
            local_70 = &DAT_14217ec20;
            FUN_1416ac010(&DAT_14217ec20,s_rmEO_3_1420b246e);
            _DAT_14217ec30 = 5;
            local_70 = &DAT_14217ec34;
            FUN_1416ac010(&DAT_14217ec34,s_rmEO_4_1420b2475);
            _DAT_14217ec44 = 5;
            local_70 = &DAT_14217ec48;
            FUN_1416ac010(&DAT_14217ec48,s_rmEO_5_1420b247c);
            _DAT_14217ec58 = 5;
            local_70 = &DAT_14217ec5c;
            FUN_1416ac010(&DAT_14217ec5c,s_rmEO_6_1420b2483);
            _DAT_14217ec6c = 5;
            local_70 = &DAT_14217ec70;
            FUN_1416ac010(&DAT_14217ec70,s_rmEO_4_1_1420b248a);
            _DAT_14217ec80 = 5;
            local_70 = &DAT_14217ec84;
            FUN_1416ac010(&DAT_14217ec84,s_rmEO_4_2_1420b2493);
            _DAT_14217ec94 = 5;
            local_70 = &DAT_14217ec98;
            FUN_1416ac010(&DAT_14217ec98,s_rmEO_5_1_1420b249c);
            _DAT_14217eca8 = 5;
            local_70 = &DAT_14217ecac;
            FUN_1416ac010(&DAT_14217ecac,s_rmEO_5_2_1420b24a5);
            _DAT_14217ecbc = 5;
            local_70 = &DAT_14217ecc0;
            FUN_1416ac010(&DAT_14217ecc0,s_rmEO_6_1_1420b24ae);
            _DAT_14217ecd0 = 5;
            local_70 = &DAT_14217ecd4;
            FUN_1416ac010(&DAT_14217ecd4,s_rmEO_6_2_1420b24b7);
            _DAT_14217ece4 = 5;
            local_70 = &DAT_14217ece8;
            FUN_1416ac010(&DAT_14217ece8,s_rmEO_CHAMBER_1420b24c0);
            _DAT_14217ecf8 = 5;
            local_70 = &DAT_14217ecfc;
            FUN_1416ac010(&DAT_14217ecfc,s_rmEO_Train_1420b24cd);
            _DAT_14217ed0c = 5;
            local_70 = &DAT_14217ed10;
            FUN_1416ac010(&DAT_14217ed10,s_rmEO_Break_1420b24d8);
            _DAT_14217ed20 = 5;
            local_70 = &DAT_14217ed24;
            FUN_1416ac010(&DAT_14217ed24,s_rmMex_HeptagateInside_1420b24f0);
            _DAT_14217ed34 = 5;
            atexit(FUN_14004b440);
            _Init_thread_footer(&DAT_14217ed38);
          }
          uVar7 = DAT_1420f6b08;
          uVar11 = 0;
          do {
            iVar2 = FUN_1416d9df0(&DAT_14217ea40 + uVar11 * 0x14,&local_80,uVar7,0);
            if (iVar2 == 0) {
              switch((&DAT_14217ea50)[(uVar11 & 0xffffffff) * 5]) {
              case 0:
                local_88 = 0x3c;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4078d00000000000/*397 (obj:oDlg_Taff2)*/;
                goto LAB_14004926b;
              case 1:
                local_88 = 0x41;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4079000000000000/*400 (obj:oDlg_Mal_3)*/;
                goto LAB_14004926b;
              case 2:
                local_88 = 0x47;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = &DAT_bff0000000000000;
                goto LAB_14004926b;
              case 3:
                local_88 = 0x4d;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4079200000000000/*402 (obj:oDlg_Mal)*/;
                goto LAB_14004926b;
              case 4:
                local_88 = 0x5c;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4078e00000000000/*398 (obj:oDlg_Mal_Prae)*/;
                goto LAB_14004926b;
              case 5:
                local_88 = 0x6f;
                puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
                FUN_1416a8cb0(local_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4084480000000000/*649 (obj:oControls_Aenox)*/;
                goto LAB_14004926b;
              }
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0x26);
          local_88 = 0x73;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          local_134 = 0;
          local_140 = *(undefined8 *)(&DAT_141982c20 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(local_68);
          uVar7 = FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&local_140);
          if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_140);
          }
LAB_14004926b:
          FUN_1416a8c00(2);
          local_88 = 0x76;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc7ff583a53b8e5/*0.18748*/;
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          if (iVar2 < 1) {
            local_88 = 0x77;
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            FUN_140002730(&local_108,&DAT_1420b25b8);
            local_128 = &local_108;
            FUN_140002730(&local_f8,&DAT_1420b25b8);
            local_120 = &local_f8;
            FUN_140002730(&local_e8,&DAT_1420b25c8);
            local_118 = &local_e8;
            FUN_140002730(&local_d8,&DAT_1420b25e8);
            local_110 = &local_d8;
            FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          }
          local_88 = 0x78;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 2:
          local_88 = 0x7c;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = &DAT_bff0000000000000;
          FUN_1416a8c00(2);
          local_88 = 0x7d;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217ed54) && (_Init_thread_header(&DAT_14217ed54), DAT_14217ed54 == -1)) {
            FUN_1416ac010(&DAT_14217ed40,s_rmArt_ST7_inside_1420b2510);
            _DAT_14217ed50 = 0;
            atexit(FUN_14004b870);
            _Init_thread_footer(&DAT_14217ed54);
          }
          iVar2 = FUN_1416d9df0(&DAT_14217ed40,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0 && _DAT_14217ed50 == 0) {
            local_88 = 0x7f;
            puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            puVar10 = &DAT_bff0000000000000;
          }
          else {
            local_88 = 0x83;
            puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            puVar10 = (undefined1 *)0x4086180000000000/*707*/;
          }
          *puVar6 = puVar10;
          FUN_1416a8c00(2);
          local_88 = 0x86;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 3:
          local_88 = 0x8a;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = &DAT_bff0000000000000;
          FUN_1416a8c00(2);
          local_88 = 0x8b;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217ed74) && (_Init_thread_header(&DAT_14217ed74), DAT_14217ed74 == -1)) {
            FUN_1416ac010(&DAT_14217ed60,&DAT_1420b2521);
            _DAT_14217ed70 = 0;
            atexit(FUN_14004b8d0);
            _Init_thread_footer(&DAT_14217ed74);
          }
          iVar2 = FUN_1416d9df0(&DAT_14217ed60,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0 && _DAT_14217ed70 == 0) {
            local_88 = 0x8d;
            puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            puVar10 = &DAT_bff0000000000000;
          }
          else {
            local_88 = 0x91;
            puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            puVar10 = (undefined1 *)0x4079500000000000/*405 (obj:oDlg_TaffBol)*/;
          }
          *puVar6 = puVar10;
          FUN_1416a8c00(2);
          local_88 = 0x94;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fcd5f64c87d092a/*0.229474*/;
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          if (iVar2 < 1) {
            local_88 = 0x95;
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            FUN_140002730(&local_108,&DAT_1420b25b8);
            local_128 = &local_108;
            FUN_140002730(&local_f8,&DAT_1420b25b8);
            local_120 = &local_f8;
            FUN_140002730(&local_e8,&DAT_1420b25c8);
            local_118 = &local_e8;
            FUN_140002730(&local_d8,&DAT_1420b25f8);
            local_110 = &local_d8;
            FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          }
          local_88 = 0x96;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 4:
          local_88 = 0x9a;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = &DAT_bff0000000000000;
          FUN_1416a8c00(2);
          local_88 = 0x9b;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,1);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x4043800000000000/*39 (obj:oDlg_Mex_OfficeHolo1_Irn)*/;
          FUN_1416a8c00(2);
          local_88 = 0x9c;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = &DAT_bff0000000000000;
          FUN_1416a8c00(2);
          local_88 = 0x9d;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217edf8) && (_Init_thread_header(&DAT_14217edf8), DAT_14217edf8 == -1)) {
            local_130 = &DAT_14217ed80;
            FUN_1416ac010(&DAT_14217ed80,s_rmSep_3_1420b2524);
            DAT_14217ed90 = 0;
            local_130 = &DAT_14217ed94;
            FUN_1416ac010(&DAT_14217ed94,s_rmSep_b_1420b252c);
            DAT_14217eda4 = 0;
            local_130 = &DAT_14217eda8;
            FUN_1416ac010(&DAT_14217eda8,s_rmSep_1_1420b2534);
            DAT_14217edb8 = 0;
            local_130 = &DAT_14217edbc;
            FUN_1416ac010(&DAT_14217edbc,s_rmSep_2_1420b253c);
            DAT_14217edcc = 0;
            local_130 = &DAT_14217edd0;
            FUN_1416ac010(&DAT_14217edd0,s_rmSep_2_1_1420b2544);
            DAT_14217ede0 = 0;
            local_130 = &DAT_14217ede4;
            FUN_1416ac010(&DAT_14217ede4,s_rmSep_2_2_1420b254e);
            DAT_14217edf4 = 0;
            atexit(FUN_14004b930);
            _Init_thread_footer(&DAT_14217edf8);
          }
          uVar7 = DAT_1420f6b08;
          iVar3 = FUN_1416d9df0(&DAT_14217ed80,&local_80,DAT_1420f6b08,0);
          iVar2 = DAT_14217ed90;
          if ((iVar3 == 0) ||
             (iVar3 = FUN_1416d9df0(&DAT_14217ed94,&local_80,uVar7,0), iVar2 = DAT_14217eda4,
             iVar3 == 0)) {
joined_r0x00014004976c:
            if (iVar2 != 0) goto LAB_140049772;
LAB_140049a3a:
            local_88 = 0xa4;
            puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0x4079300000000000/*403 (obj:oDlg_Taff3)*/;
            FUN_1416a8c00(2);
            local_88 = 0xa5;
            puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0x4084e80000000000/*669 (obj:oNen_shard)*/;
            FUN_1416a8c00(2);
            local_88 = 0xa6;
          }
          else {
            iVar3 = FUN_1416d9df0(&DAT_14217eda8,&local_80,uVar7,0);
            iVar2 = DAT_14217edb8;
            if ((iVar3 == 0) ||
               (iVar3 = FUN_1416d9df0(&DAT_14217edbc,&local_80,uVar7,0), iVar2 = DAT_14217edcc,
               iVar3 == 0)) {
joined_r0x000140049dda:
              if (iVar2 == 0) goto LAB_140049a3a;
            }
            else {
              iVar3 = FUN_1416d9df0(&DAT_14217edd0,&local_80,uVar7,0);
              iVar2 = DAT_14217ede0;
              if (iVar3 == 0) goto joined_r0x00014004976c;
              iVar3 = FUN_1416d9df0(&DAT_14217ede4,&local_80,uVar7,0);
              iVar2 = DAT_14217edf4;
              if (iVar3 == 0) goto joined_r0x000140049dda;
            }
LAB_140049772:
            local_88 = 0xa9;
            puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = &DAT_bff0000000000000;
            FUN_1416a8c00(2);
            local_88 = 0xaa;
          }
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          if (iVar2 < 1) {
            local_88 = 0xac;
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            FUN_140002730(&local_108,&DAT_1420b25b8);
            local_128 = &local_108;
            FUN_140002730(&local_f8,&DAT_1420b25b8);
            local_120 = &local_f8;
            FUN_140002730(&local_e8,&DAT_1420b25c8);
            local_118 = &local_e8;
            FUN_140002730(&local_d8,&DAT_1420b2608);
            local_110 = &local_d8;
            FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          }
          local_88 = 0xad;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 5:
          local_88 = 0xb2;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          local_74 = 0;
          local_80 = *(undefined8 *)(&DAT_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(local_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&local_80);
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          FUN_1416a8c00(2);
          local_88 = 0xb3;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_14217ee28) && (_Init_thread_header(&DAT_14217ee28), DAT_14217ee28 == -1)) {
            local_148 = &DAT_14217ee00;
            FUN_1416ac010(&DAT_14217ee00,s_rmMoriiem_1420b2558);
            DAT_14217ee10 = 0;
            local_148 = &DAT_14217ee14;
            FUN_1416ac010(&DAT_14217ee14,s_rmQuo_2_1420b2562);
            DAT_14217ee24 = 1;
            atexit(FUN_14004ba30);
            _Init_thread_footer(&DAT_14217ee28);
          }
          uVar7 = DAT_1420f6b08;
          iVar2 = FUN_1416d9df0(&DAT_14217ee00,&local_80,DAT_1420f6b08,0);
          if (iVar2 == 0) {
            lVar9 = 0;
LAB_1400494a5:
            if ((&DAT_14217ee10)[lVar9 * 5] == 1) {
              local_88 = 0xb9;
              puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
              FUN_1416a8cb0(local_68);
              puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
              FUN_1416a8cb0(*puVar8);
              if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              puVar10 = (undefined1 *)0x4083080000000000/*609 (obj:oFire_s)*/;
            }
            else {
              if ((&DAT_14217ee10)[lVar9 * 5] != 0) goto LAB_140049528;
              local_88 = 0xb5;
              puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
              FUN_1416a8cb0(local_68);
              puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
              FUN_1416a8cb0(*puVar8);
              if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              puVar10 = &DAT_bff0000000000000;
            }
          }
          else {
            iVar2 = FUN_1416d9df0(&DAT_14217ee14,&local_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 1;
              goto LAB_1400494a5;
            }
LAB_140049528:
            local_88 = 0xbd;
            puVar8 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
            FUN_1416a8cb0(local_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            puVar10 = (undefined1 *)0x4085e80000000000/*701*/;
          }
          *puVar6 = puVar10;
          FUN_1416a8c00(2);
          local_88 = 0xc0;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc8cdb5beeaec30/*0.193778*/;
          iVar2 = FUN_1416f82f0(local_68,local_a0,0x60);
          if (iVar2 < 1) {
            local_88 = 0xc1;
            if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&local_b0);
            }
            local_b0 = 0;
            local_a8 = 0x500000000;
            FUN_140002730(&local_108,&DAT_1420b25b8);
            local_128 = &local_108;
            FUN_140002730(&local_f8,&DAT_1420b25b8);
            local_120 = &local_f8;
            FUN_140002730(&local_e8,&DAT_1420b25c8);
            local_118 = &local_e8;
            FUN_140002730(&local_d8,&DAT_1420b2618);
            local_110 = &local_d8;
            FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          }
          local_88 = 0xc2;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
          break;
        case 6:
          local_88 = 199;
          DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x4043000000000000/*38 (obj:oDlg_Quo_LokDor2)*/;
          FUN_1416a8c00(2);
          local_88 = 200;
          local_74 = *(uint *)((longlong)puVar4 + 0xc);
          local_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (local_74 & 0x1f) & 1) == 0) {
            local_80 = *puVar4;
          }
          else {
            FUN_14005b430(&local_80,puVar4);
          }
          local_88 = 0xce;
          puVar6 = (undefined8 *)(**(code **)(*local_68 + 0x10))(local_68,0x18b04/*var:MUSIC*/);
          FUN_1416a8cb0(local_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x407f600000000000/*502 (obj:oBolt_iiem)*/;
          FUN_1416a8c00(2);
          local_88 = 0xd1;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc5b3fef29242de/*0.169556*/;
          local_88 = 0xd2;
          if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_b0);
          }
          local_b0 = 0;
          local_a8 = 0x500000000;
          FUN_140002730(&local_108,&DAT_1420b25b8);
          local_128 = &local_108;
          FUN_140002730(&local_f8,&DAT_1420b25b8);
          local_120 = &local_f8;
          FUN_140002730(&local_e8,&DAT_1420b25c8);
          local_118 = &local_e8;
          FUN_140002730(&local_d8,&DAT_1420b2628);
          local_110 = &local_d8;
          FUN_140101340(local_68,local_a0,&local_b0,4,&local_128);
          local_88 = 0xd3;
          if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&local_80);
          }
        }
      }
      if ((0x46U >> (local_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&local_c8);
      }
      cVar1 = FUN_1416abe60(local_170,&local_68,&local_a0);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(local_170,&local_68,&local_a0);
  if (local_160 != 0) {
    thunk_FUN_1416c46f0();
    local_160 = 0;
  }
  if ((0x46U >> (local_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
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
  DAT_142182d78 = (undefined8 *)local_98;
  return local_150;
}


