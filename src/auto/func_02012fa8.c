#include "engine.h"
#include "m2c.h"

void func_02012fa8(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                   = *(M2C_UNK *) arg1;
    M2C_FIELD(arg0, s32 *, 0) = temp_r1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r1 + 4);
}
