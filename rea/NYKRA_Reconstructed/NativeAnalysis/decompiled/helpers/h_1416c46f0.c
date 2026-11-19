// Function: h_1416c46f0 @ 0x1416c46f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void h_1416c46f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (DAT_142189420 == 0) {
      DAT_142189420 = _malloc_base(8);
      FUN_141734cf0(DAT_142189420,"MemoryManagerMutex");
    }
    FUN_141734d20(DAT_142189420);
    plVar2 = (longlong *)FUN_1416c5760(param_1);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1), cVar1 == '\0')) {
      if (((*(int *)(param_1 + -0x14) == -0x21523f22) &&
          (lVar3 = param_1, *(int *)(param_1 + -0x10) == -0x45524ff5)) ||
         (((((int)*(uint *)(param_1 + -4) < 0 && (*(int *)(param_1 + -8) == 0x1234abcd)) &&
           (lVar3 = param_1 - (ulonglong)(*(uint *)(param_1 + -4) & 0x7fffffff),
           *(int *)(lVar3 + -0x14) == -0x21523f22)) && (*(int *)(lVar3 + -0x10) == -0x45524ff5)))) {
        param_1 = lVar3 + -0x20;
        _DAT_142189488 = _DAT_142189488 - *(int *)(lVar3 + -0x18);
        _DAT_142189480 = _DAT_142189480 - *(int *)(lVar3 + -0x18);
        _DAT_142189494 = _DAT_142189494 + -1;
        _DAT_142189498 = _DAT_142189498 - *(int *)(lVar3 + -0x18);
      }
      FUN_141952ba8(param_1);
    }
    FUN_141734d40(DAT_142189420);
  }
  return;
}


