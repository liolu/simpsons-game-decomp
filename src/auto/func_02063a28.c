#include "m2c.h"

M2C_UNK func_0202ae94(s32);                         /* extern */
M2C_UNK func_0202b04c(s32);                         /* extern */
M2C_UNK func_020575e0(void *, void *);              /* extern */
M2C_UNK func_0205761c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0205762c(void *, s32);                 /* extern */
s32 func_02057758(void *);                          /* extern */
M2C_UNK func_020634e8(void *, M2C_UNK, s32);        /* extern */
s32 func_0206387c(void *, M2C_UNK);                 /* extern */
void *func_0206388c(void *, M2C_UNK);               /* extern */

void func_02063a28(void *arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = 0;
    func_0202ae94(M2C_FIELD(arg0, s32 *, 0x88));
    if (M2C_FIELD(arg0, s32 *, 0x2C4) == func_0206387c(arg0, arg1)) {
        var_r4 = func_02057758(arg0 + 0x68);
    }
    M2C_FIELD(arg0, s32 *, 0x2C4) = func_0206387c(arg0, arg1);
    func_020575e0(arg0 + 0x68, func_0206388c(arg0, arg1));
    func_0205761c(arg0 + 0x68, M2C_FIELD(func_0206388c(arg0, arg1), s32 *, 0x10), 0);
    if (var_r4 == 0) {
        var_r4 = func_02057758(arg0 + 0x68);
        if (var_r4 != 0) {
            func_0202b04c(M2C_FIELD(arg0, s32 *, 0x88));
        }
    }
    func_0205762c(arg0 + 0x68, var_r4);
    func_020634e8(arg0, arg1, var_r4);
}
