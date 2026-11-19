// Function: gml_Object_parEntity_Draw_77 @ 0x1402edb30

void gml_Object_parEntity_Draw_77(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  char *local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = "gml_Object_parEntity_Draw_77";
  local_40 = DAT_142182d78;
  DAT_142182d78 = &local_40;
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
  local_30 = 1;
  DAT_142182d90 = param_1;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18b41/*var:onJT*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c0/*var:hit*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_30 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x189c4/*var:hit_top*/);
  if ((0x46U >> (*(uint *)((longlong)puVar1 + 0xc) & 0x1f) & 1) != 0) {
    FUN_140001b50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000/*-4*/;
  local_30 = 4;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e3b/*var:x1*/);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18be4/*var:prev_x1*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar2);
  FUN_1416a8c00(1);
  local_30 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e4b/*var:y1*/);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18be6/*var:prev_y1*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar2);
  FUN_1416a8c00(1);
  local_30 = 6;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e3d/*var:x2*/);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18be5/*var:prev_x2*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar2);
  FUN_1416a8c00(1);
  local_30 = 8;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18e4d/*var:y2*/);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x18be7/*var:prev_y2*/);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar3,uVar2);
  FUN_1416a8c00(1);
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
  DAT_142182d78 = (undefined8 *)local_40;
  return;
}


