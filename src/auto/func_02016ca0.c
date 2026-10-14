#include "engine.h"
#include "m2c.h"

void func_02016cd4(M2C_UNK);

void func_02016ca0(s32 arg0) {
    s32 var_r1;
    s32 var_r1_2;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x44) - M2C_FIELD(arg0, s32 *, 0x40);
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r1;
    var_r1_2                     = M2C_FIELD(arg0, s32 *, 0x3C) - M2C_FIELD(arg0, s32 *, 0x40);
    if (var_r1_2 < 0) {
        var_r1_2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_r1_2;
    func_02016cd4(arg0);
}
