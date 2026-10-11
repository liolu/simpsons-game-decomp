#include "m2c.h"

s32 func_02047e30(s32, u8);                         /* extern */
M2C_UNK func_02047e3c(s32, u8, s32);                /* extern */
s32 func_02048470();                                /* extern */

s32 func_0204972c(s32 arg0, void *arg1) {
    s32 temp_r4;

    temp_r4 = func_02048470();
    func_02047e3c(temp_r4, M2C_FIELD(arg1, u8 *, 1), func_02047e30(func_02048470(), M2C_FIELD(arg1, u8 *, 0)));
    return 1;
}
