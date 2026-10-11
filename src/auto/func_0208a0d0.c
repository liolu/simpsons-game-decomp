#include "m2c.h"
#include "engine.h"

s32 func_0208a0d0(s32 arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    return var_r0;
}
