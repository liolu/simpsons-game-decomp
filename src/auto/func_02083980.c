#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02101864;

void func_02083980(s32 arg0) {
    *(M2C_UNK *) arg0 = &data_02101864;
}
