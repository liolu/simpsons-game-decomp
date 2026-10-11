#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e00c;

void func_020bb254(void) {
    M2C_FIELD(&data_0214e00c, s32 *, 0x14) = (s32) (M2C_FIELD(&data_0214e00c, s32 *, 0x14) + 1);
}
