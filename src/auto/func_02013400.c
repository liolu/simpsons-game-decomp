#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012bfc(M2C_UNK);
M2C_UNK func_02012c08(M2C_UNK, M2C_UNK);
M2C_UNK func_02012c24(M2C_UNK, M2C_UNK);

s32 func_02013400(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x10);
    func_02012bfc(temp_r4);
    return (s32) M2C_FIELD((func_02012c24(func_02012c08(temp_r4, arg2), arg3) + (arg4 * 2)), u16 *, 8);
}
