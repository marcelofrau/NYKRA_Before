// Function: FUN_1416cda40 @ 0x1416cda40

undefined8 * FUN_1416cda40(undefined8 *param_1,int param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;

  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  puVar2 = (undefined8 *)*param_3;
  uVar1 = *(undefined4 *)((longlong)puVar2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) == 0) {
    *param_1 = *puVar2;
  }
  else {
    FUN_1416c5a10(param_1);
  }
  dVar4 = (double)FUN_141696150(*param_3,0);
  if (0 < (longlong)(param_2 + -1)) {
    lVar3 = 1;
    do {
      dVar5 = (double)FUN_141696150(param_3[lVar3],0);
      if (dVar5 < dVar4) {
        puVar2 = (undefined8 *)param_3[lVar3];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140001b50(param_1);
        }
        uVar1 = *(undefined4 *)((longlong)puVar2 + 0xc);
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
        dVar4 = dVar5;
        if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) == 0) {
          *param_1 = *puVar2;
        }
        else {
          FUN_1416c5a10(param_1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 <= param_2 + -1);
  }
  return param_1;
}
