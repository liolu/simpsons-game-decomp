#include "engine.h"
#include "m2c.h"

s32 func_020c101c(s32 arg0) {
    if (arg0 == 0) {
        return -1;
    }
    if (M2C_FIELD(arg0, s8 *, 1) & 2) {
        return 1;
    }
    return 0;
}
