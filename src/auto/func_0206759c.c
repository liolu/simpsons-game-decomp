#include "m2c.h"
#include "engine.h"

void func_02067758(M2C_UNK, M2C_UNK);
void func_020678dc(M2C_UNK);

void func_0206759c(s32 arg0) {
    u32 temp_r2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) (M2C_FIELD(arg0, s32 *, 8) * 8)) {
        func_020678dc(arg0 + 4);
    }
    temp_r2 = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r2;
    func_02067758(arg0, temp_r2 - 1);
}
