#include "m2c.h"
#include "engine.h"

void func_02011260(M2C_UNK);
void func_02011954(M2C_UNK);
void func_02011a24(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020111d4(s32 arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_r3 != 0) {
        func_02011a24(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (s32) temp_r3);
    }
    func_02011954(arg0 + 0x10);
    func_02011260(arg0);
}
