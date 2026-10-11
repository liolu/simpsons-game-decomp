#include "m2c.h"

M2C_UNK func_020bb630(s8 *);                        /* extern */
s32 func_020bb9cc(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0214e00c;
extern M2C_UNK data_0214e010;
extern s8 data_0214e024;

void func_020bb8f0(void) {
    s32 var_r4;
    s8 *var_r5;

    if (func_020bb9cc(&data_0214e010) == 0) {
        return;
    }
    var_r5 = &data_0214e024;
    var_r4 = 0;
    do {
        if (*var_r5 == 1) {
            func_020bb630(var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x64;
    } while (var_r4 < 0xA);
    M2C_FIELD(&data_0214e00c, s32 *, 4) = 0;
}
