// Function: FUN_1416cd7b0 @ 0x1416cd7b0

double FUN_1416cd7b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - param_1;
  if (param_2 <= param_1) {
    lVar1 = param_1 - param_2;
  }
  lVar1 = FUN_1416cdd80(lVar1 + 1);
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return (double)(lVar1 + param_1);
}


