#include "m2c.h"

extern M2C_UNK data_0214d4b8;

s32 func_020b6180(s32 arg0, void *arg1) {
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s32 *, 0x54) = (s32) M2C_FIELD(arg1, s8 *, 8);
    return 2;
}
