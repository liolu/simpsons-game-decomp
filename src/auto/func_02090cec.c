#include "m2c.h"

s32 func_020483c4();                                /* extern */
void *func_02048470();                              /* extern */
M2C_UNK func_020999b4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0209a0bc();                                /* extern */
s32 func_020b60cc();                                /* extern */

void func_02090cec(void) {
    void *temp_r0;

    if (func_020b60cc() != 0) {
        return;
    }
    if (M2C_FIELD(func_02048470(), u8 *, 0xB6) & 8) {
        return;
    }
    func_020483c4();
    if (func_0209a0bc() < 0xA) {
        return;
    }
    func_020999b4(func_020483c4(), 3, 0);
    temp_r0 = func_02048470();
    M2C_FIELD(temp_r0, u8 *, 0xB6) = (u8) (M2C_FIELD(temp_r0, u8 *, 0xB6) | 8);
}
