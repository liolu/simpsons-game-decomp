#include "m2c.h"

M2C_UNK func_020f386c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02013074;
extern M2C_UNK func_020130e0;

void *func_02013090(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020f386c(arg0 + 0xC, 2, 0x18, &func_02013074, &func_020130e0);
    return arg0;
}
