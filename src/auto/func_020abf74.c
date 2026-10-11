#include "m2c.h"

M2C_UNK func_020aba18(void *, M2C_UNK);             /* extern */
s32 func_020abd54();                                /* extern */

s32 func_020abf74(void *arg0) {
    s32 temp_r0;

    if (func_020abd54() == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0 != 0x2C) && (temp_r0 != 0x2F) && (temp_r0 != 0x32) && (temp_r0 != 0x3D)) {
            return 0;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x2C0) = 1;
    func_020aba18(arg0, 8);
    return 1;
}
