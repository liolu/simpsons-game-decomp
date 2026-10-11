#include "m2c.h"
#include "engine.h"

void func_020bf860(M2C_UNK);

extern M2C_UNK data_021310a0;

s32 func_020c00b0(s32 arg0) {
    s32 (*temp_ip)(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 var_r2;

    if (arg0 == 0) {
        func_020bf860((s32) &data_021310a0);
        return -1;
    }
    var_r2 = 0x7FFFFFFF;
    temp_ip = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x60);
    if (temp_ip != NULL) {
        var_r2 = temp_ip(M2C_FIELD(arg0, s32 *, 4), 0x12C, 0, 0);
    }
    return var_r2;
}
