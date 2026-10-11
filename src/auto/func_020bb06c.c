#include "m2c.h"

s32 func_020bb098(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020bb9d8();                            /* extern */
M2C_UNK func_020bb9e4();                            /* extern */

s32 func_020bb06c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;

    func_020bb9d8();
    temp_r4 = func_020bb098(arg0, arg1);
    func_020bb9e4();
    return temp_r4;
}
