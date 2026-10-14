#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02152b44;

void func_020c085c(void) {
    M2C_FIELD(&data_02152b44, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02152b44, s32 *, 0xC) + 1);
}
