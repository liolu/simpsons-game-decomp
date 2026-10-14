#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0211e02c;

void func_020618ac(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211e02c;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
