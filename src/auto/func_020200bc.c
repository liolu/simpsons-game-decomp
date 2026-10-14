#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02149fe4;

s32 func_020200bc(void) {
    return (s32) M2C_FIELD(&data_02149fe4, u16 *, 8);
}
