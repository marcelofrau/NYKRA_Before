// Function: h_1416d0720 @ 0x1416d0720

void h_1416d0720(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if ((uVar2 != 0) && (uVar2 == 6)) {
    h_1416cfae0(*param_1);
    return;
  }
  uVar1 = FUN_141693b30();
  FUN_1416d0790(uVar1,param_2,param_3,param_4);
  return;
}


