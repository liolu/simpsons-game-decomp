#include "m2c.h"
#include "engine.h"

void func_02046ac4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xC) = 0;
}
