#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0211d7f0;

void func_020540ec(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211d7f0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(M2C_UNK *)arg1;
}
