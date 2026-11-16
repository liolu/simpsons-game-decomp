/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020c6d28(s32);                         /* extern */

void func_0202c18c(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_020c6d28(M2C_FIELD((arg0 + (var_r4 * 4)), s32 *, 0x94));
        var_r4 += 1;
    } while (var_r4 < 2);
}
