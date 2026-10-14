#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bb040(M2C_UNK);
M2C_UNK func_020c6700(void);

void func_020bd7c0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 != 0) && (func_020bb040(temp_r0) == 4)) {
        M2C_FIELD(arg0, s16 *, 0x60) = -1;
        M2C_FIELD(arg0, s8 *, 1)     = 6;
    }
    if (M2C_FIELD(arg0, s32 *, 0x94) == 0) {
        return;
    }
    if (func_020c6700() != 3) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x60) = -1;
    M2C_FIELD(arg0, s8 *, 1)     = 6;
}
