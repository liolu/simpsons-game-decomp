#include "m2c.h"

M2C_UNK func_020483c4();                            /* extern */
s32 func_0209a0cc();                                /* extern */

s32 func_0208bb70(void *arg0) {
    func_020483c4();
    if ((func_0209a0cc() == 2) && (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x29)) {
        return 1;
    }
    return 0;
}
