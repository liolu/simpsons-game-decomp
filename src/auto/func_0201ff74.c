#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02149fe4;

s32 func_0201ff74(void) {
    if (M2C_FIELD(&data_02149fe4, u16 *, 0x16) != 0) {
        return 1;
    }
    return 0;
}
