#include "m2c.h"
#include "engine.h"

void func_02047e3c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0xC8) = arg2;
}
