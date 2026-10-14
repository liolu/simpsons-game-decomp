#include "engine.h"
#include "m2c.h"

M2C_UNK func_02066278(M2C_UNK, M2C_UNK);

void func_02066244(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (M2C_FIELD(var_r1, s32 *, 8) != 0) {
        var_r1 = func_02066278(var_r1 + 4, 0);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) * (M2C_UNK *) var_r1;
}
