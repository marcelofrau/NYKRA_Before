// Function: h_1400019a0 @ 0x1400019a0

undefined8 * h_1400019a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  if (param_2 != param_1) {
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *param_2;
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    uStack_1c = uVar1;
    if ((uVar1 & 0xffffff) == 2) {
      FUN_1416ba900(uVar2);
      if ((0x46U >> (*(uint *)((longlong)param_1 + 0xc) & 0x1f) & 1) != 0) {
        h_140001b50(param_1);
      }
      FUN_1416ba8d0(uVar2);
    }
    else if ((0x46U >> (*(uint *)((longlong)param_1 + 0xc) & 0x1f) & 1) != 0) {
      h_140001b50(param_1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    if ((0x46U >> (uVar1 & 0x1f) & 1) == 0) {
      *param_1 = CONCAT44(uStack_24,local_28);
    }
    else {
      FUN_140001920(param_1,&local_28);
    }
  }
  return param_1;
}


