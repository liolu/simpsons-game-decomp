#include "m2c.h"

M2C_UNK func_0200f744(M2C_UNK **);                  /* extern */
M2C_UNK func_02018d58();                            /* extern */
extern M2C_UNK data_0210c8c4;

M2C_UNK **func_02018cd8(M2C_UNK **arg0) {
    *arg0 = &data_0210c8c4;
    func_02018d58();
    func_0200f744(arg0);
    return arg0;
}
