// Function: FUN_1416d0010 @ 0x1416d0010

ulonglong FUN_1416d0010(ulonglong param_1,int param_2,ulonglong param_3,longlong param_4,
                       undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_1;
  bVar2 = 0;
  if (iVar5 == -3) {
    if (lRam000000014219b5c8 == 0) {
      return in_RAX & 0xffffffffffffff00;
    }
    lVar7 = *(longlong *)(lRam000000014219b5c8 + 0xd8);
    if (lVar7 != 0) {
      do {
        lVar1 = *(longlong *)(lVar7 + 400);
        if ((*(byte *)(lVar7 + 0xb0) & 3) == 0) {
          if (*(longlong *)(lVar7 + 8) == 0) {
            lVar3 = FUN_1416c0560(lVar7,param_2);
            lVar8 = (longlong)param_2 << 4;
          }
          else {
            lVar8 = (longlong)param_2 * 0x10;
            lVar3 = *(longlong *)(lVar7 + 8) + lVar8;
          }
          lRam0000000142182da0 = lVar7;
          if (lVar3 == 0) {
            lVar6 = *(longlong *)(lVar7 + 0x20);
            if (lVar6 != 0) {
              if (*(longlong *)(lVar6 + 8) == 0) {
                lVar3 = FUN_1416c0560(lVar6,param_2);
                lVar6 = *(longlong *)(lVar7 + 0x20);
              }
              else {
                lVar3 = *(longlong *)(lVar6 + 8) + lVar8;
              }
              lRam0000000142182da0 = lVar6;
              if (lVar3 != 0) goto code_r0x0001416d00f9;
            }
          }
          else {
code_r0x0001416d00f9:
            FUN_141693480(param_4,lVar3,lVar7,param_3 & 0xffffffff,param_5,param_6);
            bVar2 = 1;
          }
          lRam0000000142182da0 = 0;
        }
        lVar7 = lVar1;
      } while (lVar1 != 0);
      goto code_r0x0001416d01bd;
    }
  }
  else {
    if (iVar5 == -5) {
      bVar2 = FUN_1416cea80(uRam000000014218ecf8,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      if (iVar5 < 0) {
        if (iVar5 == -4) {
          *(undefined4 *)(param_4 + 0xc) = 5;
          return 1;
        }
        goto code_r0x0001416d01c6;
      }
      if (iVar5 < 100000) {
        bVar2 = FUN_1416d0440();
      }
      else {
        bVar2 = FUN_1416d02a0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
code_r0x0001416d01bd:
    if (bVar2 != 0) goto code_r0x0001416d0288;
  }
code_r0x0001416d01c6:
  param_1 = param_1 & 0xffffffff;
  if (cRam00000001421965b4 != '\0') {
    FUN_1416ab080(&UNK_1419a0470,uRam00000001421965b8,uRam00000001421965c0,param_1,param_2,param_2,
                  (int)param_3);
    return (ulonglong)bVar2;
  }
  if (cRam00000001421965b5 != '\0') {
    uVar4 = func_0x0001417271a0(param_1);
    FUN_1416ab080(&UNK_1419a04a8,param_1,uVar4);
    return (ulonglong)bVar2;
  }
  if (iVar5 == -1) {
    param_1 = (ulonglong)*(uint *)(*(longlong *)(lRam0000000142184e10 + 0x28) + 0xb4);
  }
  FUN_1416ab080(&UNK_1419a04e8,param_1,param_2,param_3 & 0xffffffff);
code_r0x0001416d0288:
  return (ulonglong)bVar2;
}


