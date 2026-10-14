#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02157160;

void func_020deeb4(s32 arg0) {
    M2C_FIELD(&data_02157160, s16 *, 6) = (s16) arg0;
}
