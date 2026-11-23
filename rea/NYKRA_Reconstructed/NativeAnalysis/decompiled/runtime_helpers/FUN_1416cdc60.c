// Function: FUN_1416cdc60 @ 0x1416cdc60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1416cdc60(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined4 uVar3;
  double dVar2;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = SUB84(param_2,0);
  if (param_2 <= param_1) {
    param_2 = param_1 - param_2;
  }
  else {
    uVar1 = SUB84(param_1,0);
    uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
    param_2 = param_2 - param_1;
  }
  dVar2 = (double)FUN_1417c33a0(_UNK_141981e30);
  return dVar2 * param_2 + (double)CONCAT44(uVar3,uVar1);
}


