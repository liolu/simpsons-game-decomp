#include "engine.h"
#include "m2c.h"

s32 func_020b0eb4(s32 arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r1 != 0) {
        temp_r1_2                   = temp_r1 - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r1_2;
        if (temp_r1_2 == 0) {
            return 0;
        }
    }
    return 1;
}
