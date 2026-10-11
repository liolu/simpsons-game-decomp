#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_02018cb8(s32);                         /* extern */
M2C_UNK func_0201c2c8(void *);                      /* extern */

void *func_0201c28c(void *arg0) {
    func_02018cb8(arg0 + 0xAC);
    func_0200f744(M2C_FIELD(arg0, s32 *, 0xA4));
    func_0201c2c8(arg0 + 0xA0);
    return arg0;
}
