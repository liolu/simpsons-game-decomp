#include "m2c.h"

M2C_UNK func_020b969c(M2C_UNK, s32, s32);           /* extern */
s32 func_020e5e44(s32);                             /* extern */
M2C_UNK func_020e5fa8(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_021300c0;

void func_020b9748(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;

    func_020b969c(arg0, arg2, arg3);
    func_020e5fa8(arg2, &data_021300c0, (arg3 - func_020e5e44(arg2)) - 1);
    temp_r4 = func_020e5e44(arg2);
    func_020b969c(arg1, arg2 + temp_r4, 4 - func_020e5e44(arg2));
}
