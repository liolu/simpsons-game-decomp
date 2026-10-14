#include "engine.h"
#include "m2c.h"

void func_020c701c(M2C_UNK);
M2C_UNK func_020c704c(M2C_UNK);

void func_02011eec(s32 arg0) {
    s32 var_r4;

    var_r4                       = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
loop_1:
    if (func_020c704c(M2C_FIELD(arg0, s32 *, 0)) == 0) {
        return;
    }
    func_020c701c(M2C_FIELD(arg0, s32 *, 0));
    var_r4 += 1;
    if (var_r4 >= 4) {
        return;
    }
    goto loop_1;
}
