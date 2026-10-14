#include "engine.h"
#include "m2c.h"

void func_020c9dc0(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02011f3c(s32 arg0) {
    u8 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        func_020c9dc0(6, 0, 0);
    } else {
        func_020c9dc0(2, 0, 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x50) = var_r0;
}
