#include "m2c.h"
#include "engine.h"

extern s32 data_02144e70;

void func_02013804(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = *(M2C_UNK *)arg1;
    *(M2C_UNK *)arg1 = 0;
    data_02144e70 = temp_r3;
}
