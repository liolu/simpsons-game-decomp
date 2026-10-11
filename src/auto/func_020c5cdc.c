#include "m2c.h"
#include "engine.h"

void func_020c5cdc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
}
