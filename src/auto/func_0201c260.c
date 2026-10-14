#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02149c20;

void func_0201c260(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    if (var_r0 > 0x7F) {
        var_r0 = 0x7F;
    }
    M2C_FIELD(&data_02149c20, s32 *, 0xA8) = var_r0;
}
