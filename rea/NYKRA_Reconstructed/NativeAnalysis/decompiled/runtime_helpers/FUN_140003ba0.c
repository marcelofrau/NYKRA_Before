// Function: FUN_140003ba0 @ 0x140003ba0

undefined8 * FUN_140003ba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uStack_48;
  uint uStack_3c;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if ((0x46U >> (uVar1 & 0x1f) & 1) == 0) {
    *param_1 = *param_2;
  }
  else {
    FUN_140003b20(param_1);
  }
  uStack_3c = 0;
  uStack_48 = param_3;
  puStack_38 = param_1;
  FUN_140003e00(param_1,&uStack_48);
  if ((0x46U >> (uStack_3c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_48);
  }
  return puStack_38;
}


