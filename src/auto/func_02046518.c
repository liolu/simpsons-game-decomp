#include "engine.h"
#include "m2c.h"

void func_02046518(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
