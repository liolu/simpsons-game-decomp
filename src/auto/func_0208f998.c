#include "engine.h"
#include "m2c.h"

s32 func_0208f998(s32 arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x2CC) - 0x10) <= 3U) {
        return 1;
    }
    return 0;
}
