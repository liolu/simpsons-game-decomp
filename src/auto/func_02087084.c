#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021287fc;

void func_02087084(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021287fc;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
