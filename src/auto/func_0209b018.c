#include "m2c.h"

M2C_UNK func_0201e47c(s32);                         /* extern */
M2C_UNK func_020f39ac(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02091f50;

s32 func_0209b018(s32 arg0) {
    func_020f39ac(arg0 + 0x20, 3, 4, &func_02091f50);
    func_0201e47c(arg0 + 4);
    return arg0;
}
