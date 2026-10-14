#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202c41c(M2C_UNK, M2C_UNK);
M2C_UNK func_020483c4(void);
M2C_UNK func_0209a0b0(M2C_UNK);

extern M2C_UNK data_020feda4;

void func_020b42d0(s32 arg0) {
    if ((func_020483c4() != 0) && (func_0209a0b0(func_020483c4()) != 0)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A) != 0) {
        if (((s32) M2C_FIELD(arg0, s8 *, 0x17) <= 0) && ((s32) M2C_FIELD(arg0, s8 *, 0x18) <= 0)) {
            return;
        }
        func_0202c41c(arg0 + 0x14, (s32) &data_020feda4);
        M2C_FIELD(arg0, u8 *, 0x1A) = 0U;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x1A) = 1U;
}
