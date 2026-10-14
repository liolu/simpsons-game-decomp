#include "m2c.h"

M2C_UNK func_02027738(void *, M2C_UNK);             /* extern */
s32 func_02067728(void *, M2C_UNK);                 /* extern */

s32 func_0208107c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x38A) != 0) {
        M2C_FIELD(arg0, u16 *, 0x388) = (u16) (M2C_FIELD(arg0, u16 *, 0x388) + 1);
        if (M2C_FIELD(arg0, u16 *, 0x388) == 4) {
            M2C_FIELD(arg0, u8 *, 0x38A) = 0U;
        }
        return 0x2A;
    }
    if (func_02067728(arg0 + 0x278, 0x16) == 0) {
        return 0x2F;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2CC) != 0x21) {
        return 0x2F;
    }
    M2C_FIELD(arg0, s32 *, 0x37C) = -1;
    func_02027738(arg0 + 0x184, 4);
    M2C_FIELD(arg0, u8 *, 0x38A)  = 1U;
    M2C_FIELD(arg0, u16 *, 0x388) = 0U;
    return 0x2A;
}
