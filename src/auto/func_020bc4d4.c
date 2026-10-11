#include "m2c.h"

M2C_UNK func_020b824c();                            /* extern */
M2C_UNK func_020b8250();                            /* extern */
s32 func_020bc4f8(M2C_UNK);                         /* extern */

s32 func_020bc4d4(M2C_UNK arg0) {
    s32 temp_r4;

    func_020b824c();
    temp_r4 = func_020bc4f8(arg0);
    func_020b8250();
    return temp_r4;
}
