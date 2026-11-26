// Function: gml_Object_oFade_in_Alarm_0 @ 0x14087f960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFade_in_Alarm_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 **ppuVar9;
  undefined1 auStack_308 [16];
  longlong lStack_2f8;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  undefined8 uStack_2d8;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  uint uStack_29c;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
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
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;

  uStack_70 = 0xfffffffffffffffe;
  puStack_f8 = &UNK_1419893b6;
  uStack_f0 = 0;
  uStack_100 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_100;
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
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  plRam0000000142182d90 = param_1;
  uStack_90 = param_2;
  plStack_78 = param_1;
  uStack_190 = (**(code **)(*plRam000000014218ecf8 + 8))(plRam000000014218ecf8,0x187c9/*var:cam*/);
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_80 = CONCAT44(0xffffff,(undefined4)uStack_80);
  uStack_88 = 0;
  uStack_130 = CONCAT44(0xffffff,(undefined4)uStack_130);
  uStack_138 = 0;
  uStack_120 = CONCAT44(0xffffff,(undefined4)uStack_120);
  uStack_128 = 0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_2cc = 0xffffff;
  uStack_2d8 = 0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
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
  uStack_f0 = 1;
  puVar3 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x1890a/*var:fade*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  uStack_f0 = 2;
  puVar3 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x18707/*var:alpha*/);
  if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  uStack_f0 = 3;
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  uStack_14c = 0;
  uStack_158 = 0xc08f980000000000/*-1011*/;
  FUN_1416cfae0(plStack_78,uRam00000001420d5a18,0x80000000,&uStack_158);
  iVar2 = func_0x0001416f82f0(plStack_78,uStack_90,0x40);
  if (0 < iVar2) {
    iVar2 = func_0x0001416f82f0(plStack_78,uStack_90,0x4e);
    if (0 < iVar2) {
      uStack_f0 = 5;
      uStack_a0 = uStack_a0 & 0xffffffff;
      uStack_a8 = 0x4053c00000000000/*79 (obj:oControl)*/;
      iVar2 = FUN_1416ab810(auStack_308,&plStack_78,&uStack_90,&uStack_a8);
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a8);
      }
      if (0 < iVar2) {
        uVar7 = (undefined4)_UNK_141982c40;
        do {
          uStack_f0 = 7;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uVar4 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b09/*var:mw*/);
          FUN_1416ab670(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          FUN_1400019a0(&uStack_1e8,&uStack_e8);
          puStack_188 = &uStack_1e8;
          FUN_140001a50(&uStack_a8,uVar4,8);
          FUN_1400019a0(&uStack_1d8,&uStack_a8);
          if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a8);
          }
          puStack_180 = &uStack_1d8;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,&puStack_188)
          ;
          FUN_1400019a0(&uStack_e8,uVar5);
          FUN_1416cf840(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          uStack_f0 = 8;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18abd/*var:mh*/);
          FUN_1416ab670(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          FUN_1400019a0(&uStack_1e8,&uStack_d8);
          puStack_188 = &uStack_1e8;
          FUN_140001a50(&uStack_a8,uVar5,8);
          FUN_1400019a0(&uStack_1d8,&uStack_a8);
          if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a8);
          }
          ppuVar9 = &puStack_188;
          uVar8 = uRam00000001420da0c0;
          puStack_180 = &uStack_1d8;
          uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,ppuVar9);
          FUN_1400019a0(&uStack_d8,uVar6);
          FUN_1416cf840(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          uStack_f0 = 9;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uStack_a8 = 0;
          uStack_a0 = 0;
          FUN_1416d0010(0x4e,0x18e45/*var:xx*/,0x80000000,&uStack_a8,uVar8 & 0xffffff00,
                        (ulonglong)ppuVar9 & 0xffffffffffffff00);
          FUN_1400019a0(&uStack_1e8,&uStack_a8);
          puStack_188 = &uStack_1e8;
          FUN_140001a50(&uStack_118,uVar4,8);
          FUN_1400019a0(&uStack_1d8,&uStack_118);
          if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_118);
          }
          ppuVar9 = &puStack_188;
          uVar8 = uRam00000001420da0c0;
          puStack_180 = &uStack_1d8;
          uVar4 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,ppuVar9);
          uVar6 = FUN_1416cfcc0(0x4e);
          FUN_1416a8cb0(uVar6);
          FUN_1400019a0(&uStack_a8,uVar4);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4e,0x18e45/*var:xx*/,0x80000000,&uStack_a8);
          uStack_f0 = 10;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          uStack_118 = 0;
          uStack_110 = 0;
          FUN_1416d0010(0x4e,0x18e54/*var:yy*/,0x80000000,&uStack_118,uVar8 & 0xffffff00,
                        (ulonglong)ppuVar9 & 0xffffffffffffff00);
          FUN_1400019a0(&uStack_1e8,&uStack_118);
          puStack_188 = &uStack_1e8;
          FUN_140001a50(&uStack_b8,uVar5,8);
          FUN_1400019a0(&uStack_1d8,&uStack_b8);
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          puStack_180 = &uStack_1d8;
          uVar4 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uRam00000001420da0c0,&puStack_188)
          ;
          uVar5 = FUN_1416cfcc0(0x4e);
          FUN_1416a8cb0(uVar5);
          FUN_1400019a0(&uStack_118,uVar4);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4e,0x18e54/*var:yy*/,0x80000000,&uStack_118);
          uStack_f0 = 0xb;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_138);
          }
          uStack_138 = 0;
          uStack_130 = 0x500000000;
          if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_128);
          }
          uStack_128 = 0;
          uStack_120 = 0x500000000;
          FUN_1416ab670(0x4e,uRam00000001420d58e8,0x80000000,&uStack_e8);
          FUN_1400019a0(&uStack_1e8,uStack_190);
          puStack_188 = &uStack_1e8;
          FUN_1416ab670(0x4e,uRam00000001420d58f8,0x80000000,&uStack_d8);
          FUN_1400019a0(&uStack_1d8,uStack_190);
          puStack_180 = &uStack_1d8;
          FUN_1400019a0(&uStack_1c8,uStack_190);
          puStack_178 = &uStack_1c8;
          uVar4 = FUN_1416ab210(plStack_78,uStack_90,&uStack_138,1,uRam00000001420da3b0,&puStack_188
                               );
          FUN_140004520(&uStack_c8,uVar4,uVar7);
          uStack_b0._4_4_ = uStack_dc;
          if ((0x46U >> (uStack_dc & 0x1f) & 1) == 0) {
            uStack_b8 = uStack_e8;
          }
          else {
            FUN_140881a80(&uStack_b8,&uStack_e8);
          }
          FUN_140003e00(&uStack_b8,&uStack_c8);
          FUN_1400019a0(&uStack_1b8,&uStack_b8);
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_c8);
          }
          puStack_170 = &uStack_1b8;
          uVar4 = FUN_1416ab210(plStack_78,uStack_90,&uStack_128,1,uRam00000001420da3c0,&puStack_180
                               );
          FUN_140004520(&uStack_c8,uVar4,uVar7);
          uStack_b0._4_4_ = uStack_cc;
          if ((0x46U >> (uStack_cc & 0x1f) & 1) == 0) {
            uStack_b8 = uStack_d8;
          }
          else {
            FUN_140881a80(&uStack_b8,&uStack_d8);
          }
          FUN_140003e00(&uStack_b8,&uStack_c8);
          FUN_1400019a0(&uStack_1a8,&uStack_b8);
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_c8);
          }
          puStack_168 = &uStack_1a8;
          FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uRam00000001420da3a0,&puStack_178);
          uStack_f0 = 0xc;
          uStack_b8 = 0;
          uStack_b0 = 0;
          FUN_1416d0790(0x4e,0x18b08/*var:mv*/,0x80000000,&uStack_b8);
          uStack_f0 = 0xd;
          uStack_c8 = 0;
          uStack_c0 = 0;
          FUN_1416d0790(0x4e,0x18abd/*var:mh*/,0x80000000,&uStack_c8);
          uStack_f0 = 0xe;
          plRam0000000142182d90 = (longlong *)0x209fa;
          if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_148);
          }
          uStack_13c = 0;
          uStack_148 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
          FUN_1416cf840(0x4e,uRam00000001420d5a48,0,&uStack_148);
          cVar1 = func_0x0001416abe60(auStack_308,&plStack_78,&uStack_90);
        } while (cVar1 != '\0');
      }
      FUN_1416ab620(auStack_308,&plStack_78,&uStack_90);
      if (lStack_2f8 != 0) {
        func_0x000141695b90();
        lStack_2f8 = 0;
      }
    }
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
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_298);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b8);
  }
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c8);
  }
  if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d8);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_120._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
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
  puRam0000000142182d78 = (undefined8 *)uStack_100;
  return;
}
