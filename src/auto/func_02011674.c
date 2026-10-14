#include "m2c.h"

M2C_UNK func_020117cc();                            /* extern */
extern M2C_UNK data_0210b668;

void *func_02011674(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210b668;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg1;
    func_020117cc();
    return arg0;
}
