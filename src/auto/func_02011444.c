#include "m2c.h"

M2C_UNK func_0200f744(M2C_UNK **);                  /* extern */
M2C_UNK func_0201146c();                            /* extern */
extern M2C_UNK data_0210b648;

M2C_UNK **func_02011444(M2C_UNK **arg0) {
    *arg0 = &data_0210b648;
    func_0201146c();
    func_0200f744(arg0);
    return arg0;
}
