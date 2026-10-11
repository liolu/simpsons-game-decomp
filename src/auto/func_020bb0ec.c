#include "m2c.h"

s32 func_020bb110(M2C_UNK);                         /* extern */
M2C_UNK func_020bb9d8();                            /* extern */
M2C_UNK func_020bb9e4();                            /* extern */

s32 func_020bb0ec(M2C_UNK arg0) {
    s32 temp_r4;

    func_020bb9d8();
    temp_r4 = func_020bb110(arg0);
    func_020bb9e4();
    return temp_r4;
}
