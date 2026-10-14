#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d378;

void func_02091cb0(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) M2C_FIELD(&data_0214d378, s32 *, 8);
}
