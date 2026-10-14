#include "engine.h"
#include "m2c.h"

s32 func_02012c24(s32 arg0, s32 arg1) {
    return arg0 + M2C_FIELD((arg0 + (arg1 * 2)), u16 *, 2);
}
