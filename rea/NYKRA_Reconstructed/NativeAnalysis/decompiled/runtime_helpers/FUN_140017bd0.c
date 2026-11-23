// Function: FUN_140017bd0 @ 0x140017bd0

undefined8 * FUN_140017bd0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  double dStack_38;
  uint uStack_2c;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if ((0x46U >> (uVar1 & 0x1f) & 1) == 0) {
    *param_1 = *param_2;
  }
  else {
    FUN_140017b50(param_1);
  }
  uStack_2c = 0;
  dStack_38 = (double)param_3;
  puStack_28 = param_1;
  FUN_140003e00(param_1,&dStack_38);
  if ((0x46U >> (uStack_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_38);
  }
  return puStack_28;
}


