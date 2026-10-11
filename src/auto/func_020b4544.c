#include "m2c.h"
#include "engine.h"

s32 func_020b4544(s32 arg0) {
    if (((s32) M2C_FIELD(arg0, s8 *, 0x17) <= 0) && ((s32) M2C_FIELD(arg0, s8 *, 0x18) <= 0)) {
        return 1;
    }
    return 0;
}
