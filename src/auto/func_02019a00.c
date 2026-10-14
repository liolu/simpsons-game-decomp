#include "m2c.h"

void *func_020c80c8(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020c80e0(s32, void *);                 /* extern */
M2C_UNK func_020c9728(s32);                         /* extern */
extern M2C_UNK data_021488f8;

s32 func_02019a00(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_021488f8;
    temp_r0 = func_020c80c8(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020c80e0(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_020c9728(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
