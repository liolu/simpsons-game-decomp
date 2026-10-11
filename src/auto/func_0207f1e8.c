#include "m2c.h"
#include "engine.h"

void func_0207f1e8(s32 arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x54) + 1;
    M2C_FIELD(arg0, u32 *, 0x54) = temp_r1;
    if (temp_r1 < 0x12CU) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 4;
    M2C_FIELD(arg0, u32 *, 0x54) = 0U;
}
