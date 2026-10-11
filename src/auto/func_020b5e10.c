#include "m2c.h"
#include "engine.h"

void func_020b5e10(s32 arg0, s32 arg1) {
    M2C_FIELD(*(M2C_UNK *)arg0, s32 *, 0x18) = arg1;
}
