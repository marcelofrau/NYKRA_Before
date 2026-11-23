// Function: FUN_1416d0720 @ 0x1416d0720

undefined8 FUN_1416d0720(longlong *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)((longlong)param_1 + 0xc) & 0xffffff;
  if ((uVar10 == 0) || (uVar10 != 6)) {
    uVar10 = FUN_141693b30();
    lVar8 = (longlong)(int)param_2;
    if (uVar10 == 0xfffffffd) {
      if (lRam000000014219b5c8 != 0) {
        lVar7 = *(longlong *)(lRam000000014219b5c8 + 0xd8);
        while (lVar4 = lVar7, lVar4 != 0) {
          lVar7 = *(longlong *)(lVar4 + 400);
          if ((*(byte *)(lVar4 + 0xb0) & 3) == 0) {
            FUN_1416a8cb0(lVar4);
            if (*(longlong *)(lVar4 + 8) == 0) {
              lVar3 = FUN_1416c0340(lVar4,param_2);
            }
            else {
              lVar3 = lVar8 * 0x10 + *(longlong *)(lVar4 + 8);
            }
            FUN_141694260(lVar3,param_4,lVar4,param_3);
            func_0x0001416a8c00(1);
          }
        }
      }
    }
    else {
      if ((int)uVar10 < 0) {
        return 0;
      }
      if ((int)uVar10 < 100000) {
        for (lVar7 = *(longlong *)
                      (*plRam00000001421973f8 +
                      (longlong)(int)(*(uint *)(plRam00000001421973f8 + 1) & uVar10) * 0x10);
            lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar10) {
            if (*(longlong *)(lVar7 + 0x18) != 0) {
              puVar6 = *(undefined8 **)(*(longlong *)(lVar7 + 0x18) + 0x68);
              while ((puVar6 != (undefined8 *)0x0 && (lVar7 = puVar6[2], lVar7 != 0))) {
                puVar6 = (undefined8 *)*puVar6;
                if ((*(byte *)(lVar7 + 0xb0) & 3) == 0) {
                  FUN_1416a8cb0(lVar7);
                  if (*(longlong *)(lVar7 + 8) == 0) {
                    lVar4 = FUN_1416c0340(lVar7,param_2);
                  }
                  else {
                    lVar4 = lVar8 * 0x10 + *(longlong *)(lVar7 + 8);
                  }
                  FUN_141694260(lVar4,param_4,lVar7,param_3);
                  func_0x0001416a8c00(1);
                }
              }
            }
            break;
          }
        }
        iVar9 = 0;
        if (0 < iRam000000014219b5bc) {
          lVar7 = 0;
          iVar5 = iRam000000014219b5bc;
          do {
            if ((lVar7 < 0) || (iVar5 <= iVar9)) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(longlong *)(lRam000000014219b5b0 + lVar7 * 8);
            }
            if ((uVar10 == *(uint *)(lVar4 + 0xb8)) && ((*(byte *)(lVar4 + 0xb0) & 3) == 0)) {
              FUN_1416a8cb0(lVar4);
              if (*(longlong *)(lVar4 + 8) == 0) {
                lVar3 = FUN_1416c0340(lVar4,param_2);
              }
              else {
                lVar3 = lVar8 * 0x10 + *(longlong *)(lVar4 + 8);
              }
              FUN_141694260(lVar3,param_4,lVar4,param_3);
              func_0x0001416a8c00(1);
              iVar5 = iRam000000014219b5bc;
            }
            iVar9 = iVar9 + 1;
            lVar7 = lVar7 + 1;
          } while (iVar9 < iVar5);
        }
      }
      else {
        lVar7 = func_0x0001416a5490(uVar10);
        if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0xb0) & 1) == 0)) {
          FUN_1416a8cb0(lVar7);
          if (*(longlong *)(lVar7 + 8) == 0) {
            lVar8 = FUN_1416c0340(lVar7,param_2);
          }
          else {
            lVar8 = lVar8 * 0x10 + *(longlong *)(lVar7 + 8);
          }
          FUN_141694260(lVar8,param_4,lVar7,param_3);
          func_0x0001416a8c00(1);
        }
      }
    }
    return 1;
  }
  lVar8 = *param_1;
  lVar7 = (longlong)(int)param_2;
  if (param_2 < 10000) {
    iVar9 = iRam00000001421974e8;
    if (*(int *)(lVar8 + 0x7c) == 1) {
      iVar9 = 0;
    }
    if ((iVar9 <= (int)param_2) && ((int)param_2 < iRam00000001421974e8)) {
      lVar7 = lVar7 * 0x20;
      if (*(char *)(lVar7 + 0x1421896f8) == '\0') {
        FUN_1416ab080(&UNK_1419a21b8,*(undefined8 *)(lVar7 + 0x1421896e0));
        return 0;
      }
      uVar1 = (**(code **)(lVar7 + 0x1421896f0))(lVar8,param_3,param_4);
      return uVar1;
    }
  }
  FUN_1416a8cb0(lVar8);
  if (*(longlong *)(lVar8 + 8) == 0) {
    plVar2 = (longlong *)FUN_1416c0560(lVar8,param_2);
  }
  else {
    plVar2 = (longlong *)(lVar7 * 0x10 + *(longlong *)(lVar8 + 8));
  }
  if (plVar2 == (longlong *)0x0) {
    lVar4 = *(longlong *)(lVar8 + 0x20);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 8) == 0) {
        plVar2 = (longlong *)FUN_1416c0560(lVar4,param_2);
      }
      else {
        plVar2 = (longlong *)(lVar7 * 0x10 + *(longlong *)(lVar4 + 8));
      }
      if ((((plVar2 != (longlong *)0x0) && (*(int *)((longlong)plVar2 + 0xc) == 6)) &&
          (*plVar2 != 0)) && (*(int *)(*plVar2 + 0x7c) == 4)) goto code_r0x0001416cfbef;
    }
    if (*(longlong *)(lVar8 + 8) == 0) {
      plVar2 = (longlong *)FUN_1416c0340(lVar8,param_2);
    }
    else {
      plVar2 = (longlong *)(lVar7 * 0x10 + *(longlong *)(lVar8 + 8));
    }
  }
code_r0x0001416cfbef:
  FUN_141694260(plVar2,param_4,lVar8,param_3);
  func_0x0001416a8c00(1);
  return 1;
}


