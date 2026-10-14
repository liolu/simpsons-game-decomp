#include "m2c.h"

M2C_UNK func_02011eec(void *);                      /* extern */
M2C_UNK func_020c707c();                            /* extern */
s32 func_020c70a0(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_020d13ec(void *);                      /* extern */
s32 func_020d1434(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020d1784(void *);                      /* extern */

void func_02011e68(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_020c707c();
        if (M2C_FIELD(arg0, u8 *, 4) != 0) {
            func_020d13ec(arg0 + 8);
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, u8 *, 4) = 1U;
    func_020d1784(arg0 + 8);
    if (func_020d1434(arg0 + 8, arg1) == 0) {
        return;
    }
    temp_r0                   = func_020c70a0(arg0 + 8, 4, 0);
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 == 0) {
        return;
    }
    func_02011eec(arg0);
}
