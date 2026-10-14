#include "engine.h"
#include "m2c.h"

void func_02016b60(s32 arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s8 *, 0x80) = (s8) arg1;
}
