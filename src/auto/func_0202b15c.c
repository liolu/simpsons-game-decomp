#include "m2c.h"
#include "engine.h"

M2C_UNK func_0202b624(M2C_UNK);

extern M2C_UNK data_0214ca40;

void func_0202b15c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0202b624((s32) &data_0214ca40);
    if (temp_r0 != 0) {
        *(M2C_UNK *)temp_r0 = arg0;
    }
}
