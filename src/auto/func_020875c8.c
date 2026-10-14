#include "engine.h"
#include "m2c.h"

void func_020875c8(s32 arg0, s32 arg1) {
    *(M2C_UNK *) arg0 = (s32) M2C_FIELD(arg1, s32 *, 0x40);
}
