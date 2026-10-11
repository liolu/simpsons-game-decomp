#include "m2c.h"

s32 func_0206d040(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1C4) == 1) && (M2C_FIELD(arg0, s32 *, 0x1D0) == 0)) {
        return 1;
    }
    return 0;
}
