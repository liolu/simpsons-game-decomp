#include "m2c.h"
#include "engine.h"

s32 func_020b6244(s32 arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) <= 1U) {
        return 1;
    }
    return 0;
}
