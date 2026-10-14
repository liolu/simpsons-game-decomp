#include "m2c.h"

M2C_UNK func_020bda94(s32);                         /* extern */
M2C_UNK func_020e25f4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020b76f4(void *arg0) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return;
    }
    temp_r0                   = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020bda94(temp_r0);
    func_020e25f4(arg0, 0, 0xEC);
    M2C_FIELD(arg0, s16 *, 0) = 0;
}
