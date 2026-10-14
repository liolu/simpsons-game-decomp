#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02123634;

void func_0207bbdc(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02123634;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) * (M2C_UNK *) arg1;
}
