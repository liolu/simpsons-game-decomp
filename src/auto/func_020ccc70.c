#include "engine.h"
#include "m2c.h"

void func_020ccc70(s32 arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    } else {
        M2C_FIELD(temp_r2, s32 *, 0x10) = arg1;
    }
    M2C_FIELD(arg1, void **, 0x14) = temp_r2;
    M2C_FIELD(arg1, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, void **, 0x8C) = (void *) arg1;
}
