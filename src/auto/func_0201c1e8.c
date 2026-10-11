#include "m2c.h"

s32 func_0201c1b4();                                /* extern */
M2C_UNK func_0201c2dc(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02149c20;

void func_0201c1e8(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 <= 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0x7F) {
        var_r4 = 0x7F;
    }
    M2C_FIELD(&data_02149c20, s32 *, 0xA0) = var_r4;
    func_0201c2dc(func_0201c1b4(), var_r4, 0);
}
