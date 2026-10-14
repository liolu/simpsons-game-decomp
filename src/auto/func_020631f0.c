#include "engine.h"
#include "m2c.h"

void func_020631f0(s32 arg0, s32 arg1) {
    u32 temp_r2;
    u32 var_r1;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0x2F4);
    if ((u32) arg1 >= temp_r2) {
        var_r1 = 0;
    } else {
        var_r1 = temp_r2 - arg1;
    }
    M2C_FIELD(arg0, u32 *, 0x2F4) = var_r1;
}
