// Function: h_140001a50 @ 0x140001a50

undefined8 * h_140001a50(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  double local_38;
  uint local_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if ((0x46U >> (uVar1 & 0x1f) & 1) == 0) {
    *param_1 = *param_2;
  }
  else {
    FUN_140001920(param_1);
  }
  local_2c = 0;
  local_38 = (double)param_3;
  local_28 = param_1;
  FUN_140001fe0(param_1,&local_38);
  if ((0x46U >> (local_2c & 0x1f) & 1) != 0) {
    h_140001b50(&local_38);
  }
  return local_28;
}


