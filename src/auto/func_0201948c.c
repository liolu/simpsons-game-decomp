#include "m2c.h"
#include "engine.h"

void func_0201948c(s32 arg0) {
    s32 *temp_r2;
    s32 var_r1;

    temp_r2 = *(M2C_UNK *)arg0;
    if (temp_r2 != NULL) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        *temp_r2 = 0;
        *(M2C_UNK *)arg0 = NULL;
    }
}
