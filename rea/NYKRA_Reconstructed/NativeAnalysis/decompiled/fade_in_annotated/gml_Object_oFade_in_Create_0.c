// Function: gml_Object_oFade_in_Create_0 @ 0x14087d320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFade_in_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 **ppuVar9;
  undefined8 uStack_320;
  uint uStack_314;
  undefined8 uStack_310;
  uint uStack_304;
  undefined8 uStack_300;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  uint uStack_2e4;
  undefined8 uStack_2e0;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  uint uStack_2c4;
  undefined8 uStack_2c0;
  uint uStack_2b4;
  undefined8 uStack_2b0;
  uint uStack_2a4;
  undefined8 uStack_2a0;
  uint uStack_294;
  undefined8 uStack_290;
  uint uStack_284;
  undefined8 uStack_280;
  uint uStack_274;
  undefined8 uStack_270;
  uint uStack_264;
  undefined8 uStack_260;
  uint uStack_254;
  undefined8 uStack_250;
  uint uStack_244;
  undefined8 uStack_240;
  uint uStack_234;
  undefined8 uStack_230;
  uint uStack_224;
  undefined8 uStack_220;
  uint uStack_214;
  undefined8 uStack_210;
  uint uStack_204;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
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
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  uint uStack_114;
  longlong lStack_110;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;

  uStack_70 = 0xfffffffffffffffe;
  puStack_f8 = &UNK_141989399;
  uStack_f0 = 0;
  uStack_100 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_100;
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
  uStack_214 = 0xffffff;
  uStack_220 = 0;
  uStack_204 = 0xffffff;
  uStack_210 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  plRam0000000142182d90 = param_1;
  uStack_90 = param_2;
  plStack_78 = param_1;
  uStack_200 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9/*var:cam*/);
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_80 = CONCAT44(0xffffff,(undefined4)uStack_80);
  uStack_88 = 0;
  uStack_150 = CONCAT44(0xffffff,(undefined4)uStack_150);
  uStack_158 = 0;
  uStack_140 = CONCAT44(0xffffff,(undefined4)uStack_140);
  uStack_148 = 0;
  uStack_314 = 0xffffff;
  uStack_320 = 0;
  uStack_304 = 0xffffff;
  uStack_310 = 0;
  uStack_2f4 = 0xffffff;
  uStack_300 = 0;
  uStack_2e4 = 0xffffff;
  uStack_2f0 = 0;
  uStack_2d4 = 0xffffff;
  uStack_2e0 = 0;
  uStack_2c4 = 0xffffff;
  uStack_2d0 = 0;
  uStack_2b4 = 0xffffff;
  uStack_2c0 = 0;
  uStack_2a4 = 0xffffff;
  uStack_2b0 = 0;
  uStack_294 = 0xffffff;
  uStack_2a0 = 0;
  uStack_284 = 0xffffff;
  uStack_290 = 0;
  uStack_274 = 0xffffff;
  uStack_280 = 0;
  uStack_264 = 0xffffff;
  uStack_270 = 0;
  uStack_254 = 0xffffff;
  uStack_260 = 0;
  uStack_244 = 0xffffff;
  uStack_250 = 0;
  uStack_234 = 0xffffff;
  uStack_240 = 0;
  uStack_224 = 0xffffff;
  uStack_230 = 0;
  puVar3 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x1890a/*var:fade*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  uStack_f0 = 2;
  plRam0000000142182d90 = (longlong *)0x109fa;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  func_0x0001416ce870(plStack_78,uRam00000001420d5cb8,0x80000000,&uStack_220);
  FUN_140004520(&uStack_120,&uStack_220,_UNK_141987d48);
  FUN_1400019a0(&uStack_1c8,&uStack_120);
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  puStack_1f8 = &uStack_1c8;
  uVar4 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uRam00000001420da140,&puStack_1f8);
  uStack_114 = 0;
  uStack_120 = 0x4000000000000000/*2 (obj:oDlg_Iie_GatnaGone)*/;
  FUN_140003ca0(&uStack_120,uVar4);
  FUN_1400019a0(&uStack_210,&uStack_120);
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  FUN_1416cfae0(plStack_78,uRam00000001420d5a48,0,&uStack_210);
  uStack_f0 = 3;
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  uStack_16c = 0;
  uStack_178 = 0xc08f980000000000/*-1011*/;
  FUN_1416cfae0(plStack_78,uRam00000001420d5a18,0x80000000,&uStack_178);
  uStack_f0 = 4;
  puVar3 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x18707/*var:alpha*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff1eb851eb851ec/*1.12*/;
  uStack_f0 = 5;
  puVar3 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x18828/*var:colour*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  iVar2 = func_0x0001416f82f0(plStack_78,uStack_90,0x40);
  if (0 < iVar2) {
    iVar2 = func_0x0001416f82f0(plStack_78,uStack_90,0x4e);
    if (0 < iVar2) {
      uStack_f0 = 7;
      uStack_b0 = uStack_b0 & 0xffffffff;
      uStack_b8 = 0x4053c00000000000/*79 (obj:oControl)*/;
      iVar2 = FUN_1416ab810(&uStack_120,&plStack_78,&uStack_90,&uStack_b8);
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uVar4 = _UNK_141982c40;
      if (0 < iVar2) {
        do {
          uStack_f0 = 9;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b09/*var:mw*/);
          FUN_1416ab670(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          FUN_1400019a0(&uStack_1c8,&uStack_e8);
          puStack_1f8 = &uStack_1c8;
          FUN_140001a50(&uStack_b8,uVar5,8);
          FUN_1400019a0(&uStack_1b8,&uStack_b8);
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          puStack_1f0 = &uStack_1b8;
          uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,&puStack_1f8)
          ;
          FUN_1400019a0(&uStack_e8,uVar6);
          FUN_1416cf840(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          uStack_f0 = 10;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18abd/*var:mh*/);
          FUN_1416ab670(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          FUN_1400019a0(&uStack_1c8,&uStack_d8);
          puStack_1f8 = &uStack_1c8;
          FUN_140001a50(&uStack_b8,uVar6,8);
          FUN_1400019a0(&uStack_1b8,&uStack_b8);
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          ppuVar9 = &puStack_1f8;
          uVar8 = uRam00000001420da0c0;
          puStack_1f0 = &uStack_1b8;
          uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,ppuVar9);
          FUN_1400019a0(&uStack_d8,uVar7);
          FUN_1416cf840(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          uStack_f0 = 0xb;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uStack_b8 = 0;
          uStack_b0 = 0;
          FUN_1416d0010(0x4e,0x18e45/*var:xx*/,0x80000000,&uStack_b8,uVar8 & 0xffffff00,
                        (ulonglong)ppuVar9 & 0xffffffffffffff00);
          FUN_1400019a0(&uStack_1c8,&uStack_b8);
          puStack_1f8 = &uStack_1c8;
          FUN_140001a50(&uStack_138,uVar5,8);
          FUN_1400019a0(&uStack_1b8,&uStack_138);
          if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_138);
          }
          ppuVar9 = &puStack_1f8;
          uVar8 = uRam00000001420da0c0;
          puStack_1f0 = &uStack_1b8;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,ppuVar9);
          uVar7 = FUN_1416cfcc0(0x4e);
          FUN_1416a8cb0(uVar7);
          FUN_1400019a0(&uStack_b8,uVar5);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&uStack_b8);
          uStack_f0 = 0xc;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uStack_138 = 0;
          uStack_130 = 0;
          FUN_1416d0010(0x4e,0x18e54/*var:yy*/,0x80000000,&uStack_138,uVar8 & 0xffffff00,
                        (ulonglong)ppuVar9 & 0xffffffffffffff00);
          FUN_1400019a0(&uStack_1c8,&uStack_138);
          puStack_1f8 = &uStack_1c8;
          FUN_140001a50(&uStack_a0,uVar6,8);
          FUN_1400019a0(&uStack_1b8,&uStack_a0);
          if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a0);
          }
          puStack_1f0 = &uStack_1b8;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,&puStack_1f8)
          ;
          uVar6 = FUN_1416cfcc0(0x4e);
          FUN_1416a8cb0(uVar6);
          FUN_1400019a0(&uStack_138,uVar5);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&uStack_138);
          uStack_f0 = 0xd;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_158);
          }
          uStack_158 = 0;
          uStack_150 = 0x500000000;
          if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_148);
          }
          uStack_148 = 0;
          uStack_140 = 0x500000000;
          FUN_1416ab670(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          FUN_1400019a0(&uStack_1c8,uStack_200);
          puStack_1f8 = &uStack_1c8;
          FUN_1416ab670(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          FUN_1400019a0(&uStack_1b8,uStack_200);
          puStack_1f0 = &uStack_1b8;
          FUN_1400019a0(&uStack_1a8,uStack_200);
          puStack_1e8 = &uStack_1a8;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_158,1,uRam00000001420da3b0,&puStack_1f8
                               );
          FUN_140004520(&uStack_c8,uVar5,uVar4);
          uStack_98._4_4_ = uStack_dc;
          if ((0x46U >> (uStack_dc & 0x1f) & 1) == 0) {
            uStack_a0 = uStack_e8;
          }
          else {
            FUN_14087f8e0(&uStack_a0,&uStack_e8);
          }
          FUN_140003e00(&uStack_a0,&uStack_c8);
          FUN_1400019a0(&uStack_198,&uStack_a0);
          if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a0);
          }
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_c8);
          }
          puStack_1e0 = &uStack_198;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uRam00000001420da3c0,&puStack_1f0
                               );
          FUN_140004520(&uStack_c8,uVar5,uVar4);
          uStack_98._4_4_ = uStack_cc;
          if ((0x46U >> (uStack_cc & 0x1f) & 1) == 0) {
            uStack_a0 = uStack_d8;
          }
          else {
            FUN_14087f8e0(&uStack_a0,&uStack_d8);
          }
          FUN_140003e00(&uStack_a0,&uStack_c8);
          FUN_1400019a0(&uStack_188,&uStack_a0);
          if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a0);
          }
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_c8);
          }
          puStack_1d8 = &uStack_188;
          FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uRam00000001420da3a0,&puStack_1e8);
          uStack_f0 = 0xe;
          uStack_a0 = 0;
          uStack_98 = 0;
          FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&uStack_a0);
          uStack_f0 = 0xf;
          uStack_c8 = 0;
          uStack_c0 = 0;
          FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&uStack_c8);
          uStack_f0 = 0x10;
          plRam0000000142182d90 = (longlong *)0x209fa;
          if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_168);
          }
          uStack_15c = 0;
          uStack_168 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
          FUN_1416cf840(0x4e,uRam00000001420d5a48,0,&uStack_168);
          cVar1 = func_0x0001416abe60(&uStack_120,&plStack_78,&uStack_90);
        } while (cVar1 != '\0');
      }
      FUN_1416ab620(&uStack_120,&plStack_78,&uStack_90);
      if (lStack_110 != 0) {
        func_0x000141695b90();
        lStack_110 = 0;
      }
    }
  }
  if ((0x46U >> (uStack_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_230);
  }
  if ((0x46U >> (uStack_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_240);
  }
  if ((0x46U >> (uStack_244 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_250);
  }
  if ((0x46U >> (uStack_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_260);
  }
  if ((0x46U >> (uStack_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_270);
  }
  if ((0x46U >> (uStack_274 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_280);
  }
  if ((0x46U >> (uStack_284 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_290);
  }
  if ((0x46U >> (uStack_294 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a0);
  }
  if ((0x46U >> (uStack_2a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b0);
  }
  if ((0x46U >> (uStack_2b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c0);
  }
  if ((0x46U >> (uStack_2c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d0);
  }
  if ((0x46U >> (uStack_2d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e0);
  }
  if ((0x46U >> (uStack_2e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f0);
  }
  if ((0x46U >> (uStack_2f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_300);
  }
  if ((0x46U >> (uStack_304 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_310);
  }
  if ((0x46U >> (uStack_314 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_320);
  }
  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_150._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_210);
  }
  if ((0x46U >> (uStack_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_220);
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
  puRam0000000142182d78 = (undefined8 *)uStack_100;
  return;
}
