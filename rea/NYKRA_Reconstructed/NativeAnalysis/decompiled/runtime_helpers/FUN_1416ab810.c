// Function: FUN_1416ab810 @ 0x1416ab810

int FUN_1416ab810(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar5 = 0;
  switch(*(uint *)((longlong)param_4 + 0xc) & 0xffffff) {
  case 0:
  case 1:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_141693b30(param_4);
    iVar9 = -1;
    switch(uVar4) {
    case 0xfffffff7:
      goto code_r0x0001416aba85;
    default:
      if (-1 < (int)uVar4) {
        if ((int)uVar4 < 100000) {
          iVar5 = FUN_1416abb40(param_1,param_2,param_3,uVar4);
          return iVar5;
        }
        lVar6 = *(longlong *)
                 (lRam00000001420f6be8 + (longlong)(int)(uRam00000001420f6bf0 & uVar4) * 0x10);
        if (lVar6 != 0) {
          while (*(uint *)(lVar6 + 0x10) != uVar4) {
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
              return 0;
            }
          }
          lVar6 = *(longlong *)(lVar6 + 0x18);
          if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xb0) & 3) == 0)) {
            puVar8 = (undefined8 *)FUN_1416c43d0(8,&UNK_1419a03b0,0x26f0,1);
            param_1[2] = (longlong)puVar8;
            iVar5 = 1;
            *puVar8 = 0;
            param_1[3] = param_1[2] + 8;
            *param_3 = *param_1;
            *param_2 = lVar6;
          }
        }
      }
      iVar9 = iVar5;
      break;
    case 0xfffffff9:
    case 0xfffffffb:
    case 0xfffffffc:
      break;
    case 0xfffffffa:
    case 0xffffffff:
      puVar8 = (undefined8 *)FUN_1416c43d0(8,&UNK_1419a03b0,0x2693,1);
      param_1[2] = (longlong)puVar8;
      *puVar8 = 0;
      param_1[3] = param_1[2] + 8;
      goto code_r0x0001416abab9;
    case 0xfffffffd:
      lVar6 = *(longlong *)(lRam000000014219b5c8 + 0xd8);
      if (lVar6 != 0) {
        do {
          pbVar1 = (byte *)(lVar6 + 0xb0);
          lVar6 = *(longlong *)(lVar6 + 400);
          iVar9 = iVar5 + 1;
          if ((*pbVar1 & 3) != 0) {
            iVar9 = iVar5;
          }
          iVar5 = iVar9;
        } while (lVar6 != 0);
        if (0 < iVar5) {
          plVar7 = (longlong *)FUN_1416c43d0((longlong)iVar5 << 3,&UNK_1419a03b0,0x26b9,1);
          param_1[2] = (longlong)plVar7;
          *param_3 = *param_1;
          lVar6 = *(longlong *)(lRam000000014219b5c8 + 0xd8);
          lVar3 = 0;
          while (lVar2 = lVar6, lVar2 != 0) {
            lVar6 = *(longlong *)(lVar2 + 400);
            if ((*(byte *)(lVar2 + 0xb0) & 3) == 0) {
              *plVar7 = lVar3;
              plVar7 = plVar7 + 1;
              lVar3 = lVar2;
            }
          }
          *param_2 = lVar3;
          param_1[3] = (longlong)plVar7;
        }
      }
      iVar9 = iVar5;
      break;
    case 0xfffffffe:
      puVar8 = (undefined8 *)FUN_1416c43d0(8,&UNK_1419a03b0,0x269d,1);
      param_1[2] = (longlong)puVar8;
      *puVar8 = 0;
      param_1[3] = param_1[2] + 8;
      lVar6 = param_1[1];
      goto code_r0x0001416abab5;
    }
    break;
  default:
    FUN_1416ab080(&UNK_1419a2730);
  case 6:
code_r0x0001416aba85:
    puVar8 = (undefined8 *)FUN_1416c43d0(8,&UNK_1419a03b0,0x267f,1);
    param_1[2] = (longlong)puVar8;
    *puVar8 = 0;
    param_1[3] = param_1[2] + 8;
    lVar6 = *param_4;
code_r0x0001416abab5:
    *param_2 = lVar6;
code_r0x0001416abab9:
    *param_3 = *param_1;
    iVar9 = 1;
  }
  return iVar9;
}


