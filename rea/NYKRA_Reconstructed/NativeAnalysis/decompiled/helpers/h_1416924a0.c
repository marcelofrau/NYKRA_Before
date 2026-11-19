// Function: h_1416924a0 @ 0x1416924a0

longlong h_1416924a0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  lVar9 = DAT_142182d90;
  puVar7 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)*param_1;
  if (((*(uint *)((longlong)param_1 + 0xc) & 0xffffff) == 2) && (puVar3 != (undefined8 *)0x0)) {
    puVar5 = puVar3;
    if ((puVar3[0x13] != DAT_142182d90) && (*(int *)(puVar3 + 0x11) != 1)) {
      lVar4 = FUN_1416c4390(0xa8);
      puVar5 = puVar7;
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)FUN_1416b9000(lVar4);
      }
      *(int *)(puVar5 + 0x11) = *(int *)(puVar5 + 0x11) + 1;
      puVar5[0x13] = lVar9;
      iVar1 = *(int *)((longlong)puVar3 + 0xa4);
      *(int *)((longlong)puVar5 + 0xa4) = iVar1;
      puVar5[0x12] = 0;
      puVar8 = puVar7;
      if (0 < iVar1) {
        FUN_1416c4a90(puVar5 + 0x12,(longlong)iVar1 << 4,
                      "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\Code_Main.cpp"
                      ,0x28b);
        puVar8 = (undefined8 *)puVar5[0x12];
      }
      lVar9 = puVar3[0x12];
      h_1416a8cb0(puVar5);
      if (0 < *(int *)((longlong)puVar5 + 0xa4)) {
        lVar9 = lVar9 - (longlong)puVar8;
        do {
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            h_140001b50(puVar8);
          }
          uVar2 = *(undefined4 *)(lVar9 + 0xc + (longlong)puVar8);
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar2;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar9 + 8 + (longlong)puVar8);
          if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) == 0) {
            *puVar8 = *(undefined8 *)(lVar9 + (longlong)puVar8);
          }
          else {
            FUN_1416929c0(puVar8);
          }
          uVar6 = (int)puVar7 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar6;
          puVar8 = puVar8 + 2;
        } while ((int)uVar6 < *(int *)((longlong)puVar5 + 0xa4));
      }
      h_1416a8c00(1);
      *(int *)(puVar3 + 0x11) = *(int *)(puVar3 + 0x11) + -1;
      *param_1 = (longlong)puVar5;
      lVar9 = FUN_1416a5890();
      if (lVar9 == 0) {
        lVar9 = DAT_14218ecf8;
      }
      FUN_1416be750(lVar9,puVar5);
    }
  }
  else {
    if ((1 << ((byte)*(uint *)((longlong)param_1 + 0xc) & 0x1f) & 0x46U) != 0) {
      h_140001b50(param_1);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 2;
    lVar9 = FUN_1416c4390(0xa8);
    puVar5 = puVar7;
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)FUN_1416b9000(lVar9);
    }
    *(int *)(puVar5 + 0x11) = *(int *)(puVar5 + 0x11) + 1;
    puVar5[0x13] = 0;
    *param_1 = (longlong)puVar5;
    puVar5[0x13] = DAT_142182d90;
    lVar9 = FUN_1416a5890();
    if (lVar9 == 0) {
      lVar9 = DAT_14218ecf8;
    }
    FUN_1416be750(lVar9,puVar5);
  }
  lVar9 = 0;
  if ((*(byte *)((longlong)puVar5 + 0x8c) & 1) != 0) {
    FUN_1416ab080("Unable to write to immutable array");
  }
  if (*(int *)((longlong)puVar5 + 0xa4) <= param_2) {
    *(int *)((longlong)puVar5 + 0xa4) = param_2 + 1;
    FUN_1416c4a90(puVar5 + 0x12,(longlong)(param_2 + 1) << 4,
                  "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\Code_Main.cpp"
                  ,0x481);
  }
  if (-1 < param_2) {
    lVar9 = (longlong)param_2 * 0x10 + puVar5[0x12];
  }
  return lVar9;
}


