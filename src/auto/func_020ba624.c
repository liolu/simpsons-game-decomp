#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b7b94(M2C_UNK);
M2C_UNK func_020b7dfc(M2C_UNK);
M2C_UNK func_020b7e04(M2C_UNK);

void func_020ba624(s32 arg0) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r0;

    temp_r7 = M2C_FIELD(arg0, s32 *, 4);
    temp_r6 = func_020b7b94(temp_r7);
    temp_r4 = func_020b7dfc(temp_r7);
    var_r0  = func_020b7e04(temp_r7);
    temp_r1 = temp_r6 - M2C_FIELD(arg0, s32 *, 0x34);
    if (var_r0 >= temp_r1) {
        var_r0 = temp_r1;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + var_r0);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + temp_r4);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + var_r0);
}
