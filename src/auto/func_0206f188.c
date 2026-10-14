#include "engine.h"
#include "m2c.h"

s32 func_0206f188(s32 arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x18) != 0) && (M2C_FIELD(arg0, s32 *, 0x14) == 0)) {
        return 1;
    }
    return 0;
}
