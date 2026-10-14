#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012bc8(M2C_UNK);

s32 func_02012bd4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_02012bc8(arg0);
    return temp_r0 + M2C_FIELD((temp_r0 + (arg1 * 2)), u16 *, 2);
}
