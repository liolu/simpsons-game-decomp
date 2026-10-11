#include "m2c.h"
#include "engine.h"

void func_020bdb24(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
}
