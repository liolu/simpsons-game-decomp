#include "m2c.h"
#include "engine.h"

void func_02012ec8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg3;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
