#include "engine.h"
#include "m2c.h"

s32 func_02012b30(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8);
}
