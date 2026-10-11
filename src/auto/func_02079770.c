#include "m2c.h"
#include "engine.h"

void func_02079770(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + (arg1 * 4)), s32 *, 0x28) = 0;
}
