#include "m2c.h"
#include "engine.h"

void func_020286cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10)), s32 *, 0x14) = (s32) *(M2C_UNK *)arg1;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10)), s32 *, 0x18) = arg2;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10)), s32 *, 0x1C) = arg3;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x10) * 0x10)), s32 *, 0x20) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
}
