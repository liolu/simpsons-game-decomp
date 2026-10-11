#include "m2c.h"

M2C_UNK func_020b75e8();                            /* extern */
s32 func_020b772c(M2C_UNK, u16 *, M2C_UNK);         /* extern */

s32 func_020b7ad8(M2C_UNK arg0, u16 *arg1, M2C_UNK arg2) {
    u16 temp_r0;

    func_020b75e8();
    temp_r0 = *arg1;
    if ((u16) (s16) ((u8) ((s32) temp_r0 >> 8) | ((temp_r0 << 8) & 0xFF00)) != 0x8000) {
        return -1;
    }
    return func_020b772c(arg0, arg1, arg2);
}
