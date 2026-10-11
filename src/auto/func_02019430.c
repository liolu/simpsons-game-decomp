#include "m2c.h"

M2C_UNK func_020199d8(s32, M2C_UNK);                /* extern */
s32 func_020c80c8(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_021484a0;

void func_02019430(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r6;

    var_r6 = func_020c80c8(&data_021484a0, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = func_020c80c8(&data_021484a0, var_r6);
        func_020199d8(var_r6, arg0);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
