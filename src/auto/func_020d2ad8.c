#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02155bd4;

s32 func_020d2ad8(s32 arg0) {
    return M2C_FIELD(&data_02155bd4, u16 *, 0x34) & arg0;
}
