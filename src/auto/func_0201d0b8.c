#include "m2c.h"

s32 func_02019f80();                                /* extern */
s32 func_0201a334();                                /* extern */
M2C_UNK func_0201a35c(M2C_UNK, s32);                /* extern */
s32 func_0201a6c8(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0201d088;

s32 func_0201d0b8(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_0201a334();
    if (var_r4 == 0) {
        var_r4 = func_0201a6c8(arg0, &func_0201d088, func_02019f80(), arg0, arg1);
        if (var_r4 != 0) {
            func_0201a35c(arg0, var_r4);
        }
    }
    return var_r4;
}
