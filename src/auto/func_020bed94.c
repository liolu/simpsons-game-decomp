#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02151d04;

void func_020bed94(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02151d04, s32 *, 0) = arg0;
    M2C_FIELD(&data_02151d04, s32 *, 4) = arg1;
}
