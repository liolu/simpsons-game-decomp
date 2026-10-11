#include "m2c.h"

M2C_UNK func_02047e3c(s32, u8, u8);                 /* extern */
s32 func_02048470();                                /* extern */

s32 func_0204984c(s32 arg0, void *arg1) {
    func_02047e3c(func_02048470(), M2C_FIELD(arg1, u8 *, 1), M2C_FIELD(arg1, u8 *, 0));
    return 1;
}
