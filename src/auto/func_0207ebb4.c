#include "m2c.h"
#include "engine.h"

M2C_UNK func_0202ad60(M2C_UNK);

void func_0207ebb4(s32 arg0) {
    void *temp_r0;
    void *var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x2D) = 1;
    var_r0 = M2C_FIELD(arg0, void **, 8);
    if (var_r0 != NULL) {
        var_r0 -= 4;
    }
    temp_r0 = (void *) func_0202ad60(M2C_FIELD(var_r0, s32 *, 0x88));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x30) = 0x17;
}
