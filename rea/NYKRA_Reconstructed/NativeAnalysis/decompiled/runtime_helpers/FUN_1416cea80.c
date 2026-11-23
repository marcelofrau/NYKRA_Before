// Function: FUN_1416cea80 @ 0x1416cea80

ulonglong FUN_1416cea80(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                       char param_5,undefined1 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(int)param_2;
  bVar1 = 0;
  *(undefined4 *)(param_4 + 0xc) = 0xffffff;
  if (((param_2 < 10000) && (*(int *)(param_1 + 0x7c) == 1)) &&
     ((int)param_2 < iRam00000001421974e8)) {
                    /* WARNING: Could not recover jumptable at 0x0001416ceada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar6 * 0x20 + 0x1421896e8))(param_1,param_3,param_4);
    return uVar2;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar5 = (undefined8 *)FUN_1416c0560(param_1,param_2);
  }
  else {
    puVar5 = (undefined8 *)(lVar6 * 0x10 + *(longlong *)(param_1 + 8));
  }
  lRam0000000142182da0 = param_1;
  if (puVar5 == (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar7 = lVar6 << 4;
      lRam0000000142182da0 = param_1;
    }
    else {
      if (*(longlong *)(lVar3 + 8) == 0) {
        lRam0000000142182da0 = param_1;
        puVar5 = (undefined8 *)FUN_1416c0560(lVar3,param_2);
        lVar3 = *(longlong *)(param_1 + 0x20);
        lVar7 = lVar6 << 4;
      }
      else {
        lVar7 = lVar6 * 0x10;
        puVar5 = (undefined8 *)(lVar7 + *(longlong *)(lVar3 + 8));
      }
      lRam0000000142182da0 = lVar3;
      if (puVar5 != (undefined8 *)0x0) goto code_r0x0001416cec21;
    }
    if (((lRam0000000142184e10 != 0) && (*(longlong *)(lRam0000000142184e10 + 0x38) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lRam0000000142184e10 + 0x38) + 0xb0), lVar3 != 0)) {
      if (*(longlong *)(lVar3 + 8) == 0) {
        puVar5 = (undefined8 *)FUN_1416c0560(lVar3,param_2);
      }
      else {
        lVar7 = lVar6 * 0x10;
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 8) + lVar7);
      }
      lRam0000000142182da0 = *(longlong *)(*(longlong *)(lRam0000000142184e10 + 0x38) + 0xb0);
      if (puVar5 != (undefined8 *)0x0) goto code_r0x0001416cec21;
    }
    if (param_5 == '\0') goto code_r0x0001416cec49;
    if (*(longlong *)(param_1 + 8) == 0) {
      puVar5 = (undefined8 *)FUN_1416c0340(param_1,param_2);
    }
    else {
      puVar5 = (undefined8 *)(lVar7 + *(longlong *)(param_1 + 8));
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 2;
    uVar4 = FUN_141692790();
    *puVar5 = uVar4;
    FUN_1416be750(param_1,uVar4);
    lRam0000000142182da0 = param_1;
  }
code_r0x0001416cec21:
  bVar1 = FUN_141693480(param_4,puVar5,param_1,param_3,param_5,param_6);
code_r0x0001416cec49:
  lRam0000000142182da0 = 0;
  return (ulonglong)bVar1;
}


