// Function: h_1416ab000 @ 0x1416ab000

void h_1416ab000(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((1 << ((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x1f) & 0x46U) != 0) {
    h_140001b50(param_1);
  }
  uVar2 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 5;
  lVar1 = FUN_1416c4390(0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_1416a2850(lVar1,param_2);
  }
  *param_1 = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  return;
}


