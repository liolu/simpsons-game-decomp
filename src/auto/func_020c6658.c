#include "m2c.h"

s32 func_020e2660(s32, M2C_UNK *, M2C_UNK);         /* extern */
extern M2C_UNK data_02136b7c;

s32 func_020c6658(s32 arg0, s32 arg1, s16 *arg2) {
    s32 temp_r7;
    s32 var_r8;
    s32 var_r9;

    temp_r7 = arg1 - 3;
    var_r8 = 0x7FFFFFFF;
    var_r9 = 0;
    if (temp_r7 > 0) {
loop_2:
        if (func_020e2660(arg0 + var_r9, &data_02136b7c, 4) == 0) {
            if (var_r9 >= 0x7FFFFFFF) {
                var_r9 = 0x7FFFFFFF;
            }
            var_r8 = var_r9;
        } else {
            var_r9 += 1;
            if (var_r9 < temp_r7) {
                goto loop_2;
            }
        }
    }
    if (var_r8 != 0x7FFFFFFF) {
        *arg2 = (s16) var_r8;
        return 0;
    }
    *arg2 = 0;
    return -1;
}
