#include "m2c.h"
#include "engine.h"

void func_0204c37c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02050130(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    func_0204c37c(arg0 + 0x20, 0, 0);
    M2C_FIELD(arg0, s16 *, 0x3C) = 0xA;
}
