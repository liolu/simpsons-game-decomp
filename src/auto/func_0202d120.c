#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0202d0dc(s32);                         /* extern */

void *func_0202d120(void *arg0) {
    func_0202d0dc(arg0 + 0x1C);
    func_0200f744(M2C_FIELD(arg0, s32 *, 0x18));
    func_0200f744(M2C_FIELD(arg0, s32 *, 0x14));
    func_0200f744(M2C_FIELD(arg0, s32 *, 0x10));
    return arg0;
}
