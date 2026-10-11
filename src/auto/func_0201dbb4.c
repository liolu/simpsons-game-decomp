#include "m2c.h"

s32 func_020c9b44(s32, M2C_UNK);                    /* extern */

s32 func_0201dbb4(s32 arg0, s32 *arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = (0 - func_020c9b44(*arg1, 0x3F000)) * 0x3F;
    var_r0 = temp_r0 >> 0xC;
    if ((s32) (temp_r0 >> 0xC) <= -0x3F) {
        var_r0 = -0x3F;
    }
    if (var_r0 > 0x3F) {
        var_r0 = 0x3F;
    }
    return var_r0;
}
