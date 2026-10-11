#include "m2c.h"

M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
s32 func_02020d40();                                /* extern */
extern s32 data_0214a1dc;

s32 func_020221ec(void) {
    if (data_0214a1dc != 2) {
        return 1;
    }
    func_02020a28(3);
    return func_02020d40();
}
