#include "m2c.h"

s32 func_02014480(s32);                             /* extern */

s32 func_020149c4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = (arg2 * 0x1A) + M2C_FIELD(arg0, s32 *, 4);
    if (arg1 == 0xE) {
        return 0;
    }
    if (M2C_FIELD(temp_r4, u16 *, 2) & func_02014480(arg1)) {
        return 1;
    }
    return 0;
}
