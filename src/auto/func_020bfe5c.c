#include "m2c.h"
#include "engine.h"

void func_020bf860(M2C_UNK);

extern M2C_UNK data_02130f38;
extern M2C_UNK data_02130f54;

s32 func_020bfe5c(s32 arg0) {
    s32 (*temp_r1)(s32);
    s32 var_r4;

    if (arg0 == 0) {
        func_020bf860((s32) &data_02130f38);
        return 0;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(s32), 0x1C);
    if (temp_r1 != NULL) {
        var_r4 = temp_r1(M2C_FIELD(arg0, s32 *, 4));
    } else {
        var_r4 = 0;
        func_020bf860((s32) &data_02130f54);
    }
    return var_r4;
}
