#include "m2c.h"

M2C_UNK func_0204c37c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0205761c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02074a78();                            /* extern */
extern M2C_UNK data_0212102c;

void func_020749a4(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 4) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1DC) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == 0) {
        func_02074a78(arg0);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1CA) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 2;
    func_0204c37c(arg0 + 0x1CC, 0, 0);
    func_0205761c(arg0 + 0x1C, *((M2C_UNK *) ((s8 *) &data_0212102c + (M2C_FIELD(arg0, s32 *, 0x1C4) * 4))), 0);
}
