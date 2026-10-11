#include "m2c.h"
#include "engine.h"

s32 func_020abe70(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xB8);
    var_r0 = 1;
    if ((temp_r1 != 0x3E) && (temp_r1 != 0x3F)) {
        var_r0 = 0;
    }
    return var_r0;
}
