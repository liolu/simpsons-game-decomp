#include "engine.h"
#include "m2c.h"

void func_02056908(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x78)  = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s8 *, 0x80)  = (s8) arg2;
}
