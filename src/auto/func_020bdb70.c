#include "m2c.h"
#include "engine.h"

void func_020bdb70(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
