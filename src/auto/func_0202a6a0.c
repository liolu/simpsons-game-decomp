#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0210dc30;

void func_0202a6a0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210dc30;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s8 *, 0xC)     = 1;
    M2C_FIELD(arg0, s32 *, 0x10)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}
