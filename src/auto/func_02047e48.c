#include "m2c.h"

M2C_UNK func_020f386c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02047ebc;
extern M2C_UNK func_02047ec8;
extern M2C_UNK func_02047f54;
extern M2C_UNK func_02047f68;

void *func_02047e48(void *arg0) {
    func_020f386c(arg0 + 4, 4, 4, &func_02047ebc, &func_02047ec8);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_020f386c(arg0 + 0x24, 2, 0xC, &func_02047f54, &func_02047f68);
    return arg0;
}
