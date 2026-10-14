#include "m2c.h"

s32 func_0202dc54(s8 *arg0) {
    s32 temp_r2;
    s32 var_r4;
    s8 *var_r0;
    s8 var_r3;

    var_r0 = arg0;
    var_r4 = 0;
    if (var_r0 == NULL) {
        return -1;
    }
    var_r3 = *var_r0;
    if (var_r3 != 0) {
    loop_3:
        if (var_r3 == 0x2A) {
            var_r4 ^= func_0202dc54(var_r0 + 1);
        } else {
            temp_r2 = var_r3 & 0x5F;
            var_r0 += 1;
            var_r3 = *var_r0;
            var_r4 = temp_r2 + (var_r4 * 0x1F);
            if (var_r3 != 0) {
                goto loop_3;
            }
        }
    }
    return var_r4;
}
