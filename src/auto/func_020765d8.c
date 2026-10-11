#include "m2c.h"

extern M2C_UNK data_0210131c;

s32 func_020765d8(void *arg0) {
    return *((M2C_UNK *)((s8 *)&data_0210131c + (M2C_FIELD(arg0, s32 *, 0x1D4) * 0x10)));
}
