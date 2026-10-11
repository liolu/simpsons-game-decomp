#include "m2c.h"

M2C_UNK func_02018e40(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ce6cc(s32, s32);                    /* extern */
s32 func_020cf564(s32, s32);                        /* extern */
M2C_UNK func_020cf5ac(s32, s32, M2C_UNK);           /* extern */

void func_02018960(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg1, s32 *, 8);
    if ((temp_r3 != 0) && (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AC) - temp_r3);
        if (arg2 == func_020cf564(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4))) {
            func_020cf5ac(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), 0);
        }
        func_020ce6cc(arg2, arg2 + M2C_FIELD(arg1, s32 *, 8));
        func_02018e40(2, arg2);
    }
}
