#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214d8a4;

void func_020b820c(void) {
    M2C_FIELD(&data_0214d8a4, volatile s32 *, 8) = (s32) (M2C_FIELD(&data_0214d8a4, volatile s32 *, 8) + 1);
    if (M2C_FIELD(&data_0214d8a4, volatile s32 *, 8) == 1) {
        M2C_FIELD(&data_0214d8a4, volatile s32 *, 4) = 0;
    }
}
