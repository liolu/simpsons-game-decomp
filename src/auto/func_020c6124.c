#include "m2c.h"

M2C_UNK func_020e25f4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020c6124(void *arg0, void **arg1) {
    s32 temp_r1;
    s32 temp_r6;

    if (arg0 == NULL) {
        return;
    }
    func_020e25f4(arg0, 0, 0x2C);
    M2C_FIELD(arg0, void ***, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r6                      = M2C_FIELD(*arg1, s32(**)(void **, M2C_UNK), 0x24)(arg1, 1);
    temp_r1                      = temp_r6 + M2C_FIELD(*arg1, s32(**)(void **, M2C_UNK), 0x24)(arg1, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) (temp_r1 + ((u32) (temp_r1 >> 1) >> 0x1E)) >> 2);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 1;
}
