#include "engine.h"
#include "m2c.h"

void func_02087e7c(M2C_UNK, M2C_UNK);

void func_02087584(s32 arg0) {
    void *var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        var_r2                       = M2C_FIELD(arg0, void **, 8);
        if (var_r2 != NULL) {
            var_r2 -= 4;
        }
        M2C_FIELD(var_r2, s8 *, 0x309) = 0;
        func_02087e7c(arg0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = 4;
}
