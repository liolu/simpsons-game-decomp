#include "m2c.h"

s32 func_02012b88();                                /* extern */

s32 func_020132e0(s32 arg0, s32 arg1) {
    if (arg1 >= 2) {
        return 0;
    }
    if (M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x10) == 0) {
        return 0;
    }
    return func_02012b88();
}
