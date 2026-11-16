/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02067244(void *arg0) {
    s32 var_r2;
    void *temp_r1;

    var_r2 = 0;
loop_1:
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x88) + (var_r2 * 4);
    if ((M2C_FIELD(temp_r1, s32 *, 0x28) != 0) && (M2C_FIELD(M2C_FIELD(temp_r1, void **, 0x14), s32 *, 0x50) & 1)) {
        return 1;
    }
    var_r2 += 1;
    if (var_r2 >= 2) {
        return 0;
    }
    goto loop_1;
}
