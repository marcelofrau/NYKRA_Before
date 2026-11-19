// Function: h_1416cd660 @ 0x1416cd660

undefined8 * h_1416cd660(undefined8 *param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    uVar3 = FUN_1417c32c0(param_2);
    dVar4 = floor((double)((float)uVar3 + 0.0));
    puVar2 = *(undefined8 **)(param_3 + (longlong)(int)dVar4 * 8);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x1f) & 0x46U) != 0) {
      h_140001b50(param_1);
    }
    uVar1 = *(undefined4 *)((longlong)puVar2 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_1416c5a10(param_1,puVar2);
      return param_1;
    }
    *param_1 = *puVar2;
  }
  return param_1;
}


