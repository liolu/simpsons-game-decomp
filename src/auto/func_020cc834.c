#include "engine.h"
#include "m2c.h"

s32 func_020cc834(s32 arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 != NULL) {
        temp_r1                     = M2C_FIELD(temp_r2, void **, 0x80);
        M2C_FIELD(arg0, void **, 0) = temp_r1;
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 0x7C) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 4)       = 0;
            M2C_FIELD(temp_r2, s32 *, 0x78) = 0;
        }
    }
    return (s32) temp_r2;
}
