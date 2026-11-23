// Function: gml_Object_oControl_Step_0 @ 0x14066ef50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oControl_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_GS_OFFSET;
  double dVar9;
  ulonglong in_stack_fffffffffffffd98;
  undefined4 uVar11;
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffda0;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
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
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  puStack_70 = &UNK_141987c13;
  uStack_78 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_78;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_54 = 0xffffff;
  uStack_60 = 0;
  uStack_130 = CONCAT44(0xffffff,(undefined4)uStack_130);
  uStack_138 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_68 = 1;
  plRam0000000142182d90 = param_1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x187fe);
  uStack_b0 = (ulonglong)(uint)uStack_b0;
  uStack_b8 = 0;
  iVar2 = FUN_1416d9df0(uVar3,&uStack_b8,uRam00000001420f6b08,0);
  if (iVar2 != 0) {
    uStack_68 = 0x23;
    if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_60);
    }
    uVar11 = (undefined4)(in_stack_fffffffffffffd98 >> 0x20);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_54 = 5;
    FUN_140002730(&uStack_128,0x1420b8f50);
    uVar6 = CONCAT44(uVar11,uRam00000001420db100);
    puStack_a8 = &uStack_128;
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_60,1,uVar6,&puStack_a8);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 == '\0') {
      uStack_68 = 0x24;
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      uStack_138 = 0;
      uStack_130 = 0x500000000;
      FUN_140002730(&uStack_118,0x1420b8f50);
      uVar3 = CONCAT44(uVar11,uRam00000001420db110);
      puStack_a0 = &uStack_118;
      FUN_1416ab210(param_1,param_2,&uStack_138,1,uVar3,&puStack_a0);
      uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    uStack_68 = 0x25;
    pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,0x187fe);
    switch(*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) {
    case 0:
    case 0xd:
      *pdVar4 = *pdVar4 + _UNK_141982ea0;
      break;
    case 1:
      dVar9 = (double)FUN_1416940c0(pdVar4);
      *pdVar4 = dVar9 + _UNK_141982ea0;
      *(int *)((longlong)pdVar4 + 0xc) = 0;
      break;
    default:
      FUN_140001d70(&UNK_141982eda,pdVar4,pdVar4);
      break;
    case 7:
      *(int *)pdVar4 = *(int *)pdVar4 + -1;
      break;
    case 10:
      *pdVar4 = (double)((longlong)*pdVar4 + -1);
    }
    goto code_r0x00014066ff9e;
  }
  uStack_68 = 2;
  plRam0000000142182d90 = (longlong *)0x38788;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar3 = FUN_1416cfcc0(0x4f);
  FUN_1416a8cb0(uVar3);
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  uStack_b8 = 0;
  func_0x0001416a8c00(1);
  FUN_1416d0790(0x4f,0x18b04,0,&uStack_b8);
  uStack_68 = 4;
  uStack_148 = 0;
  uStack_140 = 0;
  in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x187f3,0x80000000,&uStack_148,in_stack_fffffffffffffd98,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(in_stack_fffffffffffffd98 >> 0x20);
  uStack_bc = uStack_140._4_4_;
  uStack_c0 = (undefined4)uStack_140;
  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) == 0) {
    uStack_c8 = uStack_148;
  }
  else {
    FUN_140670dd0(&uStack_c8,&uStack_148);
  }
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < iRam000000014218082c) &&
     (FUN_14193dcf0(0x14218082c), iRam000000014218082c == -1)) {
    uRam00000001421807ac = 0;
    uRam00000001421807a0 = 0x3ff0000000000000;
    uRam00000001421807c0 = 0x100000000;
    uRam00000001421807b4 = 0x4000000000000000;
    uRam00000001421807d4 = 0x200000000;
    uRam00000001421807c8 = 0x4008000000000000;
    uRam00000001421807e8 = 0x300000000;
    uRam00000001421807dc = 0x4010000000000000;
    uRam00000001421807fc = 0x400000000;
    uRam00000001421807f0 = 0x4014000000000000;
    uRam0000000142180810 = 0x500000000;
    uRam0000000142180804 = 0x4018000000000000;
    uRam0000000142180824 = 0x600000000;
    uRam0000000142180818 = 0x401c000000000000;
    FUN_14193e038(FUN_140670cc0);
    FUN_14193dc90(0x14218082c);
  }
  uVar3 = uRam00000001420f6b08;
  lVar8 = 0;
  iVar2 = FUN_1416d9df0(0x1421807a0,&uStack_c8,uRam00000001420f6b08,0);
  if (iVar2 == 0) {
code_r0x00014066f5be:
    uVar5 = (ulonglong)*(uint *)(lVar8 * 0x14 + 0x1421807b0);
joined_r0x00014066f56a:
    if (uVar5 < 7) {
      switch(&UNK_140670ca4 + *(int *)(&UNK_140670ca4 + uVar5 * 4)) {
      case (undefined *)0x14066f5e0:
        uStack_68 = 6;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8f30);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066f750:
        uStack_68 = 0xe;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8f80);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066f8a4:
        uStack_68 = 0x12;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8f90);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066f9f8:
        uStack_68 = 0x16;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8fa0);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066fb4c:
        uStack_68 = 10;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8f70);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066fca0:
        uStack_68 = 0x1a;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8fb0);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
        break;
      case (undefined *)0x14066fdf4:
        uStack_68 = 0x1e;
        if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_60);
        }
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_54 = 5;
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
        FUN_140002730(&uStack_128,0x1420b8fc0);
        puStack_a8 = &uStack_128;
        FUN_140002730(&uStack_118,0x1420b8f40);
        puStack_a0 = &uStack_118;
        FUN_140002730(&uStack_108,0x142180790);
        puStack_98 = &uStack_108;
        FUN_140002730(&uStack_f8,0x1420b8f50);
        puStack_90 = &uStack_f8;
        FUN_140002730(&uStack_e8,0x1420b8f60);
        puStack_88 = &uStack_e8;
        FUN_140002730(&uStack_d8,0x142180790);
        ppuVar10 = &puStack_a8;
        puStack_80 = &uStack_d8;
        uVar6 = FUN_1400d2410(param_1,param_2,&uStack_60,6,ppuVar10);
        uVar11 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
        FUN_1416a8cb0(param_1);
        FUN_1400019a0(uVar3,uVar6);
        func_0x0001416a8c00(1);
      }
    }
  }
  else {
    iVar2 = FUN_1416d9df0(0x1421807b4,&uStack_c8,uVar3,0);
    if (iVar2 == 0) {
      lVar8 = 1;
      goto code_r0x00014066f5be;
    }
    iVar2 = FUN_1416d9df0(0x1421807c8,&uStack_c8,uVar3,0);
    if (iVar2 == 0) {
      uVar5 = uRam00000001421807d4 >> 0x20;
      goto joined_r0x00014066f56a;
    }
    iVar2 = FUN_1416d9df0(0x1421807dc,&uStack_c8,uVar3,0);
    uVar5 = uRam00000001421807e8;
    if ((iVar2 == 0) ||
       (iVar2 = FUN_1416d9df0(0x1421807f0,&uStack_c8,uVar3,0), uVar5 = uRam00000001421807fc,
       iVar2 == 0)) {
      uVar5 = uVar5 >> 0x20;
      goto joined_r0x00014066f56a;
    }
    iVar2 = FUN_1416d9df0(0x142180804,&uStack_c8,uVar3,0);
    if (iVar2 == 0) {
      uVar5 = uRam0000000142180810 >> 0x20;
      goto joined_r0x00014066f56a;
    }
    iVar2 = FUN_1416d9df0(0x142180818,&uStack_c8,uVar3,0);
    if (iVar2 == 0) {
      uVar5 = uRam0000000142180824 >> 0x20;
      goto joined_r0x00014066f56a;
    }
  }
  uStack_68 = 0x22;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187fe);
  if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0xbff0000000000000;
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
code_r0x00014066ff9e:
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
  uStack_b0 = uStack_b0 & 0xffffffff;
  uStack_b8 = 0xbff0000000000000;
  iVar2 = FUN_1416d9df0(uVar3,&uStack_b8,uRam00000001420f6b08,0);
  if (iVar2 != 0) {
    uStack_68 = 0x29;
    plRam0000000142182d90 = (longlong *)0x38788;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uVar3 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar3);
    if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_b8);
    }
    uStack_b0 = uStack_b0 & 0xffffffff;
    uStack_b8 = 0;
    func_0x0001416a8c00(1);
    FUN_1416d0790(0x4f,0x18b04,0,&uStack_b8);
    if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_60);
    }
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_54 = 5;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187fd);
    FUN_1400019a0(&uStack_128,uVar3);
    puStack_a8 = &uStack_128;
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_60,1,CONCAT44(uVar11,uRam00000001420db120),
                          &puStack_a8);
    cVar1 = FUN_1416927d0(uVar3);
    if (cVar1 == '\0') {
      uStack_68 = 0x2b;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187fc);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0xbff0000000000000;
      uStack_68 = 0x2c;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187fd);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0xbff0000000000000;
      uStack_68 = 0x2d;
      if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_60);
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_54 = 5;
      FUN_140047690(param_1,param_2,&uStack_60,0,0);
    }
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_60);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_78;
  return;
}


