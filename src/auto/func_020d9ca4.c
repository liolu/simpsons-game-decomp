#include "m2c.h"
#include "engine.h"

extern s32 data_0215658c;

void func_020d9ca4(s32 arg0, s32 arg1) {
    M2C_FIELD((data_0215658c + (arg0 * 4)), s32 *, 0x18) = arg1;
}
