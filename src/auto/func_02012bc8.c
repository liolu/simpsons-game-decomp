#include "m2c.h"
#include "engine.h"

s32 func_02012bc8(s32 arg0) {
    return arg0 + M2C_FIELD(arg0, u16 *, 8);
}
