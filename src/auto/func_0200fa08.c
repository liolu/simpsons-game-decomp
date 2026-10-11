#include "m2c.h"
#include "engine.h"

void func_0200fa94(M2C_UNK);
void func_0200fca0(M2C_UNK);
void func_0200fd70(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_0200fa08(s32 arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_r3 != 0) {
        func_0200fd70(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (s32) temp_r3);
    }
    func_0200fca0(arg0 + 0x10);
    func_0200fa94(arg0);
}
