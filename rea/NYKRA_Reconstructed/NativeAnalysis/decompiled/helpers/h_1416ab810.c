// Function: h_1416ab810 @ 0x1416ab810

int h_1416ab810(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  switch(*(uint *)((longlong)param_4 + 0xc) & 0xffffff) {
  case 0:
  case 1:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_141693b30(param_4);
    iVar4 = -1;
    switch(uVar3) {
    case 0xfffffff7:
      goto switchD_1416ab87c_caseD_6;
    default:
      iVar4 = 0;
      if (-1 < (int)uVar3) {
        if ((int)uVar3 < 100000) {
          iVar4 = FUN_1416abb40(param_1,param_2,param_3,uVar3);
        }
        else {
          for (lVar5 = *(longlong *)(DAT_1420f6be8 + (longlong)(int)(DAT_1420f6bf0 & uVar3) * 0x10);
              iVar4 = 0, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
            if (*(uint *)(lVar5 + 0x10) == uVar3) {
              uVar8 = *(ulonglong *)(lVar5 + 0x18);
              if (uVar8 == 0) {
                return 0;
              }
              if ((*(byte *)(uVar8 + 0xb0) & 3) != 0) {
                return 0;
              }
              puVar7 = (undefined8 *)
                       FUN_1416c43d0(8,
                                     "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\VM_Exec.cpp"
                                     ,0x26f0,1);
              param_1[2] = (ulonglong)puVar7;
              *puVar7 = 0;
              param_1[3] = param_1[2] + 8;
              *param_3 = *param_1;
              *param_2 = uVar8;
              return 1;
            }
          }
        }
      }
      break;
    case 0xfffffff9:
    case 0xfffffffb:
    case 0xfffffffc:
      break;
    case 0xfffffffa:
    case 0xffffffff:
      puVar7 = (undefined8 *)
               FUN_1416c43d0(8,
                             "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\VM_Exec.cpp"
                             ,0x2693,1);
      param_1[2] = (ulonglong)puVar7;
      *puVar7 = 0;
      param_1[3] = param_1[2] + 8;
      goto LAB_1416abab9;
    case 0xfffffffd:
      lVar5 = *(longlong *)(DAT_14219b5c8 + 0xd8);
      uVar8 = 0;
      iVar4 = 0;
      if (lVar5 != 0) {
        do {
          pbVar1 = (byte *)(lVar5 + 0xb0);
          lVar5 = *(longlong *)(lVar5 + 400);
          uVar9 = (ulonglong)((int)uVar8 + 1);
          if ((*pbVar1 & 3) != 0) {
            uVar9 = uVar8;
          }
          iVar4 = (int)uVar9;
          uVar8 = uVar9;
        } while (lVar5 != 0);
        if (0 < iVar4) {
          puVar6 = (ulonglong *)
                   FUN_1416c43d0((longlong)iVar4 << 3,
                                 "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\VM_Exec.cpp"
                                 ,0x26b9,1);
          param_1[2] = (ulonglong)puVar6;
          *param_3 = *param_1;
          uVar8 = *(ulonglong *)(DAT_14219b5c8 + 0xd8);
          uVar9 = 0;
          while (uVar2 = uVar8, uVar2 != 0) {
            uVar8 = *(ulonglong *)(uVar2 + 400);
            if ((*(byte *)(uVar2 + 0xb0) & 3) == 0) {
              *puVar6 = uVar9;
              puVar6 = puVar6 + 1;
              uVar9 = uVar2;
            }
          }
          *param_2 = uVar9;
          param_1[3] = (ulonglong)puVar6;
        }
      }
      break;
    case 0xfffffffe:
      puVar7 = (undefined8 *)
               FUN_1416c43d0(8,
                             "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\VM_Exec.cpp"
                             ,0x269d,1);
      param_1[2] = (ulonglong)puVar7;
      *puVar7 = 0;
      param_1[3] = param_1[2] + 8;
      uVar8 = param_1[1];
      goto LAB_1416abab5;
    }
    break;
  default:
    FUN_1416ab080("invalid with reference");
  case 6:
switchD_1416ab87c_caseD_6:
    puVar7 = (undefined8 *)
             FUN_1416c43d0(8,
                           "c:\\hudson\\ZeusBase\\ZeusBeta\\GameMaker\\Runner\\VC_Runner\\Files\\Code\\VM_Exec.cpp"
                           ,0x267f,1);
    param_1[2] = (ulonglong)puVar7;
    *puVar7 = 0;
    param_1[3] = param_1[2] + 8;
    uVar8 = *param_4;
LAB_1416abab5:
    *param_2 = uVar8;
LAB_1416abab9:
    *param_3 = *param_1;
    iVar4 = 1;
  }
  return iVar4;
}


