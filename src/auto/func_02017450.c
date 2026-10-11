#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02145fe4;

void func_02017450(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(&data_02145fe4, s32 *, 4) = arg0;
}
