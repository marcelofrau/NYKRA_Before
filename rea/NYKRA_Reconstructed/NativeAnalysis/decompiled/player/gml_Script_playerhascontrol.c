// Function: gml_Script_playerhascontrol @ 0x140120860

double * gml_Script_playerhascontrol(undefined8 param_1,undefined8 param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = "gml_Script_playerhascontrol";
  local_40 = 0;
  local_50 = DAT_142182d78;
  DAT_142182d78 = &local_50;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  FUN_1416ab750(DAT_1420dd2b0);
  iVar2 = FUN_1416f82f0(param_1,param_2,0x40);
  if (0 < iVar2) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1416d0010(0x40,0x18836,0x80000000,&local_88,0,0);
    local_2c = 0;
    local_38 = 0x3ff0000000000000;
    iVar2 = FUN_1416d9df0(&local_88,&local_38,DAT_1420f6b08,0);
    if (iVar2 == 0) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_1416d0010(0x40,0x18b8c,0x80000000,&local_78,0,0);
      local_2c = 0;
      local_38 = 0x3ff0000000000000;
      iVar2 = FUN_1416d9df0(&local_78,&local_38,DAT_1420f6b08,0);
      if (iVar2 == 0) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_1416d0010(0x40,0x18df5,0x80000000,&local_68,0,0);
        local_2c = 0;
        local_38 = 0;
        iVar2 = FUN_1416d9df0(&local_68,&local_38,DAT_1420f6b08,0);
        bVar3 = iVar2 == 0;
        uVar1 = *(uint *)((longlong)param_3 + 0xc);
        goto joined_r0x000140120a0a;
      }
    }
  }
  bVar3 = false;
  uVar1 = *(uint *)((longlong)param_3 + 0xc);
joined_r0x000140120a0a:
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    FUN_140001b50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)bVar3;
  DAT_142182d78 = (undefined8 *)local_50;
  return param_3;
}


