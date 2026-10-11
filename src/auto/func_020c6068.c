#include "m2c.h"

M2C_UNK func_020e25f4(s32, M2C_UNK, M2C_UNK);       /* extern */

s32 func_020c6068(void **arg0, s32 arg1, u32 arg2) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r6;

    if (arg2 < 0x34U) {
        return 0;
    }
    temp_r4 = (arg1 + 7) & ~7;
    func_020e25f4(temp_r4, 0, 0x2C);
    M2C_FIELD(temp_r4, void ***, 4) = arg0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    temp_r6 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0x24)(arg0, 1);
    temp_r1 = temp_r6 + M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0x24)(arg0, 0);
    M2C_FIELD(temp_r4, s32 *, 0x14) = temp_r1;
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) ((s32) (temp_r1 + ((u32) (temp_r1 >> 1) >> 0x1E)) >> 2);
    M2C_FIELD(temp_r4, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x28) = 0;
    M2C_FIELD(temp_r4, s32 *, 0) = 1;
    return temp_r4;
}
