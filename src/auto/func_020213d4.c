#include "m2c.h"
#include "engine.h"

void func_02020a8c(M2C_UNK);

extern M2C_UNK data_0214a1c0;

void func_020213d4(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_02020a8c((s32) temp_r0);
    }
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 6;
}
