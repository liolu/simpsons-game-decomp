#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201dda0(M2C_UNK);
void func_0202ecb8(M2C_UNK, M2C_UNK);

void func_02061a84(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1C8);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1CC) = temp_r1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x1C) = 0;
        func_0202ecb8(arg0 + 0x40, 0);
        M2C_FIELD(arg0, s32 *, 0x1C4) = 2;
        return;
    }
    func_0201dda0(arg0);
}
