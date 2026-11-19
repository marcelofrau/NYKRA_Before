// Function: h_1416cf7b0 @ 0x1416cf7b0

uint h_1416cf7b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 6) {
      uVar2 = FUN_1416cfae0(*param_1);
      return uVar2;
    }
    if (((uVar2 != 7) && (uVar2 != 10)) && (uVar2 != 0xd)) {
      return in_EAX & 0xffffff00;
    }
  }
  uVar1 = FUN_141693b30();
  uVar2 = FUN_1416cf840(uVar1,param_2,param_3,param_4);
  return uVar2;
}


