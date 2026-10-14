#include "m2c.h"

s32 func_02077f3c(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 2) {
        return 6;
    }
    var_r1                       = 0;
    M2C_FIELD(arg0, s8 *, 0x1CA) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x12C) == 0) {
        var_r1 = 6;
    }
    return var_r1;
}
