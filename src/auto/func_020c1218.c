/* compiler: 2.0/sp1p5 -O4,s */
#include "engine.h"
#include "m2c.h"

void func_020c28f4(M2C_UNK);

void func_020c1218(s32 arg0) {
    s32 var_r4;
    s8 var_r5;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, s8 *, 4) == 1) && (M2C_FIELD(arg0, s8 *, 3) == 1) && (M2C_FIELD(arg0, s8 *, 2) == 2)) {
        var_r5 = 2;
    } else {
        var_r5 = M2C_FIELD(arg0, s8 *, 3);
    }
    if ((s32) var_r5 <= 0) {
        return;
    }
    do {
        func_020c28f4(M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x30));
        var_r4 += 1;
    } while (var_r4 < (s32) var_r5);
}
