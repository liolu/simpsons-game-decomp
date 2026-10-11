#include "m2c.h"
#include "engine.h"

s32 func_0201dda0(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xC) != 0) && (M2C_FIELD(arg0, s32 *, 8) != 3)) {
        M2C_FIELD(arg0, s32 *, 8) = 2;
    }
    return arg0;
}
