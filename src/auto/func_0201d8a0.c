#include "m2c.h"

s32 func_0201c250();                                /* extern */
M2C_UNK func_0201c2dc(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0201c2e8(void *, M2C_UNK);             /* extern */

void func_0201d8a0(s8 *arg0, s8 arg1) {
    *arg0 = arg1;
    if (arg1 == 0) {
        return;
    }
    func_0201c2e8(arg0 + 0x1C, 0);
    func_0201c2dc(arg0 + 0x1C, func_0201c250(), 0);
}
