#include "m2c.h"
#include "engine.h"

M2C_UNK func_02012bc8(M2C_UNK);
M2C_UNK func_02012bd4(M2C_UNK, M2C_UNK);

s32 func_02013460(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x10);
    func_02012bc8(temp_r4);
    return M2C_FIELD((void *) func_02012bd4(temp_r4, arg2), s32 *, 4);
}
