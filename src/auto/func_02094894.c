#include "m2c.h"

extern M2C_UNK data_02101a94;

s32 func_02094894(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02101a94 + (arg0 * 8)));
}
