#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215154c;

void func_020be918(void) {
    M2C_FIELD(&data_0215154c, volatile s32 *, 8) = (s32) (M2C_FIELD(&data_0215154c, volatile s32 *, 8) + 1);
    if (M2C_FIELD(&data_0215154c, volatile s32 *, 8) == 1) {
        M2C_FIELD(&data_0215154c, volatile s32 *, 4) = 0;
    }
}
