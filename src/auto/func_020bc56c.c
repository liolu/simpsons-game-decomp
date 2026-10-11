#include "m2c.h"
#include "engine.h"

void func_020b95d0(M2C_UNK);
M2C_UNK func_020baa7c(M2C_UNK);

extern M2C_UNK data_02130368;

s32 func_020bc56c(s32 arg0) {
    if (arg0 == 0) {
        func_020b95d0((s32) &data_02130368);
        return -1;
    }
    if ((s32) M2C_FIELD(arg0, s8 *, 1) < 2) {
        return 0;
    }
    return func_020baa7c(M2C_FIELD(arg0, s32 *, 4));
}
