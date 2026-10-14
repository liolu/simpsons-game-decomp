#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021227d8;

s32 func_0207ac08(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_021227d8 + (arg0 * 4)));
}
