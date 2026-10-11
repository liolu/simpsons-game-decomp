#include "m2c.h"

s32 func_020b7bcc(s32);                             /* extern */
s32 func_020b7bd4(s32);                             /* extern */

s32 func_020bab18(void *arg0) {
    if ((func_020b7bcc(M2C_FIELD(arg0, s32 *, 4)) > 0) && ((u32) (u8) (s8) (M2C_FIELD(arg0, s8 *, 1) - 2) <= 1U)) {
        return func_020b7bd4(M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}
