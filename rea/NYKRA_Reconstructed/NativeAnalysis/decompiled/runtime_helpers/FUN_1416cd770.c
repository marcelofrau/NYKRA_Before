// Function: FUN_1416cd770 @ 0x1416cd770

double FUN_1416cd770(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 1;
  if (param_1 < 0) {
    iVar1 = -1;
  }
  lVar2 = FUN_1416cdd80((longlong)((double)iVar1 + (double)param_1));
  return (double)lVar2;
}


