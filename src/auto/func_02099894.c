#include "m2c.h"
#include "engine.h"

void func_02099894(s32 arg0, s32 arg1, s32 arg2) {
    *(M2C_UNK *)arg0 = (s32) M2C_FIELD((arg1 + (arg2 * 4)), s32 *, 0x50);
}
