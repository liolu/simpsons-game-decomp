#include "m2c.h"

s32 func_020bfadc();                                /* extern */
s32 func_020c029c(s32);                             /* extern */
M2C_UNK func_020e499c(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_020e5e60(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_021311c4;
extern M2C_UNK data_02152a0c;

void func_020c02d4(s32 arg0, M2C_UNK arg1) {
    s32 var_r5;

    var_r5 = arg0;
    if (var_r5 == 0) {
        var_r5 = func_020bfadc();
    }
    if (func_020c029c(var_r5) != 1) {
        return;
    }
    func_020e5e60(&data_02152a0c, arg1);
    func_020e499c(arg1, &data_021311c4, var_r5, &data_02152a0c);
}
