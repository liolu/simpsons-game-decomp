#include "m2c.h"

M2C_UNK func_0200f744(s32);                         /* extern */
M2C_UNK func_02082604(s32);                         /* extern */
M2C_UNK func_020f39ac(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0207d574;

s32 func_02089d84(s32 arg0) {
    func_020f39ac(arg0 + 8, 2, 8, &func_0207d574);
    func_02082604(arg0);
    func_0200f744(arg0);
    return arg0;
}
