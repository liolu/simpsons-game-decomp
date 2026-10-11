#include "m2c.h"

extern M2C_UNK data_0214d4d8;

s32 func_020b73c0(void) {
    M2C_FIELD(&data_0214d4d8, s32 *, 8) = (s32) (M2C_FIELD(&data_0214d4d8, s32 *, 8) + 1);
    return 0;
}
