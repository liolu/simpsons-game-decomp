#include "engine.h"
#include "m2c.h"

void func_020b7da0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    }
}
