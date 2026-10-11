#include "m2c.h"
#include "engine.h"

void func_0204d688(M2C_UNK, M2C_UNK);
void func_0204d6c4(M2C_UNK);

void func_0204d64c(s32 arg0) {
    u32 temp_r2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) (M2C_FIELD(arg0, s32 *, 8) * 8)) {
        func_0204d6c4(arg0 + 4);
    }
    temp_r2 = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r2;
    func_0204d688(arg0, temp_r2 - 1);
}
