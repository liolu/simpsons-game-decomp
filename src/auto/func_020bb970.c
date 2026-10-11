#include "m2c.h"

s32 func_020bb9a4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020bb9d8();                            /* extern */
M2C_UNK func_020bb9e4();                            /* extern */

s32 func_020bb970(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    func_020bb9d8();
    temp_r4 = func_020bb9a4(arg0, arg1, arg2);
    func_020bb9e4();
    return temp_r4;
}
