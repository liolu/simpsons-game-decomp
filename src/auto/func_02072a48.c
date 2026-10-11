#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02120658;

void func_02072a48(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02120658;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
