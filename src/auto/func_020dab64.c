/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020d9af0();                              /* extern */
s32 func_020d9b78(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_020d9ca4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020d9f38(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020dab64(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020d9f38(arg0, arg2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d9ca4(0, arg1);
    temp_r0_2 = func_020d9af0();
    var_r0 =
        func_020d9b78(0, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
