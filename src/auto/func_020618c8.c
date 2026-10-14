#include "engine.h"
#include "m2c.h"

s32 func_020618c8(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1CC) == 0) && (M2C_FIELD(arg0, s32 *, 0x1D0) == 0)) {
        return 1;
    }
    return 0;
}
