#include "m2c.h"

M2C_UNK func_02011558();                            /* extern */
extern M2C_UNK data_0210b648;

void *func_02011400(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b648;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg1;
    func_02011558();
    return arg0;
}
