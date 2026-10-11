/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cce9c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020cceb8(s32, u32);                    /* extern */
s32 func_020d99d0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
void *func_020d9af0();                              /* extern */
s32 func_020d9b78(M2C_UNK, M2C_UNK, s32, u32, s32, s32, s32, s32, s32); /* extern */

s32 func_020dac58(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u16 arg4, u16 arg5, u16 arg6) {
    s32 temp_r0;
    s32 var_r0;
    u16 var_r5;
    void *temp_r4;

    var_r5 = 1;
    temp_r4 = M2C_FIELD(func_020d9af0(), void **, 4);
    temp_r0 = func_020d99d0(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020cce9c(temp_r4 + 0x3C, 2);
    func_020cce9c(temp_r4 + 0x188, 2);
    if (M2C_FIELD(temp_r4, u16 *, 0x188) == 0) {
        func_020cce9c(temp_r4 + 0x182, 2);
        var_r5 = M2C_FIELD(temp_r4, u16 *, 0x182);
        func_020cce9c(temp_r4 + 0x86, 2);
    }
    if (arg2 == 0) {
        return 6;
    }
    if (var_r5 == 0) {
        return 7;
    }
    func_020cce9c(temp_r4 + 0x7C, 2);
    if (arg2 == M2C_FIELD(temp_r4, s32 *, 0x7C)) {
        return 6;
    }
    if (arg3 > 0x200U) {
        return 6;
    }
    if (arg3 == 0) {
        return 6;
    }
    func_020cceb8(arg2, arg3);
    var_r0 = func_020d9b78(0xF, 7, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, arg0, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
