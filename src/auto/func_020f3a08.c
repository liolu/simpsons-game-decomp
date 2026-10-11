#include "m2c.h"

M2C_UNK func_0200f750(s32);                         /* extern */
M2C_UNK func_020f391c(void *, s32, M2C_UNK);        /* extern */

void func_020f3a08(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_020f391c(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_0200f750(arg0 - arg2);
}
