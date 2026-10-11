#include "m2c.h"
#include "engine.h"

void func_020c1458(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        M2C_FIELD(arg0, s16 *, 0xE) = (s16) arg1;
    }
}
