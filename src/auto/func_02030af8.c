#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021198dc;

void func_02030af8(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021198dc;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
