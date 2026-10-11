#include "m2c.h"
#include "engine.h"

s32 func_02019640(s32 arg0) {
    s32 var_r0;
    void *temp_r1;

    temp_r1 = *(M2C_UNK *)arg0;
    if (temp_r1 != NULL) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return -1;
    }
    if (M2C_FIELD(temp_r1, u16 *, 0x34) != 2) {
        return -1;
    }
    return (s32) M2C_FIELD(temp_r1, u16 *, 0x3A);
}
