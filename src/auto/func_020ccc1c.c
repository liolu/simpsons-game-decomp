#include "engine.h"
#include "m2c.h"

void func_020ccc1c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 4)    = 0;
    M2C_FIELD(arg0, volatile s32 *, 0)    = (s32) M2C_FIELD(arg0, volatile s32 *, 4);
    M2C_FIELD(arg0, volatile s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, volatile s32 *, 8)    = (s32) M2C_FIELD(arg0, volatile s32 *, 0xC);
    M2C_FIELD(arg0, volatile s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = 0;
}
