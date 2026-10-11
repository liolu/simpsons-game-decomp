#include "m2c.h"
#include "engine.h"

void func_0200f478(M2C_UNK);

extern M2C_UNK data_0214c918;

void func_02022914(void) {
    if (M2C_FIELD(&data_0214c918, s32 *, 0x1C) != 0) {
        func_0200f478(M2C_FIELD(&data_0214c918, s32 *, 0x1C));
        M2C_FIELD(&data_0214c918, s32 *, 0x1C) = 0;
    }
    if (M2C_FIELD(&data_0214c918, s32 *, 8) != 0) {
        func_0200f478(M2C_FIELD(&data_0214c918, s32 *, 8));
        M2C_FIELD(&data_0214c918, s32 *, 8) = 0;
    }
    if (M2C_FIELD(&data_0214c918, s32 *, 0xC) != 0) {
        func_0200f478(M2C_FIELD(&data_0214c918, s32 *, 0xC));
        M2C_FIELD(&data_0214c918, s32 *, 0xC) = 0;
    }
    M2C_FIELD(&data_0214c918, s32 *, 4) = 0;
}
