#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012ca0(M2C_UNK);

s32 func_02012ca8(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r1;
    s32 var_r2;
    u8 temp_r0_2;

    var_r2  = func_02012ca0(arg0) + 2;
    temp_r0 = var_r2 & 3;
    if (temp_r0 != 0) {
        var_r2 += 4 - temp_r0;
    }
    var_r1 = 0;
    if (arg1 > 0) {
        do {
            temp_r0_2 = M2C_FIELD((arg0 + var_r1), u8 *, 2);
            var_r1 += 1;
            var_r2 += temp_r0_2;
        } while (var_r1 < arg1);
    }
    return arg0 + var_r2;
}
