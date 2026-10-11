#include "m2c.h"

M2C_UNK func_02027738(void *, M2C_UNK);             /* extern */
M2C_UNK func_020483c4();                            /* extern */
s32 func_0209a0cc();                                /* extern */

s32 func_0208c760(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x14) {
        return 0x2F;
    }
    if (M2C_FIELD(arg0, u8 *, 0x178) != 0) {
        return 0x2F;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C4) == 5) {
        func_020483c4();
        temp_r0 = arg0 + 0x184;
        if (func_0209a0cc() == 0) {
            func_02027738(temp_r0, 4);
        } else {
            func_02027738(temp_r0, 8);
        }
    }
    return 0x14;
}
