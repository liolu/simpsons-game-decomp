#include "m2c.h"
#include "engine.h"

s32 func_020c2984(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
