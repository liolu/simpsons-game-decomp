#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012b98(M2C_UNK, M2C_UNK);
M2C_UNK func_02012bb4(M2C_UNK);
void func_02013028(M2C_UNK);
void func_02013060(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020132e0(M2C_UNK, M2C_UNK);

void func_020135f0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r5;

    temp_r1 = M2C_FIELD(arg2, s32 *, 0);
    if ((temp_r1 >= 2) || (temp_r5 = M2C_FIELD(arg2, s32 *, 4), (temp_r5 < 0)) || (temp_r5 >= func_020132e0(arg1, temp_r1))) {
        func_02013028(arg0);
        return;
    }
    temp_r0 = func_02012b98(M2C_FIELD(((M2C_FIELD(arg2, s32 *, 0) * 0x18) + arg1), s32 *, 0x10), temp_r5);
    func_02013060(arg0, arg2, func_02012bb4(temp_r0), temp_r0);
}
