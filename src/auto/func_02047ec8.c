#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_020552a4(s32);                         /* extern */

s32 *func_02047ec8(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_020552a4(temp_r4);
        func_0200f744(temp_r4);
    }
    return arg0;
}
