#include "m2c.h"
#include "engine.h"

M2C_UNK func_02012b50(M2C_UNK);

s32 func_02012b5c(s32 arg0, s32 arg1) {
    return arg0 + M2C_FIELD((func_02012b50(arg0) + (arg1 * 8)), u16 *, 4);
}
