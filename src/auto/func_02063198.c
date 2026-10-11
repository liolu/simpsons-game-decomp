#include "m2c.h"

void *func_0202ad60(s32);                           /* extern */
M2C_UNK func_020574e0(void *, void *);              /* extern */
M2C_UNK func_020635f4(void *, void *);              /* extern */
M2C_UNK func_02066df4(void *, M2C_UNK);             /* extern */

void func_02063198(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = func_0202ad60(M2C_FIELD(arg0, s32 *, 0x88));
    if ((M2C_FIELD(arg1, s32 *, 0) == M2C_FIELD(temp_r0, s32 *, 0)) && (M2C_FIELD(arg1, s32 *, 4) == M2C_FIELD(temp_r0, s32 *, 4))) {
        return;
    }
    func_020574e0(arg0 + 0x68, arg1);
    func_020635f4(arg0, arg1);
    func_02066df4(arg0, 1);
}
