#include "engine.h"
#include "m2c.h"

s32 func_02047e30(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0xC8);
}
