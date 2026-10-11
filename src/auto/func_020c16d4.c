#include "m2c.h"

M2C_UNK func_020c16d0(s8 *);                        /* extern */
extern s8 data_02153028;

void func_020c16d4(void) {
    s32 var_r4;
    s8 *var_r5;

    var_r5 = &data_02153028;
    var_r4 = 0;
    do {
        if (*var_r5 != 0) {
            func_020c16d0(var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x38;
    } while (var_r4 < 0xA);
}
