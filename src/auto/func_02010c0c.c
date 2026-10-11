#include "m2c.h"

s32 func_02010ca4(void *, void *);                  /* extern */

void func_02010c0c(void *arg0, void *arg1, void *arg2) {
    void *var_r0;
    void *var_r4;

    var_r4 = arg2;
    if (var_r4 == NULL) {
        var_r4 = M2C_FIELD(arg0, void **, 8);
    }
    if (func_02010ca4(arg0, arg1) != 0) {
        return;
    }
    var_r0 = M2C_FIELD(var_r4, void **, 8);
    if (var_r0 != NULL) {
        do {
            var_r4 = var_r0;
            var_r0 = M2C_FIELD(var_r0, void **, 8);
        } while (var_r0 != NULL);
    }
    M2C_FIELD(arg1, void **, 0xC) = var_r4;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(var_r4, void **, 8) = arg1;
    if (var_r4 == M2C_FIELD(arg0, void **, 8)) {
        M2C_FIELD(arg0, void **, 8) = arg1;
    }
}
