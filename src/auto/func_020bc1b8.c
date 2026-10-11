#include "m2c.h"

s32 func_020baa6c(s32);                             /* extern */
s32 func_020baa8c(s32);                             /* extern */
s32 func_020baaac(s32);                             /* extern */
M2C_UNK func_020c09bc(s32);                         /* extern */
s32 func_020f17a8(M2C_UNK, s32);                    /* extern */

void func_020bc1b8(void *arg0, s32 *arg1, s32 *arg2) {
    s8 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s8 *, 1);
    if ((u32) (u8) (s8) (temp_r3 - 3) <= 1U) {
        func_020c09bc(M2C_FIELD(arg0, s32 *, 0xC));
    } else if (temp_r3 == 5) {
        *arg1 = func_020baaac(M2C_FIELD(arg0, s32 *, 4));
        *arg2 = func_020baa6c(M2C_FIELD(arg0, s32 *, 4));
        *arg1 *= func_020f17a8(0x10, func_020baa8c(M2C_FIELD(arg0, s32 *, 4)));
    } else {
        *arg1 = 0;
        *arg2 = 1;
    }
    *arg1 += M2C_FIELD(arg0, s32 *, 0x88);
}
