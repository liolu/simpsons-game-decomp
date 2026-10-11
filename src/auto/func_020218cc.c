#include "m2c.h"

M2C_UNK func_02020a8c();                            /* extern */
s32 func_020218ac();                                /* extern */
s32 func_020da904(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0214a1c0;
extern M2C_UNK func_02021928;

s32 func_020218cc(void) {
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x1D;
    if (func_020218ac() != 0) {
        return 1;
    }
    if (func_020da904(&func_02021928) != 2) {
        func_02020a8c();
        return 0;
    }
    M2C_FIELD(&data_0214a1c0, s16 *, 4) = 0;
    M2C_FIELD(&data_0214a1c0, s16 *, 2) = 1;
    return 1;
}
