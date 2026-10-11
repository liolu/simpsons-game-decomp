#include "m2c.h"

M2C_UNK func_020aba18(void *, M2C_UNK);             /* extern */

s32 func_020ac4c4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x236) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x288) = 3;
    M2C_FIELD(arg0, s32 *, 0x298) = 0;
    func_020aba18(arg0, 0x29);
    return 1;
}
