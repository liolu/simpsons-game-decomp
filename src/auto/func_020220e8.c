/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210d6cc;
extern M2C_UNK data_0214ab60;

void func_020220e8(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 var_r7;

    var_r7 = 0;
    do {
        temp_r1 = (var_r7 * 0xC4) + (s32) &data_0214ab60;
        temp_r0 = M2C_FIELD(temp_r1, s32 *, 0xC0);
        if (temp_r0 == 0) {
            var_r7 += 1;
        } else {
            temp_r0_2                       = temp_r0 - 1;
            M2C_FIELD(temp_r1, s32 *, 0xC0) = temp_r0_2;
            if (temp_r0_2 == 0) {
                func_02021cc8(&data_0210d6cc);
            }
            var_r7 += 1;
        }
    } while (var_r7 < 0x10);
}
