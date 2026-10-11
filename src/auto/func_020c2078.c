#include "m2c.h"
#include "engine.h"

s32 func_020c2078(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return (s32) ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1);
}
