#include "m2c.h"

s32 func_020483c4();                                /* extern */
M2C_UNK func_020999e8(s32, u8, u8);                 /* extern */

s32 func_0204bc5c(s32 arg0, void *arg1) {
    func_020999e8(func_020483c4(), M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
    return 1;
}
