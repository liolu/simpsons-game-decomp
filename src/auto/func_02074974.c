#include "m2c.h"

M2C_UNK func_020575ac(s32);                         /* extern */
M2C_UNK func_02074a1c();                            /* extern */
M2C_UNK func_02074a74();                            /* extern */

void func_02074974(void *arg0) {
    func_020575ac(arg0 + 0x1C);
    if (M2C_FIELD(arg0, s32 *, 0x1C0) == 0) {
        func_02074a74(arg0);
        return;
    }
    func_02074a1c(arg0);
}
