#include "m2c.h"

M2C_UNK func_02019430(M2C_UNK);                     /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_020f39ac(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0212d4e0;
extern M2C_UNK data_0212d4fc;
extern M2C_UNK func_02091f50;

void *func_020a7c54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_0212d4e0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0212d4fc;
    *(s32 *) 0x04000000 &= ~0xE000;
    func_02019430(0);
    func_020f39ac(arg0 + 0x20, 4, 4, &func_02091f50);
    func_0201e47c(arg0 + 4);
    return arg0;
}
