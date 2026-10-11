#include "m2c.h"

s32 func_020bdec4(M2C_UNK);                         /* extern */
M2C_UNK func_020be940();                            /* extern */
M2C_UNK func_020be94c();                            /* extern */

s32 func_020bdea0(M2C_UNK arg0) {
    s32 temp_r4;

    func_020be940();
    temp_r4 = func_020bdec4(arg0);
    func_020be94c();
    return temp_r4;
}
