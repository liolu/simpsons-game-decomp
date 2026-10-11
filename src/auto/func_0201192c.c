#include "m2c.h"

M2C_UNK func_0200f744(M2C_UNK **);                  /* extern */
M2C_UNK func_02011954();                            /* extern */
extern M2C_UNK data_0210b638;

M2C_UNK **func_0201192c(M2C_UNK **arg0) {
    *arg0 = &data_0210b638;
    func_02011954();
    func_0200f744(arg0);
    return arg0;
}
