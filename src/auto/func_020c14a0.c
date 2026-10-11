#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02152f10;

void func_020c14a0(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02152f10, s32 *, 0) = arg0;
    M2C_FIELD(&data_02152f10, s32 *, 4) = arg1;
}
