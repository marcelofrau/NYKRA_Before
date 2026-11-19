// Function: gml_Object_oOrigin_Alarm_0 @ 0x1409ff7b0

void gml_Object_oOrigin_Alarm_0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 local_170;
  uint local_164;
  undefined8 local_160;
  uint local_154;
  undefined8 local_150;
  uint local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  uint local_e4;
  undefined8 local_e0;
  uint local_d4;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  uint local_74;
  undefined8 local_70;
  uint local_64;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  uint local_34;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = "gml_Object_oOrigin_Alarm_0";
  local_30 = DAT_142182d78;
  DAT_142182d78 = &local_30;
  local_164 = 0xffffff;
  local_170 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_20 = 1;
  DAT_142182d90 = param_1;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x1871e/*var:anim*/);
  uStack_178 = (ulonglong)(uint)uStack_178;
  local_180 = 0x4018000000000000/*6 (obj:oKS_Evokreathe)*/;
  iVar1 = FUN_1416d9df0(uVar2,&local_180,DAT_1420f6b08,0);
  if (iVar1 == 0) {
    local_20 = 2;
    local_180 = 0;
    uStack_178 = 0;
    FUN_1416d0790(0x4f,0x18966/*var:game_start*/,0x80000000,&local_180);
    local_20 = 3;
  }
  else {
    local_20 = 6;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1871e/*var:anim*/);
    if ((0x46U >> (*(uint *)((longlong)puVar3 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
  }
  if ((0x46U >> (local_34 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_40);
  }
  if ((0x46U >> (local_44 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_50);
  }
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_a0);
  }
  if ((0x46U >> (local_a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_b0);
  }
  if ((0x46U >> (local_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_c0);
  }
  if ((0x46U >> (local_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_d0);
  }
  if ((0x46U >> (local_d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_e0);
  }
  if ((0x46U >> (local_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_f0);
  }
  if ((0x46U >> (local_f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_100);
  }
  if ((0x46U >> (local_104 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_110);
  }
  if ((0x46U >> (local_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_120);
  }
  if ((0x46U >> (local_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_130);
  }
  if ((0x46U >> (local_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_140);
  }
  if ((0x46U >> (local_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_150);
  }
  if ((0x46U >> (local_154 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_160);
  }
  if ((0x46U >> (local_164 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_170);
  }
  DAT_142182d78 = (undefined8 *)local_30;
  return;
}


