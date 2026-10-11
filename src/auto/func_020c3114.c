#include "m2c.h"

M2C_UNK func_020c3750(s32, void *, void *, void *, s32, s32); /* extern */
M2C_UNK func_020c55d8(s32, s32, M2C_UNK, s32);      /* extern */

s32 func_020c3114(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r7;
    s32 var_r8;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1A8);
    var_r4 = arg1;
    if (temp_r0 == 0xC) {
        return 0;
    }
    func_020c3750(M2C_FIELD(arg0, s32 *, 0x1AC), arg0 + 0x1E4, arg0 + 0x220, arg0 + 0x420, temp_r0 >> 2, M2C_FIELD(arg0, s32 *, 0));
    var_r7 = 0;
    var_r8 = 0;
    do {
        func_020c55d8(M2C_FIELD(arg0, s32 *, 0x1B0), M2C_FIELD(arg0, s32 *, 0) + var_r8, 0, var_r4);
        var_r7 += 1;
        var_r4 += 0x40;
        var_r8 += 0x40;
    } while (var_r7 < 3);
    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A8) + 1);
    return 0x60;
}
