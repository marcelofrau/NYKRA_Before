// Function: h_1416ac010 @ 0x1416ac010

void h_1416ac010(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416c4390(0x10);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1416a2850(lVar1,param_2);
  }
  *param_1 = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}


