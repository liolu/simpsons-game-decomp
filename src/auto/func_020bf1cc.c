#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02152054;

void func_020bf1cc(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02152054, s32 *, 8) = arg0;
    M2C_FIELD(&data_02152054, s32 *, 4) = arg1;
}
