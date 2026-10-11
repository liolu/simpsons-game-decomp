#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_0201e47c(s32);                         /* extern */
M2C_UNK func_020f39ac(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02059708;

s32 func_0205974c(s32 arg0) {
    func_020f39ac(arg0 + 0x14, 2, 0x18, &func_02059708);
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}
