#include "m2c.h"

M2C_UNK func_020483c4();                            /* extern */
M2C_UNK func_0205db50(s32, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
s32 func_02067728(s32, M2C_UNK);                    /* extern */
s32 func_0208f998(void *);                          /* extern */
s32 func_0209a134();                                /* extern */
extern void *data_02149fd4;

s32 func_0208a8ec(void *arg0) {
    s32 var_r4;

    if (func_02067728(arg0 + 0x278, 0x14) == 0) {
        return 0x2F;
    }
    if ((func_0208f998(arg0) == 0) && (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x1D)) {
        var_r4 = M2C_FIELD(data_02149fd4, s32 *, 0x1C);
        if (var_r4 != 0) {
            var_r4 -= 4;
        }
        func_020483c4();
        func_0205db50(var_r4, 0x2C, func_0209a134(), 0x89, 0, -1);
        return 0x1F;
    }
    return 0x2F;
}
