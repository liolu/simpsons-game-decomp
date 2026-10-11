#include "m2c.h"

void func_0204d418(void *arg0) {
    u32 var_r3;
    void *temp_r1;

    var_r3 = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    do {
        temp_r1 = arg0 + var_r3;
        var_r3 += 1;
        M2C_FIELD(temp_r1, s8 *, 1) = 0;
    } while (var_r3 < 2U);
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
}
