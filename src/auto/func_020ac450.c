#include "m2c.h"

M2C_UNK func_020aba18(void *, M2C_UNK);             /* extern */

s32 func_020ac450(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r1 != 0) && (temp_r1 != 2) && (temp_r1 != 0xF)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x295) != 0) {
        M2C_FIELD(arg0, u8 *, 0x295) = 0U;
        return 0;
    }
    func_020aba18(arg0, 0x14);
    return 1;
}
