#include "engine.h"
#include "m2c.h"

extern s32 data_021570b0;

void func_020de9c0(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = data_021570b0;
    if (var_r2 == 0) {
        data_021570b0 = arg0;
    } else {
        var_r1 = M2C_FIELD(var_r2, s32 *, 0x4BC);
        if (var_r1 != 0) {
            do {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, s32 *, 0x4BC);
            } while (var_r1 != 0);
        }
        M2C_FIELD(var_r2, s32 *, 0x4BC) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}
