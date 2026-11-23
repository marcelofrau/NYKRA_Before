// Function: FUN_1416cd800 @ 0x1416cd800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1416cd800(float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float afStackX_8 [8];
  
  fVar1 = (float)FUN_141951a30((param_2 * _UNK_1419a2a08) / _UNK_1419a2a0c);
  uVar2 = func_0x000141952d98(fVar1 * param_1,afStackX_8);
  if ((float)(uVar2 & _UNK_1419a2a10) < _UNK_1419a5084) {
    return afStackX_8[0];
  }
  return fVar1 * param_1;
}


