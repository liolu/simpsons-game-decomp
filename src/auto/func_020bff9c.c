#include "m2c.h"
#include "engine.h"

void func_020bf860(M2C_UNK);

extern M2C_UNK data_02130fd4;
extern M2C_UNK data_02130ff0;

s32 func_020bff9c(s32 arg0) {
    s32 (*temp_r1)(s32);
    s32 var_r4;

    var_r4 = 3;
    if (arg0 == 0) {
        func_020bf860((s32) &data_02130fd4);
        return 3;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(s32), 0x2C);
    if (temp_r1 != NULL) {
        var_r4 = temp_r1(M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_020bf860((s32) &data_02130ff0);
    }
    return var_r4;
}
