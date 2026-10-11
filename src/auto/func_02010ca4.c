#include "m2c.h"

s32 func_02010ca4(void *arg0, void *arg1) {
    s32 var_r2;

    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, void **, 4) = arg1;
        M2C_FIELD(arg1, s32 *, 8) = 0;
        M2C_FIELD(arg1, s32 *, 0xC) = 0;
    }
    return var_r2;
}
