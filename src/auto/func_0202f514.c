#include "m2c.h"
#include "engine.h"

M2C_UNK func_0202f5dc(M2C_UNK, M2C_UNK);

void func_0202f514(s32 arg0, s32 arg1) {
    s32 temp_r0;
    u32 temp_r5;

    if (M2C_FIELD(arg1, s32 *, 8) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, u32 *, 4) = (u32) M2C_FIELD(arg1, u32 *, 0);
        return;
    }
    temp_r5 = M2C_FIELD(arg1, u32 *, 0);
    temp_r0 = func_0202f5dc(arg1 + 4, (s32) (temp_r5 >> 3));
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 4) = (u32) (((temp_r5 & 7) * 0xC) + *(M2C_UNK *)temp_r0);
}
