#include "engine.h"
#include "m2c.h"

M2C_UNK func_020483c4(void);
M2C_UNK func_0209a0cc(M2C_UNK);

s32 func_020633d8(s32 arg0) {
    if (func_0209a0cc(func_020483c4()) != 0) {
        return 1;
    }
    return M2C_FIELD(arg0, s32 *, 0x1C8) & 1;
}
