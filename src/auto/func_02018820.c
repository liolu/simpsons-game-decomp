#include "m2c.h"
#include "engine.h"

s32 func_02018820(s32 arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4))) {
        return 1;
    }
    return 0;
}
