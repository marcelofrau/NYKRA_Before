// Function: FUN_1416cdb80 @ 0x1416cdb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416cdb80(float param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  param_4 = param_4 - param_2;
  if (param_3 - param_1 != 0.0) {
    uVar1 = FUN_141951640(param_4,param_3 - param_1);
    fVar2 = ((float)uVar1 * _UNK_1419a2a0c) / _UNK_1419a2a08;
    if (0.0 < fVar2) {
      return (ulonglong)(uint)(_UNK_1419a508c - fVar2);
    }
    return CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ _UNK_14198dea4,(uint)fVar2 ^ _UNK_14198dea0);
  }
  if (param_4 <= 0.0) {
    if (0.0 <= param_4) {
      return 0;
    }
    return (ulonglong)_UNK_141996d60;
  }
  return (ulonglong)_UNK_141986ea8;
}


