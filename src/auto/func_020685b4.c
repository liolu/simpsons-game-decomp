#include "engine.h"
#include "m2c.h"

void func_020685d0(M2C_UNK, M2C_UNK);

void func_020685b4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x264) = arg1;
    M2C_FIELD(arg0, s32 *, 0x260) = (s32) * (M2C_UNK *) arg1;
    func_020685d0(arg0, *(M2C_UNK *) arg1);
}
