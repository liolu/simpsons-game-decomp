#include "engine.h"
#include "m2c.h"

M2C_UNK func_020d131c(M2C_UNK);

void func_020c7ef4(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_020d131c(M2C_FIELD(arg0, s32 *, 0xC));
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
