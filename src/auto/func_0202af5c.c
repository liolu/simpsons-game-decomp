/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_0202af5c(s32 arg0, s8 arg1) {
    s32 var_r3;
    void *temp_r2;

    var_r3 = 0;
    do {
        temp_r2 = M2C_FIELD((arg0 + (var_r3 * 4)), void **, 0x14);
        var_r3 += 1;
        M2C_FIELD(temp_r2, s8 *, 0x78) = arg1;
    } while (var_r3 < 2);
}
