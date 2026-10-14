#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021197bc;

void func_020335bc(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021197bc;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
