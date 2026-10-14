#include "engine.h"
#include "m2c.h"

void func_020b4704(s32 arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x80) = (s8) arg1;
}
