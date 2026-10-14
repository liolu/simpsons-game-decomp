#include "engine.h"
#include "m2c.h"

void func_02066e7c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x88) + (arg1 * 4)), s32 *, 0x28) = 0;
}
