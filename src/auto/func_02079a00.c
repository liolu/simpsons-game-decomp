#include "m2c.h"

M2C_UNK func_02041fdc();                            /* extern */
M2C_UNK func_ov000_02160ab8(M2C_UNK **, M2C_UNK *); /* extern */
extern M2C_UNK data_021225b4;

M2C_UNK **func_02079a00(M2C_UNK **arg0) {
    M2C_UNK sp0;

    func_02041fdc();
    func_ov000_02160ab8(arg0, &sp0);
    *arg0 = &data_021225b4;
    return arg0;
}
