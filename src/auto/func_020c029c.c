#include "m2c.h"

void *func_020bf980();                              /* extern */

s32 func_020c029c(void) {
    s32 (*temp_ip)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    void *temp_r0;

    temp_r0 = func_020bf980();
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_ip = M2C_FIELD(temp_r0, s32(**)(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x60);
    if (temp_ip == NULL) {
        return 0;
    }
    return temp_ip(0, 0x64, 0, 0);
}
