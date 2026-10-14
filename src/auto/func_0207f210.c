#include "engine.h"
#include "m2c.h"

void func_0207f210(s32 arg0) {
    u32 temp_r1;

    temp_r1                      = M2C_FIELD(arg0, u32 *, 0x58) + 1;
    M2C_FIELD(arg0, u32 *, 0x58) = temp_r1;
    if (temp_r1 < 0x12CU) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 4;
    M2C_FIELD(arg0, u32 *, 0x58) = 0U;
}
