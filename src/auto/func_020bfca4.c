/* compiler: 1.2/sp2p3 -O4,s */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021529bc;

s32 func_020bfca4(void) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_021529bc + (var_r2 * 8))), s32 *, 4) != 0) {
        var_r2 += 1;
        if (var_r2 < 0xA) {
            goto loop_1;
        }
    }
    if (var_r2 == 0xA) {
        return 0;
    }
    return (s32) ((M2C_UNK *) ((s8 *) &data_021529bc + (var_r2 * 8)));
}
