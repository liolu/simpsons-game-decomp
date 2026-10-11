#include "m2c.h"

M2C_UNK func_020bead0();                            /* extern */
M2C_UNK func_020beae0();                            /* extern */
s32 func_020bebec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_020bebb0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    func_020bead0();
    temp_r4 = func_020bebec(arg0, arg1, arg2, arg3);
    func_020beae0();
    return temp_r4;
}
