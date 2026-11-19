// Function: h_1416ce870 @ 0x1416ce870

ulonglong h_1416ce870(undefined8 param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  *(undefined4 *)(param_4 + 0xc) = 0xffffff;
  if (param_2 < 10000) {
                    /* WARNING: Could not recover jumptable at 0x0001416ce897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(&DAT_1421896e8 + (longlong)(int)param_2 * 0x20))(param_1,param_3,param_4);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}


