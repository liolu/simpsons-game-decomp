#include "m2c.h"

s32 func_020a9184();                                /* extern */
M2C_UNK func_020a930c(s32, void *);                 /* extern */
extern M2C_UNK data_0212d608;

void *func_020a90a4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212d608;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 8) = 1;
    func_020a930c(func_020a9184(), arg0);
    return arg0;
}
