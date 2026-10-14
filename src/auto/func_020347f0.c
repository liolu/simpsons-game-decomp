#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02119624;

void func_020347f0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02119624;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
