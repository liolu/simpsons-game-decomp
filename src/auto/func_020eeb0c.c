#include "m2c.h"

s32 func_020eeac8(s32);                             /* extern */

s32 func_020eeb0c(u32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;

    temp_r0_2 = arg0 | (arg0 >> 1);
    temp_r0_3 = temp_r0_2 | (temp_r0_2 >> 2);
    temp_r0_4 = temp_r0_3 | (temp_r0_3 >> 4);
    temp_r0   = temp_r0_4 | (temp_r0_4 >> 8);
    return 0x20 - func_020eeac8(temp_r0 | (temp_r0 >> 0x10));
}
