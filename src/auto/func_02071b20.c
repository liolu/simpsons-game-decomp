#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201dda0(M2C_UNK);
void func_0204c37c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02071b20(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 - 1);
        return;
    }
    var_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (var_r1 != 0) {
        var_r1 -= 4;
    }
    func_0204c37c(arg0 + 0x14, var_r1, 0);
    func_0201dda0(arg0);
}
