#include "m2c.h"

s32 func_020483c4();                                /* extern */
void *func_02048470();                              /* extern */
M2C_UNK func_02079f68();                            /* extern */
M2C_UNK func_020999e8(s32, u8, u8);                 /* extern */
s8 func_0209a0bc();                                 /* extern */
s32 func_020b60cc();                                /* extern */

s32 func_020498ec(s32 arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = func_02048470();
    func_020483c4();
    M2C_FIELD(temp_r4, s8 *, 0x38) = func_0209a0bc();
    if (func_020b60cc() == 0) {
        func_02079f68();
    }
    func_020999e8(func_020483c4(), M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
    return 1;
}
