#include "engine.h"
#include "m2c.h"

s32 func_020142e0(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s32 *, 8) != 1) {
        var_r0 = M2C_FIELD(var_r0, s32 *, 0);
    }
    return var_r0 + (arg1 * 4);
}
