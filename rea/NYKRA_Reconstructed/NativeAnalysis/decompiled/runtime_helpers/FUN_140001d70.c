// Function: FUN_140001d70 @ 0x140001d70

void FUN_140001d70(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  FUN_140001ee0(&lStack_48);
  FUN_140001ee0(&lStack_38,param_3);
  lVar1 = lStack_38;
  if (uStack_30._4_4_ == 0) {
    lVar1 = (longlong)&uStack_30 + 4;
  }
  if (uStack_40._4_4_ == 0) {
    lVar2 = (longlong)&uStack_40 + 4;
  }
  else {
    lVar2 = lStack_48;
  }
  uStack_30 = uStack_30 & 0xffffffff;
  uStack_40 = uStack_40 & 0xffffffff;
  FUN_1416ab080(&UNK_141981c74,param_1,lVar2,*(uint *)(param_2 + 0xc) & 0xffffff,lVar1,
                *(uint *)(param_3 + 0xc) & 0xffffff);
  if (lStack_38 != 0) {
    func_0x000141695b90();
    lStack_38 = 0;
    uStack_30 = 0;
  }
  if (lStack_48 != 0) {
    func_0x000141695b90();
  }
  return;
}


