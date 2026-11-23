// Function: FUN_1411ee060 @ 0x1411ee060

void FUN_1411ee060(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RDI;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0xffffff;
  if (uVar2 == 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
    *param_1 = lVar4;
  }
  else if (uVar2 == 6) {
    *param_1 = *param_2;
    if (*param_2 != 0) {
      lVar3 = func_0x0001416a5890();
      lVar4 = *param_2;
      goto code_r0x0001411ee0ca;
    }
  }
  else if ((uVar2 == 2) && (lVar4 = *param_2, *param_1 = lVar4, lVar4 != 0)) {
    func_0x0001416ba900();
    func_0x0001416ba910(*param_1);
    lVar3 = func_0x0001416a5890();
    lVar4 = *param_1;
code_r0x0001411ee0ca:
    if (((cRam00000001420f6b78 != '\0') && (lVar3 != 0)) && (lVar4 != 0)) {
      bVar1 = false;
      if ((((iRam0000000142189078 == 1) && (iRam0000000142189084 <= *(int *)(lVar4 + 0x78))) &&
          ((*(int *)(lVar4 + 0x78) < iRam0000000142189088 &&
           ((*(uint *)(lVar4 + 0x6c) < uRam00000001420f6bdc &&
            (*(int *)(lVar4 + 0x70) <= iRam000000014218907c)))))) &&
         ((*(uint *)(lVar3 + 0x6c) == uRam00000001420f6bdc ||
          ((*(int *)(lVar3 + 0x78) < iRam0000000142189084 ||
           (iRam0000000142189088 <= *(int *)(lVar3 + 0x78))))))) {
        FUN_1416a2ec0(lVar4,0,iRam0000000142189088,param_4,unaff_RDI);
        bVar1 = true;
      }
      if (*(int *)(lVar4 + 0x70) < *(int *)(lVar3 + 0x70)) {
        FUN_1416a6b20(*(undefined8 *)((longlong)*(int *)(lVar4 + 0x70) * 0x60 + 0x142189210),lVar4,
                      lVar4);
        iVar5 = *(int *)(lVar4 + 0x70);
        if (((((iRam0000000142189078 == 1) && (iRam0000000142189084 <= *(int *)(lVar4 + 0x78))) &&
             (*(int *)(lVar4 + 0x78) < iRam0000000142189088)) &&
            ((!bVar1 && (*(uint *)(lVar4 + 0x6c) < uRam00000001420f6bdc)))) &&
           (iVar5 <= iRam000000014218907c)) {
          FUN_1416a2ec0(lVar4,0);
          iVar5 = *(int *)(lVar4 + 0x70);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 < *(int *)(lVar3 + 0x70)) {
          puVar6 = (undefined8 *)((longlong)iVar5 * 0x60 + 0x142189210);
          do {
            FUN_1416a6b20(*puVar6,lVar3,lVar3);
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 0xc;
          } while (iVar5 < *(int *)(lVar3 + 0x70));
        }
      }
    }
    return;
  }
  return;
}


