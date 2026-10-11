#include "m2c.h"

M2C_UNK func_0200f750(s32);                         /* extern */
M2C_UNK func_020f3a08(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0201e9d0;

void *func_0201eb84(void *arg0) {
    func_0200f750(M2C_FIELD(arg0, s32 *, 0x464));
    M2C_FIELD(arg0, s32 *, 0x464) = 0;
    func_020f3a08(M2C_FIELD(arg0, s32 *, 0x460), 0x60, 8, &func_0201e9d0);
    M2C_FIELD(arg0, s32 *, 0x460) = 0;
    return arg0;
}
