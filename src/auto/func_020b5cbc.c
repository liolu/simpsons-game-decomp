#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201e52c(M2C_UNK);
M2C_UNK func_0201ea04(void);
M2C_UNK func_0201ea7c(void);
M2C_UNK func_0201f5e8(M2C_UNK, M2C_UNK);

s32 func_020b5cbc(void) {
    if (func_0201ea7c() == 0) {
        return 1;
    }
    return func_0201e52c(func_0201f5e8(func_0201ea04(), 0));
}
