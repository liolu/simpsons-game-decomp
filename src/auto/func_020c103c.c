#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c2984(M2C_UNK);

void func_020c103c(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        return;
    }
    *(M2C_UNK *)arg1 = func_020c2984(M2C_FIELD(arg0, s32 *, 0x30));
    *(M2C_UNK *)arg2 = (s32) M2C_FIELD(arg0, s16 *, 0xC);
}
