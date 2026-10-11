#include "m2c.h"

M2C_UNK func_0200f744(M2C_UNK **);                  /* extern */
M2C_UNK func_020116e0();                            /* extern */
extern M2C_UNK data_0210b668;

M2C_UNK **func_020116b8(M2C_UNK **arg0) {
    *arg0 = &data_0210b668;
    func_020116e0();
    func_0200f744(arg0);
    return arg0;
}
