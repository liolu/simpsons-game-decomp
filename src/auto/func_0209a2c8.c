#include "m2c.h"
#include "engine.h"

void func_0209a2c8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x94) + (arg1 * 0x10);
    M2C_FIELD(temp_r1, s32 *, 0xA8) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 0xAC) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 0xB0) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r1, s32 *, 0xB4) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
}
