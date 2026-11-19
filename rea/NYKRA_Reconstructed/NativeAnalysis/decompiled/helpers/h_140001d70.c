// Function: h_140001d70 @ 0x140001d70

void h_140001d70(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140001ee0(&local_48);
  FUN_140001ee0(&local_38,param_3);
  lVar1 = local_38;
  if (uStack_30._4_4_ == 0) {
    lVar1 = (longlong)&uStack_30 + 4;
  }
  lVar2 = local_48;
  if (uStack_40._4_4_ == 0) {
    lVar2 = (longlong)&uStack_40 + 4;
  }
  uStack_30 = uStack_30 & 0xffffffff;
  uStack_40 = uStack_40 & 0xffffffff;
  FUN_1416ab080("invalid type for %s lhs=%s (type=%d), rhs=%s (type=%d)",param_1,lVar2,
                *(uint *)(param_2 + 0xc) & 0xffffff,lVar1,*(uint *)(param_3 + 0xc) & 0xffffff);
  if (local_38 != 0) {
    thunk_FUN_1416c46f0();
    local_38 = 0;
    uStack_30 = 0;
  }
  if (local_48 != 0) {
    thunk_FUN_1416c46f0();
  }
  return;
}


