#include "m2c.h"
#include "engine.h"

M2C_UNK func_020620c8(M2C_UNK, M2C_UNK);
M2C_UNK func_020621d4(M2C_UNK);

s32 func_02062214(s32 arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r5;
    u32 temp_r0;

    var_r4 = func_020621d4(arg0);
    var_r5 = 0;
    if (arg1 > 0) {
        do {
            temp_r0 = (var_r4 + func_020620c8(arg0, var_r5)) << 0x10;
            var_r5 += 1;
            var_r4 = (s32) (temp_r0 >> 0x10);
        } while (var_r5 < arg1);
    }
    return var_r4;
}
