#include "m2c.h"

M2C_UNK func_020c09b0(s32, M2C_UNK);                /* extern */
s32 func_020c09c8(s32);                             /* extern */
extern s32 data_0214e474;

void func_020bd778(void *arg0) {
    data_0214e474 = func_020c09c8(M2C_FIELD(arg0, s32 *, 0xC));
    if (func_020c09c8(M2C_FIELD(arg0, s32 *, 0xC)) > 0) {
        return;
    }
    func_020c09b0(M2C_FIELD(arg0, s32 *, 0xC), 0);
    M2C_FIELD(arg0, s8 *, 1) = 5;
}
