#include "m2c.h"

M2C_UNK func_02025e20(void *, s32);                 /* extern */
M2C_UNK func_02028a14(void *);                      /* extern */

void func_020289d4(void *arg0) {
    u32 temp_r2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) M2C_FIELD(arg0, u32 *, 8)) {
        func_02028a14(arg0 + 4);
    }
    temp_r2 = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r2;
    func_02025e20(arg0, temp_r2 - 1);
}
