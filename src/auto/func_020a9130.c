#include "m2c.h"

s32 func_020a9184();                                /* extern */
M2C_UNK func_020a9468(s32, M2C_UNK **);             /* extern */
extern M2C_UNK data_0212d608;

M2C_UNK **func_020a9130(M2C_UNK **arg0) {
    *arg0 = &data_0212d608;
    func_020a9468(func_020a9184(), arg0);
    return arg0;
}
