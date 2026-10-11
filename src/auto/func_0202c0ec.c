#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_02011d14(s32);                         /* extern */
M2C_UNK func_0202c18c(void *);                      /* extern */

void func_0202c0ec(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_02011d14(temp_r4);
            func_0200f744(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
    func_0202c18c(arg0);
}
