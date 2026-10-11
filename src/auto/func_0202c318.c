#include "m2c.h"

s32 func_020c6eb4(s32);                             /* extern */
s32 func_020c9b44(s32, s32);                        /* extern */

s32 func_0202c318(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020c6eb4(M2C_FIELD(arg0, s32 *, 0x94));
    return func_020c9b44(temp_r4 << 0xC, func_020c9b44(0x64000, arg1 << 0xC)) >> 0xC;
}
