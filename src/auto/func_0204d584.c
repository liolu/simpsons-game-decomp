#include "m2c.h"

M2C_UNK func_02045754();                            /* extern */
s32 *func_0204d5c4();                               /* extern */

void func_0204d584(void *arg0, s32 **arg1, s32 arg2) {
    s32 *temp_r0;

    func_02045754();
    if (arg1 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 **, 0) = (s32 *) *arg1;
    temp_r0 = func_0204d5c4();
    if (temp_r0 != NULL) {
        *temp_r0 = arg2;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) *M2C_FIELD(arg0, s32 **, 0);
}
