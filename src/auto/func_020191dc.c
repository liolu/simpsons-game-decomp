#include "m2c.h"
#include "engine.h"

void func_020191dc(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg0;
    M2C_FIELD(arg0, s32 *, 0) = arg0;
}
