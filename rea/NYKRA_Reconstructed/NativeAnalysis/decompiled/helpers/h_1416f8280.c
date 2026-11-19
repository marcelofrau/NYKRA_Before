// Function: h_1416f8280 @ 0x1416f8280

bool h_1416f8280(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_48 [64];
  
  bVar3 = false;
  FUN_141727770(local_48,param_3,param_1,param_2,0);
  do {
    lVar1 = FUN_1417279b0(local_48);
    if (lVar1 == 0) {
      return bVar3;
    }
    lVar1 = FUN_1417279b0(local_48);
    FUN_141729210(local_48);
    uVar2 = *(uint *)(lVar1 + 0xb0) & 3;
    bVar3 = uVar2 == 0;
  } while (uVar2 != 0);
  return true;
}


