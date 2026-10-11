#include "m2c.h"
#include "engine.h"

void func_02010bf8(M2C_UNK);
void func_0201146c(M2C_UNK);
void func_0201153c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02010b2c(s32 arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_r3 != 0) {
        func_0201153c(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (s32) temp_r3);
    }
    func_0201146c(arg0 + 0x10);
    func_02010bf8(arg0);
}
