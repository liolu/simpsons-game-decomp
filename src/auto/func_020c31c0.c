#include "m2c.h"
#include "engine.h"

s32 func_020c31c0(s32 arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x1A5) == 0) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x1F0);
}
