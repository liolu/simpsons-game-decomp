#include "m2c.h"

M2C_UNK func_02028b3c(void *, s32);                 /* extern */
M2C_UNK func_020f386c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0202845c;
extern M2C_UNK func_020284fc;

void *func_02028494(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_020f386c(arg0 + 0x14, 0x21, 0x10, &func_0202845c, &func_020284fc);
    M2C_FIELD(arg0, s8 *, 0x224) = 0;
    M2C_FIELD(arg0, s32 *, 0x228) = arg1;
    func_02028b3c(arg0 + 0x22C, arg1);
    return arg0;
}
