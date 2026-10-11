#include "m2c.h"
#include "engine.h"

s32 func_020ab42c(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2B4) != 0) {
        return 1;
    }
    return 0;
}
