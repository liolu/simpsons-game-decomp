#include "m2c.h"

M2C_UNK func_0200fd8c();                            /* extern */
extern M2C_UNK data_0210b328;

void *func_0200fc34(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b328;
    M2C_FIELD(arg0, s8 *, 0x20) = arg1;
    func_0200fd8c();
    return arg0;
}
