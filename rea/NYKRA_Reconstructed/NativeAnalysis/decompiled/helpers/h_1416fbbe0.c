// Function: h_1416fbbe0 @ 0x1416fbbe0

undefined8 h_1416fbbe0(int param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((-1 < param_1) && (param_1 < DAT_142194fd0)) {
    plVar1 = *(longlong **)(DAT_142194f80 + (longlong)param_1 * 8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416fbc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      return uVar2;
    }
  }
  FUN_1416ab080("Illegal Buffer Index %d",param_1);
  return 0xffffffff;
}


