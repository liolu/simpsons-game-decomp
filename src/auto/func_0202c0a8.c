#include "m2c.h"

s32 func_02011d5c(s32);                             /* extern */
u32 func_02011e00(s32);                             /* extern */
s32 func_0202c318();                                /* extern */

s32 func_0202c0a8(void *arg0, s32 arg1) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        temp_r4 = func_0202c318(arg0, arg1);
        if (func_02011e00(M2C_FIELD(arg0, s32 *, 0xB0)) <= (u32) (temp_r4 + 1)) {
            return func_02011d5c(M2C_FIELD(arg0, s32 *, 0xB0));
        }
    }
    return 0;
}
