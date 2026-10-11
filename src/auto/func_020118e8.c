#include "m2c.h"

M2C_UNK func_02011a40();                            /* extern */
extern M2C_UNK data_0210b638;

void *func_020118e8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b638;
    M2C_FIELD(arg0, s8 *, 0x20) = arg1;
    func_02011a40();
    return arg0;
}
