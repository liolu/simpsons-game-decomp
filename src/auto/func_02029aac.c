#include "m2c.h"
#include "engine.h"

M2C_UNK func_02029524(M2C_UNK);
void func_02029d6c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02029aac(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    if (func_02029524(arg0) == 0) {
        return;
    }
    var_r4 = 0;
    var_r5 = 0;
    do {
        func_02029d6c(arg0, M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40) + var_r5);
        var_r4 += 1;
        var_r5 += 8;
    } while (var_r4 < 0x19);
}
