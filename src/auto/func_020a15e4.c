#include "m2c.h"
#include "engine.h"

s32 func_020a15e4(s32 arg0, s32 arg1) {
    return (arg1 * 0x30) + M2C_FIELD(arg0, s32 *, 0x14);
}
