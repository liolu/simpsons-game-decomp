#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020fe8e8;

s32 func_0202bccc(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_020fe8e8 + (arg1 * 4)));
}
