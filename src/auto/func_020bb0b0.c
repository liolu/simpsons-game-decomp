#include "engine.h"
#include "m2c.h"

void func_020bb0b0(s32 arg0) {
    s8 var_r1;

    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        var_r1 = 3;
    } else {
        var_r1 = 2;
    }
    M2C_FIELD(arg0, s8 *, 1)     = var_r1;
    M2C_FIELD(arg0, s8 *, 2)     = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x4B)  = 1;
}
