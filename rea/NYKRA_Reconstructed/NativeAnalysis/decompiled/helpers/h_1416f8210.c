// Function: h_1416f8210 @ 0x1416f8210

void h_1416f8210(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_3 < 2) {
    uVar2 = 0xffffffff;
    uVar1 = 1;
    if (param_3 < 1) goto LAB_1416f8255;
  }
  else {
    uVar1 = h_1416927d0(param_4[1]);
  }
  uVar2 = h_141693b30(*param_4);
LAB_1416f8255:
  FUN_1416f1eb0(param_1,param_2,uVar2,uVar1);
  return;
}


