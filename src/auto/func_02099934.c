#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_02097404(s32);                         /* extern */

void *func_02099934(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x94);
    if (temp_r4 != 0) {
        func_02097404(temp_r4);
        func_0200f744(temp_r4);
    }
    func_0201e47c(arg0 + 4);
    return arg0;
}
