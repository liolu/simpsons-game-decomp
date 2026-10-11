#include "m2c.h"

s32 func_02019610();                                /* extern */

s32 func_0201d340(void) {
    s32 var_r0;

    var_r0 = func_02019610();
    if (var_r0 <= -1) {
        var_r0 = 0x1F;
    }
    return var_r0;
}
