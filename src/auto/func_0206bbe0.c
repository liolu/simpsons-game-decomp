#include "m2c.h"

s32 func_020182c4(M2C_UNK);                         /* extern */
M2C_UNK func_02059784(s32, M2C_UNK);                /* extern */
s32 func_0206c258();                                /* extern */
extern void *data_02149fd4;

s32 func_0206bbe0(void) {
    s32 var_r0;
    s32 var_r0_2;

    if (func_0206c258() != 0) {
        if (func_020182c4(0x32) != 0) {
            var_r0 = M2C_FIELD(data_02149fd4, s32 *, 0x1C);
            if (var_r0 != 0) {
                var_r0 -= 4;
            }
            func_02059784(var_r0, 1);
        } else {
            var_r0_2 = M2C_FIELD(data_02149fd4, s32 *, 0x1C);
            if (var_r0_2 != 0) {
                var_r0_2 -= 4;
            }
            func_02059784(var_r0_2, 2);
        }
        return 0;
    }
    return 4;
}
