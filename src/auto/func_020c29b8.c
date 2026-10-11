#include "m2c.h"

M2C_UNK func_020c8fe0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020c9038(s32);                         /* extern */

s16 func_020c29b8(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x7E) = arg1;
    func_020c9038(arg0 + 0x20);
    func_020c8fe0(arg0 + 0x20, 0, 0);
    return arg1;
}
