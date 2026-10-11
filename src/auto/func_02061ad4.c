#include "m2c.h"
#include "engine.h"

void func_02061ad4(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        M2C_FIELD(arg0, s8 *, 0x86) = 1;
    }
}
