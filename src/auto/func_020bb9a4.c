#include "engine.h"
#include "m2c.h"

s32 func_020bb9a4(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    return 1;
}
