#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0211c884;

void func_0204313c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c884;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
