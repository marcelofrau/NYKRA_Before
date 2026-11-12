// Function: gml_Script_clear_objects @ 0x14005ffa0

undefined8 * gml_Script_clear_objects(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined4 local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = "gml_Script_clear_objects";
  local_90 = 0;
  local_a0 = DAT_142182d78;
  DAT_142182d78 = &local_a0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = param_3;
  local_68 = param_2;
  local_50 = param_1;
  FUN_1416ab750(DAT_1420dc8e0/*gml_Script_clear_objects*/);
  local_54 = 0;
  local_60 = 0xc008000000000000/*-3*/;
  iVar2 = FUN_1416ab810(local_c8,&local_50,&local_68,&local_60);
  if ((0x46U >> (local_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_60);
  }
  if (0 < iVar2) {
    do {
      local_90 = 3;
      FUN_1416cea80(local_50,DAT_1420d5a58/*persistent*/,0x80000000,&local_88,0,0);
      local_54 = 0;
      local_60 = 0x3ff0000000000000/*1 (obj:oDlg_Quo_Radio3)*/;
      iVar2 = FUN_1416d9df0(&local_88,&local_60,DAT_1420f6b08,0);
      if (iVar2 != 0) {
        FUN_1416cea80(local_50,DAT_1420d5a28/*object_index*/,0x80000000,&local_78,0,0);
        local_54 = 0;
        local_60 = 0x4053c00000000000/*79 (obj:oControl)*/;
        iVar2 = FUN_1416d9df0(&local_78,&local_60,DAT_1420f6b08,0);
        if (iVar2 != 0) {
          FUN_1416cea80(local_50,DAT_1420d5a28/*object_index*/,0x80000000,&local_78,0,0);
          local_54 = 0;
          local_60 = 0x4050000000000000/*64 (obj:oPlayer)*/;
          iVar2 = FUN_1416d9df0(&local_78,&local_60,DAT_1420f6b08,0);
          if (iVar2 != 0) {
            FUN_1416cea80(local_50,DAT_1420d5a28/*object_index*/,0x80000000,&local_78,0,0);
            local_54 = 0;
            local_60 = 0x4050400000000000/*65 (obj:oEo)*/;
            iVar2 = FUN_1416d9df0(&local_78,&local_60,DAT_1420f6b08,0);
            if (iVar2 != 0) {
              local_90 = 5;
              FUN_1416f8210(local_50,local_68,0,0);
            }
          }
        }
      }
      cVar1 = FUN_1416abe60(local_c8,&local_50,&local_68);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(local_c8,&local_50,&local_68);
  if (local_b8 != 0) {
    thunk_FUN_1416c46f0();
    local_b8 = 0;
  }
  if ((0x46U >> (local_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_78);
  }
  if ((0x46U >> (local_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_88);
  }
  DAT_142182d78 = (undefined8 *)local_a0;
  return local_a8;
}


