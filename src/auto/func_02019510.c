#include "m2c.h"
#include "engine.h"

void func_02019510(s32 arg0, s32 arg1) {
    s32 var_r2;
    void *temp_r0;

    temp_r0 = *(M2C_UNK *)arg0;
    if (temp_r0 != NULL) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        M2C_FIELD(temp_r0, s8 *, 0x40) = (s8) arg1;
    }
}
