/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

void *func_0202ad60(s32);                           /* extern */
M2C_UNK func_0202ad68(s32, s32, s32);               /* extern */

void func_02054aa4(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = func_0202ad60(M2C_FIELD(arg0, s32 *, 0x18));
    if ((M2C_FIELD(temp_r0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) &&
        (M2C_FIELD(temp_r0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4))) {
        return;
    }
    func_0202ad68(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4));
}
