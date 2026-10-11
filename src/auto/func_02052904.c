#include "m2c.h"
#include "engine.h"

s32 func_02052904(s32 arg0) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x13);
    M2C_FIELD(arg0, u8 *, 0x13) = 0U;
    return (s32) temp_r2;
}
