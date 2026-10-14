#include "m2c.h"

s32 func_02017d84(M2C_UNK, s32);                    /* extern */
M2C_UNK func_020575ac(s32);                         /* extern */
M2C_UNK func_0205761c(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK data_0211e2f8;

void func_0206201c(void *arg0) {
    s32 temp_r1;

    func_020575ac(arg0 + 0x1C);
    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x1C0) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C0) = temp_r1;
    if (temp_r1 == M2C_FIELD(arg0, s32 *, 0x1C4)) {
        func_0205761c(arg0 + 0x1C, *((M2C_UNK *) ((s8 *) &data_0211e2f8 + (M2C_FIELD(arg0, s32 *, 0x1C8) * 0x14))), 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C0) = func_02017d84(0, M2C_FIELD(arg0, s32 *, 0x1C4) - 1);
}
