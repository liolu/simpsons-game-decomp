/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d99d0(M2C_UNK, M2C_UNK);                /* extern */
void *func_020d9af0();                              /* extern */
s32 func_020d9b78(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020d9ca4(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020da914(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020d99d0(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    temp_r0_2                          = func_020d9af0();
    M2C_FIELD(temp_r0_2, s16 *, 0x150) = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x14C) = 0;
    func_020d9ca4(8, arg0);
    var_r0 = func_020d9b78(8, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
