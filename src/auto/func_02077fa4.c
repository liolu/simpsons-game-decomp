#include "m2c.h"

M2C_UNK func_0201dda0();                            /* extern */

s32 func_02077fa4(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 5) {
        return 6;
    }
    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return 5;
    }
    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x1CC) - 1;
    M2C_FIELD(arg0, s32 *, 0x1CC) = temp_r1;
    if (temp_r1 == 0) {
        func_0201dda0();
    }
    return 5;
}
