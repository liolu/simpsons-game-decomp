#include "m2c.h"

M2C_UNK func_0204c37c(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02072354(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == arg1) {
        return;
    }
    if (arg2 == 0) {
        func_0204c37c(arg0 + 0x1C4, 0, 0);
    } else if (arg2 == 1) {
        M2C_FIELD(arg0, s8 *, 0x1DC) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C0) = arg1;
}
