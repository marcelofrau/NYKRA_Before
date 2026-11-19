// Function: h_140009980 @ 0x140009980

undefined8 * h_140009980(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_48;
  uint local_3c;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if ((0x46U >> (uVar1 & 0x1f) & 1) == 0) {
    *param_1 = *param_2;
  }
  else {
    FUN_140009900(param_1);
  }
  local_3c = 0;
  local_48 = param_3;
  local_38 = param_1;
  FUN_140001fe0(param_1,&local_48);
  if ((0x46U >> (local_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&local_48);
  }
  return local_38;
}


