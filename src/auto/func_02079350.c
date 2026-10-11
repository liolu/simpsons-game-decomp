#include "m2c.h"

s32 func_02079350(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) != 3) {
        return 4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x12C) != 0) {
        return 0;
    }
    return 4;
}
