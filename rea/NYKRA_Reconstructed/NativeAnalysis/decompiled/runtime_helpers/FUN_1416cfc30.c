// Function: FUN_1416cfc30 @ 0x1416cfc30

void FUN_1416cfc30(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 6) {
      FUN_1416cea80(*param_1);
      return;
    }
    if (((uVar2 != 7) && (uVar2 != 10)) && (uVar2 != 0xd)) {
      return;
    }
  }
  uVar1 = FUN_141693b30();
  FUN_1416ab670(uVar1,param_2,param_3,param_4);
  return;
}


