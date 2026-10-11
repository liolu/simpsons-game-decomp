#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214a1c0;

s32 func_020218ac(void) {
    s32 var_r0;

    var_r0 = 1;
    if ((M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 4) && (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 5)) {
        var_r0 = 0;
    }
    return var_r0;
}
