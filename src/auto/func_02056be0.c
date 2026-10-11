#include "m2c.h"

s32 func_020f3a40(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_0211db3c;

s32 func_02056be0(s32 arg0, M2C_UNK arg1) {
    if (func_020f3a40(arg1, &data_0211db3c) != 0) {
        return arg0 + 0x10;
    }
    return 0;
}
