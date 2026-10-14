#include "m2c.h"

M2C_UNK func_020c15cc(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c15f4(s8 *, s8 **, M2C_UNK);            /* extern */
s32 func_020c1600(s8 *, s8 **, M2C_UNK);            /* extern */
u32 func_020e5e44();                                /* extern */

s32 func_020c165c(s8 *arg0, s32 *arg1) {
    s8 *sp0;
    s32 temp_r4;

    if (func_020e5e44() >= 0x12U) {
        func_020c15cc(0, 0);
    }
    sp0     = arg0;
    temp_r4 = func_020c1600(arg0, &sp0, 0x10);
    if (*sp0 != 0) {
        sp0 += 1;
    }
    if (arg1 != NULL) {
        *arg1 = func_020c15f4(sp0, &sp0, 0x10);
    }
    return temp_r4;
}
