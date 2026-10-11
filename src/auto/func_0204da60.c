#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0204d938(s32);                         /* extern */
M2C_UNK func_0204d9b8(s32);                         /* extern */

void func_0204da60(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4 == 0) {
        return;
    }
    func_0204d9b8(temp_r4);
    func_0204d938(temp_r4 + 0xC);
    func_0200f744(temp_r4);
}
