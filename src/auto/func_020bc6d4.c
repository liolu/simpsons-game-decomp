#include "m2c.h"

M2C_UNK func_020b95d0(M2C_UNK *);                   /* extern */
s32 func_020bab18(s32);                             /* extern */
M2C_UNK func_020c0a04(s32, s32);                    /* extern */
extern M2C_UNK data_021303ec;

void func_020bc6d4(void *arg0, s16 arg1) {
    s32 var_r2;

    if (arg0 == NULL) {
        func_020b95d0(&data_021303ec);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    if (M2C_FIELD(arg0, s8 *, 0xA9) != 1) {
        var_r2 = 0;
    } else {
        var_r2 = func_020bab18(M2C_FIELD(arg0, s32 *, 4));
    }
    func_020c0a04(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s16 *, 0x40) + var_r2);
}
