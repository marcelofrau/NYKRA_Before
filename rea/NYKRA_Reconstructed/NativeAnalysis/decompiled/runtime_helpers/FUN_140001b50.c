// Function: FUN_140001b50 @ 0x140001b50

void FUN_140001b50(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if (uVar3 == 1) {
    if (*param_1 != 0) {
      FUN_140001bd0();
    }
    *param_1 = 0;
  }
  else if (uVar3 == 2) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      func_0x0001416ba8d0(lVar2);
      if (*(longlong *)(lVar2 + 0x98) == 0) {
        *(undefined8 *)(lVar2 + 0x98) = uRam0000000142182d90;
      }
      return;
    }
  }
  else if (((uVar3 == 3) && ((*(byte *)(param_1 + 1) & 8) != 0)) &&
          (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140001b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}


