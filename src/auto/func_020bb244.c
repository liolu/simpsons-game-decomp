#include "engine.h"
#include "m2c.h"

void func_020bb244(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = var_r1;
}
