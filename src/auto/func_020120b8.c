#include "m2c.h"

s32 func_020cbbc4();                                /* extern */
M2C_UNK func_020d7d48(u16);                         /* extern */

s32 func_020120b8(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_020cbbc4();
    *arg0   = temp_r0;
    if (temp_r0 == -3) {
        return 0;
    }
    func_020d7d48((u16) temp_r0);
    return 1;
}
