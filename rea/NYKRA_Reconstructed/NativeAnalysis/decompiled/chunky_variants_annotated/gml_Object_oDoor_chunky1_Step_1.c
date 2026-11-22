// Function: gml_Object_oDoor_chunky1_Step_1 @ 0x140c3e4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDoor_chunky1_Step_1(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [12];
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_88 = &UNK_14198c665;
  uStack_90 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_90;
  uStack_94 = 0xffffff;
  uStack_a0 = 0;
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
  uStack_b4 = 0xffffff;
  uStack_c0 = 0;
  uStack_80 = 1;
  plRam0000000142182d90 = param_1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18e4b/*var:y1*/);
  FUN_1400019a0(&uStack_a0,puVar1);
  uStack_80 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x187ba/*var:by1*/);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
  FUN_140001a50(auStack_78,uVar3,0x50);
  uStack_4c = *(uint *)((longlong)puVar2 + 0xc);
  uStack_50 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar2;
  }
  else {
    FUN_140c3fb90(&uStack_58,puVar2);
  }
  FUN_140003ca0(&uStack_58,auStack_78);
  FUN_140003ba0(&uStack_68,&uStack_58,_UNK_141983800);
  uStack_b0 = uVar3;
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar1,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uVar3 = uStack_b0;
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_78);
  }
  func_0x0001416a8c00(1);
  uStack_80 = 3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x187bb/*var:by2*/);
  uStack_a8 = (**(code **)(*param_1 + 0x10))(param_1,0x18e4d/*var:y2*/);
  FUN_140001a50(auStack_78,uVar3,0x50);
  uStack_4c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_50 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar4;
  }
  else {
    FUN_140c3fb90(&uStack_58,puVar4);
  }
  FUN_140003ca0(&uStack_58,auStack_78);
  FUN_140003ba0(&uStack_68,&uStack_58,_UNK_141983800);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uStack_a8,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_78);
  }
  func_0x0001416a8c00(1);
  uStack_80 = 5;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x18e26/*var:vsp*/);
  uVar3 = uStack_b0;
  uStack_5c = *(uint *)((longlong)puVar1 + 0xc);
  uStack_60 = *(undefined4 *)(puVar1 + 1);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
    uStack_68 = *puVar1;
  }
  else {
    FUN_140c3fb90(&uStack_68,puVar1);
  }
  FUN_140003e00(&uStack_68,&uStack_a0);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar5,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  func_0x0001416a8c00(1);
  uStack_80 = 6;
  FUN_141706ee0(param_1,param_2);
  uStack_80 = 8;
  FUN_140001a50(auStack_78,uVar3,0x50);
  uStack_4c = *(uint *)((longlong)puVar2 + 0xc);
  uStack_50 = *(undefined4 *)(puVar2 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar2;
  }
  else {
    FUN_140c3fb90(&uStack_58,puVar2);
  }
  FUN_140003ca0(&uStack_58,auStack_78);
  FUN_140003ba0(&uStack_68,&uStack_58,_UNK_141983800);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(puVar1,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_78);
  }
  func_0x0001416a8c00(1);
  uStack_80 = 9;
  FUN_140001a50(auStack_78,uVar3,0x50);
  uStack_4c = *(uint *)((longlong)puVar4 + 0xc);
  uStack_50 = *(undefined4 *)(puVar4 + 1);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) == 0) {
    uStack_58 = *puVar4;
  }
  else {
    FUN_140c3fb90(&uStack_58,puVar4);
  }
  FUN_140003ca0(&uStack_58,auStack_78);
  FUN_140003ba0(&uStack_68,&uStack_58,_UNK_141983800);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uStack_a8,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_78);
  }
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c0);
  }
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
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_90;
  return;
}


