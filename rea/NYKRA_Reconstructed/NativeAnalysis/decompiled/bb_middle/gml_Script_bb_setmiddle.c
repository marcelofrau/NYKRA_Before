// Function: gml_Script_bb_setmiddle @ 0x14003d740

undefined8 * gml_Script_bb_setmiddle(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  uint uStack_8c;
  undefined8 uStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_b8 = &UNK_141982b26;
  uStack_b0 = 0;
  uStack_c0 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_c0;
  uStack_8c = 0xffffff;
  uStack_98 = 0;
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uStack_6c = 0xffffff;
  uStack_78 = 0;
  uStack_5c = 0xffffff;
  uStack_68 = 0;
  uStack_50 = (ulonglong)(uint)uStack_50;
  uStack_58 = 0;
  plRam0000000142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(uRam00000001420dc7f0);
  uStack_b0 = 2;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0x18e3b);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e3d);
  FUN_1400019a0(&uStack_98,uVar1);
  puStack_a8 = &uStack_98;
  FUN_1400019a0(&uStack_88,uVar2);
  puStack_a0 = &uStack_88;
  uVar1 = FUN_1416ab210(param_1,param_2,&uStack_58,2,uRam00000001420da0c0,&puStack_a8);
  FUN_1400019a0(&uStack_78,uVar1);
  FUN_1416cfae0(param_1,uRam00000001420d58e8,0x80000000,&uStack_78);
  uStack_b0 = 3;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0x18e4b);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e4d);
  FUN_1400019a0(&uStack_98,uVar1);
  puStack_a8 = &uStack_98;
  FUN_1400019a0(&uStack_88,uVar2);
  puStack_a0 = &uStack_88;
  uVar1 = FUN_1416ab210(param_1,param_2,&uStack_58,2,uRam00000001420da0c0,&puStack_a8);
  FUN_1400019a0(&uStack_68,uVar1);
  FUN_1416cfae0(param_1,uRam00000001420d58f8,0x80000000,&uStack_68);
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  puRam0000000142182d78 = (undefined8 *)uStack_c0;
  return param_3;
}


