#include "m2c.h"
#include "engine.h"

s32 func_02012db8(s32 arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0) < 2) && ((s32) M2C_FIELD(arg0, s32 *, 4) >= 0) && ((s32) M2C_FIELD(arg0, s32 *, 8) >= 0)) {
        return 1;
    }
    return 0;
}
