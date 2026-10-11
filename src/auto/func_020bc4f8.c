#include "m2c.h"

M2C_UNK func_020bc258(M2C_UNK, s32 *, s32 *);       /* extern */
s32 func_020f0bfc(s32, s32);                        /* extern */
M2C_UNK func_020f1038();                            /* extern */
s32 func_020f10ac(s32);                             /* extern */
M2C_UNK func_020f113c(s32, s32);                    /* extern */

void func_020bc4f8(M2C_UNK arg0) {
    s32 sp4;
    s32 sp0;
    s32 temp_r4;

    func_020bc258(arg0, &sp4, &sp0);
    temp_r4 = func_020f10ac(sp4);
    func_020f113c(0x42C80000, func_020f0bfc(temp_r4, func_020f10ac(sp0)));
    func_020f1038();
}
