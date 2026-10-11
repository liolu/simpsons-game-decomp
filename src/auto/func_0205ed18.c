#include "m2c.h"

s32 func_0205ed18(void *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r2;
    u32 temp_r3;

    temp_r2 = M2C_FIELD(arg0, u32 *, 8);
    temp_r3 = M2C_FIELD(arg0, u32 *, 0);
    temp_r0 = *arg1;
    if (temp_r3 >= temp_r2) {
        if (temp_r0 < temp_r2) {
            return 1;
        }
        goto block_5;
    }
    if (temp_r0 >= temp_r2) {
        return 0;
    }
block_5:
    if (temp_r3 < temp_r0) {
        return 1;
    }
    return 0;
}
