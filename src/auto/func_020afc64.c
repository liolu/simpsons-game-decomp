#include "engine.h"
#include "m2c.h"

void func_020b10a0(M2C_UNK, M2C_UNK);

void func_020afc64(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        if (var_r4 != 0x14) {
            func_020b10a0(arg0 + 0x28C, var_r4);
        }
        var_r4 += 1;
    } while ((u32) var_r4 < 0x1AU);
}
