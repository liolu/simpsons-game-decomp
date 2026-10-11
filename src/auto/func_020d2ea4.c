#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02155bd4;

s32 func_020d2ea4(void) {
    return (s32) M2C_FIELD(&data_02155bd4, u16 *, 0xC);
}
