#include "m2c.h"
#include "engine.h"

s32 func_020b1cbc(s32 arg0) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x23C);
    M2C_FIELD(arg0, u8 *, 0x23C) = 0U;
    return (s32) temp_r2;
}
