#include "m2c.h"

M2C_UNK func_0200f5e8(s32, void *, s32);            /* extern */

void *func_020b72f4(s32 arg0, void *arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 *, -4);
    func_0200f5e8(arg0 + 8, arg1, temp_r4);
    return arg1 + (temp_r4 & ~3);
}
