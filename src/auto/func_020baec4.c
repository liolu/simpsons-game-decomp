#include "m2c.h"

M2C_UNK func_020baff8(s8 *);                        /* extern */
M2C_UNK func_020bb1a0();                            /* extern */
M2C_UNK func_020e25f4(s8 *, M2C_UNK, M2C_UNK);      /* extern */

void func_020baec4(s8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_020bb1a0();
    func_020baff8(arg0);
    *arg0 = 0;
    func_020e25f4(arg0, 0, 0x64);
}
