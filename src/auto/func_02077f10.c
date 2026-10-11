#include "m2c.h"

s32 func_02077f10(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 1) {
        return 6;
    }
    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        return 6;
    }
    M2C_FIELD(arg0, s8 *, 0x1CA) = 1;
    return 2;
}
