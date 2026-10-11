#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02155d20;

s32 func_020d7dac(void) {
    if (M2C_FIELD(&data_02155d20, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
