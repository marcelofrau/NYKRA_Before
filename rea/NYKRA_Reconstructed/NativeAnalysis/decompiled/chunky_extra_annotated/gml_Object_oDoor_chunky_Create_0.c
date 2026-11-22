// Function: gml_Object_oDoor_chunky_Create_0 @ 0x1411e7aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDoor_chunky_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_stack_fffffffffffffdf8;
  uint uVar6;
  ulonglong in_stack_fffffffffffffe00;
  undefined8 **ppuVar7;
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
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_98 = &UNK_1419949e9;
  uStack_90 = 0;
  uStack_a0 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_a0;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uStack_6c = 0xffffff;
  uStack_78 = 0;
  uStack_60 = CONCAT44(0xffffff,(undefined4)uStack_60);
  uStack_68 = 0;
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
  uStack_c4 = 0xffffff;
  uStack_d0 = 0;
  plRam0000000142182d90 = param_1;
  FUN_141706ee0();
  uStack_90 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187b4/*var:bw*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4030000000000000/*16 (obj:oDlg_BM_Julaak)*/;
  uStack_90 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1877f/*var:bh*/);
  if ((0x46U >> (*(uint *)((longlong)puVar2 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4042000000000000/*36 (obj:oControls_EO)*/;
  uStack_90 = 6;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187b5/*var:bwh*/);
  FUN_140004520(&uStack_58,puVar1,_UNK_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_90 = 7;
  uStack_c0 = (**(code **)(*param_1 + 0x10))(param_1,0x18782/*var:bhh*/);
  FUN_140004520(&uStack_58,puVar2,_UNK_141982c40);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uStack_c0,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  func_0x0001416a8c00(1);
  uStack_90 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18caa/*var:snd*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000/*-4*/;
  uStack_90 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18db2/*var:tog*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1898f/*var:grav*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x187ab/*var:bounce*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18825/*var:collide_object*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b8c/*var:physics*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188a6/*var:do_fric*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x188a7/*var:do_grav*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd3/*var:power_on_t*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x16;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3b/*var:x1*/);
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_88,
                in_stack_fffffffffffffdf8 & 0xffffff00,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uStack_4c = uStack_7c;
  uStack_50 = uStack_80;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_88;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_88);
  }
  FUN_140003e00(&uStack_58,uVar3);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x17;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4b/*var:y1*/);
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_78,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_6c;
  uStack_50 = uStack_70;
  if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_78;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_78);
  }
  FUN_140003e00(&uStack_58,uStack_c0);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x18;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e3d/*var:x2*/);
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_88,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_7c;
  uStack_50 = uStack_80;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_88;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_88);
  }
  FUN_140003ca0(&uStack_58,uVar3);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x19;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_78,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_6c;
  uStack_50 = uStack_70;
  if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_78;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_78);
  }
  FUN_140003ca0(&uStack_58,uStack_c0);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x1b;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x187b7/*var:bx1*/);
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_88,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_7c;
  uStack_50 = uStack_80;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_88;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_88);
  }
  FUN_140003e00(&uStack_58,uVar3);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x1c;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x187ba/*var:by1*/);
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_78,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_6c;
  uStack_50 = uStack_70;
  if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_78;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_78);
  }
  FUN_140003e00(&uStack_58,uStack_c0);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar5);
  func_0x0001416a8c00(1);
  uStack_90 = 0x1d;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x187b8/*var:bx2*/);
  FUN_1416cea80(param_1,uRam00000001420d58e8,0x80000000,&uStack_88,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_7c;
  uStack_50 = uStack_80;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_88;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_88);
  }
  FUN_140003ca0(&uStack_58,uVar3);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar6 = uRam00000001420da4b0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = &uStack_b8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar4,uVar3);
  func_0x0001416a8c00(1);
  uStack_90 = 0x1e;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x187bb/*var:by2*/);
  FUN_1416cea80(param_1,uRam00000001420d58f8,0x80000000,&uStack_78,uVar6 & 0xffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uStack_4c = uStack_6c;
  uStack_50 = uStack_70;
  if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_78;
  }
  else {
    FUN_1411e9b20(&uStack_58,&uStack_78);
  }
  FUN_140003ca0(&uStack_58,uStack_c0);
  FUN_1400019a0(&uStack_b8,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  puStack_a8 = &uStack_b8;
  uVar4 = FUN_1416ab210(param_1,param_2,&uStack_68,1,uRam00000001420da4b0,&puStack_a8);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar4);
  func_0x0001416a8c00(1);
  uStack_90 = 0x20;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  uStack_90 = 0x22;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18bd2/*var:power_on*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
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
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_a0;
  return;
}


