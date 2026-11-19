// Function: h_1416d0790 @ 0x1416d0790

undefined8 h_1416d0790(uint param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = (longlong)param_2;
  if (param_1 == 0xfffffffd) {
    if (DAT_14219b5c8 != 0) {
      lVar5 = *(longlong *)(DAT_14219b5c8 + 0xd8);
      while (lVar2 = lVar5, lVar2 != 0) {
        lVar5 = *(longlong *)(lVar2 + 400);
        if ((*(byte *)(lVar2 + 0xb0) & 3) == 0) {
          h_1416a8cb0(lVar2);
          if (*(longlong *)(lVar2 + 8) == 0) {
            lVar1 = FUN_1416c0340(lVar2,param_2);
          }
          else {
            lVar1 = lVar6 * 0x10 + *(longlong *)(lVar2 + 8);
          }
          FUN_141694260(lVar1,param_4,lVar2,param_3);
          h_1416a8c00(1);
        }
      }
    }
  }
  else {
    if ((int)param_1 < 0) {
      return 0;
    }
    if ((int)param_1 < 100000) {
      for (lVar5 = *(longlong *)
                    (*DAT_1421973f8 + (longlong)(int)(*(uint *)(DAT_1421973f8 + 1) & param_1) * 0x10
                    ); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == param_1) {
          if (*(longlong *)(lVar5 + 0x18) != 0) {
            puVar4 = *(undefined8 **)(*(longlong *)(lVar5 + 0x18) + 0x68);
            while ((puVar4 != (undefined8 *)0x0 && (lVar5 = puVar4[2], lVar5 != 0))) {
              puVar4 = (undefined8 *)*puVar4;
              if ((*(byte *)(lVar5 + 0xb0) & 3) == 0) {
                h_1416a8cb0(lVar5);
                if (*(longlong *)(lVar5 + 8) == 0) {
                  lVar2 = FUN_1416c0340(lVar5,param_2);
                }
                else {
                  lVar2 = lVar6 * 0x10 + *(longlong *)(lVar5 + 8);
                }
                FUN_141694260(lVar2,param_4,lVar5,param_3);
                h_1416a8c00(1);
              }
            }
          }
          break;
        }
      }
      iVar7 = 0;
      if (0 < DAT_14219b5bc) {
        lVar5 = 0;
        iVar3 = DAT_14219b5bc;
        do {
          if ((lVar5 < 0) || (iVar3 <= iVar7)) {
            lVar2 = 0;
          }
          else {
            lVar2 = *(longlong *)(DAT_14219b5b0 + lVar5 * 8);
          }
          if ((param_1 == *(uint *)(lVar2 + 0xb8)) && ((*(byte *)(lVar2 + 0xb0) & 3) == 0)) {
            h_1416a8cb0(lVar2);
            if (*(longlong *)(lVar2 + 8) == 0) {
              lVar1 = FUN_1416c0340(lVar2,param_2);
            }
            else {
              lVar1 = lVar6 * 0x10 + *(longlong *)(lVar2 + 8);
            }
            FUN_141694260(lVar1,param_4,lVar2,param_3);
            h_1416a8c00(1);
            iVar3 = DAT_14219b5bc;
          }
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
        } while (iVar7 < iVar3);
      }
    }
    else {
      lVar5 = FUN_1416a5490(param_1);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xb0) & 1) == 0)) {
        h_1416a8cb0(lVar5);
        if (*(longlong *)(lVar5 + 8) == 0) {
          lVar6 = FUN_1416c0340(lVar5,param_2);
        }
        else {
          lVar6 = lVar6 * 0x10 + *(longlong *)(lVar5 + 8);
        }
        FUN_141694260(lVar6,param_4,lVar5,param_3);
        h_1416a8c00(1);
      }
    }
  }
  return 1;
}


