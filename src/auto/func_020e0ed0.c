#include "m2c.h"
#include "engine.h"

s32 func_020e0ed0(s32 arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
