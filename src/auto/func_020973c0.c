#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_02028500(s32);                         /* extern */

s32 *func_020973c0(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_02028500(temp_r4);
        func_0200f744(temp_r4);
    }
    return arg0;
}
