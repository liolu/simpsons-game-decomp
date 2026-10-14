#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021199b4;

void func_02035828(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021199b4;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
