#include "m2c.h"
#include "engine.h"

void func_0204578c(s32 arg0, s32 arg1) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u8 *, 0x84) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x84) = (u8) arg1;
    temp_r3 = (M2C_FIELD(arg0, s32 *, 0x60) * 0xA) + (arg0 + 0x2C);
    if (M2C_FIELD(temp_r3, s16 *, 2) != (0 - M2C_FIELD(temp_r3, s16 *, 4))) {
        M2C_FIELD(arg0, s8 *, 0x86) = 1;
    }
}
