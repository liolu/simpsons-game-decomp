#include "engine.h"
#include "m2c.h"

s32 func_020bb098(s32 arg0, s32 arg1) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x18);
    if (arg1 > temp_r2) {
        M2C_FIELD(arg0, s32 *, 0x5C) = temp_r2;
    }
    return M2C_FIELD(arg0, s32 *, 0x5C);
}
