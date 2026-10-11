#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214a240;

void func_020221d8(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(&data_0214a240, s32 *, 8) = arg1;
}
