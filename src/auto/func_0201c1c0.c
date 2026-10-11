#include "m2c.h"
#include "engine.h"

void func_02019304(void);

extern M2C_UNK data_02149c20;

void func_0201c1c0(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    if (var_r0 > 0x7F) {
        var_r0 = 0x7F;
    }
    M2C_FIELD(&data_02149c20, s32 *, 0x9C) = var_r0;
    func_02019304();
}
