// Function: h_1416cfcc0 @ 0x1416cfcc0

undefined8 * h_1416cfcc0(uint param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  puVar3 = (undefined8 *)0x0;
  puVar9 = puVar3;
  if ((int)param_1 < 100000) {
    for (lVar2 = *(longlong *)
                  (*DAT_1421973f8 + (longlong)(int)(*(uint *)(DAT_1421973f8 + 1) & param_1) * 0x10);
        puVar9 = (undefined8 *)0x0, lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      if (*(uint *)(lVar2 + 0x10) == param_1) {
        puVar9 = *(undefined8 **)(lVar2 + 0x18);
        if (puVar9 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)puVar9[0xd];
          goto LAB_1416cfd66;
        }
        break;
      }
    }
  }
LAB_1416cfd17:
  if (-1 < (int)param_1) {
    for (lVar2 = *(longlong *)(DAT_1420f6be8 + (longlong)(int)(DAT_1420f6bf0 & param_1) * 0x10);
        lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      if (*(uint *)(lVar2 + 0x10) == param_1) {
        puVar3 = *(undefined8 **)(lVar2 + 0x18);
        break;
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar6 = &DAT_1419a6644;
  }
  else {
    puVar6 = (undefined1 *)*puVar9;
  }
  h_1416ab080("Unable to find any instance for object index \'%d\' name \'%s\'",param_1,puVar6);
  return (undefined8 *)0x0;
  while (puVar1 = (undefined8 *)*puVar1, (*(byte *)(puVar4 + 0x16) & 3) != 0) {
LAB_1416cfd66:
    if ((puVar1 == (undefined8 *)0x0) ||
       (puVar4 = (undefined8 *)puVar1[2], puVar4 == (undefined8 *)0x0)) goto LAB_1416cfd17;
  }
  puVar1 = puVar3;
  puVar8 = puVar3;
  if (0 < DAT_14219b5bc) {
    do {
      puVar5 = puVar3;
      if ((-1 < (longlong)puVar1) && ((int)puVar8 < DAT_14219b5bc)) {
        puVar5 = *(undefined8 **)(DAT_14219b5b0 + (longlong)puVar1 * 8);
      }
      lVar2 = puVar5[0x12];
      bVar10 = false;
      do {
        if (lVar2 == 0) break;
        bVar10 = *(uint *)(lVar2 + 0x94) == param_1;
        lVar2 = *(longlong *)(lVar2 + 8);
      } while (!bVar10);
      if ((bVar10) && ((*(byte *)(puVar5 + 0x16) & 3) == 0)) {
        puVar4 = puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_1416cfd17;
        break;
      }
      uVar7 = (int)puVar8 + 1;
      puVar1 = (undefined8 *)((longlong)puVar1 + 1);
      puVar8 = (undefined8 *)(ulonglong)uVar7;
    } while ((int)uVar7 < DAT_14219b5bc);
  }
  puVar1 = puVar3;
  puVar8 = puVar3;
  if (0 < DAT_14219b57c) {
    do {
      puVar5 = puVar3;
      if ((-1 < (longlong)puVar8) && ((int)puVar1 < DAT_14219b57c)) {
        puVar5 = *(undefined8 **)(DAT_14219b570 + (longlong)puVar8 * 8);
      }
      lVar2 = puVar5[0x12];
      bVar10 = false;
      do {
        if (lVar2 == 0) break;
        bVar10 = *(uint *)(lVar2 + 0x94) == param_1;
        lVar2 = *(longlong *)(lVar2 + 8);
      } while (!bVar10);
      if ((bVar10) && ((*(byte *)(puVar5 + 0x16) & 3) == 0)) {
        if (puVar5 != (undefined8 *)0x0) {
          return puVar5;
        }
        goto LAB_1416cfd17;
      }
      uVar7 = (int)puVar1 + 1;
      puVar1 = (undefined8 *)(ulonglong)uVar7;
      puVar8 = (undefined8 *)((longlong)puVar8 + 1);
    } while ((int)uVar7 < DAT_14219b57c);
  }
  return puVar4;
}


