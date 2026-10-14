#include "engine.h"
#include "m2c.h"

void func_02020a28(M2C_UNK);
void func_02020a8c(M2C_UNK);

extern M2C_UNK data_0214a1c0;

void func_0202132c(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if ((temp_r0 != 0) && (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 8)) {
        func_02020a8c((s32) temp_r0);
        return;
    }
    func_02020a28(1);
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 8;
}
