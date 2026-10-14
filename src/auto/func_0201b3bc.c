#include "m2c.h"

void *func_020c80c8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020c80e0(M2C_UNK, void *);             /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */

void *func_0201b3bc(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_020cd940();
    temp_r0 = func_020c80c8(arg0, 0);
    if (temp_r0 != NULL) {
        func_020c80e0(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_020cd954(temp_r4);
    return temp_r0;
}
