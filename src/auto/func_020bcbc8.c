#include "engine.h"
#include "m2c.h"

void func_020baa28(M2C_UNK, M2C_UNK);
void func_020baa38(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020baa44(M2C_UNK, M2C_UNK);
void func_020baa4c(M2C_UNK, M2C_UNK);
void func_020baa54(M2C_UNK, M2C_UNK);
M2C_UNK func_020baacc(M2C_UNK);
M2C_UNK func_020baadc(M2C_UNK);
M2C_UNK func_020baaf8(M2C_UNK);
void func_020babb8(M2C_UNK);
void func_020bcc4c(M2C_UNK);

void func_020bcbc8(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, s32 *, 4);
    temp_r6 = func_020baacc(temp_r7);
    temp_r5 = func_020baadc(temp_r7);
    temp_r4 = func_020baaf8(temp_r7);
    func_020babb8(temp_r7);
    func_020baa4c(temp_r7, 0);
    temp_r1                      = temp_r4 - temp_r6;
    M2C_FIELD(arg0, s32 *, 0x90) = temp_r1;
    func_020baa44(temp_r7, temp_r1);
    func_020baa54(temp_r7, temp_r5);
    func_020baa28(temp_r7, temp_r6);
    func_020baa38(temp_r7, (s32) func_020bcc4c, arg0);
}
