#include "m2c.h"
#include "engine.h"

void func_020298d8(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = *(M2C_UNK *)arg1;
    *(M2C_UNK *)arg1 = (s32) (temp_r3 + 2);
    *(M2C_UNK *)arg0 = temp_r3;
}
