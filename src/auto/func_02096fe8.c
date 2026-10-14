#include "engine.h"
#include "m2c.h"

void func_02096fe8(s32 arg0) {
    s32 temp_r1;

    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 4)(arg0);
}
