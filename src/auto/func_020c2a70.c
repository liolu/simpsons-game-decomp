#include "m2c.h"

extern M2C_UNK data_021536e0;

s32 func_020c2a70(void) {
    M2C_FIELD(&data_021536e0, s32 *, 4) = (s32) (M2C_FIELD(&data_021536e0, s32 *, 4) + 1);
    return 0;
}
