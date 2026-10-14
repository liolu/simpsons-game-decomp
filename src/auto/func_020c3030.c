#include "m2c.h"

s32 func_020c320c(s32, void *);                     /* extern */
M2C_UNK func_020c3314(void *, void *);              /* extern */
M2C_UNK func_020c33c0(s32, void *, void *);         /* extern */
M2C_UNK func_020c34c4(s32, void *, void *, void *, void *); /* extern */
s32 func_020c63b4(s32, M2C_UNK);                    /* extern */
s32 func_020c6494();                                /* extern */

s32 func_020c3030(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1AC) == 0) {
        return -1;
    }
    temp_r0 = func_020c6494();
    if (temp_r0 == -1) {
        return -1;
    }
    if (temp_r0 != 1) {
        return 1;
    }
    if (func_020c63b4(M2C_FIELD(arg0, s32 *, 0x1AC), 0x14) == 0) {
        return -1;
    }
    if (func_020c320c(M2C_FIELD(arg0, s32 *, 0x1AC), arg0 + 0x1B4) < 0) {
        return -1;
    }
    func_020c3314(arg0 + 0x1B4, arg0 + 0x1E4);
    func_020c33c0(M2C_FIELD(arg0, s32 *, 0x1AC), arg0 + 0x1E4, arg0 + 0x220);
    func_020c34c4(M2C_FIELD(arg0, s32 *, 0x1AC), arg0 + 0x1E4, arg0 + 0x220, arg0 + 0x320, arg0 + 0x420);
    M2C_FIELD(arg0, s8 *, 0x1A5)  = 1;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    return 0;
}
