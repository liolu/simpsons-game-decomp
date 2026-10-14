#include "engine.h"
#include "m2c.h"

extern void *data_02155d20;

s32 func_020d855c(void) {
    return M2C_FIELD(data_02155d20, s32 *, 0x1C);
}
