#include "m2c.h"
#include "engine.h"

void func_020bf0c8(M2C_UNK);

extern s8 data_02152060;

void func_020bf194(void) {
    s32 var_r4;
    s8 *var_r5;

    var_r5 = &data_02152060;
    var_r4 = 0;
    do {
        if (*var_r5 == 1) {
            func_020bf0c8((s32) var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x88;
    } while (var_r4 < 0xA);
}
