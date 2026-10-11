#include "m2c.h"

void func_020c1f40(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, void *arg5) {
    u32 temp_r0;
    u32 var_r3;

    var_r3 = arg3;
    if (arg0 == 1) {
        temp_r0 = M2C_FIELD(arg5, volatile u32 *, 0x14);
        if (temp_r0 != 0) {
            if (var_r3 > temp_r0) {
                var_r3 = temp_r0;
            }
            M2C_FIELD(arg5, volatile u32 *, 0x14) = (u32) (M2C_FIELD(arg5, volatile u32 *, 0x14) - var_r3);
            M2C_FIELD(arg5, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(arg5, volatile s32 *, 0x1C) + (var_r3 >> 1));
        }
    }
    M2C_FIELD(arg5, volatile s32 *, 0x18) = (s32) (0x1800 - M2C_FIELD(arg5, volatile u32 *, 0x14));
}
