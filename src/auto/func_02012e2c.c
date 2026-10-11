#include "m2c.h"

s32 func_02012ca0(s32);                             /* extern */
s32 func_02012ca8(s32, s32);                        /* extern */

void *func_02012e2c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8) + 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_r4;
    if (temp_r4 < func_02012ca0(M2C_FIELD(arg0, s32 *, 0))) {
        M2C_FIELD(arg0, s32 *, 4) = func_02012ca8(M2C_FIELD(arg0, s32 *, 0), temp_r4);
    }
    return arg0;
}
