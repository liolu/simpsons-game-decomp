#include "m2c.h"

s32 func_020182c4(M2C_UNK);                         /* extern */
M2C_UNK func_020483c4();                            /* extern */
M2C_UNK func_0205db50(s32, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
s32 func_0209a134();                                /* extern */
extern s32 data_0214604c;
extern void *data_02149fd4;

void func_02059eb4(void) {
    s32 var_r4;

    data_0214604c += 1;
    if (func_020182c4(0x32) == 0) {
        return;
    }
    func_020483c4();
    if (func_0209a134() == 0x15) {
        return;
    }
    var_r4 = M2C_FIELD(data_02149fd4, s32 *, 0x1C);
    if (var_r4 != 0) {
        var_r4 -= 4;
    }
    func_020483c4();
    func_0205db50(var_r4, 0x1E, func_0209a134(), 0xBC, 0, -1);
}
