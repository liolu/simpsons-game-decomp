#include "engine.h"
#include "m2c.h"

void func_0204c37c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02071f9c(s32 arg0) {
    s32 temp_r0;

    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x40) + 1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
    if (temp_r0 != 5) {
        return;
    }
    func_0204c37c(arg0 + 0x30, 0, 0);
    M2C_FIELD(arg0, s8 *, 0x44) = 1;
}
