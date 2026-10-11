#include "m2c.h"

M2C_UNK func_020aba18(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020abd54();                                /* extern */

s32 func_020ac40c(M2C_UNK arg0, s32 arg1) {
    if (func_020abd54() == 0) {
        return 0;
    }
    if (arg1 != 0) {
        func_020aba18(arg0, 3);
    } else {
        func_020aba18(arg0, 0x3C);
    }
    return 1;
}
