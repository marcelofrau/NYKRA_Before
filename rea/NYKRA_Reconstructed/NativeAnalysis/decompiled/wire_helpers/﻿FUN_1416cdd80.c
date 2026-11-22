// Function: ﻿FUN_1416cdd80 @ 0x1416cdd80

longlong FUN_1416cdd80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_1417c32f0();
  lVar3 = (param_1 >> 0x3f & 0xfffffffffffffffeU) + 1;
  uVar2 = FUN_1417c32f0();
  return ((longlong)(CONCAT44(uVar2,uVar1) & 0x7fffffffffffffff) % (lVar3 * param_1)) * lVar3;
}


