#include "m2c.h"

M2C_UNK func_020459c0(M2C_UNK *, s32, s32);         /* extern */

void func_02045754(void *arg0) {
    M2C_UNK sp0;
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 == 0) {
        return;
    }
    func_020459c0(&sp0, temp_r1, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
