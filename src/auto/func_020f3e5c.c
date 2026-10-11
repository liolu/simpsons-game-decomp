#include "m2c.h"
#include "engine.h"

extern s32 data_02157cf0;

void func_020f3e5c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg2, s32 *, 0) = (s32) data_02157cf0;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    data_02157cf0 = arg2;
}
