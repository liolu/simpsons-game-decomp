#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0211987c;

void func_02032cb0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211987c;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
