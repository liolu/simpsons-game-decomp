#include "engine.h"
#include "m2c.h"

void func_020be9c8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    s32 temp_r0;
    s32 var_r0;

    temp_ip                   = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg2, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg2, s32 *, 4) = temp_ip;
    M2C_FIELD(arg3, s32 *, 4) = temp_ip;
    if ((s32) M2C_FIELD(arg2, s32 *, 4) > arg1) {
        M2C_FIELD(arg2, s32 *, 4) = arg1;
    }
    temp_r0                   = M2C_FIELD(arg3, s32 *, 4) - M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 4) = temp_r0;
    if (temp_r0 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = M2C_FIELD(arg2, s32 *, 0) + M2C_FIELD(arg2, s32 *, 4);
    }
    M2C_FIELD(arg3, s32 *, 0) = var_r0;
}
