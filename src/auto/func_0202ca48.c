#include "m2c.h"
#include "engine.h"

s32 func_0202ca48(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_lr;

    var_lr = 1;
    if ((arg2 & 8) && (M2C_FIELD(arg0, s16 *, 0) != M2C_FIELD(arg1, s16 *, 0))) {
        var_lr = 0;
    }
    if ((arg2 & 4) && (M2C_FIELD(arg0, s8 *, 2) != M2C_FIELD(arg1, s8 *, 2))) {
        var_lr = 0;
    }
    if ((arg2 & 2) && (M2C_FIELD(arg0, s8 *, 3) != M2C_FIELD(arg1, s8 *, 3))) {
        var_lr = 0;
    }
    if ((arg2 & 1) && (M2C_FIELD(arg0, s8 *, 4) != M2C_FIELD(arg1, s8 *, 4))) {
        var_lr = 0;
    }
    if ((arg2 & 0x10) && (M2C_FIELD(arg0, s8 *, 5) != M2C_FIELD(arg1, s8 *, 5))) {
        var_lr = 0;
    }
    return var_lr;
}
