// Function: gml_Script_ML_ESTIM @ 0x14013f140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_ML_ESTIM(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  uint local_84;
  undefined1 *local_80;
  uint local_74;
  double local_70;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_a0 = "gml_Script_ML_ESTIM";
  local_98 = 0;
  local_a8 = DAT_142182d78;
  DAT_142182d78 = &local_a8;
  local_74 = 0xffffff;
  local_80 = (undefined1 *)0x0;
  local_64 = 0xffffff;
  local_70 = 0.0;
  local_84 = 0xffffff;
  local_90 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(DAT_1420dd4f0);
  local_98 = 2;
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  local_74 = 0;
  local_80 = &DAT_bff0000000000000;
  local_98 = 3;
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  dVar1 = _DAT_141981e30;
  local_64 = 0;
  local_70 = 0.0;
  while( true ) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18acd);
    iVar2 = FUN_1416d9df0(&local_70,uVar4,DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_98 = 3;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18b52);
    uVar3 = FUN_141693b30(&local_70);
    uVar4 = FUN_14002e450(uVar4,uVar3);
    iVar2 = FUN_1416d9df0(uVar4,&local_80,DAT_1420f6b08,1);
    if (0 < iVar2) {
      local_98 = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,0x18b52);
      uVar3 = FUN_141693b30(&local_70);
      uVar4 = FUN_14002e450(uVar4,uVar3);
      FUN_1400019a0(&local_80,uVar4);
      local_98 = 6;
      FUN_1400019a0(&local_90,&local_70);
    }
    switch(local_64 & 0xffffff) {
    case 1:
      local_70 = (double)FUN_1416940c0(&local_70);
      local_70 = local_70 + dVar1;
      local_64 = 0;
      break;
    default:
      FUN_140001d70(&DAT_141981e6a,&local_70,&local_70);
      break;
    case 7:
      local_70 = (double)CONCAT44(local_70._4_4_,local_70._0_4_ + 1);
      break;
    case 10:
      local_70 = (double)((longlong)local_70 + 1);
      break;
    case 0xd:
      local_64 = 0;
    case 0:
      local_70 = local_70 + dVar1;
    }
  }
  local_98 = 9;
  FUN_1400019a0(param_3,&local_90);
  if ((0x46U >> (local_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_90);
  }
  if ((0x46U >> (local_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_70);
  }
  if ((0x46U >> (local_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_80);
  }
  DAT_142182d78 = (undefined8 *)local_a8;
  return param_3;
}


