#include "m2c.h"

s32 func_0201c1b4();                                /* extern */
M2C_UNK func_0201d334(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b325c(s32);                         /* extern */

void func_020ad4bc(void *arg0, s32 arg1) {
    func_0201d334(func_0201c1b4(), 0);
    func_020b325c(arg1);
    M2C_FIELD(arg0, s32 *, 0x29C) = arg1;
}
