#include "engine.h"
#include "m2c.h"

s32 func_0202dfa4(s32 arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2           = *(M2C_UNK *) arg0;
    temp_r1           = M2C_FIELD(temp_r2, void **, 0x44);
    *(M2C_UNK *) arg0 = temp_r1;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x40) = 0;
    }
    return (s32) temp_r2;
}
