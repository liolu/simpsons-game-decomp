#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02155c78;

void func_020d41ec(s32 arg0) {
    M2C_FIELD(&data_02155c78, s32 *, 0x20) = arg0;
}
