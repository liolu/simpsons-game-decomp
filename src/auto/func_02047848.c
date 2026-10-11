#include "m2c.h"

M2C_UNK func_020e25a8(s32, s32, s32);               /* extern */

s32 func_02047848(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 4)) - arg1;
    func_020e25a8(arg1, arg1 + 4, (((s32) (temp_r1 + ((u32) (temp_r1 >> 1) >> 0x1E)) >> 2) - 1) * 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    return arg1;
}
