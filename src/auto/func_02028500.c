#include "m2c.h"

M2C_UNK func_02028618();                            /* extern */
M2C_UNK func_02028940(s32);                         /* extern */
M2C_UNK func_02028ce8(s32);                         /* extern */
M2C_UNK func_020f39ac(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020284fc;

s32 func_02028500(s32 arg0) {
    func_02028618();
    func_02028ce8(arg0 + 0x22C);
    func_020f39ac(arg0 + 0x14, 0x21, 0x10, &func_020284fc);
    func_02028940(arg0);
    return arg0;
}
