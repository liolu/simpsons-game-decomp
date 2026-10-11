#include "m2c.h"

s32 *func_02019ff4(M2C_UNK);                        /* extern */
void *func_0201a334(s32);                           /* extern */
s32 *func_020c9884(void *, M2C_UNK);                /* extern */

void *func_0201c5ac(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 *temp_r0_2;
    s32 *temp_r0_3;
    void *temp_r0;

    temp_r0_3 = func_02019ff4(arg1);
    if (temp_r0_3 == NULL) {
        return NULL;
    }
    temp_r0 = func_0201a334(*temp_r0_3);
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r0_2 = func_020c9884(temp_r0, arg2);
    if (temp_r0_2 == NULL) {
        return NULL;
    }
    return temp_r0 + M2C_FIELD(temp_r0, s32 *, 0x18) + *temp_r0_2;
}
