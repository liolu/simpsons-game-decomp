#include "m2c.h"

M2C_UNK func_020483c4();                            /* extern */
M2C_UNK func_0205db50(s32, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
s32 func_0209a134();                                /* extern */
extern void *data_02149fd4;

void func_02059fec(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;

    func_020483c4();
    if (func_0209a134() == 0x15) {
        return;
    }
    var_r4 = M2C_FIELD(data_02149fd4, s32 *, 0x1C);
    if (var_r4 != 0) {
        var_r4 -= 4;
    }
    func_020483c4();
    func_0205db50(var_r4, arg1, func_0209a134(), arg2, 0, -1);
}
