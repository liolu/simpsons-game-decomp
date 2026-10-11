#include "m2c.h"

s32 *func_0201a0bc(M2C_UNK);                        /* extern */
s32 func_0201c7d8(M2C_UNK, u32, M2C_UNK);           /* extern */

s32 func_0201c8e8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 *arg3) {
    s32 *temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_0201a0bc(arg1);
    if (temp_r0 == NULL) {
        return 5;
    }
    temp_r0_2 = func_0201c7d8(arg0, (u32) (*temp_r0 << 8) >> 8, arg2);
    if (temp_r0_2 == 0) {
        return 9;
    }
    if (arg3 != NULL) {
        *arg3 = temp_r0_2;
    }
    return 0;
}
