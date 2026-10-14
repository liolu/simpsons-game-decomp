#include "engine.h"
#include "m2c.h"

M2C_UNK func_020abe70(M2C_UNK);
M2C_UNK func_020ad3d4(M2C_UNK);
M2C_UNK func_020ad40c(M2C_UNK);
M2C_UNK func_020ad444(M2C_UNK);
void func_020b1938(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020afb20(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = 2;
    var_r5 = 2;
    if (func_020abe70(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        var_r5 = 1;
        var_r4 = 1;
    } else {
        if (func_020ad444(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
            var_r4 = 1;
        }
        if (func_020ad3d4(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
            var_r4 = 0;
        }
        if (func_020ad40c(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
            var_r5 = 0;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C8) != 0) {
        var_r5 = 1;
        var_r4 = 1;
    }
    func_020b1938(arg0 + 0x4C, var_r4, var_r5);
}
