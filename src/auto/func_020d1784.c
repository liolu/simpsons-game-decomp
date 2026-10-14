#include "engine.h"
#include "m2c.h"

void func_020d1784(s32 arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0)    = 0;
    M2C_FIELD(arg0, volatile s32 *, 4)    = (s32) M2C_FIELD(arg0, volatile s32 *, 0);
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x1C);
    M2C_FIELD(arg0, volatile s32 *, 8)    = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = 0xE;
    M2C_FIELD(arg0, volatile s32 *, 0xC)  = 0;
}
