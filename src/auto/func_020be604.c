#include "m2c.h"

s32 func_020be640(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020be940();                            /* extern */
M2C_UNK func_020be94c();                            /* extern */

s32 func_020be604(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    func_020be940();
    temp_r4 = func_020be640(arg0, arg1, arg2, arg3);
    func_020be94c();
    return temp_r4;
}
