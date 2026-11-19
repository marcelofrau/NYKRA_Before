// Function: h_1416cf840 @ 0x1416cf840

ulonglong h_1416cf840(uint param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  bVar2 = 0;
  bVar1 = false;
  if (param_1 == 0xfffffffd) {
    if (DAT_14219b5c8 == 0) {
LAB_1416cf8c3:
      return in_RAX & 0xffffffffffffff00;
    }
    lVar6 = *(longlong *)(DAT_14219b5c8 + 0xd8);
    if (*(longlong *)(DAT_14219b5c8 + 0xd8) != 0) {
      do {
        lVar9 = *(longlong *)(lVar6 + 400);
        if ((*(byte *)(lVar6 + 0xb0) & 3) == 0) {
          bVar2 = h_1416cfae0(lVar6,param_2,param_3,param_4);
          bVar1 = true;
        }
        lVar6 = lVar9;
      } while (lVar9 != 0);
      if (bVar1) goto LAB_1416cfac7;
    }
    param_1 = 0xfffffffd;
  }
  else {
    if ((int)param_1 < 0) goto LAB_1416cf8c3;
    if ((int)param_1 < 100000) {
      for (lVar6 = *(longlong *)
                    (*DAT_1421973f8 + (longlong)(int)(*(uint *)(DAT_1421973f8 + 1) & param_1) * 0x10
                    ); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 8)) {
        if (*(uint *)(lVar6 + 0x10) == param_1) {
          puVar10 = *(undefined8 **)(lVar6 + 0x18);
          if (puVar10 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)puVar10[0xd];
            while ((puVar5 != (undefined8 *)0x0 && (lVar6 = puVar5[2], lVar6 != 0))) {
              puVar5 = (undefined8 *)*puVar5;
              if ((*(byte *)(lVar6 + 0xb0) & 3) == 0) {
                bVar2 = h_1416cfae0(lVar6,param_2,param_3,param_4);
                bVar1 = true;
              }
            }
          }
          goto LAB_1416cf916;
        }
      }
      puVar10 = (undefined8 *)0x0;
LAB_1416cf916:
      iVar4 = 0;
      if (0 < DAT_14219b5bc) {
        lVar6 = 0;
        iVar7 = DAT_14219b5bc;
        do {
          if ((lVar6 < 0) || (iVar7 <= iVar4)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(longlong *)(DAT_14219b5b0 + lVar6 * 8);
          }
          lVar3 = *(longlong *)(lVar9 + 0x90);
          bVar11 = false;
          do {
            if (lVar3 == 0) break;
            bVar11 = *(uint *)(lVar3 + 0x94) == param_1;
            lVar3 = *(longlong *)(lVar3 + 8);
          } while (!bVar11);
          if (bVar11) {
            if ((*(byte *)(lVar9 + 0xb0) & 3) == 0) {
              bVar2 = h_1416cfae0(lVar9,param_2,param_3,param_4);
              iVar7 = DAT_14219b5bc;
            }
            bVar1 = true;
          }
          iVar4 = iVar4 + 1;
          lVar6 = lVar6 + 1;
        } while (iVar4 < iVar7);
      }
      iVar4 = 0;
      if (0 < DAT_14219b57c) {
        lVar6 = 0;
        iVar7 = DAT_14219b57c;
        do {
          if ((lVar6 < 0) || (iVar7 <= iVar4)) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(longlong *)(DAT_14219b570 + lVar6 * 8);
          }
          lVar3 = *(longlong *)(lVar9 + 0x90);
          bVar11 = false;
          do {
            if (lVar3 == 0) break;
            bVar11 = *(uint *)(lVar3 + 0x94) == param_1;
            lVar3 = *(longlong *)(lVar3 + 8);
          } while (!bVar11);
          if (bVar11) {
            if ((*(byte *)(lVar9 + 0xb0) & 3) == 0) {
              bVar2 = h_1416cfae0(lVar9,param_2,param_3,param_4);
              iVar7 = DAT_14219b57c;
            }
            bVar1 = true;
          }
          iVar4 = iVar4 + 1;
          lVar6 = lVar6 + 1;
        } while (iVar4 < iVar7);
      }
      if (!bVar1) {
        if (puVar10 == (undefined8 *)0x0) {
          puVar8 = &DAT_1419a6644;
        }
        else {
          puVar8 = (undefined1 *)*puVar10;
        }
        h_1416ab080("Unable to find any instance for object index \'%d\' name \'%s\'",param_1,puVar8
                   );
      }
      goto LAB_1416cfac7;
    }
    lVar6 = FUN_1416a5490(param_1);
    if (lVar6 != 0) {
      if ((*(byte *)(lVar6 + 0xb0) & 1) == 0) {
        bVar2 = h_1416cfae0(lVar6,param_2,param_3,param_4);
      }
      goto LAB_1416cfac7;
    }
  }
  h_1416ab080("Unable to find any instance for object index \'%d\'",param_1);
LAB_1416cfac7:
  return (ulonglong)bVar2;
}


