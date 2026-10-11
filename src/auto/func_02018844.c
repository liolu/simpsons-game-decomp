#include "m2c.h"

M2C_UNK func_02018a20();                            /* extern */
extern M2C_UNK data_0210c8e0;

void *func_02018844(void *arg0) {
    func_02018a20();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c8e0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    return arg0;
}
