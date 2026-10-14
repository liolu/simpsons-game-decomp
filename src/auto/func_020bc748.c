#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e40c;

void func_020bc748(s32 arg0) {
    M2C_FIELD(&data_0214e40c, s32 *, 0x28) = arg0;
    M2C_FIELD(&data_0214e40c, s32 *, 0x2C) = arg0;
}
