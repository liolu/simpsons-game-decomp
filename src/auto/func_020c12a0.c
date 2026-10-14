#include "engine.h"
#include "m2c.h"

void func_020c1268(M2C_UNK);
void func_020c2a48(void);

extern s8 data_02152e18;

void func_020c12a0(void) {
    s32 var_r4;
    s8 *var_r5;

    var_r5 = &data_02152e18;
    var_r4 = 0;
    do {
        if (*var_r5 == 1) {
            func_020c1268((s32) var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x38;
    } while (var_r4 < 4);
    func_020c2a48();
}
