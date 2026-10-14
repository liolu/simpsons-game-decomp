#include "engine.h"
#include "m2c.h"

s32 func_0206d390(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1D0) == 0) && (M2C_FIELD(arg0, s32 *, 0x1D4) == 0)) {
        return 1;
    }
    return 0;
}
