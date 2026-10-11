#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c98f4(M2C_UNK);

void func_020c9928(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 0) = func_020c98f4(arg0);
    M2C_FIELD(arg0, volatile s32 *, 4) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 8) = 0;
}
