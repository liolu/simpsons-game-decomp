#include "m2c.h"

extern M2C_UNK data_02153c08;

s32 func_020cc13c(void) {
    void *var_r0;

    var_r0 = M2C_FIELD(&data_02153c08, void **, 8);
    goto test;
body:
    var_r0 = M2C_FIELD(var_r0, void **, 0x68);
test:
    if (var_r0 == NULL) {
        return (s32) var_r0;
    }
    if (M2C_FIELD(var_r0, s32 *, 0x64) == 1) {
        return (s32) var_r0;
    }
    goto body;
}
