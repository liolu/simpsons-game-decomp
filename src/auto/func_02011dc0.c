#include "m2c.h"

M2C_UNK func_02011e3c(void *);                      /* extern */
M2C_UNK func_020c707c();                            /* extern */
M2C_UNK func_020d13ec(void *);                      /* extern */

void func_02011dc0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_020c707c();
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        func_020d13ec(arg0 + 8);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_02011e3c(arg0);
}
