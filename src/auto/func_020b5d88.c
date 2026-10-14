#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201ec5c(void);
M2C_UNK func_0201f448(M2C_UNK);

s32 func_020b5d88(s32 arg0) {
    if (func_0201ec5c() == 0) {
        return M2C_FIELD(*(M2C_UNK *) arg0, s32 *, 4);
    }
    return func_0201f448(func_0201ec5c());
}
