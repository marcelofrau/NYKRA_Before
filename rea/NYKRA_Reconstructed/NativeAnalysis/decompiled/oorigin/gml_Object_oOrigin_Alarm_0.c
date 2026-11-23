// Function: gml_Object_oOrigin_Alarm_0 @ 0x1409ff7b0

void gml_Object_oOrigin_Alarm_0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_180;
  ulonglong uStack_178;
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
  uint uStack_a4;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  uint uStack_84;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  uint uStack_64;
  undefined8 uStack_60;
  uint uStack_54;
  undefined8 uStack_50;
  uint uStack_44;
  undefined8 uStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_28 = &UNK_14198a867;
  uStack_30 = puRam0000000142182d78;
  puRam0000000142182d78 = &uStack_30;
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
  uStack_a4 = 0xffffff;
  uStack_b0 = 0;
  uStack_94 = 0xffffff;
  uStack_a0 = 0;
  uStack_84 = 0xffffff;
  uStack_90 = 0;
  uStack_74 = 0xffffff;
  uStack_80 = 0;
  uStack_64 = 0xffffff;
  uStack_70 = 0;
  uStack_54 = 0xffffff;
  uStack_60 = 0;
  uStack_44 = 0xffffff;
  uStack_50 = 0;
  uStack_34 = 0xffffff;
  uStack_40 = 0;
  uStack_20 = 1;
  plRam0000000142182d90 = param_1;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e);
  uStack_178 = (ulonglong)(uint)uStack_178;
  uStack_180 = 0x4018000000000000;
  iVar1 = FUN_1416d9df0(uVar2,&uStack_180,uRam00000001420f6b08,0);
  if (iVar1 == 0) {
    uStack_20 = 2;
    uStack_180 = 0;
    uStack_178 = 0;
    FUN_1416d0790(0x4f,0x18966,0x80000000,&uStack_180);
    uStack_20 = 3;
  }
  else {
    uStack_20 = 6;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e);
    if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((0x46U >> (uStack_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_40);
  }
  if ((0x46U >> (uStack_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_50);
  }
  if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_60);
  }
  if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
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
  puRam0000000142182d78 = (undefined8 *)uStack_30;
  return;
}


