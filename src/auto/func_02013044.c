#include "m2c.h"
#include "engine.h"

M2C_UNK func_02012bbc(M2C_UNK, M2C_UNK);

void func_02013044(s32 arg0, s32 arg1, s32 arg2) {
    *(M2C_UNK *)arg0 = func_02012bbc(M2C_FIELD(arg1, s32 *, 0xC), arg2);
}
