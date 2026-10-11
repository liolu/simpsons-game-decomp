#include "m2c.h"

s32 func_020c8388(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_021539ec;

M2C_UNK *func_020c8360(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4 = &data_021539ec;
    temp_r0 = func_020c8388(&data_021539ec, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
