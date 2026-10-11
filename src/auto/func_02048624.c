#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048608(M2C_UNK);

s32 func_02048624(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02048608(arg0);
    if ((arg1 <= 0) || ((u32) arg1 > (u32) M2C_FIELD(temp_r0, u32 *, 4))) {
        return 0;
    }
    return ((arg1 - 1) * 0xC) + M2C_FIELD(temp_r0, s32 *, 0);
}
