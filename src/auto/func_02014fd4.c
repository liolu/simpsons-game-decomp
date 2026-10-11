#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0212d51c;

void func_02014fd4(void) {
    s32 var_r2;
    s32 var_r3;

    var_r2 = 0;
    if ((s32) M2C_FIELD(&data_0212d51c, s32 *, 4) <= 0) {
        return;
    }
    var_r3 = 0;
    do {
        M2C_FIELD((M2C_FIELD(&data_0212d51c, s32 *, 0) + var_r3), s32 *, 0xC) = var_r2;
        var_r2 += 1;
        var_r3 += 0x18;
    } while (var_r2 < (s32) M2C_FIELD(&data_0212d51c, s32 *, 4));
}
