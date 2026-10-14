#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02153020;

void func_020c170c(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02153020, s32 *, 4) = arg0;
    M2C_FIELD(&data_02153020, s32 *, 0) = arg1;
}
