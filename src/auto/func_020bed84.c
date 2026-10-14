#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02151d0c;

void func_020bed84(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02151d0c, s32 *, 0) = arg0;
    M2C_FIELD(&data_02151d0c, s32 *, 4) = arg1;
}
