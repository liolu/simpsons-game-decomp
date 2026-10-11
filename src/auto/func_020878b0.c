#include "m2c.h"
#include "engine.h"

void func_02063f94(M2C_UNK);
M2C_UNK func_02083644(M2C_UNK, M2C_UNK);
void func_0208775c(M2C_UNK, M2C_UNK);

void func_020878b0(s32 arg0) {
    s32 temp_r5;
    void *var_r1;
    void *var_r5;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 1) {
        return;
    }
    var_r1 = M2C_FIELD(arg0, void **, 8);
    if (var_r1 != NULL) {
        var_r1 -= 4;
    }
    temp_r5 = M2C_FIELD(var_r1, s32 *, 0x2CC);
    if (M2C_FIELD(arg0, s32 *, 0x40) != 2) {
        if ((temp_r5 == 0xA) && (temp_r5 != M2C_FIELD(arg0, s32 *, 0x4C))) {
            func_0208775c(arg0, -0x28);
        }
        if ((temp_r5 == 0xB) && (temp_r5 != M2C_FIELD(arg0, s32 *, 0x4C))) {
            func_0208775c(arg0, -0x14);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r5;
    var_r5 = M2C_FIELD(arg0, void **, 8);
    if (var_r5 != NULL) {
        var_r5 -= 4;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0) {
        return;
    }
    if (func_02083644((s32) var_r5, 1) == 0) {
        return;
    }
    func_02063f94((s32) var_r5);
}
