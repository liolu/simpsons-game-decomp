#include "m2c.h"

M2C_UNK func_020575e0(void *, s32);                 /* extern */
M2C_UNK func_0205761c(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK data_0211d318;

void func_02050158(void *arg0) {
    void *var_r0;
    void *var_r0_2;
    void *var_r1;

    M2C_FIELD(arg0, s8 *, 0x3E) = 1;
    var_r1 = M2C_FIELD(arg0, void **, 0);
    if (var_r1 != NULL) {
        var_r1 -= 4;
    }
    M2C_FIELD(var_r1, s32 *, 0x1B8) = 3;
    var_r0 = M2C_FIELD(arg0, void **, 0);
    if (var_r0 != NULL) {
        var_r0 -= 4;
    }
    func_020575e0(var_r0 + 0x14, M2C_FIELD(&data_0211d318, void **, 0x4C) + 0x3C);
    var_r0_2 = M2C_FIELD(arg0, void **, 0);
    if (var_r0_2 != NULL) {
        var_r0_2 -= 4;
    }
    func_0205761c(var_r0_2 + 0x14, M2C_FIELD(M2C_FIELD(&data_0211d318, void **, 0x4C), s32 *, 0x4C), 0);
}
