// Function: FUN_1416f1550 @ 0x1416f1550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416f1550(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _UNK_141981f80;
  if (param_1 <= _UNK_141981f80) {
    fVar1 = param_1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  uRam00000001420f6e14 = (undefined4)(longlong)(fVar2 * _UNK_1419a74a0);
  uRam00000001420f6e10 =
       func_0x0001417460b0(uRam00000001420f6e10,(longlong)(fVar2 * _UNK_1419a74a0) & 0xffffffff);
  return;
}


