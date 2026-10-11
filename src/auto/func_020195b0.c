#include "m2c.h"

void func_020195b0(void **arg0, s16 arg1) {
    s32 var_r2;
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    M2C_FIELD(temp_r3, s16 *, 0x34) = 1;
    M2C_FIELD(*arg0, s16 *, 0x38) = arg1;
}
