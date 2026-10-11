#include "m2c.h"

M2C_UNK func_02068cfc();                            /* extern */
M2C_UNK func_ov000_0216f990(void *);                /* extern */
extern M2C_UNK data_0211eec8;
extern M2C_UNK data_0211eedc;
extern M2C_UNK data_0211ef9c;
extern M2C_UNK data_0211efb0;

void *func_02067ec0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211eec8;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0211eedc;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_0211ef9c;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_0211efb0;
    func_02068cfc(arg0);
    func_ov000_0216f990(arg0);
    return arg0;
}
