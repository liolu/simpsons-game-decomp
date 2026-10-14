#include "m2c.h"

void func_020195dc(void **arg0, s16 arg1, s16 arg2) {
    s32 var_r3;
    void *temp_ip;

    temp_ip = *arg0;
    if (temp_ip != NULL) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (var_r3 == 0) {
        return;
    }
    M2C_FIELD(temp_ip, s16 *, 0x34) = 2;
    M2C_FIELD(*arg0, s16 *, 0x38)   = arg1;
    M2C_FIELD(*arg0, s16 *, 0x3A)   = arg2;
}
