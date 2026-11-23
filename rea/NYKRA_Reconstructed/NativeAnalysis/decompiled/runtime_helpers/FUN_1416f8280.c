// Function: FUN_1416f8280 @ 0x1416f8280

bool FUN_1416f8280(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_48 [64];
  
  bVar3 = false;
  FUN_141727770(auStack_48,param_3,param_1,param_2,0);
  do {
    lVar1 = FUN_1417279b0(auStack_48);
    if (lVar1 == 0) {
      return bVar3;
    }
    lVar1 = FUN_1417279b0(auStack_48);
    func_0x000141729210(auStack_48);
    uVar2 = *(uint *)(lVar1 + 0xb0) & 3;
    bVar3 = uVar2 == 0;
  } while (uVar2 != 0);
  return true;
}


