#include "m2c.h"
#include "engine.h"

void func_02088078(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r1;
    if (temp_r1 != 0x12C) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 4;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
