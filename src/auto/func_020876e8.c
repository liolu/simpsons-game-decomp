#include "m2c.h"
#include "engine.h"

void func_020876e8(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = 1;
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) arg1;
}
