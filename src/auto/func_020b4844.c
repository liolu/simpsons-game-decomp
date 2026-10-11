#include "m2c.h"
#include "engine.h"

M2C_UNK func_0202cabc(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020b6270(M2C_UNK);

extern s32 data_0214d4c4;

s32 func_020b4844(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;

    if (func_020b6270(data_0214d4c4 + 0x48) != 0) {
        temp_r1 = *(M2C_UNK *)arg0;
        if (func_0202cabc((arg1 * 0x30) + temp_r1 + 0x18, (arg2 * 0x30) + temp_r1 + 0x18, 0x13) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    temp_r2 = *(M2C_UNK *)arg0;
    if (M2C_FIELD(((arg1 * 0x30) + temp_r2), s32 *, 4) == M2C_FIELD(((arg2 * 0x30) + temp_r2), s32 *, 4)) {
        return 1;
    }
    return 0;
}
