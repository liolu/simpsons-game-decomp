#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_02011d14(s32);                         /* extern */

void *func_0202bfc4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r4 != 0) {
        func_02011d14(temp_r4);
        func_0200f744(temp_r4);
    }
    return arg0;
}
