#include "engine.h"
#include "m2c.h"

s32 func_020c8060(s32 arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r2_2;

    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg1;
    temp_r2                              = M2C_FIELD(arg0, volatile s32 *, 0xC);
    M2C_FIELD(arg0, volatile s32 *, 4) =
        (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x28) - M2C_FIELD(temp_r2, volatile s32 *, 0x24));
    temp_r2_2 = M2C_FIELD(arg0, volatile s32 *, 0xC);
    M2C_FIELD(arg0, volatile s32 *, 8) =
        (s32) (M2C_FIELD(temp_r2_2, volatile s32 *, 0x2C) - M2C_FIELD(temp_r2_2, volatile s32 *, 0x24));
    M2C_FIELD(arg0, volatile s8 *, 0x10) = 0;
    return 1;
}
