#include "m2c.h"
#include "engine.h"

void func_02010f2c(M2C_UNK);
void func_020116e0(M2C_UNK);
void func_020117b0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02010ea0(s32 arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_r3 != 0) {
        func_020117b0(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (s32) temp_r3);
    }
    func_020116e0(arg0 + 0x10);
    func_02010f2c(arg0);
}
