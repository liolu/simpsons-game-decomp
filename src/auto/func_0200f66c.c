#include "m2c.h"

M2C_UNK func_020cdffc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ce02c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0200f66c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    if (arg4 == 0x20) {
        func_020ce02c(arg1, arg2, arg3);
        return;
    }
    func_020cdffc(arg1, arg2, arg3);
}
