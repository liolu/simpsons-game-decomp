#include "m2c.h"

M2C_UNK func_020e25f4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 data_021538f8;
extern s32 data_021538fc;

void *func_020c572c(void *arg0, M2C_UNK arg1) {
    func_020e25f4(arg0, 0, arg1);
    M2C_FIELD(arg0, s32 *, 8) = 0x40;
    M2C_FIELD(arg0, s32 *, 4) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) data_021538f8;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) data_021538fc;
    M2C_FIELD(arg0, s8 *, 0) = 1;
    return arg0;
}
