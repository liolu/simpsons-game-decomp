/* compiler: 1.2/sp3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206208c(M2C_UNK);

s32 func_020621d4(s32 arg0) {
    s32 var_r5;
    u32 temp_r0;
    u32 var_r4;

    var_r4 = 0;
    var_r5 = 0;
    if (arg0 > 0) {
        do {
            temp_r0 = (var_r4 + func_0206208c(var_r5)) << 0x10;
            var_r5 += 1;
            var_r4 = temp_r0 >> 0x10;
        } while (var_r5 < arg0);
    }
    return (s32) var_r4;
}
