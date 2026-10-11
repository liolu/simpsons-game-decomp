#include "m2c.h"

M2C_UNK func_0204c37c(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_020792ac(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) != 1) {
        return 4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x12C) != 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E4), s32 *, 0x2F4) == 0) {
            return 3;
        }
        func_0204c37c(arg0 + 0x1C8, 0, 0);
        return 2;
    }
    return 4;
}
