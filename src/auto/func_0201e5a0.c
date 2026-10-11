#include "m2c.h"

s32 func_0201e5a0(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r3 = 0;
    var_r0 = 0;
loop_1:
    if (M2C_FIELD(arg0, u16 *, 0xE) & (1 << var_r0)) {
        var_r3 += 1;
    }
    if (var_r3 == (arg1 + 1)) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x10) {
        return 0;
    }
    goto loop_1;
}
