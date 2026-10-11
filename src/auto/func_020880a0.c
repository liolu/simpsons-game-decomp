#include "m2c.h"
#include "engine.h"

void func_020880a0(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30) + 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r1;
    if (temp_r1 != 0x12C) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 4;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
