#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0211ce70;

void func_02048c58(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ce70;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
