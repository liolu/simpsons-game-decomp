#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02152b44;

s32 func_020c084c(void) {
    return M2C_FIELD(&data_02152b44, s32 *, 0xC);
}
