#include "engine.h"
#include "m2c.h"

void func_0202dfc4(s32 arg0, s32 arg1) {
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg1, void **, 0x40);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x44) = (void *) M2C_FIELD(arg1, void **, 0x44);
    } else {
        *(M2C_UNK *) arg0 = (void *) M2C_FIELD(arg1, void **, 0x44);
    }
    temp_r2_2 = M2C_FIELD(arg1, void **, 0x44);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 0x40) = (void *) M2C_FIELD(arg1, void **, 0x40);
    }
}
