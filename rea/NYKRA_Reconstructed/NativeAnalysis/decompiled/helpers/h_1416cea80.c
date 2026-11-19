// Function: h_1416cea80 @ 0x1416cea80

ulonglong h_1416cea80(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,char param_5
                     ,undefined1 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2;
  bVar1 = 0;
  *(undefined4 *)(param_4 + 0xc) = 0xffffff;
  if (((param_2 < 10000) && (*(int *)(param_1 + 0x7c) == 1)) && ((int)param_2 < DAT_1421974e8)) {
                    /* WARNING: Could not recover jumptable at 0x0001416ceada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(&DAT_1421896e8 + lVar6 * 0x20))(param_1,param_3,param_4);
    return uVar2;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar5 = (undefined8 *)FUN_1416c0560(param_1,param_2);
  }
  else {
    puVar5 = (undefined8 *)(lVar6 * 0x10 + *(longlong *)(param_1 + 8));
  }
  DAT_142182da0 = param_1;
  if (puVar5 == (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    DAT_142182da0 = param_1;
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 8) == 0) {
        DAT_142182da0 = param_1;
        puVar5 = (undefined8 *)FUN_1416c0560(lVar3,param_2);
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      else {
        puVar5 = (undefined8 *)(lVar6 * 0x10 + *(longlong *)(lVar3 + 8));
      }
      DAT_142182da0 = lVar3;
      if (puVar5 != (undefined8 *)0x0) goto LAB_1416cec21;
    }
    if (((DAT_142184e10 != 0) && (*(longlong *)(DAT_142184e10 + 0x38) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(DAT_142184e10 + 0x38) + 0xb0), lVar3 != 0)) {
      if (*(longlong *)(lVar3 + 8) == 0) {
        puVar5 = (undefined8 *)FUN_1416c0560(lVar3,param_2);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 8) + lVar6 * 0x10);
      }
      DAT_142182da0 = *(longlong *)(*(longlong *)(DAT_142184e10 + 0x38) + 0xb0);
      if (puVar5 != (undefined8 *)0x0) goto LAB_1416cec21;
    }
    if (param_5 == '\0') goto LAB_1416cec49;
    if (*(longlong *)(param_1 + 8) == 0) {
      puVar5 = (undefined8 *)FUN_1416c0340(param_1,param_2);
    }
    else {
      puVar5 = (undefined8 *)(lVar6 * 0x10 + *(longlong *)(param_1 + 8));
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 2;
    uVar4 = FUN_141692790();
    *puVar5 = uVar4;
    FUN_1416be750(param_1,uVar4);
    DAT_142182da0 = param_1;
  }
LAB_1416cec21:
  bVar1 = FUN_141693480(param_4,puVar5,param_1,param_3,param_5,param_6);
LAB_1416cec49:
  DAT_142182da0 = 0;
  return (ulonglong)bVar1;
}


