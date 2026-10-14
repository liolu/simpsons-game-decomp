#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c14ec(M2C_UNK);

extern s32 data_0215301c;

s32 func_020c1560(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (data_0215301c == 0) {
        return -1;
    }
    temp_r0 = func_020c14ec(arg0);
    if (temp_r0 == 0) {
        return -3;
    }
    *(M2C_UNK *) arg1 = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
    return 0;
}
