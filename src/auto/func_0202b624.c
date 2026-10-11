#include "m2c.h"
#include "engine.h"

void func_0202b674(M2C_UNK, M2C_UNK);
void func_0202b718(M2C_UNK);

void func_0202b624(s32 arg0) {
    u32 temp_r2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) (M2C_FIELD(arg0, s32 *, 8) * 8)) {
        func_0202b718(arg0 + 4);
    }
    temp_r2 = M2C_FIELD(arg0, u32 *, 0) + 1;
    M2C_FIELD(arg0, u32 *, 0) = temp_r2;
    func_0202b674(arg0, temp_r2 - 1);
}
