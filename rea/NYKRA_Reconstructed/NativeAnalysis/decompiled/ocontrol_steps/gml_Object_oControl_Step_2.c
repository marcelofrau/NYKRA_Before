// Function: gml_Object_oControl_Step_2 @ 0x14066d690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oControl_Step_2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_1f0;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  uint uStack_1b4;
  undefined8 uStack_1b0;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  uint uStack_194;
  undefined8 uStack_190;
  uint uStack_184;
  undefined8 uStack_180;
  uint uStack_174;
  undefined8 uStack_170;
  uint uStack_164;
  undefined8 uStack_160;
  uint uStack_154;
  undefined8 uStack_150;
  uint uStack_144;
  undefined8 uStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  uint uStack_114;
  undefined8 uStack_110;
  uint uStack_104;
  undefined8 uStack_100;
  uint uStack_f4;
  undefined8 uStack_f0;
  uint uStack_e4;
  undefined8 uStack_e0;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [12];
  uint uStack_bc;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_a0 = &UNK_141987bf8;
  uStack_98 = 0;
  uStack_a8 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_a8;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  plRam0000000142182d90 = param_1;
  uStack_90 = param_2;
  uVar3 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9);
  puVar4 = (undefined8 *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885e);
  puVar5 = (undefined8 *)(**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885f);
  uVar6 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x1885d);
  uStack_d0 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187f1);
  uVar7 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18816);
  uVar8 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18817);
  uVar9 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18b2b);
  uVar10 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x18b2c);
  uStack_1e4 = 0xffffff;
  uStack_1f0 = 0;
  uStack_1d4 = 0xffffff;
  uStack_1e0 = 0;
  uStack_1c4 = 0xffffff;
  uStack_1d0 = 0;
  uStack_1b4 = 0xffffff;
  uStack_1c0 = 0;
  uStack_1a4 = 0xffffff;
  uStack_1b0 = 0;
  uStack_194 = 0xffffff;
  uStack_1a0 = 0;
  uStack_184 = 0xffffff;
  uStack_190 = 0;
  uStack_174 = 0xffffff;
  uStack_180 = 0;
  uStack_164 = 0xffffff;
  uStack_170 = 0;
  uStack_154 = 0xffffff;
  uStack_160 = 0;
  uStack_144 = 0xffffff;
  uStack_150 = 0;
  uStack_134 = 0xffffff;
  uStack_140 = 0;
  uStack_124 = 0xffffff;
  uStack_130 = 0;
  uStack_114 = 0xffffff;
  uStack_120 = 0;
  uStack_104 = 0xffffff;
  uStack_110 = 0;
  uStack_f4 = 0xffffff;
  uStack_100 = 0;
  uStack_e4 = 0xffffff;
  uStack_f0 = 0;
  uStack_d4 = 0xffffff;
  uStack_e0 = 0;
  uStack_98 = 2;
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  FUN_1400019a0(&uStack_b8,uVar3);
  puStack_88 = &uStack_b8;
  uVar11 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da4a0,&puStack_88);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(puVar4,uVar11);
  func_0x0001416a8c00(1);
  uStack_98 = 3;
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  FUN_1400019a0(&uStack_b8,uVar3);
  puStack_88 = &uStack_b8;
  uVar11 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da560,&puStack_88);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(puVar5,uVar11);
  func_0x0001416a8c00(1);
  uStack_98 = 4;
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  FUN_1400019a0(&uStack_b8,uVar3);
  puStack_88 = &uStack_b8;
  uVar11 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da3b0,&puStack_88);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(uVar6,uVar11);
  func_0x0001416a8c00(1);
  uStack_98 = 5;
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  FUN_1400019a0(&uStack_b8,uVar3);
  puStack_88 = &uStack_b8;
  uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da3c0,&puStack_88);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(uStack_d0,uVar3);
  func_0x0001416a8c00(1);
  uStack_98 = 6;
  FUN_140004520(auStack_c8,uVar6,_UNK_141982c40);
  uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
  uStack_78 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
    uStack_80 = *puVar4;
  }
  else {
    FUN_14066eed0(&uStack_80,puVar4);
  }
  FUN_140003ca0(&uStack_80,auStack_c8);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(uVar7,&uStack_80);
  if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_c8);
  }
  func_0x0001416a8c00(1);
  uStack_98 = 7;
  uVar12 = (undefined4)_UNK_141982c40;
  uVar13 = (undefined4)((ulonglong)_UNK_141982c40 >> 0x20);
  FUN_140004520(auStack_c8,uStack_d0,_UNK_141982c40);
  uStack_74 = *(uint *)((longlong)puVar5 + 0xc);
  uStack_78 = *(undefined4 *)(puVar5 + 1);
  if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
    uStack_80 = *puVar5;
  }
  else {
    FUN_14066eed0(&uStack_80,puVar5);
  }
  FUN_140003ca0(&uStack_80,auStack_c8);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(uVar8,&uStack_80);
  if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_c8);
  }
  func_0x0001416a8c00(1);
  uStack_98 = 9;
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  FUN_1400019a0(&uStack_b8,uVar9);
  puStack_88 = &uStack_b8;
  uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420d9ec0,&puStack_88);
  FUN_1416a8cb0(plRam000000014218ecf8);
  FUN_1400019a0(uVar10,uVar3);
  func_0x0001416a8c00(1);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18d24);
  uStack_74 = 0;
  uStack_80 = 0;
  iVar2 = FUN_1416d9df0(uVar3,&uStack_80,uRam00000001420f6b08,0);
  if (iVar2 == 0) {
    uStack_98 = 0xc;
    if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_70);
    }
    uStack_70 = 0;
    uStack_68 = 0x500000000;
    FUN_140002730(&uStack_b8,0x1420b8f00);
    puStack_88 = &uStack_b8;
    uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da6d0,&puStack_88);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 == '\0') {
      uStack_98 = 0x11;
      if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_70 = 0;
      uStack_68 = 0x500000000;
      FUN_140002730(&uStack_b8,0x1420b8f10);
      puStack_88 = &uStack_b8;
      uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da6d0,&puStack_88);
      cVar1 = FUN_1416927d0(uVar3);
      if (cVar1 == '\0') {
        if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_70);
        }
        uStack_70 = 0;
        uStack_68 = 0x500000000;
        FUN_140002730(&uStack_b8,0x1420b8f20);
        puStack_88 = &uStack_b8;
        uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,1,uRam00000001420da6d0,&puStack_88);
        cVar1 = FUN_1416927d0(uVar3);
        if (cVar1 != '\0') {
          uStack_98 = 0x16;
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18c54);
          uStack_74 = 0;
          uStack_80 = 0x3ff0000000000000;
          iVar2 = FUN_1416d9df0(uVar3,&uStack_80,uRam00000001420f6b08,0);
          if (iVar2 == 0) {
            uStack_98 = 0x17;
            puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
            uVar12 = (undefined4)_UNK_141982e78;
            uVar13 = (undefined4)((ulonglong)_UNK_141982e78 >> 0x20);
            if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar4);
            }
          }
          else {
            puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
            uVar12 = (undefined4)_UNK_141981e30;
            uVar13 = (undefined4)((ulonglong)_UNK_141981e30 >> 0x20);
            if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar4);
            }
          }
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          *puVar4 = CONCAT44(uVar13,uVar12);
          uStack_98 = 0x18;
          func_0x000141706f60(param_1,uStack_90,1);
        }
      }
      else {
        uStack_98 = 0x11;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18c54);
        uStack_74 = 0;
        uStack_80 = 0x3ff0000000000000;
        iVar2 = FUN_1416d9df0(uVar3,&uStack_80,uRam00000001420f6b08,0);
        if (iVar2 == 0) {
          uStack_98 = 0x12;
          puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
          if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar4);
          }
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
          uVar12 = (undefined4)_UNK_141981e30;
          uVar13 = (undefined4)((ulonglong)_UNK_141981e30 >> 0x20);
          if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar4);
          }
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = CONCAT44(uVar13,uVar12);
        uStack_98 = 0x13;
        func_0x000141706f60(param_1,uStack_90,1);
      }
    }
    else {
      uStack_98 = 0xc;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,0x18c54);
      uStack_74 = 0;
      uStack_80 = 0x3ff0000000000000;
      iVar2 = FUN_1416d9df0(uVar3,&uStack_80,uRam00000001420f6b08,0);
      if (iVar2 == 0) {
        uStack_98 = 0xd;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
        uVar12 = 0;
        uVar13 = 0;
        if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar4);
        }
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18c54);
        uVar12 = (undefined4)_UNK_141981e30;
        uVar13 = (undefined4)((ulonglong)_UNK_141981e30 >> 0x20);
        if ((0x46U >> (*(uint *)((longlong)puVar4 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar4);
        }
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = CONCAT44(uVar13,uVar12);
      uStack_98 = 0xe;
      func_0x000141706f60(param_1,uStack_90,1);
    }
    if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_70);
    }
    uStack_70 = 0;
    uStack_68 = 0x500000000;
    uVar3 = FUN_1416ab210(param_1,uStack_90,&uStack_70,0,uRam00000001420db0f0,0);
    uStack_74 = 0;
    uStack_80 = 0;
    iVar2 = FUN_1416d9df0(uVar3,&uStack_80,uRam00000001420f6b08,0);
    if (iVar2 == 0) {
      uStack_98 = 0x1b;
    }
  }
  if ((0x46U >> (uStack_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e0);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f0);
  }
  if ((0x46U >> (uStack_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_100);
  }
  if ((0x46U >> (uStack_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  if ((0x46U >> (uStack_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_140);
  }
  if ((0x46U >> (uStack_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_150);
  }
  if ((0x46U >> (uStack_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_160);
  }
  if ((0x46U >> (uStack_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_170);
  }
  if ((0x46U >> (uStack_174 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_180);
  }
  if ((0x46U >> (uStack_184 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_190);
  }
  if ((0x46U >> (uStack_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a0);
  }
  if ((0x46U >> (uStack_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b0);
  }
  if ((0x46U >> (uStack_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c0);
  }
  if ((0x46U >> (uStack_1c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d0);
  }
  if ((0x46U >> (uStack_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e0);
  }
  if ((0x46U >> (uStack_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f0);
  }
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_a8;
  return;
}


