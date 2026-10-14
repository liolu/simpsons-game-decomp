#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02152b9c;

s32 func_020c0874(void) {
    return M2C_FIELD(&data_02152b9c, s32 *, 0xC);
}
