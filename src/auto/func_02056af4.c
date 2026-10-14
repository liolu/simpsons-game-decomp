#include "engine.h"
#include "m2c.h"

void func_02056af4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0xAC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0xB0);
}
