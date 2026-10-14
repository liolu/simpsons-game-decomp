#include "engine.h"
#include "m2c.h"

void func_020eef0c(s32 arg0, s32 arg1) {
    s8 var_r3;

    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    var_r3                       = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2E)  = 1;
    if (arg1 == 0) {
        var_r3 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x2E)  = var_r3;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0x1002;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 6;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
