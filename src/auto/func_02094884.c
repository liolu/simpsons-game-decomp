#include "m2c.h"

extern M2C_UNK data_02101a90;

s32 func_02094884(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02101a90 + (arg0 * 8)));
}
