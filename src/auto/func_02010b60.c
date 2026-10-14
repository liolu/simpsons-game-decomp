#include "engine.h"
#include "m2c.h"

void func_02010b60(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x30) = (s8) arg1;
}
