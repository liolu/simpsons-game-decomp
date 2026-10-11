#include "m2c.h"
#include "engine.h"

extern s32 data_02153bf8;

s32 func_020cc8e0(void) {
    s32 temp_r0;

    temp_r0 = data_02153bf8 + 1;
    data_02153bf8 = temp_r0;
    return temp_r0;
}
