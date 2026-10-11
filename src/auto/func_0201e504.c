#include "m2c.h"
#include "engine.h"

s32 func_0201e504(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = 0;
    var_r2 = 0;
    do {
        if (M2C_FIELD(arg0, u16 *, 0xE) & (1 << var_r2)) {
            var_r0 = var_r2;
        }
        var_r2 += 1;
    } while (var_r2 < 0x10);
    return var_r0;
}
